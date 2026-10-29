/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004C5C0
// Address: 0x000000010004C5C0

//----- (000000010004C5C0) ----------------------------------------------------
__int64 __fastcall sub_10004C5C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = a2;
  return result;
}
