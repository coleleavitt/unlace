/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EC728
// Address: 0x00000000000EC728

//----- (00000000000EC728) ----------------------------------------------------
char *__fastcall sub_EC728(__int64 a1, char **a2)
{
  char *v4; // x8
  __int64 *v5; // x22
  unsigned __int64 v6; // x10
  char *v7; // x0
  _BYTE *v8; // x21
  char *v9; // x8
  unsigned __int64 v10; // x10
  char *v11; // x0
  char *v12; // x0
  size_t v13; // x1
  __int64 v14; // x8
  _BYTE *v15; // x9
  _BYTE *v16; // x21
  size_t v17; // x20
  size_t v18; // x10
  char *v19; // x0
  char *v20; // x0
  size_t v21; // x1
  unsigned __int64 v22; // x10
  char *v23; // x0
  size_t v24; // x1
  __int64 v25; // x8
  _BYTE *v26; // x21
  _BYTE *v27; // x9
  size_t v28; // x20
  size_t v29; // x10
  char *v30; // x0
  char *v31; // x0
  size_t v32; // x1
  char *result; // x0
  char *v34; // x0
  size_t v35; // x1

  if ( *(_BYTE *)(a1 + 40) )
  {
    v5 = (__int64 *)(a2 + 1);
    v4 = a2[1];
    v6 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v4 + 13) >= v6 )
    {
      v12 = *a2;
      if ( 2 * v6 >= (unsigned __int64)(v4 + 13) )
        v13 = 2 * v6;
      else
        v13 = (size_t)(v4 + 13);
      a2[2] = (char *)v13;
      v7 = (char *)realloc(v12, v13);
      v4 = a2[1];
      *a2 = v7;
    }
    else
    {
      v7 = *a2;
    }
    qmemcpy(&v4[(_QWORD)v7], "pixel vector[", 13);
    v14 = *v5 + 13;
    *v5 = v14;
    v16 = *(_BYTE **)(a1 + 24);
    v15 = *(_BYTE **)(a1 + 32);
    v17 = v15 - v16;
    if ( v15 != v16 )
    {
      v18 = (size_t)a2[2];
      if ( v14 + v17 >= v18 )
      {
        v20 = *a2;
        if ( 2 * v18 >= v14 + v17 )
          v21 = 2 * v18;
        else
          v21 = v14 + v17;
        a2[2] = (char *)v21;
        v19 = (char *)realloc(v20, v21);
        v14 = (__int64)a2[1];
        *a2 = v19;
      }
      else
      {
        v19 = *a2;
      }
      memmove(&v19[v14], v16, v17);
      v14 = *v5 + v17;
      *v5 = v14;
    }
    v22 = (unsigned __int64)a2[2];
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 16);
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 24LL))(v8, a2);
    if ( v8[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 32LL))(v8, a2);
    v5 = (__int64 *)(a2 + 1);
    v9 = a2[1];
    v10 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v9 + 8) >= v10 )
    {
      v23 = *a2;
      if ( 2 * v10 >= (unsigned __int64)(v9 + 8) )
        v24 = 2 * v10;
      else
        v24 = (size_t)(v9 + 8);
      a2[2] = (char *)v24;
      v11 = (char *)realloc(v23, v24);
      v9 = a2[1];
      *a2 = v11;
    }
    else
    {
      v11 = *a2;
    }
    *(_QWORD *)&v9[(_QWORD)v11] = 0x5B726F7463657620LL;
    v25 = *v5 + 8;
    *v5 = v25;
    v26 = *(_BYTE **)(a1 + 24);
    if ( v26 )
    {
      v27 = *(_BYTE **)(a1 + 32);
      if ( v27 )
      {
        v28 = v27 - v26;
        if ( v27 != v26 )
        {
          v29 = (size_t)a2[2];
          if ( v25 + v28 >= v29 )
          {
            v31 = *a2;
            if ( 2 * v29 >= v25 + v28 )
              v32 = 2 * v29;
            else
              v32 = v25 + v28;
            a2[2] = (char *)v32;
            v30 = (char *)realloc(v31, v32);
            v25 = (__int64)a2[1];
            *a2 = v30;
          }
          else
          {
            v30 = *a2;
          }
          memmove(&v30[v25], v26, v28);
          *v5 += v28;
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)v26 + 24LL))(*(_QWORD *)(a1 + 24), a2);
        if ( v26[9] != 1 )
          (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v26 + 32LL))(v26, a2);
      }
    }
    v14 = (__int64)a2[1];
    v22 = (unsigned __int64)a2[2];
  }
  if ( v14 + 1 >= v22 )
  {
    v34 = *a2;
    if ( 2 * v22 >= v14 + 1 )
      v35 = 2 * v22;
    else
      v35 = v14 + 1;
    a2[2] = (char *)v35;
    result = (char *)realloc(v34, v35);
    v14 = (__int64)a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  result[v14] = 93;
  ++*v5;
  return result;
}
