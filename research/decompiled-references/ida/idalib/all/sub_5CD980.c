__int64 __fastcall sub_5CD980(__m128i *a1, unsigned __int64 *a2, char a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // r13
  unsigned __int64 *v5; // rax
  __m128i si128; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v3 = (__int64 *)a2;
  if ( !a3 )
    goto LABEL_6;
  v4 = *a2;
  lock_func_range(a2, 1);
  sub_3792E0(0x3Bu, a2);
  lock_func_range(a2, 0);
  v5 = sub_505D70((__int64)&a1[106].m128i_i64[1], v4);
  v3 = (__int64 *)v5;
  if ( v5 )
  {
    if ( *((char *)v5 + 17) >= 0 || (v3 = (__int64 *)sub_505D70((__int64)&a1[106].m128i_i64[1], v5[3])) != nullptr )
    {
      sub_5BF380(a1, v3, nullptr);
LABEL_6:
      v3[2] &= ~0x1000uLL;
      sub_5C77B0((__int64)a1, (unsigned __int64 *)v3, 0);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      sub_5CC490(
        (__int64)a1,
        (unsigned __int64 *)v3,
        (void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))sub_5C41F0,
        (__int64)&si128,
        0);
      return sub_5CCFA0(a1, (unsigned __int64 *)v3);
    }
  }
  return v8 - __readfsqword(0x28u);
}
