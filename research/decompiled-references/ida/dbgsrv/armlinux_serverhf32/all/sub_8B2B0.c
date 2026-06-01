/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B2B0
// Address: 0x0008B2B0

//----- (0008B2B0) --------------------------------------------------------
int sub_8B2B0()
{
  int v0; // r0

  v0 = sub_8B2A8();
  return ITM_addUserCommitAction(_txnal_cow_string_D1_commit, &GLOBAL_OFFSET_TABLE_, 1, 0, v0 - 12);
}
// 13C90: using guessed type int __fastcall ITM_addUserCommitAction(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// D2000: using guessed type Elf32_Dyn *GLOBAL_OFFSET_TABLE_;
