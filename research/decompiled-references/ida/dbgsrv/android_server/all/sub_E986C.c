/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E986C
// Address: 0x00000000000E986C

//----- (00000000000E986C) ----------------------------------------------------
char *__fastcall sub_E986C(_QWORD *a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  char *v9; // x8
  __int64 v10; // x8
  _BYTE *v11; // x9
  _BYTE *v12; // x22
  size_t v13; // x21
  size_t v14; // x10
  char *v15; // x0
  char *v16; // x0
  size_t v17; // x1
  unsigned __int64 v18; // x10
  char *v19; // x0
  char *v20; // x0
  size_t v21; // x1
  __int64 v22; // x22
  __int64 v23; // x23
  char v24; // w24
  __int64 v25; // x26
  unsigned __int64 v26; // x9
  char *v27; // x0
  __int64 v28; // x8
  char *v29; // x0
  unsigned __int64 v30; // x9
  size_t v31; // x1
  _BYTE *v32; // x21
  unsigned __int64 v33; // x9
  char *result; // x0
  char *v35; // x0
  unsigned __int64 v36; // x9
  size_t v37; // x1

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v2 + 7) >= v3 )
  {
    v7 = *a2;
    if ( 2 * v3 >= (unsigned __int64)(v2 + 7) )
      v8 = 2 * v3;
    else
      v8 = (size_t)(v2 + 7);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v2 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  v9 = &v2[(_QWORD)v6];
  v9[6] = 97;
  *((_WORD *)v9 + 2) = 25698;
  *(_DWORD *)v9 = 1835101223;
  v10 = (__int64)(a2[1] + 7);
  a2[1] = (char *)v10;
  v12 = (_BYTE *)a1[4];
  v11 = (_BYTE *)a1[5];
  v13 = v11 - v12;
  if ( v11 != v12 )
  {
    v14 = (size_t)a2[2];
    if ( v10 + v13 >= v14 )
    {
      v16 = *a2;
      if ( 2 * v14 >= v10 + v13 )
        v17 = 2 * v14;
      else
        v17 = v10 + v13;
      a2[2] = (char *)v17;
      v15 = (char *)realloc(v16, v17);
      v10 = (__int64)a2[1];
      *a2 = v15;
    }
    else
    {
      v15 = *a2;
    }
    memmove(&v15[v10], v12, v13);
    v10 = (__int64)&a2[1][v13];
    a2[1] = (char *)v10;
  }
  v18 = (unsigned __int64)a2[2];
  if ( v10 + 2 >= v18 )
  {
    v20 = *a2;
    if ( 2 * v18 >= v10 + 2 )
      v21 = 2 * v18;
    else
      v21 = v10 + 2;
    a2[2] = (char *)v21;
    v19 = (char *)realloc(v20, v21);
    v10 = (__int64)a2[1];
    *a2 = v19;
  }
  else
  {
    v19 = *a2;
  }
  *(_WORD *)&v19[v10] = 10279;
  v22 = (__int64)(a2[1] + 2);
  a2[1] = (char *)v22;
  if ( a1[3] )
  {
    v23 = 0;
    v24 = 1;
    do
    {
      v25 = v22;
      if ( (v24 & 1) == 0 )
      {
        v26 = (unsigned __int64)a2[2];
        if ( v22 + 2 >= v26 )
        {
          v29 = *a2;
          v30 = 2 * v26;
          if ( v30 >= v22 + 2 )
            v31 = v30;
          else
            v31 = v22 + 2;
          a2[2] = (char *)v31;
          v27 = (char *)realloc(v29, v31);
          v28 = (__int64)a2[1];
          *a2 = v27;
        }
        else
        {
          v27 = *a2;
          v28 = v22;
        }
        *(_WORD *)&v27[v28] = 8236;
        v25 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v25;
      }
      v32 = *(_BYTE **)(a1[2] + 8 * v23);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v32 + 24LL))(v32, a2);
      if ( v32[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v32 + 32LL))(v32, a2);
      if ( (char *)v25 == a2[1] )
      {
        a2[1] = (char *)v22;
      }
      else
      {
        v24 = 0;
        v22 = (__int64)a2[1];
      }
      ++v23;
    }
    while ( v23 != a1[3] );
  }
  v33 = (unsigned __int64)a2[2];
  if ( v22 + 1 >= v33 )
  {
    v35 = *a2;
    v36 = 2 * v33;
    if ( v36 >= v22 + 1 )
      v37 = v36;
    else
      v37 = v22 + 1;
    a2[2] = (char *)v37;
    result = (char *)realloc(v35, v37);
    v22 = (__int64)a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  result[v22] = 41;
  ++a2[1];
  return result;
}
