/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B884
// Address: 0x0005B884

//----- (0005B884) --------------------------------------------------------
int __fastcall sub_5B884(int a1, int a2, unsigned int *a3)
{
  signed int v4; // r4
  char *v5; // r5
  int v6; // r1
  double v7; // r2
  const char *v8; // r6
  _BYTE *v9; // r1
  _BYTE *v10; // r2
  _DWORD *v12; // r1
  size_t v13; // r0
  size_t v14; // r2
  unsigned int v15; // r1
  void *v16; // r0
  int v17; // r0
  unsigned __int8 *v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r6
  unsigned int v21; // r1
  void **v22; // r4
  char *v23; // r0
  const char *v24; // r1
  size_t v25; // r6
  const void *v26; // r2
  unsigned int v27; // r3
  void *v28; // r0
  int v29; // r0
  unsigned int v30; // r4
  _BYTE *v31; // r0
  _BYTE *v32; // r0
  char *v33; // r4
  size_t v34; // r0
  const char *v36; // [sp+4h] [bp-5Ch]
  int *v37; // [sp+Ch] [bp-54h]
  unsigned int v40; // [sp+1Ch] [bp-44h]
  size_t v41; // [sp+20h] [bp-40h]
  signed int v42; // [sp+28h] [bp-38h]
  int v43; // [sp+2Ch] [bp-34h]
  void **v44; // [sp+30h] [bp-30h]
  _DWORD *v45; // [sp+30h] [bp-30h]
  int v46; // [sp+34h] [bp-2Ch]
  char *s; // [sp+38h] [bp-28h] BYREF
  int v48; // [sp+3Ch] [bp-24h]
  int v49; // [sp+40h] [bp-20h]
  unsigned int v50; // [sp+44h] [bp-1Ch] BYREF
  void *v51[2]; // [sp+48h] [bp-18h] BYREF
  int v52; // [sp+50h] [bp-10h]
  _BYTE v53[5]; // [sp+54h] [bp-Ch] BYREF
  _BYTE v54[3]; // [sp+59h] [bp-7h] BYREF
  int v55; // [sp+5Ch] [bp-4h]

  v37 = *(int **)(loc_5BB58 + 374934);
  v55 = *v37;
  v51[1] = nullptr;
  v51[0] = nullptr;
  v52 = 0;
  v4 = unpack_dd(a3, a3[1]);
  sub_5BB70((int *)v51, v4);
  v42 = v4;
  if ( v4 < 1 )
    goto LABEL_39;
  v5 = (char *)v51[0];
  v46 = 0;
  v6 = 0;
  do
  {
    v43 = v6;
    v5[248] = 0;
    v46 = v46 + unpack_dq(a3, a3[1]) - 1;
    *(_DWORD *)v5 = v46;
    v8 = (const char *)*a3;
    v9 = (_BYTE *)*a3;
    do
    {
      if ( (unsigned int)v9 >= a3[1] )
      {
        v12 = v5 + 4;
LABEL_12:
        *((_DWORD *)v5 + 2) = 0;
        goto LABEL_13;
      }
      v10 = v9 + 1;
    }
    while ( *v9++ != 0 );
    *a3 = (unsigned int)v10;
    v12 = v5 + 4;
    if ( !v8 )
      goto LABEL_12;
    v44 = (void **)(v5 + 4);
    v13 = strlen(v8);
    if ( !v13 )
    {
      v12 = v5 + 4;
      goto LABEL_12;
    }
    v14 = v13;
    v15 = v13 + 1;
    if ( *((_DWORD *)v5 + 3) >= v13 + 1 )
    {
      v16 = *v44;
    }
    else
    {
      v41 = v13;
      v40 = v13 + 1;
      v16 = qvector_reserve((int)v44, *v44, v15, 1u);
      *v44 = v16;
      v14 = v41;
      v15 = v40;
    }
    *((_DWORD *)v5 + 2) = v15;
    v24 = v8;
    v25 = v14;
    memmove(v16, v24, v14);
    *(_BYTE *)(*((_DWORD *)v5 + 1) + v25) = 0;
    v12 = v5 + 4;
LABEL_13:
    v45 = v12;
    if ( v12[1] >= 2u )
    {
      *((_DWORD *)v5 + 63) = 0;
      v17 = unpack_dd(a3, a3[1]);
      *((_DWORD *)v5 + 4) = v17;
      if ( v17 != 4 )
        *((_DWORD *)v5 + 63) = unpack_dd(a3, a3[1]);
      v18 = (unsigned __int8 *)*a3;
      v19 = a3[1];
      if ( *a3 < v19 )
      {
        v20 = *v18;
        *a3 = (unsigned int)(v18 + 1);
        if ( v20 )
        {
          v21 = *((_DWORD *)v5 + 6);
          v22 = (void **)(v5 + 20);
          if ( v21 >= v20 )
          {
            if ( v21 != v20 )
            {
              LOBYTE(s) = 0;
              sub_370F6((void **)v5 + 5, v20, &s);
            }
          }
          else
          {
            if ( *((_DWORD *)v5 + 7) >= v20 )
            {
              v23 = (char *)*v22;
            }
            else
            {
              v23 = (char *)qvector_reserve((int)(v5 + 20), *v22, v20, 1u);
              *((_DWORD *)v5 + 5) = v23;
              v21 = *((_DWORD *)v5 + 6);
            }
            memset(&v23[v21], 0, v20 - v21);
            *((_DWORD *)v5 + 6) = v20;
          }
          v26 = (const void *)*a3;
          v19 = a3[1];
          v27 = *a3 + v20;
          if ( v27 >= *a3 && v27 <= v19 )
          {
            v28 = *v22;
            *a3 = v27;
            qmemcpy(v28, v26, v20);
            v19 = a3[1];
          }
        }
      }
      v29 = unpack_dq(a3, v19);
      *((_DWORD *)v5 + 10) = v29 - 1;
      if ( v29 )
        sub_696E4((_DWORD *)v5 + 8, a3);
    }
    if ( *(_BYTE *)(a1 + 96) )
    {
      if ( v45[1] )
        LODWORD(v7) = *v45;
      else
        LODWORD(v7) = &byte_B3CBE;
      sub_1BBA0((int)"update_lowcnd(ea=%a cnd=%s)\n", v7, v36);
    }
    v5 += 256;
    v6 = v43 + 1;
  }
  while ( v43 + 1 < v42 );
LABEL_39:
  v48 = 0;
  s = nullptr;
  v49 = 0;
  v30 = (*(int (__fastcall **)(_DWORD, unsigned int *, void *, signed int, char **))(**(_DWORD **)(a1 + 244) + 176))(
          *(_DWORD *)(a1 + 244),
          &v50,
          v51[0],
          v42,
          &s);
  if ( *(_BYTE *)(a1 + 96) )
    sub_1BBA0((int)"  update_lowcnds => %d\n", v30);
  v31 = pack_dd(v53, (unsigned int)v54, v30);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a2, v53, v31 - v53);
  v32 = pack_dd(v53, (unsigned int)v54, v50);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a2, v53, v32 - v53);
  if ( v30 != 1 )
  {
    if ( v48 )
    {
      v33 = s;
      if ( s )
      {
LABEL_47:
        v34 = strlen(v33);
        ((void (__fastcall *)(int, char *, size_t))loc_30B84)(a2, v33, v34 + 1);
        goto LABEL_48;
      }
    }
    else
    {
      v33 = &byte_B3CBE;
      if ( &byte_B3CBE )
        goto LABEL_47;
    }
    v33 = &byte_A0742;
    goto LABEL_47;
  }
LABEL_48:
  if ( s )
  {
    v48 = 0;
    qfree(s);
    v49 = 0;
    s = nullptr;
  }
  if ( v51[0] )
  {
    sub_63666((int *)v51, 0);
    qfree(v51[0]);
    v52 = 0;
    v51[0] = nullptr;
  }
  return *v37 - v55;
}
// 5BA24: variable 'v7' is possibly undefined
// 5BA24: variable 'v36' is possibly undefined
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
