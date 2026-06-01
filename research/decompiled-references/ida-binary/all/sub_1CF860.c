__int64 __fastcall sub_1CF860(const __m128i *a1, const QT::QString *a2, unsigned __int8 a3)
{
  unsigned int v3; // ebp
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, __m128i *, _QWORD); // r13
  unsigned int v9; // ebp
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = a3;
  v4 = _mm_loadu_si128(a1 + 1);
  v5 = a1[2].m128i_i64[0];
  v13 = __readfsqword(0x28u);
  v6 = (__int64 *)a1[3].m128i_i64[0];
  v7 = *v6;
  v12 = v5;
  v11 = v4;
  v8 = *(__int64 (__fastcall **)(__int64 *, __m128i *, _QWORD))(v7 + 32);
  if ( v4.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v4.m128i_i64[0], 1u);
  QT::QString::append((QT::QString *)&v11, a2);
  v9 = v8(v6, &v11, v3);
  sub_16D970((void **)&v11);
  return v9;
}
