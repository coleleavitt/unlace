/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A720
// Address: 0x000000000044A720

//----- (000000000044A720) ----------------------------------------------------
__int64 __fastcall sub_44A720(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = a2;
  return result;
}
