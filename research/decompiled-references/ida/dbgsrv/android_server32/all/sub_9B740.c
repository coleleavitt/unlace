/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B740
// Address: 0x0009B740

//----- (0009B740) --------------------------------------------------------
int __fastcall sub_9B740(int *a1, int a2, int a3)
{
  int result; // r0

  while ( 1 )
  {
    result = *a1;
    if ( a2 != *a1 )
      break;
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return result;
}
