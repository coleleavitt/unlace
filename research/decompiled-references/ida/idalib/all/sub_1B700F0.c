__int64 __fastcall sub_1B700F0(_QWORD *a1, const __m128i *a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  int v6; // r8d
  int v7; // esi
  __int64 *v8; // r12
  __int64 v9; // rbp
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]

  v5 = *a1;
  v6 = a2->m128i_i32[3];
  v11.m128i_i32[2] = 0;
  v7 = a2->m128i_i32[2];
  v8 = *(__int64 **)(v5 + 760);
  v11.m128i_i64[0] = 0;
  v12 = 0;
  sub_1B585F0(v8[1], v7, &v11, 0, v6);
  sub_18C74E0(*v8, 6, 0, 4);
  v9 = sub_1B6ED40(a1, a2, a3, a4);
  sub_1B335B0(*(__int64 **)(*a1 + 760LL), v9 & 0xFFFFFFFFFFFFFFFELL, a3, *(double *)a4.m128_u64);
  return v9;
}
