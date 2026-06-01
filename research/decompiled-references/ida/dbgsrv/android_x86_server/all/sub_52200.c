/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52200
// Address: 0x00052200

//----- (00052200) --------------------------------------------------------
int __cdecl sub_52200(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(276);
    BUG();
  }
  return *(_DWORD *)(*a1 + a2);
}
// 13E34C: using guessed type int under_debugger;
