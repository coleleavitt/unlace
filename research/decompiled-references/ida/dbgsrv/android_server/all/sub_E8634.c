/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8634
// Address: 0x00000000000E8634

//----- (00000000000E8634) ----------------------------------------------------
char *__fastcall sub_E8634(_QWORD *a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  _BYTE *v9; // x21
  char *v10; // x8
  unsigned __int64 v11; // x10
  char *result; // x0
  char *v13; // x0
  size_t v14; // x1
  __int64 v15; // x8
  _BYTE *v16; // x9
  _BYTE *v17; // x21
  size_t v18; // x20
  size_t v19; // x10
  char *v20; // x0
  char *v21; // x0
  size_t v22; // x1

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v2 + 1) >= v3 )
  {
    v7 = *a2;
    if ( 2 * v3 >= (unsigned __int64)(v2 + 1) )
      v8 = 2 * v3;
    else
      v8 = (size_t)(v2 + 1);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v2 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  v2[(_QWORD)v6] = 40;
  ++a2[1];
  v9 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 24LL))(v9, a2);
  if ( v9[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v9 + 32LL))(v9, a2);
  v10 = a2[1];
  v11 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v10 + 1) >= v11 )
  {
    v13 = *a2;
    if ( 2 * v11 >= (unsigned __int64)(v10 + 1) )
      v14 = 2 * v11;
    else
      v14 = (size_t)(v10 + 1);
    a2[2] = (char *)v14;
    result = (char *)realloc(v13, v14);
    v10 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v10[(_QWORD)result] = 41;
  v15 = (__int64)(a2[1] + 1);
  a2[1] = (char *)v15;
  v17 = (_BYTE *)a1[3];
  v16 = (_BYTE *)a1[4];
  v18 = v16 - v17;
  if ( v16 != v17 )
  {
    v19 = (size_t)a2[2];
    if ( v15 + v18 >= v19 )
    {
      v21 = *a2;
      if ( 2 * v19 >= v15 + v18 )
        v22 = 2 * v19;
      else
        v22 = v15 + v18;
      a2[2] = (char *)v22;
      v20 = (char *)realloc(v21, v22);
      v15 = (__int64)a2[1];
      *a2 = v20;
    }
    else
    {
      v20 = *a2;
    }
    result = (char *)memmove(&v20[v15], v17, v18);
    a2[1] += v18;
  }
  return result;
}
