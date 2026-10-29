/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DA50
// Address: 0x0001DA50

//----- (0001DA50) --------------------------------------------------------
int *__fastcall sub_1DA50(unsigned int a1)
{
  if ( a1 < 0x15 )
    return (int *)off_134720[a1];
  qsnprintf(dword_13BCE0, 64, "tdb error %d", a1);
  return dword_13BCE0;
}
// 134720: using guessed type char *off_134720[21];
// 13BCE0: using guessed type int dword_13BCE0[10];
