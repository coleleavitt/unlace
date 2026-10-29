/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4006C
// Address: 0x0004006C

//----- (0004006C) --------------------------------------------------------
const char *__fastcall sub_4006C(const char *a1, void **a2)
{
  const char *result; // r0
  _DWORD v5[2]; // [sp+Ch] [bp-Ch] BYREF

  callui(11, v5, _stack_chk_guard);
  v5[1] = v5[0];
  v5[0] = &off_D0AA0;
  if ( !strstr(a1, "static ") )
    return sub_3FFE0(nullptr, a1, a2, (int)v5);
  sub_3C070("main", 0, dword_9D1A8, 7u);
  result = (const char *)sub_3C93C((int)a1, a2, (int)v5, 0);
  if ( result )
    return (const char *)sub_4B150(nullptr, "main", nullptr, 0, (int)a2, (int)v5);
  return result;
}
// 9D1A8: using guessed type int dword_9D1A8[2];
// D0AA0: using guessed type _UNKNOWN *off_D0AA0;
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
