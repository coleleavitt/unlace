/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000044B0
// Address: 0x00000001000044B0

//----- (00000001000044B0) ----------------------------------------------------
__int64 __fastcall sub_1000044B0(__int64 a1, __int64 a2)
{
  *(_BYTE *)(a2 + 16) = 1;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
}
