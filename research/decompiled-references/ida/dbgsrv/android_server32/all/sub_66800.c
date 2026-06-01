/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66800
// Address: 0x00066800

//----- (00066800) --------------------------------------------------------
int __fastcall sub_66800(_DWORD *a1, _DWORD *a2, int *a3, int a4, int a5)
{
  _DWORD *v6; // r7
  char *v7; // r3
  void **v8; // r2
  _DWORD *v9; // r0
  unsigned int v10; // r4
  int v11; // r6
  void *v12; // r0
  char *v13; // r7
  char *v14; // r4
  void **v15; // r6
  int *v16; // r6
  int v17; // r4
  int v18; // r0
  int *v19; // r2
  int v20; // r1
  _DWORD *v21; // r7
  int v22; // r2
  int v23; // r0
  void *v24; // r0
  int v25; // r4
  char v26; // r1
  char v27; // r0
  int v28; // r6
  int v29; // r1
  int v30; // r0
  int (__fastcall *v31)(_DWORD *, int, int, int, int, int); // r4
  int v32; // r0
  int v34; // [sp+4h] [bp-3Ch]
  int v35; // [sp+4h] [bp-3Ch]
  int v36; // [sp+8h] [bp-38h]
  _DWORD *v37; // [sp+10h] [bp-30h]
  int *v40; // [sp+1Ch] [bp-24h]
  void **v41; // [sp+20h] [bp-20h]
  _DWORD **v42; // [sp+20h] [bp-20h]
  _DWORD *v43; // [sp+24h] [bp-1Ch]
  unsigned int v44; // [sp+28h] [bp-18h]
  int v45; // [sp+28h] [bp-18h]
  unsigned int v46; // [sp+2Ch] [bp-14h]
  int v47; // [sp+2Ch] [bp-14h]
  int *v48; // [sp+2Ch] [bp-14h]
  int v50; // [sp+34h] [bp-Ch] BYREF
  int v51; // [sp+38h] [bp-8h] BYREF

  v6 = a1;
  if ( !a1[19] )
  {
    v7 = (char *)a1[59];
    v8 = (void **)(a1 + 59);
    if ( v7 )
    {
      v9 = a1 + 60;
      v44 = v6[60];
      if ( v44 )
      {
        v37 = v6 + 60;
        v10 = 1;
        v11 = 12;
        v41 = (void **)(v6 + 59);
        while ( 1 )
        {
          v12 = *(void **)&v7[v11 - 8];
          v13 = &v7[v11 - 8];
          if ( v12 )
          {
            v46 = v10;
            v14 = v7;
            *(_DWORD *)&v7[v11 - 4] = 0;
            qfree(v12);
            *(_DWORD *)v13 = 0;
            *(_DWORD *)&v14[v11] = 0;
            v8 = v41;
            v10 = v46;
          }
          if ( v10 >= v44 )
            break;
          v11 += 36;
          ++v10;
          v7 = (char *)*v8;
        }
        v7 = (char *)*v8;
        v6 = a1;
        v15 = v8;
        v9 = v37;
      }
      else
      {
        v15 = (void **)(v6 + 59);
      }
      *v9 = 0;
      qfree(v7);
      *v15 = nullptr;
      v6[61] = 0;
    }
  }
  v16 = &a3[9 * a4];
  v17 = 0;
  if ( 36 * a4 )
  {
    v43 = v6 + 60;
    v42 = (_DWORD **)(v6 + 59);
    v40 = v6 + 54;
    v17 = 0;
    while ( 1 )
    {
      if ( !*((_BYTE *)a3 + 24) )
      {
        v18 = a3[4];
        v19 = v40;
        if ( v18 != 4 )
          v19 = a3 + 5;
        v51 = *v19;
        v50 = *a3;
        if ( v18 == 4 )
          (*(void (__fastcall **)(_DWORD *, int *, int *, _DWORD, int, int))(*v6 + 272))(
            v6,
            &v50,
            &v51,
            *(_DWORD *)(*v6 + 272),
            v34,
            v36);
        v47 = v17;
        v20 = 9 * *v43;
        v21 = *v42;
        v22 = (int)&(*v42)[v20];
        if ( v20 * 4 )
        {
          v23 = 36 * *v43;
          while ( *a3 != *v21 || a3[4] != v21[4] )
          {
            v23 -= 36;
            v21 += 9;
            if ( !v23 )
              goto LABEL_30;
          }
        }
        if ( v21 != (_DWORD *)v22 && v21[8] == a3[8] )
        {
          v24 = (void *)v21[1];
          if ( v24 )
          {
            v21[2] = 0;
            qfree(v24);
            v21[3] = 0;
            v21[1] = 0;
            v22 = (int)&(*v42)[9 * *v43];
          }
          memmove(v21, v21 + 9, -36 - (_DWORD)v21 + v22);
          --*v43;
        }
LABEL_30:
        v6 = a1;
        v25 = (*(int (__fastcall **)(_DWORD *, int *, int, int, int))(*a1 + 156))(a1, a3 + 1, a3[4], v50, v51);
        v34 = v51;
        v36 = v25;
        sub_64B30((int)a1, "dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n");
        v26 = 10;
        v27 = 8;
        if ( v25 == -2 )
        {
          v27 = 7;
LABEL_36:
          *((_BYTE *)a3 + 24) = v27;
          v17 = v47;
          goto LABEL_37;
        }
        if ( v25 != 2 )
        {
          if ( v25 != 1 )
            goto LABEL_36;
          v26 = 0;
        }
        *((_BYTE *)a3 + 24) = v26;
        v17 = v47 + 1;
      }
LABEL_37:
      a3 += 9;
      if ( a3 == v16 )
      {
        a3 = v16;
        break;
      }
    }
  }
  v48 = &v16[9 * a5];
  if ( a3 != v48 )
  {
    v45 = (int)(v6 + 59);
    do
    {
      v28 = v17;
      *((_BYTE *)a3 + 24) = 0;
      v29 = a3[4];
      v30 = 2;
      if ( v29 != 4 )
        v30 = 5;
      v31 = *(int (__fastcall **)(_DWORD *, int, int, int, int, int))(*v6 + 160);
      v6 = a1;
      v35 = v31(a1, v29, *a3, a3[1], a3[v30], v36);
      sub_64B30((int)a1, "dbg_del_bpt(type=%d, ea=%a) => %d\n");
      if ( v35 < 1 )
      {
        *((_BYTE *)a3 + 24) = 8;
        v17 = v28;
      }
      else
      {
        v32 = a3[4];
        v17 = v28 + 1;
        if ( v32 == 8 || v32 == 4 )
          sub_66A78(v45, a3);
      }
      a3 += 9;
    }
    while ( v48 != a3 );
  }
  if ( a2 )
    *a2 = v17;
  return 1;
}
// 668FE: variable 'v34' is possibly undefined
// 668FE: variable 'v36' is possibly undefined
