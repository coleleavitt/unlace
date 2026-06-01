/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440908
// Address: 0x0000000000440908

//----- (0000000000440908) ----------------------------------------------------
__int64 __fastcall sub_440908(const char *a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 result; // x0
  _QWORD v6[2]; // [xsp+38h] [xbp-18h] BYREF

  callui(11, (int)v6, (char *)callui);
  v4 = v6[0];
  v6[0] = &off_51A540;
  v6[1] = v4;
  if ( !strstr(a1, "static ") )
    return (unsigned __int8)sub_440820(nullptr, a1, a2, (__int64)v6);
  sub_439B10("main", 0, &qword_4C6518, 7u);
  result = (unsigned __int8)sub_43A7D8((__int64)a1, a2, (__int64)v6, 0);
  if ( (_DWORD)result )
    return (unsigned __int8)sub_450368(nullptr, "main", nullptr, 0, a2, (__int64)v6);
  return result;
}
// 4C6518: using guessed type __int64 qword_4C6518;
// 51A540: using guessed type __int64 (__fastcall *off_51A540)();
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
