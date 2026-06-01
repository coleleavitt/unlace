/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2100
// Address: 0x00000000004A2100

//----- (00000000004A2100) ----------------------------------------------------
char *__fastcall sub_4A2100(unsigned int **a1, __int64 a2)
{
  size_t v3; // x19
  char *result; // x0

  v3 = a2 - (_QWORD)*a1;
  sub_4A1BB8(a1, v3, 1, 0);
  result = (char *)*a1 + v3;
  *(*a1 - 2) = -1;
  return result;
}
