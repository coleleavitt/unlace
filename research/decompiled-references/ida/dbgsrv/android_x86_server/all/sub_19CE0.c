/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19CE0
// Address: 0x00019CE0

//----- (00019CE0) --------------------------------------------------------
int __cdecl sub_19CE0(int a1, int a2, int *a3)
{
  int result; // eax
  int v4; // ecx

  result = 13;
  if ( !a2 )
  {
    v4 = ps_pglobal_lookup(0, nullptr, off_13B000, a3);
    result = 13;
    if ( !v4 )
      return 0;
  }
  return result;
}
// 13B000: using guessed type char *off_13B000;
