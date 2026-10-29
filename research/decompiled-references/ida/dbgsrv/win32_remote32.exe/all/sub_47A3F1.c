/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A3F1
// Address: 0x0047A3F1

//----- (0047A3F1) --------------------------------------------------------
unsigned int __cdecl sub_47A3F1(int a1, int a2, const char *a3, int a4)
{
  unsigned int result; // eax

  if ( a4 )
    return sub_464310((unsigned int)&a3[a4], (unsigned int)a3, strlen(a3) + 1);
  return result;
}
