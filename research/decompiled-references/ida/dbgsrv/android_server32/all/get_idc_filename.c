/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idc_filename
// Address: 0x000550F0

//----- (000550F0) --------------------------------------------------------
unsigned __int8 *__fastcall get_idc_filename(char *a1, int a2, int a3)
{
  int *v6; // r0

  v6 = (int *)off_DD644(off_DD644);
  return sub_55120(v6, a1, a2, a3, nullptr, 0);
}
// DD644: using guessed type int (__fastcall *off_DD644)(_DWORD);
