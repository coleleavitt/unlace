/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C78C
// Address: 0x0001C78C

//----- (0001C78C) --------------------------------------------------------
int *__fastcall sub_1C78C(unsigned int a1)
{
  if ( a1 < 0x15 )
    return (int *)off_D6380[a1];
  qsnprintf(dword_DE2F0, 64, "tdb error %d");
  return dword_DE2F0;
}
// D6380: using guessed type char *off_D6380[21];
// DE2F0: using guessed type int dword_DE2F0[16];
