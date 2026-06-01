__int64 __fastcall sub_36CF20(
        const char *a1,
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
  const char *v15; // rsi
  const char *v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+8h] [rbp-20h]
  unsigned __int64 v19; // [rsp+18h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  sub_36C8C0((__int64)&v17, a1, 1);
  v15 = v17;
  if ( !v18 )
    v15 = &s1;
  sub_169700((int)"%s", (__int64)v15, v9, v10, v11, v12, a2, a3, a4, a5, v13, v14, a8, a9, (char)v17);
  if ( v17 )
  {
    v18 = 0;
    qfree(v17, v15);
  }
  return 1;
}
