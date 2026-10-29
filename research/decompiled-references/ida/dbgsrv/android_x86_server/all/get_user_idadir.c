/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_user_idadir
// Address: 0x000AA870

//----- (000AA870) --------------------------------------------------------
char *get_user_idadir()
{
  sub_AA8B0();
  if ( *(_DWORD *)(dword_13D324 + 4) )
    return *(char **)dword_13D324;
  else
    return byte_EF875;
}
// 13D324: using guessed type int dword_13D324;
