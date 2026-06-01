void __fastcall sub_16882F0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __m128i *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  sub_1688200(a1, a2);
  v4 = sub_168B6C0(a1);
  v5 = (_QWORD *)sub_168B6C0(a1);
  v8 = v5[294];
  v5[304] += 40LL;
  v9 = (__m128i *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v5[295] >= (unsigned __int64)&v9[2].m128i_u64[1] && v8 )
    v5[294] = (char *)v9 + 40;
  else
    v9 = (__m128i *)sub_986170((__int64)(v5 + 294), 40, 40, 3, v6, v7);
  sub_B0CA00(v9, v4, a3);
  sub_B8CC60(a2, (__int64)v9, v10, v11, v12, v13);
}
