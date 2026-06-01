/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5008
// Address: 0x00000000000A5008

//----- (00000000000A5008) ----------------------------------------------------
__int64 __fastcall sub_A5008(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  *a1 = a2;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 128LL))(a2, a3 & 1, a4);
}
