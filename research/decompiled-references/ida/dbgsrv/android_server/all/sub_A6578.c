/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6578
// Address: 0x00000000000A6578

//----- (00000000000A6578) ----------------------------------------------------
_DWORD *__fastcall sub_A6578(__int64 a1, __int64 a2)
{
  _DWORD *result; // x0

  *(_QWORD *)(a1 + 88) = a2;
  result = (_DWORD *)__errno(a1);
  *(_DWORD *)(a1 + 96) = *result;
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
