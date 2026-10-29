/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D7A0
// Address: 0x000000010005D7A0

//----- (000000010005D7A0) ----------------------------------------------------
__int64 __fastcall sub_10005D7A0(__int64 a1)
{
  __int64 result; // x0

  result = sub_10005D1A8();
  if ( result )
    return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)result + 488LL))(result, a1, 0) >= 0;
  return result;
}
