/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A22D0
// Address: 0x00000000004A22D0

//----- (00000000004A22D0) ----------------------------------------------------
char *__fastcall sub_4A22D0(unsigned int **a1, __int64 a2, unsigned __int8 a3)
{
  size_t v4; // x19
  char *result; // x0

  v4 = a2 - (_QWORD)*a1;
  sub_4A2198(a1, v4, 0, 1u, a3);
  result = (char *)*a1 + v4;
  *(*a1 - 2) = -1;
  return result;
}
