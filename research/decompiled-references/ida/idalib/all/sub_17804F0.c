__int64 __fastcall sub_17804F0(__int64 *a1, const __m128i *a2)
{
  __m128i v3; // xmm0
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]

  v3 = _mm_loadu_si128(a2 + 2);
  v4 = a2->m128i_u32[3];
  v5 = *(_QWORD *)(*a1 + 760);
  v6 = a2[3].m128i_i64[0];
  v9 = v3;
  v10 = v6;
  sub_1B5B570(v5, 11, &v9, 0, v4);
  v7 = sub_177E2E0(a1, a2, *(double *)v3.m128i_i64);
  sub_1B335B0(*(_QWORD *)(*a1 + 760), v7 & 0xFFFFFFFFFFFFFFFELL);
  return v7;
}
