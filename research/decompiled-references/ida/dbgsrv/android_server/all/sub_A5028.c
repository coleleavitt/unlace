/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5028
// Address: 0x00000000000A5028

//----- (00000000000A5028) ----------------------------------------------------
__int64 __fastcall sub_A5028(_QWORD *a1)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 136LL))(*a1);
  *a1 = 0;
  return result;
}
