/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52090
// Address: 0x00052090

//----- (00052090) --------------------------------------------------------
int __cdecl sub_52090(_DWORD *a1, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( a1[1] - a2 <= 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(277);
    BUG();
  }
  *(_DWORD *)(*a1 + a2) = a3;
  return result;
}
// 13E34C: using guessed type int under_debugger;
