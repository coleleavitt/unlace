/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BAD0
// Address: 0x000000000006BAD0

//----- (000000000006BAD0) ----------------------------------------------------
__int64 __fastcall sub_6BAD0(const char *a1, __int64 a2, _BYTE *a3, __int64 a4, double a5, __m128 a6)
{
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[2] = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v7[0] = &off_14DE60;
  v7[1] = a2;
  return compile_idc_snippet(a1, a3, a4, (__int64)v7, 0, a5, a6);
}
// 14DE60: using guessed type __int64 (__fastcall *off_14DE60)();
