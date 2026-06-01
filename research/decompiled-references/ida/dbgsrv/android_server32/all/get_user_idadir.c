/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_user_idadir
// Address: 0x0007A014

//----- (0007A014) --------------------------------------------------------
char *get_user_idadir()
{
  sub_7A038();
  if ( *(_DWORD *)(dword_DF528 + 4) )
    return *(char **)dword_DF528;
  else
    return &byte_B3CBE;
}
// B3CBE: using guessed type char byte_B3CBE;
// DF528: using guessed type int dword_DF528;
