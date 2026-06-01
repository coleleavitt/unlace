/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E973C
// Address: 0x00000000000E973C

//----- (00000000000E973C) ----------------------------------------------------
char *__fastcall sub_E973C(__int64 a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  __int64 v9; // x8
  _BYTE *v10; // x9
  _BYTE *v11; // x21
  size_t v12; // x20
  size_t v13; // x10
  char *v14; // x0
  char *v15; // x0
  size_t v16; // x1
  unsigned __int64 v17; // x10
  char *result; // x0
  char *v19; // x0
  size_t v20; // x1

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v2 + 8) >= v3 )
  {
    v7 = *a2;
    if ( 2 * v3 >= (unsigned __int64)(v2 + 8) )
      v8 = 2 * v3;
    else
      v8 = (size_t)(v2 + 8);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v2 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  *(_QWORD *)&v2[(_QWORD)v6] = 0x64656D616E6E7527LL;
  v9 = (__int64)(a2[1] + 8);
  a2[1] = (char *)v9;
  v11 = *(_BYTE **)(a1 + 16);
  v10 = *(_BYTE **)(a1 + 24);
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
    v19 = *a2;
    if ( 2 * v17 >= v9 + 1 )
      v20 = 2 * v17;
    else
      v20 = v9 + 1;
    a2[2] = (char *)v20;
    result = (char *)realloc(v19, v20);
    v9 = (__int64)a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  result[v9] = 39;
  ++a2[1];
  return result;
}
