/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EBE7C
// Address: 0x00000000000EBE7C

//----- (00000000000EBE7C) ----------------------------------------------------
__int64 __fastcall sub_EBE7C(__int64 a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  char v11; // w24
  __int64 v12; // x26
  unsigned __int64 v13; // x9
  char *v14; // x0
  __int64 v15; // x8
  char *v16; // x0
  unsigned __int64 v17; // x9
  size_t v18; // x1
  _BYTE *v19; // x21
  unsigned __int64 v20; // x9
  char *v21; // x0
  char *v22; // x0
  unsigned __int64 v23; // x9
  size_t v24; // x1
  __int64 result; // x0
  int v26; // w8
  char *v27; // x8
  unsigned __int64 v28; // x10
  char *v29; // x0
  size_t v30; // x1
  char *v31; // x8
  char *v32; // x8
  unsigned __int64 v33; // x10
  char *v34; // x0
  size_t v35; // x1
  char *v36; // x8
  char *v37; // x8
  unsigned __int64 v38; // x10
  char *v39; // x0
  size_t v40; // x1
  char *v41; // x8
  int v42; // w8
  char *v43; // x8
  unsigned __int64 v44; // x10
  char *v45; // x8
  unsigned __int64 v46; // x10
  char *v47; // x0
  size_t v48; // x1
  __int64 v49; // x8
  char *v50; // x0
  size_t v51; // x1
  char *v52; // x8
  char *v53; // x8
  unsigned __int64 v54; // x10
  unsigned __int64 v55; // x9
  char *v56; // x0
  char *v57; // x0
  size_t v58; // x1
  _BYTE *v59; // x20

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v2 + 1) >= v3 )
  {
    v7 = *a2;
    if ( 2 * v3 >= (unsigned __int64)(v2 + 1) )
      v8 = 2 * v3;
    else
      v8 = (size_t)(v2 + 1);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v2 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  v2[(_QWORD)v6] = 40;
  v9 = (__int64)(a2[1] + 1);
  a2[1] = (char *)v9;
  if ( *(_QWORD *)(a1 + 32) )
  {
    v10 = 0;
    v11 = 1;
    do
    {
      v12 = v9;
      if ( (v11 & 1) == 0 )
      {
        v13 = (unsigned __int64)a2[2];
        if ( v9 + 2 >= v13 )
        {
          v16 = *a2;
          v17 = 2 * v13;
          if ( v17 >= v9 + 2 )
            v18 = v17;
          else
            v18 = v9 + 2;
          a2[2] = (char *)v18;
          v14 = (char *)realloc(v16, v18);
          v15 = (__int64)a2[1];
          *a2 = v14;
        }
        else
        {
          v14 = *a2;
          v15 = v9;
        }
        *(_WORD *)&v14[v15] = 8236;
        v12 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v12;
      }
      v19 = *(_BYTE **)(*(_QWORD *)(a1 + 24) + 8 * v10);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v19 + 24LL))(v19, a2);
      if ( v19[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v19 + 32LL))(v19, a2);
      if ( (char *)v12 == a2[1] )
      {
        a2[1] = (char *)v9;
      }
      else
      {
        v11 = 0;
        v9 = (__int64)a2[1];
      }
      ++v10;
    }
    while ( v10 != *(_QWORD *)(a1 + 32) );
  }
  v20 = (unsigned __int64)a2[2];
  if ( v9 + 1 >= v20 )
  {
    v22 = *a2;
    v23 = 2 * v20;
    if ( v23 >= v9 + 1 )
      v24 = v23;
    else
      v24 = v9 + 1;
    a2[2] = (char *)v24;
    v21 = (char *)realloc(v22, v24);
    v9 = (__int64)a2[1];
    *a2 = v21;
  }
  else
  {
    v21 = *a2;
  }
  v21[v9] = 41;
  ++a2[1];
  result = (*(__int64 (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
  v26 = *(_DWORD *)(a1 + 40);
  if ( (v26 & 1) != 0 )
  {
    v27 = a2[1];
    v28 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v27 + 6) >= v28 )
    {
      v29 = *a2;
      if ( 2 * v28 >= (unsigned __int64)(v27 + 6) )
        v30 = 2 * v28;
      else
        v30 = (size_t)(v27 + 6);
      a2[2] = (char *)v30;
      result = (__int64)realloc(v29, v30);
      v27 = a2[1];
      *a2 = (char *)result;
    }
    else
    {
      result = (__int64)*a2;
    }
    v31 = &v27[result];
    *((_WORD *)v31 + 2) = 29811;
    *(_DWORD *)v31 = 1852793632;
    a2[1] += 6;
    v26 = *(_DWORD *)(a1 + 40);
    if ( (v26 & 2) == 0 )
    {
LABEL_31:
      if ( (v26 & 4) == 0 )
        goto LABEL_54;
      goto LABEL_47;
    }
  }
  else if ( (v26 & 2) == 0 )
  {
    goto LABEL_31;
  }
  v32 = a2[1];
  v33 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v32 + 9) >= v33 )
  {
    v34 = *a2;
    if ( 2 * v33 >= (unsigned __int64)(v32 + 9) )
      v35 = 2 * v33;
    else
      v35 = (size_t)(v32 + 9);
    a2[2] = (char *)v35;
    result = (__int64)realloc(v34, v35);
    v32 = a2[1];
    *a2 = (char *)result;
  }
  else
  {
    result = (__int64)*a2;
  }
  v36 = &v32[result];
  v36[8] = 101;
  *(_QWORD *)v36 = *(_QWORD *)" volatile";
  a2[1] += 9;
  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
  {
LABEL_47:
    v37 = a2[1];
    v38 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v37 + 9) >= v38 )
    {
      v39 = *a2;
      if ( 2 * v38 >= (unsigned __int64)(v37 + 9) )
        v40 = 2 * v38;
      else
        v40 = (size_t)(v37 + 9);
      a2[2] = (char *)v40;
      result = (__int64)realloc(v39, v40);
      v37 = a2[1];
      *a2 = (char *)result;
    }
    else
    {
      result = (__int64)*a2;
    }
    v41 = &v37[result];
    v41[8] = 116;
    *(_QWORD *)v41 = *(_QWORD *)" restrict";
    a2[1] += 9;
  }
