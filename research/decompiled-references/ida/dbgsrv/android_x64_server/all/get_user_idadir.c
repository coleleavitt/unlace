/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_user_idadir
// Address: 0x00000000000BD990

//----- (00000000000BD990) ----------------------------------------------------
const char *get_user_idadir()
{
  sub_BD9C0();
  if ( *(_QWORD *)(xmmword_157B00 + 8) )
    return *(const char **)xmmword_157B00;
  else
    return s1;
}
// 157B00: using guessed type __int128 xmmword_157B00;
