/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E402
// Address: 0x0047E402

//----- (0047E402) --------------------------------------------------------
void __cdecl sub_47E402(LPVOID *a1)
{
  if ( a1 )
  {
    if ( *a1 != off_4B6800[0] )
      sub_479216(*a1);
    if ( a1[1] != off_4B6804[0] )
      sub_479216(a1[1]);
    if ( a1[2] != off_4B6808[0] )
      sub_479216(a1[2]);
    if ( a1[12] != off_4B6830[0] )
      sub_479216(a1[12]);
    if ( a1[13] != off_4B6834[0] )
      sub_479216(a1[13]);
  }
}
// 4B6800: using guessed type int *off_4B6800[10];
// 4B6804: using guessed type int *off_4B6804[9];
// 4B6808: using guessed type int *off_4B6808[8];
// 4B6830: using guessed type int *off_4B6830[8];
// 4B6834: using guessed type int *off_4B6834[7];
