/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DAC0
// Address: 0x000000010002DAC0

//----- (000000010002DAC0) ----------------------------------------------------
__int64 __fastcall sub_10002DAC0(
        char a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( !a3 )
    return 0;
  v9[0] = &off_10009E498;
  v9[1] = a2;
  return compile_idc_snippet(a1, a3, a4, (__int64)v9, 0, a6, a7, a8);
}
// 10009E498: using guessed type __int64 (__fastcall *off_10009E498)();
