/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idc_filename
// Address: 0x000000000008A970

//----- (000000000008A970) ----------------------------------------------------
char *__fastcall get_idc_filename(char *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax

  v4 = (__int64 *)off_154A80();
  return sub_8A9B0(v4, a1, a2, a3, nullptr, 0);
}
// 154A80: using guessed type __int128 *(*off_154A80)();
