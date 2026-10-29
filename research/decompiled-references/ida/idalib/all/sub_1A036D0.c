void __fastcall sub_1A036D0(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v5; // r13
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( (unsigned __int8)sub_1A03540(a1, *(_QWORD *)(a2 + 48), (__int64)a3, a4) )
  {
    v5 = sub_168B6C0((__int64)a1);
    v6 = (_QWORD *)sub_168B6C0((__int64)a1);
    v9 = v6[294];
    v6[304] += 40LL;
    v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v6[295] >= (unsigned __int64)&v10[2].m128i_u64[1] && v9 )
      v6[294] = (char *)v10 + 40;
    else
      v10 = (__m128i *)sub_986170((__int64)(v6 + 294), 40, 40, 3, v7, v8);
    sub_B137B0(v10, v5, a3);
    sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
  }
}
