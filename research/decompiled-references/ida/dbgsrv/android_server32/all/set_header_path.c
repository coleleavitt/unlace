/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_header_path
// Address: 0x00055968

//----- (00055968) --------------------------------------------------------
int __fastcall set_header_path(char *a1, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)off_DD644(off_DD644);
  return sub_55988(v4, a1, a2);
}
// DD644: using guessed type int (__fastcall *off_DD644)(_DWORD);
