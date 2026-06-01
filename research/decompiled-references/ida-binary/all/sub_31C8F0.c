__int64 __fastcall sub_31C8F0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rax
  double v9; // xmm4_8
  double v10; // xmm5_8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 result; // rax
  char v19; // [rsp+0h] [rbp-8h]

  if ( (unsigned __int8)auto_is_ok() || (int)sub_300700(-1, 989) > 0 )
  {
    v8 = sub_317FE0(1u, (__int64)"html", 0x4E7u);
    if ( v8 )
    {
      v13 = (unsigned int)sub_31C320(v8, 0, 1u, a1, a2, a3, a4, v9, v10, a7, a8);
      result = 0;
      if ( (_DWORD)v13 == -1 )
        return result;
      sub_169700(
        (int)"HTML file created, total %d lines.\n",
        v13,
        v11,
        v12,
        v14,
        v15,
        a1,
        a2,
        a3,
        a4,
        v16,
        v17,
        a7,
        a8,
        v19);
    }
  }
  return 1;
}
