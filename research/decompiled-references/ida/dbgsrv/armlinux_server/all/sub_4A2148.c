/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2148
// Address: 0x00000000004A2148

//----- (00000000004A2148) ----------------------------------------------------
char *__fastcall sub_4A2148(unsigned int **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x2
  char *result; // x0
  size_t v6; // x19

  v3 = a3 - a2;
  if ( !v3 )
    return (char *)a2;
  v6 = a2 - (_QWORD)*a1;
  sub_4A1BB8(a1, v6, v3, 0);
  result = (char *)*a1 + v6;
  *(*a1 - 2) = -1;
  return result;
}
