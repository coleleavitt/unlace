__int64 __fastcall sub_1966360(__int64 *a1, const __m128i *a2, double a3, __m128 a4)
{
  __m128 v5; // xmm0
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __m128 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]

  v5 = (__m128)_mm_loadu_si128(a2 + 2);
  v6 = a2->m128i_u32[3];
  v7 = *(_QWORD *)(*a1 + 760);
  v8 = a2[3].m128i_i64[0];
  v11 = v5;
  v12 = v8;
  sub_1B5B570(v7, 11, &v11, 0, v6);
  v9 = sub_1964150(a1, a2, v5, a4);
  sub_1B335B0(*(_QWORD *)(*a1 + 760), v9 & 0xFFFFFFFFFFFFFFFELL);
  return v9;
}
