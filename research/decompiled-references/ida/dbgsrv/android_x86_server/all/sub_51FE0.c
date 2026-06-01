/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51FE0
// Address: 0x00051FE0

//----- (00051FE0) --------------------------------------------------------
int __cdecl sub_51FE0(_DWORD *a1, int a2, char a3)
{
  int result; // eax

  result = a2;
  if ( a1[1] - a2 <= 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(277);
    BUG();
  }
  *(_BYTE *)(*a1 + a2) = a3;
  return result;
}
// 13E34C: using guessed type int under_debugger;
