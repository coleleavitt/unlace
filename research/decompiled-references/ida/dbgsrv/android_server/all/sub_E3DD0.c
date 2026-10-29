/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3DD0
// Address: 0x00000000000E3DD0

//----- (00000000000E3DD0) ----------------------------------------------------
char *__fastcall sub_E3DD0(char *result, char **a2)
{
  char *v2; // x20
  char *v4; // x8
  unsigned __int64 v5; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  __int64 v9; // x8
  _BYTE *v10; // x9
  _BYTE *v11; // x22
  size_t v12; // x21
  size_t v13; // x10
  char *v14; // x0
  char *v15; // x0
  size_t v16; // x1
  unsigned __int64 v17; // x10
  char *v18; // x0
  size_t v19; // x1
  _BYTE *v20; // x21
  char *v21; // x8
  unsigned __int64 v22; // x10
  _BYTE *v23; // x8
  size_t v24; // x22
  char *v25; // x8
  size_t v26; // x10
  char *v27; // x0
  char *v28; // x0
  size_t v29; // x1
  __int64 v30; // x8
  __int64 v31; // x9
  __int64 v32; // x10
  __int64 v33; // x11
  const void *v34; // x22
  size_t v35; // x21
  size_t v36; // x10
  char *v37; // x0
  char *v38; // x0
  size_t v39; // x1
  size_t v40; // x8
  char *v41; // x0
  size_t v42; // x1
  const void *v43; // x21
  size_t v44; // x20
  char *v45; // x8
  size_t v46; // x10
  char *v47; // x0
  char *v48; // x0
  size_t v49; // x1

  v2 = result;
  if ( *((_QWORD *)result + 3) - *((_QWORD *)result + 2) >= 4u )
  {
    v4 = a2[1];
    v5 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v4 + 1) >= v5 )
    {
      v7 = *a2;
      if ( 2 * v5 >= (unsigned __int64)(v4 + 1) )
        v8 = 2 * v5;
      else
        v8 = (size_t)(v4 + 1);
      a2[2] = (char *)v8;
      v6 = (char *)realloc(v7, v8);
      v4 = a2[1];
      *a2 = v6;
    }
    else
    {
      v6 = *a2;
    }
    v4[(_QWORD)v6] = 40;
    v9 = (__int64)(a2[1] + 1);
    a2[1] = (char *)v9;
    v11 = *((_BYTE **)v2 + 2);
    v10 = *((_BYTE **)v2 + 3);
    v12 = v10 - v11;
    if ( v10 != v11 )
    {
      v13 = (size_t)a2[2];
      if ( v9 + v12 >= v13 )
      {
        v15 = *a2;
        if ( 2 * v13 >= v9 + v12 )
          v16 = 2 * v13;
        else
          v16 = v9 + v12;
        a2[2] = (char *)v16;
        v14 = (char *)realloc(v15, v16);
        v9 = (__int64)a2[1];
        *a2 = v14;
      }
      else
      {
        v14 = *a2;
      }
      memmove(&v14[v9], v11, v12);
      v9 = (__int64)&a2[1][v12];
      a2[1] = (char *)v9;
    }
    v17 = (unsigned __int64)a2[2];
    if ( v9 + 1 >= v17 )
    {
      v18 = *a2;
      if ( 2 * v17 >= v9 + 1 )
        v19 = 2 * v17;
      else
        v19 = v9 + 1;
      a2[2] = (char *)v19;
      result = (char *)realloc(v18, v19);
      v9 = (__int64)a2[1];
      *a2 = result;
    }
    else
    {
      result = *a2;
    }
    result[v9] = 41;
    ++a2[1];
  }
  v20 = *((_BYTE **)v2 + 4);
  if ( *v20 != 110 )
  {
    v23 = *((_BYTE **)v2 + 5);
    v24 = v23 - v20;
    if ( v23 == v20 )
      goto LABEL_49;
    v25 = a2[1];
    v26 = (size_t)a2[2];
    if ( (unsigned __int64)&v25[v24] >= v26 )
    {
      v38 = *a2;
      if ( 2 * v26 >= (unsigned __int64)&v25[v24] )
        v39 = 2 * v26;
      else
        v39 = (size_t)&v25[v24];
      a2[2] = (char *)v39;
      v27 = (char *)realloc(v38, v39);
      v25 = a2[1];
      *a2 = v27;
    }
    else
    {
      v27 = *a2;
    }
    result = (char *)memmove(&v25[(_QWORD)v27], v20, v24);
    v40 = (size_t)&a2[1][v24];
    goto LABEL_48;
  }
  v21 = a2[1];
  v22 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v21 + 1) >= v22 )
  {
    v28 = *a2;
    if ( 2 * v22 >= (unsigned __int64)(v21 + 1) )
      v29 = 2 * v22;
    else
      v29 = (size_t)(v21 + 1);
    a2[2] = (char *)v29;
    result = (char *)realloc(v28, v29);
    v21 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v21[(_QWORD)result] = 45;
  v30 = (__int64)(a2[1] + 1);
  a2[1] = (char *)v30;
  v31 = *((_QWORD *)v2 + 4);
  v32 = *((_QWORD *)v2 + 5);
  v33 = v32 - v31 - 1;
  if ( (unsigned __int64)(v32 - v31) > 1 )
    v33 = 1;
  v34 = (const void *)(v31 + v33);
  v35 = v32 - (v31 + v33);
  if ( v32 != v31 + v33 )
  {
    v36 = (size_t)a2[2];
    if ( v30 + v35 >= v36 )
    {
      v41 = *a2;
      if ( 2 * v36 >= v30 + v35 )
        v42 = 2 * v36;
      else
        v42 = v30 + v35;
      a2[2] = (char *)v42;
      v37 = (char *)realloc(v41, v42);
      v30 = (__int64)a2[1];
      *a2 = v37;
    }
    else
    {
      v37 = *a2;
    }
    result = (char *)memmove(&v37[v30], v34, v35);
    v40 = (size_t)&a2[1][v35];
LABEL_48:
    a2[1] = (char *)v40;
  }
LABEL_49:
  v43 = *((const void **)v2 + 2);
  v44 = *((_QWORD *)v2 + 3) - (_QWORD)v43;
  if ( v44 - 1 <= 2 )
  {
    v45 = a2[1];
    v46 = (size_t)a2[2];
    if ( (unsigned __int64)&v45[v44] >= v46 )
    {
      v48 = *a2;
      if ( 2 * v46 >= (unsigned __int64)&v45[v44] )
        v49 = 2 * v46;
      else
        v49 = (size_t)&v45[v44];
      a2[2] = (char *)v49;
      v47 = (char *)realloc(v48, v49);
      v45 = a2[1];
      *a2 = v47;
    }
    else
    {
      v47 = *a2;
    }
    result = (char *)memmove(&v45[(_QWORD)v47], v43, v44);
    a2[1] += v44;
  }
  return result;
}
