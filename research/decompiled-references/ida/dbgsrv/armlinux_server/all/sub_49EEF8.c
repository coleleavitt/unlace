/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49EEF8
// Address: 0x000000000049EEF8

//----- (000000000049EEF8) ----------------------------------------------------
__int64 __fastcall sub_49EEF8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // x0

  result = sub_49DF48(a1, a2, a3, a4);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 16) + 48LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             a4);
  return result;
}
