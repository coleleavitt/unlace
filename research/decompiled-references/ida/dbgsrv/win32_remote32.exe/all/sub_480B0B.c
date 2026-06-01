/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480B0B
// Address: 0x00480B0B

//----- (00480B0B) --------------------------------------------------------
int __cdecl sub_480B0B(unsigned int a1)
{
  int result; // eax

  result = (a1 >> 14) & 0x300;
  if ( result != ((a1 >> 22) & 0x300) )
    return -1;
  return result;
}
