/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idc_filename
// Address: 0x0000000000085300

//----- (0000000000085300) ----------------------------------------------------
const char *__fastcall get_idc_filename(size_t a1, unsigned __int64 a2, __int64 a3)
{
  __int128 *v6; // x0

  v6 = off_164A88();
  return sub_85344(v6, a1, a2, a3, nullptr, 0);
}
// 164A88: using guessed type __int128 *(*off_164A88)();
