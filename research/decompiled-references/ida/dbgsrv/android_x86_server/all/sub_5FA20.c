/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FA20
// Address: 0x0005FA20

//----- (0005FA20) --------------------------------------------------------
int __cdecl sub_5FA20(_DWORD *a1, int a2)
{
  int v2; // eax

  v2 = a2 + a1[13];
  if ( v2 < 0 || (unsigned int)v2 >= a1[4] )
  {
    if ( !(_BYTE)under_debugger )
      interr(286);
    BUG();
  }
  return a1[3] + 20 * v2;
}
// 13E34C: using guessed type int under_debugger;
