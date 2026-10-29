/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006ACF0
// Address: 0x000000010006ACF0

//----- (000000010006ACF0) ----------------------------------------------------
__int64 __fastcall sub_10006ACF0(_QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 136LL))(*a1);
  *a1 = 0;
  return result;
}
