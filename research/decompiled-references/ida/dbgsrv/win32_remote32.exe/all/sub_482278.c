/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482278
// Address: 0x00482278

//----- (00482278) --------------------------------------------------------
int __cdecl sub_482278(int a1, int a2)
{
  int result; // eax

  result = a2 & 0x7FF00000;
  if ( (a2 & 0x7FF00000) == 0x7FF00000 )
    return a2;
  return result;
}
