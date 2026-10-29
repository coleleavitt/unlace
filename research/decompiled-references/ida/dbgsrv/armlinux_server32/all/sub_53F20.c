/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53F20
// Address: 0x00053F20

//----- (00053F20) --------------------------------------------------------
int __fastcall sub_53F20(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v8; // r5
  int v9; // r6
  int v10; // r11
  unsigned int v11; // r10
  unsigned int v12; // r7
  int v13; // r2
  int v14; // r3
  __int64 v15; // kr00_8
  _DWORD *v16; // r5
  _DWORD *v17; // r1
  int v18; // r0
  int v19; // r3
  bool v20; // zf
  int v21; // r4
  int v22; // r9
  int j; // r4
  int v24; // r5
  int v25; // r3
  int v26; // r1
  int v27; // r6
  int v28; // r5
  size_t v30; // r6
  int v31; // r3
  char *v32; // r1
  int v33; // r2
  char *v34; // r3
  int v35; // r0
  int (*v36)(); // r3
  void *v37; // r0
  char *v38; // r0
  int v39; // r10
  int i; // r7
  char *v41; // r3
  void *v42; // r0
  int v43; // [sp+8h] [bp-3Ch]
  int v44; // [sp+Ch] [bp-38h]
  void *ptr; // [sp+10h] [bp-34h]
  int v46; // [sp+14h] [bp-30h]
  int v47; // [sp+14h] [bp-30h]
  int v48; // [sp+18h] [bp-2Ch]
  char v49; // [sp+1Ch] [bp-28h]
  int v50; // [sp+20h] [bp-24h]
  int v51; // [sp+24h] [bp-20h]
  unsigned int v53; // [sp+34h] [bp-10h] BYREF
  int v54; // [sp+38h] [bp-Ch] BYREF

  if ( a1[16] == a1[20] )
  {
    v38 = (char *)a1[72];
    if ( v38 )
    {
      v39 = a1[73];
      if ( v39 )
      {
        for ( i = 0; i != v39; ++i )
        {
          v41 = &v38[36 * i];
          v42 = *((void **)v41 + 1);
          if ( v42 )
          {
            *((_DWORD *)v41 + 2) = 0;
            sub_77F70(v42);
          }
          v38 = (char *)a1[72];
        }
      }
      a1[73] = 0;
      sub_77F70(v38);
      a1[72] = 0;
      a1[74] = 0;
    }
  }
  v8 = 36 * a4;
  v46 = a3 + v8;
  if ( a3 == a3 + v8 )
  {
    v21 = a3 + v8;
    v10 = 0;
  }
  else
  {
    v9 = a3 + 4;
    v10 = 0;
    v11 = (954437177 * ((unsigned int)(v8 - 36) >> 2)) & 0x3FFFFFFF;
    v12 = a3 + 40 + 4 * (v11 - 954437176 * ((unsigned int)(v8 - 36) >> 2));
    do
    {
      if ( !*(_BYTE *)(v9 + 20) )
      {
        v13 = *(_DWORD *)(v9 + 12);
        v14 = *(_DWORD *)(v9 - 4);
        if ( v13 == 4 )
        {
          v35 = *a1;
          v53 = a1[64];
          v54 = v14;
          v36 = *(int (**)())(v35 + 272);
          if ( v36 != nullsub_8 )
          {
            ((void (__fastcall *)(_DWORD *, int *, unsigned int *))v36)(a1, &v54, &v53);
            v13 = *(_DWORD *)(v9 + 12);
          }
        }
        else
        {
          v53 = *(_DWORD *)(v9 + 16);
          v54 = v14;
        }
        v15 = *((_QWORD *)a1 + 36);
        v16 = (_DWORD *)a1[72];
        v17 = (_DWORD *)(v15 + 36 * HIDWORD(v15));
        if ( (_DWORD *)v15 != v17 )
        {
          while ( *(_DWORD *)(v9 - 4) != *v16 || v16[4] != v13 )
          {
            v16 += 9;
            if ( v17 == v16 )
              goto LABEL_13;
          }
          if ( v16[8] == *(_DWORD *)(v9 + 28) )
          {
            if ( v16[1] )
            {
              v37 = (void *)v16[1];
              v16[2] = 0;
              sub_77F70(v37);
              v15 = *((_QWORD *)a1 + 36);
            }
            memmove(v16, v16 + 9, 36 * (954437177 * (((int)v15 + 36 * HIDWORD(v15) - (int)v16) >> 2) - 1));
            --a1[73];
          }
        }
LABEL_13:
        v18 = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 156))(a1, v9);
        sub_53ED4(
          (int)a1,
          "dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n",
          *(_DWORD *)(v9 + 12),
          COERCE_DOUBLE(__PAIR64__(v18, v53)),
          v43,
          v18);
        if ( (unsigned int)(v44 + 2) <= 4 )
        {
          v19 = dword_9DC30[v44 + 2];
          v20 = v19 == 10;
          if ( v19 != 10 )
            v20 = v19 == 0;
          *(_BYTE *)(v9 + 20) = v19;
          if ( v20 )
            ++v10;
        }
        else
        {
          *(_BYTE *)(v9 + 20) = 8;
        }
      }
      v9 += 36;
    }
    while ( v9 != v12 );
    v21 = a3 + 36 * (v11 + 1);
  }
  v22 = v46 + 36 * a5;
  if ( v22 != v21 )
  {
    for ( j = v21 + 36; ; j = v25 )
    {
      v26 = *(_DWORD *)(j - 20);
      *(_BYTE *)(j - 12) = 0;
      if ( v26 == 4 )
        v27 = *(_DWORD *)(j - 28);
      else
        v27 = *(_DWORD *)(j - 16);
      v28 = (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 160))(
              a1,
              v26,
              *(_DWORD *)(j - 36),
              *(_DWORD *)(j - 32),
              v27);
      sub_53ED4((int)a1, "dbg_del_bpt(type=%d, ea=%a) => %d\n", *(_DWORD *)(j - 20), *(_DWORD *)(j - 36), v28);
      if ( v28 > 0 )
      {
        v24 = *(_DWORD *)(j - 20);
        ++v10;
        if ( ((v24 - 4) & 0xFFFFFFFB) == 0 )
        {
          v30 = *(_DWORD *)(j - 28);
          v47 = *(_DWORD *)(j - 36);
          if ( v30 )
          {
            ptr = sub_77FEC(v30);
            memcpy(ptr, *(const void **)(j - 32), v30);
            v24 = *(_DWORD *)(j - 20);
          }
          else
          {
            ptr = nullptr;
          }
          v31 = a1[73];
          v49 = *(_BYTE *)(j - 12);
          v48 = *(_DWORD *)(j - 16);
          v50 = *(_DWORD *)(j - 8);
          v51 = *(_DWORD *)(j - 4);
          v32 = (char *)a1[72];
          if ( (unsigned int)(v31 + 1) > a1[74] )
          {
            v32 = (char *)sub_78018((int)(a1 + 72), v32, v31 + 1, 0x24u);
            v31 = a1[73];
            a1[72] = v32;
          }
          v33 = 9 * v31;
          v34 = &v32[36 * v31];
          *(_DWORD *)&v32[4 * v33] = v47;
          *((_DWORD *)v34 + 3) = v30;
          *((_DWORD *)v34 + 4) = v24;
          *((_DWORD *)v34 + 1) = ptr;
          *((_DWORD *)v34 + 2) = v30;
          *((_DWORD *)v34 + 5) = v48;
          v34[24] = v49;
          *((_DWORD *)v34 + 7) = v50;
          *((_DWORD *)v34 + 8) = v51;
          ++a1[73];
        }
        v25 = j + 36;
        if ( v22 == j )
          break;
      }
      else
      {
        *(_BYTE *)(j - 12) = 8;
        v25 = j + 36;
        if ( v22 == j )
          break;
      }
    }
  }
  if ( a2 )
    *a2 = v10;
  return 1;
}
// 5400E: variable 'v43' is possibly undefined
// 54014: variable 'v44' is possibly undefined
// 52F4C: using guessed type int nullsub_8();
// 9DC30: using guessed type int dword_9DC30[4];
