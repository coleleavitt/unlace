__int64 __fastcall sub_1CF7D0(const __m128i *a1, const QT::QString *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, __m128i *); // r12
  unsigned int v7; // ebp
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v2 = _mm_loadu_si128(a1 + 1);
  v3 = a1[2].m128i_i64[0];
  v11 = __readfsqword(0x28u);
  v4 = (__int64 *)a1[3].m128i_i64[0];
  v5 = *v4;
  v10 = v3;
  v9 = v2;
  v6 = *(__int64 (__fastcall **)(__int64 *, __m128i *))(v5 + 24);
  if ( v2.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v2.m128i_i64[0], 1u);
  QT::QString::append((QT::QString *)&v9, a2);
  v7 = v6(v4, &v9);
  sub_16D970((void **)&v9);
  return v7;
}
