void __fastcall sub_16266D0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __m128i *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = sub_1625800(
         a1,
         a3,
         (_DWORD *)(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL),
         (_DWORD *)(a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL));
  if ( v3 )
    sub_B8CC60(a2, (__int64)v3, v4, v5, v6, v7);
}
