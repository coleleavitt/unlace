/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CEB0
// Address: 0x000000000045CEB0

//----- (000000000045CEB0) ----------------------------------------------------
__int64 __fastcall sub_45CEB0(void **a1, _DWORD *a2, __int64 *a3, int a4, int a5)
{
  __int64 *v9; // x28
  __int64 *v10; // x26
  int v11; // w21
  int v12; // w2
  __int64 v13; // x0
  void *v14; // x5
  _DWORD *v15; // x3
  _DWORD *v16; // x19
  _DWORD *v17; // x1
  unsigned int v18; // w19
  double v19; // d0
  int v20; // w0
  bool v21; // zf
  __int64 *v22; // x19
  __int64 *v23; // x22
  void **v24; // x25
  int v25; // w23
  __int64 v26; // x1
  __int64 v27; // x4
  int v28; // w23
  double v29; // d0
  size_t v31; // x26
  void *v32; // x4
  char *v33; // x0
  char *v34; // x2
  void *v35; // x1
  __int64 (__fastcall *v36)(); // x3
  void *v37; // x0
  char *v38; // x0
  char *v39; // x25
  __int64 v40; // x21
  char *i; // x19
  char *v42; // x1
  void *v43; // x0
  void *ptr; // [xsp+68h] [xbp-48h]
  __int64 v45; // [xsp+70h] [xbp-40h]
  int v46; // [xsp+78h] [xbp-38h]
  char v47; // [xsp+7Ch] [xbp-34h]
  int v48; // [xsp+80h] [xbp-30h]
  int v49; // [xsp+84h] [xbp-2Ch]
  unsigned int v51; // [xsp+9Ch] [xbp-14h] BYREF
  __int64 v52; // [xsp+A0h] [xbp-10h] BYREF

  if ( a1[17] == a1[21] && (v38 = (char *)a1[70]) != nullptr )
  {
    v39 = (char *)a1[71];
    if ( v39 )
    {
      v40 = 0;
      for ( i = nullptr; i != v39; ++i )
      {
        v42 = &v38[v40];
        v43 = *(void **)&v38[v40 + 8];
        if ( v43 )
        {
          *((_QWORD *)v42 + 2) = 0;
          j__free(v43);
        }
        v40 += 56;
        v38 = (char *)a1[70];
      }
    }
    a1[71] = nullptr;
    j__free(v38);
    a1[70] = nullptr;
    a1[72] = nullptr;
    v9 = &a3[7 * a4];
    if ( a3 == v9 )
      goto LABEL_51;
  }
  else
  {
    v9 = &a3[7 * a4];
    if ( a3 == v9 )
    {
LABEL_51:
      v22 = v9;
      v11 = 0;
      goto LABEL_21;
    }
  }
  v10 = a3;
  v11 = 0;
  do
  {
    if ( !*((_BYTE *)v10 + 40) )
    {
      v12 = *((_DWORD *)v10 + 8);
      v13 = *v10;
      if ( v12 == 4 )
      {
        v35 = *a1;
        v51 = (unsigned int)a1[62];
        v52 = v13;
        v36 = *((__int64 (__fastcall **)())v35 + 68);
        if ( v36 != nullsub_15 )
        {
          ((void (__fastcall *)(void **, __int64 *, unsigned int *))v36)(a1, &v52, &v51);
          v12 = *((_DWORD *)v10 + 8);
        }
      }
      else
      {
        v51 = *((_DWORD *)v10 + 9);
        v52 = v13;
      }
      v14 = a1[71];
      v15 = a1[70];
      v16 = v15;
      v17 = &v15[14 * (_QWORD)v14];
      if ( v15 != v17 )
      {
        while ( *v10 != *(_QWORD *)v16 || v16[8] != v12 )
        {
          v16 += 14;
          if ( v17 == v16 )
            goto LABEL_13;
        }
        if ( v16[12] == *((_DWORD *)v10 + 12) )
        {
          v37 = *((void **)v16 + 1);
          if ( v37 )
          {
            *((_QWORD *)v16 + 2) = 0;
            j__free(v37);
            v15 = a1[70];
            v14 = a1[71];
          }
          memmove(
            v16,
            v16 + 14,
            56 * (0x6DB6DB6DB6DB6DB7LL * (((char *)&v15[14 * (_QWORD)v14] - (char *)v16) >> 3) - 1));
          a1[71] = (char *)a1[71] - 1;
        }
      }
LABEL_13:
      v18 = (*((__int64 (__fastcall **)(void **, __int64 *))*a1 + 39))(a1, v10 + 1) + 2;
      sub_45CDF8(
        (__int64)a1,
        (__int64)"dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n",
        *((_DWORD *)v10 + 8),
        v19,
        v52,
        v51);
      if ( v18 > 4 )
      {
        *((_BYTE *)v10 + 40) = 8;
      }
      else
      {
        v20 = *((_DWORD *)qword_4C73C8 + v18);
        *((_BYTE *)v10 + 40) = v20;
        if ( v20 )
          v21 = v20 == 10;
        else
          v21 = 1;
        if ( v21 )
          ++v11;
      }
    }
    v10 += 7;
  }
  while ( v9 != v10 );
  v22 = &a3[7
          * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)v9 - (char *)(a3 + 7)) >> 3)) & 0x1FFFFFFFFFFFFFFFLL)
          + 7];
