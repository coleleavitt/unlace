/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4390B8
// Address: 0x00000000004390B8

//----- (00000000004390B8) ----------------------------------------------------
__int64 __fastcall sub_4390B8(__int64 a1, __int64 a2, unsigned __int8 a3, int a4)
{
  __int64 v5; // x19
  int v6; // w21
  unsigned int v8; // w1
  __int64 v9; // x21
  __int64 v10; // x1
  _BYTE *v11; // x0
  void **v12; // x0
  __int64 v13; // x2
  size_t v14; // x21
  __int64 v15; // x21
  unsigned int v16; // w0
  __int64 v17; // x20
  unsigned int v18; // w23
  __int64 v19; // x1
  _BYTE *v20; // x0
  __int64 v21; // x0
  char *v22; // x1
  __int64 v24; // x0
  __int64 v25; // x2
  bool v26; // cc
  char v27; // w21
  __int64 v28; // x1
  unsigned __int64 v29; // x2
  _BYTE *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x0
  char *v33; // x1
  unsigned int v34; // w0
  __int64 v35; // x2
  size_t v36; // x22
  char v37; // w21
  __int64 v38; // x0
  char *v39; // x1
  __int64 v40; // x2
  size_t v41; // x22
  int v42; // w0
  char v43; // w1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x0
  char *v47; // x1
  size_t v48; // x2
  __int64 v49; // x1
  _BYTE *v50; // x0

  v5 = a1;
  v6 = a3;
  v8 = *(_DWORD *)a2;
  if ( v8 > 4 )
  {
    if ( v8 != 5 )
      goto LABEL_22;
    v18 = sub_4390B8(a1, *(_QWORD *)(a2 + 16), 0, 0);
    v24 = *(_QWORD *)(a2 + 8);
    v25 = *(_QWORD *)(v24 + 8);
    if ( v25 )
    {
      sub_436CF8(v5, *(char **)v24, v25 - 1);
      v26 = a4 <= 0;
      if ( !a4 )
      {
LABEL_18:
        v17 = *(_QWORD *)(v5 + 200);
        v27 = (v6 != 0) - 14;
        *(_BYTE *)(v5 + 212) = v27;
        v28 = *(_QWORD *)(v17 + 8);
        v29 = v28 + 1;
        if ( (unsigned __int64)(v28 + 1) <= *(_QWORD *)(v17 + 16) )
        {
LABEL_32:
          v30 = *(_BYTE **)v17;
          goto LABEL_20;
        }
LABEL_19:
        v30 = sub_491288(v17, *(void **)v17, v29, 1u);
        *(_QWORD *)v17 = v30;
        v28 = *(_QWORD *)(v17 + 8);
LABEL_20:
        v30[v28] = v27;
LABEL_21:
        ++*(_QWORD *)(v17 + 8);
        ++*(_DWORD *)(v5 + 208);
        return v18;
      }
    }
    else
    {
      sub_436CF8(v5, (char *)&qword_4B2D48, 0);
      v26 = a4 <= 0;
      if ( !a4 )
        goto LABEL_18;
    }
    v37 = v26;
    v27 = v37 - 11;
    goto LABEL_31;
  }
  if ( v8 >= 3 )
  {
LABEL_24:
    v31 = *(_QWORD *)(a2 + 16);
    if ( a3 )
    {
      if ( *(_DWORD *)v31 == 1 )
      {
        v32 = *(_QWORD *)(v31 + 16);
        if ( *(_QWORD *)(v32 + 8) )
          v33 = *(char **)v32;
        else
          v33 = (char *)&qword_4B2D48;
        v34 = sub_438F88(v5, v33);
        v35 = *(_QWORD *)(a2 + 8);
        v18 = v34;
        v36 = *(_QWORD *)(v35 + 8);
        sub_43D128(*(void ***)(v5 + 200), *(const void **)v35, v36);
        *(_DWORD *)(v5 + 208) += v36;
        if ( *(_DWORD *)a2 == 3 )
          v27 = -5;
        else
          v27 = -1;
        goto LABEL_31;
      }
      v18 = sub_4390B8(a1, v31, 0, 0);
      v40 = *(_QWORD *)(a2 + 8);
      v27 = -1;
      v41 = *(_QWORD *)(v40 + 8);
      sub_43D128(*(void ***)(v5 + 200), *(const void **)v40, v41);
      v42 = *(_DWORD *)(v5 + 208);
      v43 = -5;
    }
    else
    {
      v18 = sub_4390B8(a1, v31, 0, 0);
      v44 = *(_QWORD *)(a2 + 8);
      v27 = -2;
      v41 = *(_QWORD *)(v44 + 8);
      sub_43D128(*(void ***)(v5 + 200), *(const void **)v44, v41);
      v43 = -4;
      v42 = *(_DWORD *)(v5 + 208);
    }
    *(_DWORD *)(v5 + 208) = v42 + v41;
    if ( *(_DWORD *)a2 == 3 )
      v27 = v43;
LABEL_31:
    v17 = *(_QWORD *)(v5 + 200);
    *(_BYTE *)(v5 + 212) = v27;
    v28 = *(_QWORD *)(v17 + 8);
    v29 = v28 + 1;
    if ( (unsigned __int64)(v28 + 1) <= *(_QWORD *)(v17 + 16) )
      goto LABEL_32;
    goto LABEL_19;
  }
  if ( v8 == 1 )
  {
    v21 = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(v21 + 8) )
      v22 = *(char **)v21;
    else
      v22 = (char *)&qword_4B2D48;
    return sub_4388A8(v5, v22, a3, a4);
  }
  if ( v8 != 2 )
  {
LABEL_22:
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(273);
    __break(0x3E8u);
    goto LABEL_24;
  }
  v9 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -86;
  v10 = *(_QWORD *)(v9 + 8);
  if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(v9 + 16) )
  {
    v11 = sub_491288(v9, *(void **)v9, v10 + 1, 1u);
    *(_QWORD *)v9 = v11;
    v10 = *(_QWORD *)(v9 + 8);
  }
  else
  {
    v11 = *(_BYTE **)v9;
  }
  v11[v10] = -86;
  ++*(_QWORD *)(v9 + 8);
  v12 = *(void ***)(v5 + 200);
  ++*(_DWORD *)(v5 + 208);
  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_QWORD *)(v13 + 8);
  sub_43D128(v12, *(const void **)v13, v14);
  *(_DWORD *)(v5 + 208) += v14;
  v15 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)v15 != 1 )
  {
    if ( *(_DWORD *)v15 == 5 )
    {
      v18 = sub_4390B8(v5, *(_QWORD *)(v15 + 16), 0, 0);
      v45 = *(_QWORD *)(v15 + 8);
      v46 = *(_QWORD *)(v45 + 8);
      if ( v46 )
      {
        v47 = *(char **)v45;
        v48 = v46 - 1;
      }
      else
      {
        v48 = 0;
        v47 = (char *)&qword_4B2D48;
      }
      sub_436CF8(v5, v47, v48);
      v17 = *(_QWORD *)(v5 + 200);
      *(_BYTE *)(v5 + 212) = -9;
      v49 = *(_QWORD *)(v17 + 8);
      if ( (unsigned __int64)(v49 + 1) > *(_QWORD *)(v17 + 16) )
      {
        v50 = sub_491288(v17, *(void **)v17, v49 + 1, 1u);
        *(_QWORD *)v17 = v50;
        v49 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        v50 = *(_BYTE **)v17;
      }
      v50[v49] = -9;
    }
    else
    {
      v16 = sub_4390B8(v5, *(_QWORD *)(a2 + 16), 0, 0);
      v17 = *(_QWORD *)(v5 + 200);
      v18 = v16;
      *(_BYTE *)(v5 + 212) = -92;
      v19 = *(_QWORD *)(v17 + 8);
      if ( (unsigned __int64)(v19 + 1) > *(_QWORD *)(v17 + 16) )
      {
        v20 = sub_491288(v17, *(void **)v17, v19 + 1, 1u);
        *(_QWORD *)v17 = v20;
        v19 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        v20 = *(_BYTE **)v17;
      }
      v20[v19] = -92;
    }
    goto LABEL_21;
  }
  v38 = *(_QWORD *)(v15 + 16);
  if ( *(_QWORD *)(v38 + 8) )
    v39 = *(char **)v38;
  else
    v39 = (char *)&qword_4B2D48;
  return sub_438BC8(v5, v39, *(_DWORD *)(a2 + 24));
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
