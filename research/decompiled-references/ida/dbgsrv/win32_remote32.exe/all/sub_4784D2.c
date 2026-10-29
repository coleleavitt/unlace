/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4784D2
// Address: 0x004784D2

//----- (004784D2) --------------------------------------------------------
char sub_4784D2()
{
  dword_4B6020 = sub_478F20((int)sub_47818D);
  if ( dword_4B6020 == -1 )
    return 0;
  if ( !sub_47841D() )
  {
    sub_4784FE();
    return 0;
  }
  return 1;
}
// 4B6020: using guessed type int dword_4B6020;
