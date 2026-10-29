/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C0A0
// Address: 0x0009C0A0

//----- (0009C0A0) --------------------------------------------------------
char *__cdecl sub_9C0A0(unsigned int a1)
{
  if ( a1 > 0x147 || *(unsigned __int16 *)((char *)&word_106E84 + 5 * a1) != 0xFFFF )
  {
    if ( !(_BYTE)under_debugger )
      interr(1474);
    BUG();
  }
  return off_138D38[a1];
}
// 106E84: using guessed type __int16 word_106E84;
// 138D38: using guessed type char *off_138D38[361];
// 13E34C: using guessed type int under_debugger;
