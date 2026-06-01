/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DC90
// Address: 0x0003DC90

//----- (0003DC90) --------------------------------------------------------
char *__cdecl sub_3DC90(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 4 )
    return nullptr;
  else
    return off_137980[(_DWORD)a1 - 1];
}
// 137980: using guessed type char *off_137980[9];
