/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A4458
// Address: 0x00000000004A4458

//----- (00000000004A4458) ----------------------------------------------------
__int64 __fastcall sub_4A4458(__int64 a1)
{
  __int64 v1; // x0

  v1 = j___ITM_RU8(a1);
  return _ITM_addUserCommitAction(_txnal_cow_string_D1_commit, 1, v1 - 24);
}
// 405FB0: using guessed type __int64 __fastcall _ITM_addUserCommitAction(_QWORD, _QWORD, _QWORD);
// 4A4448: using guessed type __int64 __fastcall j___ITM_RU8(_QWORD);
