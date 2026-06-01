/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79950
// Address: 0x00079950

//----- (00079950) --------------------------------------------------------
int (__cdecl **__cdecl sub_79950(int a1))(int, __int64, int)
{
  if ( a1 != 11 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30214);
    BUG();
  }
  return &off_1382AC;
}
// 1382AC: using guessed type int (__cdecl *off_1382AC)(int, __int64, int);
// 13E34C: using guessed type int under_debugger;
