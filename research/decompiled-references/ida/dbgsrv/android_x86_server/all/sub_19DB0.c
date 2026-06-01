/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19DB0
// Address: 0x00019DB0

//----- (00019DB0) --------------------------------------------------------
int __cdecl sub_19DB0(int (*a1)(void))
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
    return a1();
  return result;
}
