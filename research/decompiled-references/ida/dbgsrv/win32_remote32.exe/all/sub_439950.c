/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439950
// Address: 0x00439950

//----- (00439950) --------------------------------------------------------
bool __cdecl sub_439950(unsigned int a1, char a2)
{
  return a1 - 48 <= 9 || a2 && (a1 >= 0x41 && a1 <= 0x46 || a1 - 97 <= 5);
}
