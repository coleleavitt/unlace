/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FEDC
// Address: 0x0003FEDC

//----- (0003FEDC) --------------------------------------------------------
const char *__fastcall sub_3FEDC(const char *a1, void **a2)
{
  const char *result; // r0
  _DWORD v5[2]; // [sp+Ch] [bp-Ch] BYREF

  callui(11, v5, _stack_chk_guard);
  v5[1] = v5[0];
  v5[0] = &off_CFAA0;
  if ( !strstr(a1, "static ") )
    return sub_3FE50(nullptr, a1, a2, (int)v5);
  sub_3BED8("main", 0, dword_9D06C, 7u);
  result = (const char *)sub_3C7A4((int)a1, a2, (int)v5, 0);
  if ( result )
    return (const char *)sub_4AFC0(nullptr, "main", nullptr, 0, (int)a2, (int)v5);
  return result;
}
// 9D06C: using guessed type int dword_9D06C[2];
// CFAA0: using guessed type _UNKNOWN *off_CFAA0;
// D3924: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
