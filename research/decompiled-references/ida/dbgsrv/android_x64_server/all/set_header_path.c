/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_header_path
// Address: 0x000000000008B6A0

//----- (000000000008B6A0) ----------------------------------------------------
__int64 __fastcall set_header_path(const char *a1, int a2)
{
  __int128 *v2; // rax

  v2 = off_154A80();
  return sub_8B6D0(v2, a1, a2);
}
// 154A80: using guessed type __int128 *(*off_154A80)();
