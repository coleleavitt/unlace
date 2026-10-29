/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059E88
// Address: 0x0000000100059E88

//----- (0000000100059E88) ----------------------------------------------------
__int64 __fastcall sub_100059E88(__int64 a1)
{
  __int64 result; // x0

  result = sub_10005991C();
  if ( result )
    return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)result + 488LL))(result, a1, 0) >= 0;
  return result;
}
