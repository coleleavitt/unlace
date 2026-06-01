/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64AA0
// Address: 0x00064AA0

//----- (00064AA0) --------------------------------------------------------
int __fastcall sub_64AA0(int (__fastcall **a1)(int a1, int a2, int a3), _DWORD *a2, int a3)
{
  unsigned int v5; // r4
  int v7; // r6
  int v8; // r4
  int v9; // r3
  int (__fastcall *v10)(int, int, int); // r2
  int (__fastcall *v11)(int (__fastcall **)(int, int, int), int *, int *, int, _DWORD, _DWORD); // r6
  void *v12; // r0
  unsigned int v13; // r8
  int v14; // r4
  char *v15; // r3
  int v16; // r5
  int v17; // r2
  char *v18; // r3
  void *v19; // r0
  char *v21; // r0
  unsigned int v22; // r9
  int v23; // r7
  int *v24; // r6
  int v25; // r1
  signed int v26; // r3
  void *v27; // r0
  const void *v28; // r1
  int v29; // r9
  int (__fastcall **v30)(int, int, int); // r0
  int (__fastcall *v31)(int, int, int); // r5
  double v32; // r2
  size_t n; // [sp+14h] [bp-68h]
  int v34; // [sp+1Ch] [bp-60h] BYREF
  int (__fastcall **v35[2])(int, int, int); // [sp+20h] [bp-5Ch] BYREF
  void *v36; // [sp+28h] [bp-54h] BYREF
  unsigned int v37; // [sp+2Ch] [bp-50h]
  int v38; // [sp+30h] [bp-4Ch]
  int v39; // [sp+34h] [bp-48h] BYREF
  void *ptr; // [sp+38h] [bp-44h]
  int v41; // [sp+3Ch] [bp-40h]
  int v42; // [sp+40h] [bp-3Ch]
  int v43; // [sp+44h] [bp-38h]
  int v44; // [sp+48h] [bp-34h]
  char v45; // [sp+4Ch] [bp-30h]
  int v46; // [sp+50h] [bp-2Ch]
  int v47; // [sp+54h] [bp-28h]
  int v48; // [sp+58h] [bp-24h] BYREF
  __int64 src; // [sp+60h] [bp-1Ch]
  int v50; // [sp+68h] [bp-14h]
  int v51; // [sp+6Ch] [bp-10h]

  v5 = (unsigned int)a1[87];
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  if ( !v5 )
    v5 = (unsigned int)a1[99];
  if ( v5 )
  {
    v50 = 0;
    v51 = 0;
    v48 = -2;
    src = -1;
    v21 = (char *)sub_78018((int)&v36, nullptr, v5, 0x18u);
    v22 = v37;
    v36 = v21;
    if ( v37 < v5 )
    {
      v23 = 24 * v37;
      while ( 1 )
      {
        *(_DWORD *)&v21[v23] = -2;
        v24 = (int *)&v21[v23];
        v24[2] = 0;
        v24[3] = 0;
        v24[4] = 0;
        v24[5] = 0;
        if ( &v21[v23] != (char *)&v48 )
        {
          v25 = v48;
          if ( v48 < -1 )
          {
            *((_QWORD *)v24 + 1) = src;
          }
          else
          {
            v24[2] = 0;
            v24[3] = 0;
            v26 = HIDWORD(src);
            v24[4] = 0;
            n = v26;
            if ( v26 )
            {
              v27 = sub_77FEC(v26);
              v24[2] = (int)v27;
              v28 = (const void *)src;
              v24[4] = n;
              memcpy(v27, v28, n);
              v25 = v48;
              v24[3] = n;
            }
          }
          *v24 = v25;
        }
        ++v22;
        v23 += 24;
        if ( v22 == v5 )
          break;
        v21 = (char *)v36;
      }
    }
    v37 = v5;
    if ( v48 >= -1 && (_DWORD)src )
    {
      HIDWORD(src) = 0;
      sub_77F70((void *)src);
    }
  }
  v7 = (*((int (__fastcall **)(_DWORD *, _DWORD, int))*a1 + 28))(a1, a2[1], 1);
  if ( v7 > 0 )
  {
    v35[1] = a1;
    v35[0] = (int (__fastcall **)(int, int, int))&off_D10D0;
    sub_5723C();
    v8 = sub_64298(a3, (int)v36, v35, 0);
    sub_57240();
    v9 = *(_DWORD *)(a3 + 8);
    if ( v8 == -1 )
    {
      v8 = *(unsigned __int16 *)(a3 + 14) + v9;
      if ( (*((_DWORD *)v36 + 6 * (_DWORD)a1[213] + 2) & 0x20) != 0 )
        v8 |= 1u;
      if ( (v8 & 0xFFFFFFFE) != v9 )
      {
LABEL_7:
        v10 = *a1;
        ptr = nullptr;
        v41 = 0;
        v42 = 0;
        v44 = 0;
        v45 = 0;
        v47 = 0;
        v11 = *((int (__fastcall **)(int (__fastcall **)(int, int, int), int *, int *, int, _DWORD, _DWORD))v10 + 41);
        v39 = v8;
        v43 = 4;
        v46 = -1;
        v7 = v11(a1, &v34, &v39, 1, 0, 0);
        if ( v7 != 1 )
          goto LABEL_8;
        if ( !v34 )
          goto LABEL_41;
        v29 = sub_54678((int)a1, (int)a2);
        v30 = a1;
        v31 = *a1;
        v39 &= ~1u;
        v7 = (*((int (__fastcall **)(int (__fastcall **)(int, int, int), int *, int *, _DWORD, int, _DWORD))v31 + 41))(
               v30,
               &v34,
               &v39,
               0,
               1,
               0);
        if ( v7 == 1 && (HIDWORD(v32) = v34) != 0 )
        {
          if ( v29 == 1 )
          {
            sub_6E52C(a2, 6);
            v7 = 1;
          }
          else
          {
            v7 = v29;
          }
        }
        else
        {
          sub_171B0((int)"%a: failed to remove single step bpt?!\n", v32);
          if ( v7 == 1 )
LABEL_41:
            v7 = -1;
        }
LABEL_8:
        if ( ptr )
        {
          v41 = 0;
          sub_77F70(ptr);
        }
        goto LABEL_10;
      }
    }
    else if ( (v8 & 0xFFFFFFFE) != v9 )
    {
      goto LABEL_7;
    }
    v7 = -1;
  }
LABEL_10:
  v12 = v36;
  if ( v36 )
  {
    v13 = v37;
    if ( v37 )
    {
      v14 = 0;
      v15 = (char *)v36;
      v16 = 0;
      while ( 1 )
      {
        v17 = *(_DWORD *)&v15[v14];
        v18 = &v15[v14];
        if ( v17 >= -1 )
        {
          v19 = *((void **)v18 + 2);
          if ( v19 )
          {
            *((_DWORD *)v18 + 3) = 0;
            sub_77F70(v19);
          }
        }
        ++v16;
        v14 += 24;
        if ( v13 == v16 )
          break;
        v15 = (char *)v36;
      }
      v12 = v36;
    }
    v37 = 0;
    sub_77F70(v12);
  }
  return v7;
}
// 64D04: variable 'v32' is possibly undefined
// D10D0: using guessed type _UNKNOWN *off_D10D0;
