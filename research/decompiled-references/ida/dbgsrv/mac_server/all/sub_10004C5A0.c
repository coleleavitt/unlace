/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004C5A0
// Address: 0x000000010004C5A0

//----- (000000010004C5A0) ----------------------------------------------------
__int64 __fastcall sub_10004C5A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 152) = a2;
  return result;
}
