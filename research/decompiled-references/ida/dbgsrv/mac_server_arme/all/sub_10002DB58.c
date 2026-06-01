/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DB58
// Address: 0x000000010002DB58

//----- (000000010002DB58) ----------------------------------------------------
__int64 __fastcall sub_10002DB58(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, int a4, char **a5)
{
  __int64 (__fastcall **v11)(); // [xsp+8h] [xbp-48h] BYREF

  callui(11);
  v11 = &off_10009E498;
  return call_idc_func(a1, a2, a3, a4, a5, (__int64)&v11);
}
// 10009E498: using guessed type __int64 (__fastcall *off_10009E498)();
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
