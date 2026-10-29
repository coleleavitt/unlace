/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E526C
// Address: 0x00000000000E526C

//----- (00000000000E526C) ----------------------------------------------------
char *__fastcall sub_E526C(_QWORD *a1, char **a2)
{
  unsigned __int8 *v2; // x8
  unsigned __int8 *v3; // x9
  char *v6; // x10
  char *v7; // x8
  unsigned __int64 v8; // x10
  char *v9; // x0
  char *v10; // x0
  size_t v11; // x1
  char *v12; // x8
  unsigned __int64 v13; // x10
  char *v14; // x0
  char *v15; // x0
  size_t v16; // x1
  _BYTE *v17; // x21
  char *v18; // x8
  unsigned __int64 v19; // x10
  char *v20; // x0
  char *v21; // x0
  size_t v22; // x1
  __int64 v23; // x8
  _BYTE *v24; // x9
  _BYTE *v25; // x22
  size_t v26; // x21
  size_t v27; // x10
  char *v28; // x0
  char *v29; // x0
  size_t v30; // x1
  unsigned __int64 v31; // x10
  char *v32; // x0
  char *v33; // x0
  size_t v34; // x1
  _BYTE *v35; // x21
  char *v36; // x8
  unsigned __int64 v37; // x10
  char *result; // x0
  char *v39; // x0
  size_t v40; // x1
  char *v41; // x9
  char *v42; // x8
  unsigned __int8 *v43; // x10
  unsigned __int8 *v44; // x11
  char *v45; // x12
  unsigned __int64 v46; // x10
  unsigned __int64 v47; // x9
  char *v48; // x0
  size_t v49; // x1

  v2 = (unsigned __int8 *)a1[3];
  v3 = (unsigned __int8 *)a1[4];
  if ( v3 - v2 == 1 )
  {
    if ( v2 == v3 )
    {
LABEL_6:
      v7 = a2[1];
      v8 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v7 + 1) >= v8 )
      {
        v10 = *a2;
        if ( 2 * v8 >= (unsigned __int64)(v7 + 1) )
          v11 = 2 * v8;
        else
          v11 = (size_t)(v7 + 1);
        a2[2] = (char *)v11;
        v9 = (char *)realloc(v10, v11);
        v7 = a2[1];
        *a2 = v9;
      }
      else
      {
        v9 = *a2;
      }
      v7[(_QWORD)v9] = 40;
      ++a2[1];
    }
    else
    {
      v6 = ">";
      while ( *v2 == (unsigned __int8)*v6 )
      {
        ++v2;
        ++v6;
        if ( v3 == v2 )
          goto LABEL_6;
      }
    }
  }
  v12 = a2[1];
  v13 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v12 + 1) >= v13 )
  {
    v15 = *a2;
    if ( 2 * v13 >= (unsigned __int64)(v12 + 1) )
      v16 = 2 * v13;
    else
      v16 = (size_t)(v12 + 1);
    a2[2] = (char *)v16;
    v14 = (char *)realloc(v15, v16);
    v12 = a2[1];
    *a2 = v14;
  }
  else
  {
    v14 = *a2;
  }
  v12[(_QWORD)v14] = 40;
  ++a2[1];
  v17 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 24LL))(v17, a2);
  if ( v17[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 32LL))(v17, a2);
  v18 = a2[1];
  v19 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v18 + 2) >= v19 )
  {
    v21 = *a2;
    if ( 2 * v19 >= (unsigned __int64)(v18 + 2) )
      v22 = 2 * v19;
    else
      v22 = (size_t)(v18 + 2);
    a2[2] = (char *)v22;
    v20 = (char *)realloc(v21, v22);
    v18 = a2[1];
    *a2 = v20;
  }
  else
  {
    v20 = *a2;
  }
  *(_WORD *)&v18[(_QWORD)v20] = 8233;
  v23 = (__int64)(a2[1] + 2);
  a2[1] = (char *)v23;
  v25 = (_BYTE *)a1[3];
  v24 = (_BYTE *)a1[4];
  v26 = v24 - v25;
  if ( v24 != v25 )
  {
    v27 = (size_t)a2[2];
    if ( v23 + v26 >= v27 )
    {
      v29 = *a2;
      if ( 2 * v27 >= v23 + v26 )
        v30 = 2 * v27;
      else
        v30 = v23 + v26;
      a2[2] = (char *)v30;
      v28 = (char *)realloc(v29, v30);
      v23 = (__int64)a2[1];
      *a2 = v28;
    }
    else
    {
      v28 = *a2;
    }
    memmove(&v28[v23], v25, v26);
    v23 = (__int64)&a2[1][v26];
    a2[1] = (char *)v23;
  }
  v31 = (unsigned __int64)a2[2];
  if ( v23 + 2 >= v31 )
  {
    v33 = *a2;
    if ( 2 * v31 >= v23 + 2 )
      v34 = 2 * v31;
    else
      v34 = v23 + 2;
    a2[2] = (char *)v34;
    v32 = (char *)realloc(v33, v34);
    v23 = (__int64)a2[1];
    *a2 = v32;
  }
  else
  {
    v32 = *a2;
  }
  *(_WORD *)&v32[v23] = 10272;
  a2[1] += 2;
  v35 = (_BYTE *)a1[5];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v35 + 24LL))(v35, a2);
  if ( v35[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v35 + 32LL))(v35, a2);
  v36 = a2[1];
  v37 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v36 + 1) >= v37 )
  {
    v39 = *a2;
    if ( 2 * v37 >= (unsigned __int64)(v36 + 1) )
      v40 = 2 * v37;
    else
      v40 = (size_t)(v36 + 1);
    a2[2] = (char *)v40;
    result = (char *)realloc(v39, v40);
    v36 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v36[(_QWORD)result] = 41;
  v41 = a2[1];
  v42 = v41 + 1;
  a2[1] = v41 + 1;
  v43 = (unsigned __int8 *)a1[3];
  v44 = (unsigned __int8 *)a1[4];
  if ( v44 - v43 == 1 )
  {
    if ( v43 == v44 )
    {
LABEL_54:
      v46 = (unsigned __int64)a2[2];
      v47 = (unsigned __int64)(v41 + 2);
      if ( v47 >= v46 )
      {
        v48 = *a2;
        if ( 2 * v46 >= v47 )
          v49 = 2 * v46;
        else
          v49 = v47;
        a2[2] = (char *)v49;
        result = (char *)realloc(v48, v49);
        v42 = a2[1];
        *a2 = result;
      }
      else
      {
        result = *a2;
      }
      v42[(_QWORD)result] = 41;
      ++a2[1];
    }
    else
    {
      v45 = ">";
      while ( *v43 == (unsigned __int8)*v45 )
      {
        ++v43;
        ++v45;
        if ( v44 == v43 )
          goto LABEL_54;
      }
    }
  }
  return result;
}
