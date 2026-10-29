/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B524
// Address: 0x0008B524

//----- (0008B524) --------------------------------------------------------
int sub_8B524()
{
  int v0; // r0

  v0 = sub_8B51C();
  return ITM_addUserCommitAction(_txnal_cow_string_D1_commit, &GLOBAL_OFFSET_TABLE_, 1, 0, v0 - 12);
}
// 13DD8: using guessed type int __fastcall ITM_addUserCommitAction(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// D3000: using guessed type Elf32_Dyn *GLOBAL_OFFSET_TABLE_;
