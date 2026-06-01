/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FCF0
// Address: 0x0003FCF0

//----- (0003FCF0) --------------------------------------------------------
int __cdecl sub_3FCF0(int a1, int a2)
{
  int result; // eax

  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20098);
    BUG();
  }
  result = 0;
  if ( a2 == 2 )
    return *(_DWORD *)(a1 + 12);
  return result;
}
// 13E34C: using guessed type int under_debugger;
