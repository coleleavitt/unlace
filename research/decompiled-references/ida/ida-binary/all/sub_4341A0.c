__int64 __fastcall ida_ui_proxy_t__::vfunc_2(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  __int64 result; // rax
  char v16; // [rsp+0h] [rbp-8h]

  v9 = (unsigned int)sub_1698A0(
                       1,
                       (int)"HIDECANCEL\n"
                            "The opened file needs to be closed. Be sure to save any chages first. Continue?");
  result = 1;
  *(_BYTE *)(a1 + 32) = (_DWORD)v9 == 1;
  if ( (_DWORD)v9 != 1 )
  {
    sub_169630(
      (int)"Diff operation canceled",
      (__int64)"HIDECANCEL\nThe opened file needs to be closed. Be sure to save any chages first. Continue?",
      v9,
      v10,
      v11,
      v12,
      a2,
      a3,
      a4,
      a5,
      v13,
      v14,
      a8,
      a9,
      v16);
    return *(unsigned __int8 *)(a1 + 32);
  }
  return result;
}
