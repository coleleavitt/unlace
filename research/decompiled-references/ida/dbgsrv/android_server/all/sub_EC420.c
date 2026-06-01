/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EC420
// Address: 0x00000000000EC420

//----- (00000000000EC420) ----------------------------------------------------
char *__fastcall sub_EC420(_QWORD *a1, char **a2)
{
  _BYTE *v2; // x21
  char *v5; // x8
  unsigned __int64 v6; // x10
  char *result; // x0
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

  v2 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 24LL))(v2);
  if ( v2[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v2 + 32LL))(v2, a2);
  v5 = a2[1];
  v6 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v5 + 1) >= v6 )
  {
    v8 = *a2;
    if ( 2 * v6 >= (unsigned __int64)(v5 + 1) )
      v9 = 2 * v6;
    else
      v9 = (size_t)(v5 + 1);
    a2[2] = (char *)v9;
    result = (char *)realloc(v8, v9);
    v5 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v5[(_QWORD)result] = 32;
  v10 = (__int64)(a2[1] + 1);
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
    result = (char *)memmove(&v15[v10], v12, v13);
    a2[1] += v13;
  }
  return result;
}
