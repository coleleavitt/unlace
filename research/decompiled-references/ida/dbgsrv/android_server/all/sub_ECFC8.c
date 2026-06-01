/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ECFC8
// Address: 0x00000000000ECFC8

//----- (00000000000ECFC8) ----------------------------------------------------
char *__fastcall sub_ECFC8(__int64 a1, char **a2)
{
  __int64 v2; // x21
  __int64 v5; // x9
  unsigned __int8 *v6; // x8
  unsigned __int8 *v7; // x9
  const char *v8; // x10
  char *v9; // x8
  __int64 *v10; // x23
  unsigned __int64 v11; // x10
  char *v12; // x0
  _BYTE *v13; // x0
  char *v14; // x8
  unsigned __int64 v15; // x10
  char *v16; // x0
  char *v17; // x0
  size_t v18; // x1
  _BYTE *v19; // x0
  char *v20; // x8
  unsigned __int64 v21; // x10
  char *v22; // x0
  char *v23; // x0
  size_t v24; // x1
  char *v25; // x8
  unsigned __int64 v26; // x10
  char *result; // x0
  char *v28; // x0
  size_t v29; // x1
  char *v30; // x8
  char v31; // w9
  char *v32; // x0
  size_t v33; // x1
  char *v34; // x8
  __int64 v35; // x8
  _BYTE *v36; // x9
  _BYTE *v37; // x22
  size_t v38; // x20
  size_t v39; // x10
  char *v40; // x0
  char *v41; // x0
  size_t v42; // x1
  unsigned __int64 v43; // x10
  char *v44; // x0
  size_t v45; // x1

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v2 + 8) != 10 )
    goto LABEL_10;
  v5 = *(_QWORD *)(v2 + 16);
  if ( *(_BYTE *)(v5 + 8) != 7 )
    goto LABEL_10;
  v6 = *(unsigned __int8 **)(v5 + 16);
  v7 = *(unsigned __int8 **)(v5 + 24);
  if ( v7 - v6 != 11 )
    goto LABEL_10;
  if ( v6 != v7 )
  {
    v8 = "objc_object";
    while ( *v6 == *(unsigned __int8 *)v8 )
    {
      ++v6;
      ++v8;
      if ( v7 == v6 )
        goto LABEL_8;
    }
LABEL_10:
    (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 16), a2);
    v13 = *(_BYTE **)(a1 + 16);
    if ( !v13[10]
      || v13[10] == 2 && ((*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v13 + 8LL))(v13, a2) & 1) != 0 )
    {
      v14 = a2[1];
      v15 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v14 + 1) >= v15 )
      {
        v17 = *a2;
        if ( 2 * v15 >= (unsigned __int64)(v14 + 1) )
          v18 = 2 * v15;
        else
          v18 = (size_t)(v14 + 1);
        a2[2] = (char *)v18;
        v16 = (char *)realloc(v17, v18);
        v14 = a2[1];
        *a2 = v16;
      }
      else
      {
        v16 = *a2;
      }
      v14[(_QWORD)v16] = 32;
      ++a2[1];
    }
    v19 = *(_BYTE **)(a1 + 16);
    if ( !v19[10] )
      goto LABEL_27;
    if ( v19[10] == 2 )
    {
      if ( ((*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v19 + 8LL))(v19, a2) & 1) != 0 )
        goto LABEL_27;
      v19 = *(_BYTE **)(a1 + 16);
    }
    if ( v19[11]
      && (v19[11] != 2 || ((*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v19 + 16LL))(v19, a2) & 1) == 0) )
    {
LABEL_34:
      v10 = (__int64 *)(a2 + 1);
      v25 = a2[1];
      v26 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v25 + 1) >= v26 )
      {
        v28 = *a2;
        if ( 2 * v26 >= (unsigned __int64)(v25 + 1) )
          v29 = 2 * v26;
        else
          v29 = (size_t)(v25 + 1);
        a2[2] = (char *)v29;
        result = (char *)realloc(v28, v29);
        v25 = a2[1];
        *a2 = result;
      }
      else
      {
        result = *a2;
      }
      v30 = &v25[(_QWORD)result];
      v31 = 42;
      goto LABEL_41;
    }
LABEL_27:
    v20 = a2[1];
    v21 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v20 + 1) >= v21 )
    {
      v23 = *a2;
      if ( 2 * v21 >= (unsigned __int64)(v20 + 1) )
        v24 = 2 * v21;
      else
        v24 = (size_t)(v20 + 1);
      a2[2] = (char *)v24;
      v22 = (char *)realloc(v23, v24);
      v20 = a2[1];
      *a2 = v22;
    }
    else
    {
      v22 = *a2;
    }
    v20[(_QWORD)v22] = 40;
    ++a2[1];
    goto LABEL_34;
  }
LABEL_8:
  v10 = (__int64 *)(a2 + 1);
  v9 = a2[1];
  v11 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v9 + 3) >= v11 )
  {
    v32 = *a2;
    if ( 2 * v11 >= (unsigned __int64)(v9 + 3) )
      v33 = 2 * v11;
    else
      v33 = (size_t)(v9 + 3);
    a2[2] = (char *)v33;
    v12 = (char *)realloc(v32, v33);
    v9 = a2[1];
    *a2 = v12;
  }
  else
  {
    v12 = *a2;
  }
  v34 = &v9[(_QWORD)v12];
  v34[2] = 60;
  *(_WORD *)v34 = 25705;
  v35 = *v10 + 3;
  *v10 = v35;
  v37 = *(_BYTE **)(v2 + 24);
  v36 = *(_BYTE **)(v2 + 32);
  v38 = v36 - v37;
  if ( v36 != v37 )
  {
    v39 = (size_t)a2[2];
    if ( v35 + v38 >= v39 )
    {
      v41 = *a2;
      if ( 2 * v39 >= v35 + v38 )
        v42 = 2 * v39;
      else
        v42 = v35 + v38;
      a2[2] = (char *)v42;
      v40 = (char *)realloc(v41, v42);
      v35 = (__int64)a2[1];
      *a2 = v40;
    }
    else
    {
      v40 = *a2;
    }
    memmove(&v40[v35], v37, v38);
    v35 = *v10 + v38;
    *v10 = v35;
  }
  v43 = (unsigned __int64)a2[2];
  if ( v35 + 1 >= v43 )
  {
    v44 = *a2;
    if ( 2 * v43 >= v35 + 1 )
      v45 = 2 * v43;
    else
      v45 = v35 + 1;
    a2[2] = (char *)v45;
    result = (char *)realloc(v44, v45);
    v35 = (__int64)a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v30 = &result[v35];
  v31 = 62;
LABEL_41:
  *v30 = v31;
  ++*v10;
  return result;
}
