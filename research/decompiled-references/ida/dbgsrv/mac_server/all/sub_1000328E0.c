/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000328E0
// Address: 0x00000001000328E0

//----- (00000001000328E0) ----------------------------------------------------
__int64 __fastcall sub_1000328E0(const char *a1, __int64 a2, const char *a3, __int64 a4)
{
  _QWORD v5[2]; // [rsp+8h] [rbp-18h] BYREF

  if ( !a3 )
    return 0;
  v5[0] = &off_1000A8CF0;
  v5[1] = a2;
  return compile_idc_snippet(a1, a3, a4, (__int64)v5, 0);
}
// 1000A8CF0: using guessed type __int64 (__fastcall *off_1000A8CF0)();
