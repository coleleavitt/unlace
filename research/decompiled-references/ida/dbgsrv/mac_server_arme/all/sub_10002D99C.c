/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D99C
// Address: 0x000000010002D99C

//----- (000000010002D99C) ----------------------------------------------------
__int64 __fastcall sub_10002D99C(char *a1, char **a2)
{
  int v4; // w8
  __int64 result; // x0
  _QWORD v6[2]; // [xsp+8h] [xbp-38h] BYREF

  callui(11);
  v6[0] = &off_10009E498;
  if ( !strstr(a1, "static ") )
    return eval_idc_snippet(nullptr, a1, a2, (__int64)v6);
  sub_10002B0E0("main", 0, byte_10007B630, 7u);
  v4 = compile_idc_text((__int64)a1, (__int64)a2, (__int64)v6, 0);
  result = 0;
  if ( v4 )
    return call_idc_func(nullptr, "main", nullptr, 0, a2, (__int64)v6);
  return result;
}
// 10009E498: using guessed type __int64 (__fastcall *off_10009E498)();
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
