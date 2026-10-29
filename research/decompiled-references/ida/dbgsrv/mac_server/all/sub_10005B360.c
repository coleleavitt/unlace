/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B360
// Address: 0x000000010005B360

//----- (000000010005B360) ----------------------------------------------------
__int64 __fastcall sub_10005B360(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 248);
  *(_BYTE *)(result + 732) = 1;
  return result;
}
