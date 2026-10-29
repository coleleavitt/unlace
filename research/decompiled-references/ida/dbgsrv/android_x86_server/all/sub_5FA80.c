/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FA80
// Address: 0x0005FA80

//----- (0005FA80) --------------------------------------------------------
int __cdecl sub_5FA80(_DWORD *a1, int a2)
{
  int v2; // eax

  v2 = a2 + a1[12];
  if ( v2 < 0 || (unsigned int)v2 >= a1[4] )
  {
    if ( !(_BYTE)under_debugger )
      interr(287);
    BUG();
  }
  return a1[3] + 20 * v2;
}
// 13E34C: using guessed type int under_debugger;
