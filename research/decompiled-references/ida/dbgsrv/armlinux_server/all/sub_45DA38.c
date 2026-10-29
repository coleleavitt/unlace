/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DA38
// Address: 0x000000000045DA38

//----- (000000000045DA38) ----------------------------------------------------
__int64 __fastcall sub_45DA38(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 216LL))(
             a1,
             *(unsigned int *)(a2 + 4),
             1);
  if ( (int)result > 0 )
    return sub_45D9A0(a1, a2);
  return result;
}
