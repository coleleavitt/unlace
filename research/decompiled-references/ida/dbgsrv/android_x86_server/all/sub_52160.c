/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52160
// Address: 0x00052160

//----- (00052160) --------------------------------------------------------
char __cdecl sub_52160(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(276);
    BUG();
  }
  return *(_BYTE *)(*a1 + a2);
}
// 13E34C: using guessed type int under_debugger;
