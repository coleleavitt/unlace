/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E55B0
// Address: 0x00000000000E55B0

//----- (00000000000E55B0) ----------------------------------------------------
char *__fastcall sub_E55B0(_QWORD *a1, char **a2)
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
  _BYTE *v17; // x20
  char *v18; // x8
  unsigned __int64 v19; // x10
  char *result; // x0
  char *v21; // x0
  size_t v22; // x1

  v3 = (_BYTE *)a1[2];
  v2 = (_BYTE *)a1[3];
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
  v14[v4] = 40;
  ++a2[1];
  v17 = (_BYTE *)a1[4];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 24LL))(v17, a2);
  if ( v17[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 32LL))(v17, a2);
  v18 = a2[1];
  v19 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v18 + 1) >= v19 )
  {
    v21 = *a2;
    if ( 2 * v19 >= (unsigned __int64)(v18 + 1) )
      v22 = 2 * v19;
    else
      v22 = (size_t)(v18 + 1);
    a2[2] = (char *)v22;
    result = (char *)realloc(v21, v22);
    v18 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v18[(_QWORD)result] = 41;
  ++a2[1];
  return result;
}
