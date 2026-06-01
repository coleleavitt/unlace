/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFB1C
// Address: 0x00000000000DFB1C

//----- (00000000000DFB1C) ----------------------------------------------------
_QWORD *__fastcall sub_DFB1C(_QWORD *result, char **a2)
{
  _BYTE *v2; // x8
  _BYTE *v3; // x21
  size_t v4; // x20
  char *v5; // x8
  size_t v6; // x10
  char *v8; // x0
  char *v9; // x0
  size_t v10; // x1

  v3 = (_BYTE *)result[2];
  v2 = (_BYTE *)result[3];
  v4 = v2 - v3;
  if ( v2 != v3 )
  {
    v5 = a2[1];
    v6 = (size_t)a2[2];
    if ( (unsigned __int64)&v5[v4] >= v6 )
    {
      v9 = *a2;
      if ( 2 * v6 >= (unsigned __int64)&v5[v4] )
        v10 = 2 * v6;
      else
        v10 = (size_t)&v5[v4];
      a2[2] = (char *)v10;
      v8 = (char *)realloc(v9, v10);
      v5 = a2[1];
      *a2 = v8;
    }
    else
    {
      v8 = *a2;
    }
    result = memmove(&v5[(_QWORD)v8], v3, v4);
    a2[1] += v4;
  }
  return result;
}
