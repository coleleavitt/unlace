/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70E98
// Address: 0x00070E98

//----- (00070E98) --------------------------------------------------------
bool __fastcall sub_70E98(unsigned int a1)
{
  if ( a1 >> 3 >= 0x29 )
  {
    if ( !under_debugger )
      interr(1461);
    __debugbreak();
  }
  return *((_BYTE *)&dword_C5BBC + 5 * a1 + 4) != 0;
}
// C5BBC: using guessed type int dword_C5BBC;
// E0550: using guessed type char under_debugger;
