/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70FA0
// Address: 0x00070FA0

//----- (00070FA0) --------------------------------------------------------
char *__fastcall sub_70FA0(unsigned int a1)
{
  if ( a1 >> 3 > 0x28
    || (*((unsigned __int8 *)&dword_C5BBC + 5 * a1 + 1) << 8) + *((unsigned __int8 *)&dword_C5BBC + 5 * a1) != 0xFFFF )
  {
    if ( !under_debugger )
      interr(1474);
    __debugbreak();
  }
  return off_DAB84[a1];
}
// C5BBC: using guessed type int dword_C5BBC;
// DAB84: using guessed type char *off_DAB84[360];
// E0550: using guessed type char under_debugger;
