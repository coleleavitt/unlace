/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C6AC
// Address: 0x000000010002C6AC

//----- (000000010002C6AC) ----------------------------------------------------
__int64 __fastcall sub_10002C6AC(char *a1, char **a2)
{
  int v4; // w8
  __int64 result; // x0
  _QWORD v6[2]; // [xsp+8h] [xbp-28h] BYREF

  callui(11);
  v6[0] = &off_10009A458;
  if ( !strstr(a1, "static ") )
    return eval_idc_snippet(nullptr, a1, a2, (__int64)v6);
  sub_100028B08("main", 0, byte_1000763D0, 7u);
  v4 = compile_idc_text((__int64)a1, (__int64)a2, (__int64)v6, 0);
  result = 0;
  if ( v4 )
    return call_idc_func(nullptr, "main", nullptr, 0, a2, (__int64)v6);
  return result;
}
// 10009A458: using guessed type __int64 (__fastcall *off_10009A458)();
// 10009D680: using guessed type __int64 (__fastcall *callui)(_QWORD);
