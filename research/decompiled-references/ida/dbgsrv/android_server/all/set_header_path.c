/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_header_path
// Address: 0x0000000000085EE4

//----- (0000000000085EE4) ----------------------------------------------------
__int64 __fastcall set_header_path(char *a1, char a2)
{
  __int128 *v4; // x0

  v4 = off_164A88();
  return sub_85F18(v4, a1, a2 & 1);
}
// 164A88: using guessed type __int128 *(*off_164A88)();
