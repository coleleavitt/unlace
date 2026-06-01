/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EAD90
// Address: 0x00000000000EAD90

//----- (00000000000EAD90) ----------------------------------------------------
char *__fastcall sub_EAD90(_QWORD *a1, char **a2)
{
  _BYTE *v2; // x21
  char *v5; // x8
  unsigned __int64 v6; // x10
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
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

  v2 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 24LL))(v2);
  if ( v2[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v2 + 32LL))(v2, a2);
  v5 = a2[1];
  v6 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v5 + 2) >= v6 )
  {
    v8 = *a2;
    if ( 2 * v6 >= (unsigned __int64)(v5 + 2) )
      v9 = 2 * v6;
    else
      v9 = (size_t)(v5 + 2);
    a2[2] = (char *)v9;
    v7 = (char *)realloc(v8, v9);
    v5 = a2[1];
    *a2 = v7;
  }
  else
  {
    v7 = *a2;
  }
  *(_WORD *)&v5[(_QWORD)v7] = 10272;
  v10 = (__int64)(a2[1] + 2);
  a2[1] = (char *)v10;
  v12 = (_BYTE *)a1[3];
  v11 = (_BYTE *)a1[4];
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
  result[v10] = 41;
  ++a2[1];
  return result;
}