LABEL_21:
  v23 = &v9[7 * a5];
  if ( v23 != v22 )
  {
    v24 = a1 + 70;
    do
    {
      while ( 1 )
      {
        v26 = *((unsigned int *)v22 + 8);
        *((_BYTE *)v22 + 40) = 0;
        v27 = (_DWORD)v26 == 4 ? *((unsigned int *)v22 + 4) : *((unsigned int *)v22 + 9);
        v28 = (*((__int64 (__fastcall **)(void **, __int64, __int64, __int64, __int64))*a1 + 40))(
                a1,
                v26,
                *v22,
                v22[1],
                v27);
        sub_45CDF8((__int64)a1, (__int64)"dbg_del_bpt(type=%d, ea=%a) => %d\n", *((_DWORD *)v22 + 8), v29, *v22);
        if ( v28 > 0 )
          break;
        *((_BYTE *)v22 + 40) = 8;
        v22 += 7;
        if ( v23 == v22 )
          goto LABEL_29;
      }
      v25 = *((_DWORD *)v22 + 8);
      ++v11;
      if ( ((v25 - 4) & 0xFFFFFFFB) == 0 )
      {
        v31 = v22[2];
        ptr = nullptr;
        v45 = *v22;
        if ( v31 )
        {
          ptr = sub_491248(v31);
          memcpy(ptr, (const void *)v22[1], v31);
          v25 = *((_DWORD *)v22 + 8);
        }
        v46 = *((_DWORD *)v22 + 9);
        v32 = a1[71];
        v47 = *((_BYTE *)v22 + 40);
        v48 = *((_DWORD *)v22 + 11);
        v49 = *((_DWORD *)v22 + 12);
        v33 = (char *)*v24;
        if ( (char *)v32 + 1 > a1[72] )
        {
          v33 = (char *)sub_491288((__int64)(a1 + 70), *v24, (unsigned __int64)v32 + 1, 0x38u);
          v32 = a1[71];
          *v24 = v33;
        }
        v34 = &v33[56 * (_QWORD)v32];
        *(_QWORD *)v34 = v45;
        *((_QWORD *)v34 + 1) = ptr;
        *((_QWORD *)v34 + 2) = v31;
        *((_DWORD *)v34 + 9) = v46;
        v34[40] = v47;
        *((_DWORD *)v34 + 11) = v48;
        *((_QWORD *)v34 + 3) = v31;
        *((_DWORD *)v34 + 8) = v25;
        *((_DWORD *)v34 + 12) = v49;
        a1[71] = (char *)a1[71] + 1;
      }
      v22 += 7;
    }
    while ( v23 != v22 );
  }
LABEL_29:
  if ( a2 )
    *a2 = v11;
  return 1;
}
// 45CFE4: variable 'v19' is possibly undefined
// 45D0C8: variable 'v29' is possibly undefined
// 45B648: using guessed type __int64 __fastcall nullsub_15();
// 4C73C8: using guessed type __int64 qword_4C73C8[3];
