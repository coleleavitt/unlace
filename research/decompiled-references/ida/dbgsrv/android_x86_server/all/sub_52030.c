/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52030
// Address: 0x00052030

//----- (00052030) --------------------------------------------------------
int __cdecl sub_52030(_DWORD *a1, int a2, __int16 a3)
{
  int result; // eax

  result = a2;
  if ( a1[1] - a2 <= 1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(277);
    BUG();
  }
  *(_WORD *)(*a1 + a2) = a3;
  return result;
}
// 13E34C: using guessed type int under_debugger;
