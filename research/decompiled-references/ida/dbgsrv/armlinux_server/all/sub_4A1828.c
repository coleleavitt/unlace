/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1828
// Address: 0x00000000004A1828

//----- (00000000004A1828) ----------------------------------------------------
__int64 __fastcall sub_4A1828(__int64 result, __int64 a2)
{
  if ( (__int64 *)result != std::string::_Rep::_S_empty_rep_storage )
  {
    *(_QWORD *)result = a2;
    *(_DWORD *)(result + 16) = 0;
    *(_BYTE *)(result + a2 + 24) = 0;
  }
  return result;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
