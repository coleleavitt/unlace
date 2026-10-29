/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2CF08
// Address: 0x0002CF08

//----- (0002CF08) --------------------------------------------------------
int __fastcall sub_2CF08(int a1, int a2, int a3)
{
  int result; // r0

  if ( (unsigned int)(a2 - 1) >= 0x19 )
  {
    if ( !under_debugger )
      interr(20055);
    __debugbreak();
  }
  result = a1 + 4 * a2;
  *(_DWORD *)(result + 28) = a3;
  return result;
}
// E0550: using guessed type char under_debugger;
