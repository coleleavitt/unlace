/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_header_path
// Address: 0x00075020

//----- (00075020) --------------------------------------------------------
int __cdecl set_header_path(char *a1, char a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)off_13B64C();
  return sub_75060(v2, a1, a2);
}
// 13B64C: using guessed type int (*off_13B64C)();
