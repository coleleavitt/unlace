/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_521B0
// Address: 0x000521B0

//----- (000521B0) --------------------------------------------------------
int __cdecl sub_521B0(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(276);
    BUG();
  }
  return *(unsigned __int16 *)(*a1 + a2);
}
// 13E34C: using guessed type int under_debugger;
