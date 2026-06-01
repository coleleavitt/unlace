/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9D40
// Address: 0x00000000000A9D40

//----- (00000000000A9D40) ----------------------------------------------------
__int64 __fastcall sub_A9D40(_QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 136LL))(*a1);
  *a1 = 0;
  return result;
}
