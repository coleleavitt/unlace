/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E95F8
// Address: 0x00000000000E95F8

//----- (00000000000E95F8) ----------------------------------------------------
char *__fastcall sub_E95F8(__int64 a1, char **a2)
{
  char *v4; // x8
  unsigned __int64 v5; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  char *v9; // x8
  __int64 v10; // x8
  _BYTE *v11; // x9
  _BYTE *v12; // x21
  size_t v13; // x20
  size_t v14; // x10
  char *v15; // x0
  char *v16; // x0
  size_t v17; // x1
  unsigned __int64 v18; // x10
  char *result; // x0
  char *v20; // x0
  size_t v21; // x1

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v4 = a2[1];
  v5 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v4 + 5) >= v5 )
  {
    v7 = *a2;
    if ( 2 * v5 >= (unsigned __int64)(v4 + 5) )
      v8 = 2 * v5;
    else
      v8 = (size_t)(v4 + 5);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v4 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  v9 = &v4[(_QWORD)v6];
  v9[4] = 58;
  *(_DWORD *)v9 = 1768055131;
  v10 = (__int64)(a2[1] + 5);
  a2[1] = (char *)v10;
  v12 = *(_BYTE **)(a1 + 24);
  v11 = *(_BYTE **)(a1 + 32);
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
  if ( v10 + 1 >= v18 )
  {
    v20 = *a2;
    if ( 2 * v18 >= v10 + 1 )
      v21 = 2 * v18;
    else
      v21 = v10 + 1;
    a2[2] = (char *)v21;
    result = (char *)realloc(v20, v21);
    v10 = (__int64)a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  result[v10] = 93;
  ++a2[1];
  return result;
}
