/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_330A0
// Address: 0x000330A0

//----- (000330A0) --------------------------------------------------------
int __cdecl sub_330A0(int a1, unsigned int a2)
{
  int result; // eax

  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20099);
    BUG();
  }
  result = 0;
  if ( *(_DWORD *)(a1 + 20) > a2 )
    return *(_DWORD *)(a1 + 16) + (a2 << 6);
  return result;
}
// 13E34C: using guessed type int under_debugger;
