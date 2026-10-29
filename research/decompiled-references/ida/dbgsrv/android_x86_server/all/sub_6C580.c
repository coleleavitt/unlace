/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C580
// Address: 0x0006C580

//----- (0006C580) --------------------------------------------------------
int __cdecl sub_6C580(int a1)
{
  int v1; // esi

  if ( *(_BYTE *)(a1 + 272) )
  {
    if ( !(_BYTE)under_debugger )
      interr(302);
    BUG();
  }
  v1 = *(_DWORD *)(a1 + 248);
  *(_DWORD *)(a1 + 248) = 0;
  sub_69C70(a1, 0, 0);
  return v1;
}
// 13E34C: using guessed type int under_debugger;
