/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D738
// Address: 0x000000010004D738

//----- (000000010004D738) ----------------------------------------------------
__int64 __fastcall sub_10004D738(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 440);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)result + 160LL))(result, 0);
  return result;
}
