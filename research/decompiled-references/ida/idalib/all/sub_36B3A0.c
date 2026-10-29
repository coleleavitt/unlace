__int64 __fastcall sub_36B3A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  char fixup; // dl
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __m128i si128; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+18h] [rbp-20h]
  __int64 v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  v9 = 0;
  v10 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  fixup = get_fixup(&v7, v3);
  v5 = -1;
  if ( fixup )
    v5 = si128.m128i_i64[1];
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
