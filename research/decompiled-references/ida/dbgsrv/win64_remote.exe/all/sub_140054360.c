/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054360
// Address: 0x0000000140054360

//----- (0000000140054360) ----------------------------------------------------
__int64 __fastcall sub_140054360(_QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 128LL))(*a1);
  *a1 = 0;
  return result;
}
