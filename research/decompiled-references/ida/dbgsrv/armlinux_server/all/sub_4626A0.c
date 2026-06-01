/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4626A0
// Address: 0x00000000004626A0

//----- (00000000004626A0) ----------------------------------------------------
__int64 __fastcall sub_4626A0(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 440);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)result + 160LL))(result, 0);
  return result;
}
