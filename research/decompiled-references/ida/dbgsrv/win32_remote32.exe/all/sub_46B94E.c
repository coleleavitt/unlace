/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B94E
// Address: 0x0046B94E

//----- (0046B94E) --------------------------------------------------------
int *__cdecl sub_46B94E(int a1)
{
  int v1; // esi
  int *result; // eax

  *sub_46B971() = a1;
  v1 = sub_46B90B(a1);
  result = sub_46B984();
  *result = v1;
  return result;
}
