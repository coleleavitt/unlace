/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4098
// Address: 0x00000000000E4098

//----- (00000000000E4098) ----------------------------------------------------
void *__fastcall sub_E4098(__int64 a1, char **a2)
{
  int v2; // w21
  char *v3; // x8
  size_t v4; // x10
  size_t v6; // x20
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
  char *v10; // x0
  const char *v11; // x1
  void *result; // x0

  v2 = *(unsigned __int8 *)(a1 + 12);
  v3 = a2[1];
  v4 = (size_t)a2[2];
  if ( *(_BYTE *)(a1 + 12) )
    v6 = 4;
  else
    v6 = 5;
  if ( (unsigned __int64)&v3[v6] >= v4 )
  {
    v8 = *a2;
    if ( 2 * v4 >= (unsigned __int64)&v3[v6] )
      v9 = 2 * v4;
    else
      v9 = (size_t)&v3[v6];
    a2[2] = (char *)v9;
    v7 = (char *)realloc(v8, v9);
    v3 = a2[1];
    *a2 = v7;
  }
  else
  {
    v7 = *a2;
  }
  v10 = &v3[(_QWORD)v7];
  if ( v2 )
    v11 = "true";
  else
    v11 = "false";
  result = memmove(v10, v11, v6);
  a2[1] += v6;
  return result;
}
