/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FAE0
// Address: 0x0807FAE0

//----- (0807FAE0) --------------------------------------------------------
unsigned int __cdecl sub_807FAE0(char **a1, const void *a2, size_t a3)
{
  unsigned int result; // eax

  result = (unsigned int)a1;
  if ( a3 )
    return sub_807E3C0(a1, a2, a3);
  return result;
}
