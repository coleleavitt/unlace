/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C933
// Address: 0x0046C933

//----- (0046C933) --------------------------------------------------------
bool __cdecl sub_46C933(int a1)
{
  return !(a1 % 4) && a1 % 100 || !((a1 + 1900) % 400);
}