LABEL_54:
  v42 = *(unsigned __int8 *)(a1 + 44);
  if ( v42 == 2 )
  {
    v45 = a2[1];
    v46 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v45 + 3) >= v46 )
    {
      v50 = *a2;
      if ( 2 * v46 >= (unsigned __int64)(v45 + 3) )
        v51 = 2 * v46;
      else
        v51 = (size_t)(v45 + 3);
      a2[2] = (char *)v51;
      result = (__int64)realloc(v50, v51);
      v45 = a2[1];
      *a2 = (char *)result;
    }
    else
    {
      result = (__int64)*a2;
    }
    v52 = &v45[result];
    v52[2] = 38;
    *(_WORD *)v52 = 9760;
    v49 = 3;
  }
  else
  {
    if ( v42 != 1 )
      goto LABEL_71;
    v43 = a2[1];
    v44 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v43 + 2) >= v44 )
    {
      v47 = *a2;
      if ( 2 * v44 >= (unsigned __int64)(v43 + 2) )
        v48 = 2 * v44;
      else
        v48 = (size_t)(v43 + 2);
      a2[2] = (char *)v48;
      result = (__int64)realloc(v47, v48);
      v43 = a2[1];
      *a2 = (char *)result;
    }
    else
    {
      result = (__int64)*a2;
    }
    *(_WORD *)&v43[result] = 9760;
    v49 = 2;
  }
  a2[1] += v49;
LABEL_71:
  if ( *(_QWORD *)(a1 + 48) )
  {
    v53 = a2[1];
    v54 = (unsigned __int64)a2[2];
    v55 = (unsigned __int64)(v53 + 1);
    if ( (unsigned __int64)(v53 + 1) >= v54 )
    {
      v57 = *a2;
      if ( 2 * v54 >= v55 )
        v58 = 2 * v54;
      else
        v58 = (size_t)(v53 + 1);
      a2[2] = (char *)v58;
      v56 = (char *)realloc(v57, v58);
      v53 = a2[1];
      *a2 = v56;
      v55 = (unsigned __int64)(v53 + 1);
    }
    else
    {
      v56 = *a2;
    }
    a2[1] = (char *)v55;
    v53[(_QWORD)v56] = 32;
    v59 = *(_BYTE **)(a1 + 48);
    result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v59 + 24LL))(v59, a2);
    if ( v59[9] != 1 )
      return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v59 + 32LL))(v59, a2);
  }
  return result;
}
