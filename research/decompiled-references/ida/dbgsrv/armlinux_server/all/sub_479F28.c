/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479F28
// Address: 0x0000000000479F28

//----- (0000000000479F28) ----------------------------------------------------
__int64 __fastcall sub_479F28(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  *(_QWORD *)(a1 + 88) = a2;
  result = (unsigned int)*__errno_location();
  *(_DWORD *)(a1 + 96) = result;
  return result;
}
