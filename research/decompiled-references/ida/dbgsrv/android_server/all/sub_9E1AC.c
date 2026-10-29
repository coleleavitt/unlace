/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E1AC
// Address: 0x000000000009E1AC

//----- (000000000009E1AC) ----------------------------------------------------
__int64 __fastcall sub_9E1AC(__int64 a1)
{
  __int64 result; // x0

  result = sub_9DBD8();
  if ( result )
    return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)result + 488LL))(result, a1, 0) >= 0;
  return result;
}
