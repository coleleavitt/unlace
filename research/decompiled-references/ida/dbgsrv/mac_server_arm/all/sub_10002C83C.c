/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C83C
// Address: 0x000000010002C83C

//----- (000000010002C83C) ----------------------------------------------------
__int64 __fastcall sub_10002C83C(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, int a4, char **a5)
{
  __int64 (__fastcall **v11)(); // [xsp+8h] [xbp-48h] BYREF

  callui(11);
  v11 = &off_10009A458;
  return call_idc_func(a1, a2, a3, a4, a5, (__int64)&v11);
}
// 10009A458: using guessed type __int64 (__fastcall *off_10009A458)();
// 10009D680: using guessed type __int64 (__fastcall *callui)(_QWORD);
