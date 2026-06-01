/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D100
// Address: 0x0002D100

//----- (0002D100) --------------------------------------------------------
int __fastcall sub_2D100(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) >= 0x19 )
  {
    if ( !under_debugger )
      interr(20054);
    __debugbreak();
  }
  return *(_DWORD *)(a1 + 4 * a2 + 28);
}
// E0550: using guessed type char under_debugger;
