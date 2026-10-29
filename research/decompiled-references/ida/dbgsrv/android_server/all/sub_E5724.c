/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5724
// Address: 0x00000000000E5724

//----- (00000000000E5724) ----------------------------------------------------
char *__fastcall sub_E5724(__int64 a1, char **a2)
{
  _BYTE *v2; // x9
  _BYTE *v3; // x22
  size_t v4; // x8
  size_t v7; // x21
  size_t v8; // x10
  __int64 *v9; // x23
  char *v10; // x0
  char *v11; // x0
  size_t v12; // x1
  __int64 v13; // x10
  char *v14; // x0
  char *v15; // x0
  size_t v16; // x1
  char *v17; // x8
  unsigned __int64 v18; // x10
  char *v19; // x0
  char *v20; // x0
  size_t v21; // x1
  char *v22; // x8
  unsigned __int64 v23; // x10
  char *result; // x0
  char *v25; // x0
  size_t v26; // x1

  v3 = *(_BYTE **)(a1 + 16);
  v2 = *(_BYTE **)(a1 + 24);
  v4 = (size_t)a2[1];
  v7 = v2 - v3;
  if ( v2 == v3 )
  {
    v9 = (__int64 *)(a2 + 2);
  }
  else
  {
    v9 = (__int64 *)(a2 + 2);
    v8 = (size_t)a2[2];
    if ( v4 + v7 >= v8 )
    {
      v11 = *a2;
      if ( 2 * v8 >= v4 + v7 )
        v12 = 2 * v8;
      else
        v12 = v4 + v7;
      a2[2] = (char *)v12;
      v10 = (char *)realloc(v11, v12);
      v4 = (size_t)a2[1];
      *a2 = v10;
    }
    else
    {
      v10 = *a2;
    }
    memmove(&v10[v4], v3, v7);
    v4 = (size_t)&a2[1][v7];
    a2[1] = (char *)v4;
  }
  v13 = *v9;
  if ( v4 + 1 >= *v9 )
  {
    v15 = *a2;
    if ( 2 * v13 >= v4 + 1 )
      v16 = 2 * v13;
    else
      v16 = v4 + 1;
    a2[2] = (char *)v16;
    v14 = (char *)realloc(v15, v16);
    v4 = (size_t)a2[1];
    *a2 = v14;
  }
  else
  {
    v14 = *a2;
  }
  v14[v4] = 60;
  ++a2[1];
  (*(void (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a1 + 32) + 24LL))(*(_QWORD *)(a1 + 32), a2);
  v17 = a2[1];
  v18 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v17 + 2) >= v18 )
  {
    v20 = *a2;
    if ( 2 * v18 >= (unsigned __int64)(v17 + 2) )
      v21 = 2 * v18;
    else
      v21 = (size_t)(v17 + 2);
    a2[2] = (char *)v21;
    v19 = (char *)realloc(v20, v21);
    v17 = a2[1];
    *a2 = v19;
  }
  else
  {
    v19 = *a2;
  }
  *(_WORD *)&v17[(_QWORD)v19] = 10302;
  a2[1] += 2;
  (*(void (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a1 + 40) + 24LL))(*(_QWORD *)(a1 + 40), a2);
  v22 = a2[1];
  v23 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v22 + 1) >= v23 )
  {
    v25 = *a2;
    if ( 2 * v23 >= (unsigned __int64)(v22 + 1) )
      v26 = 2 * v23;
    else
      v26 = (size_t)(v22 + 1);
    a2[2] = (char *)v26;
    result = (char *)realloc(v25, v26);
    v22 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v22[(_QWORD)result] = 41;
  ++a2[1];
  return result;
}
