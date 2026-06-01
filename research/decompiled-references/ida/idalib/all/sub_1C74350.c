void __fastcall sub_1C74350(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int8 v6; // al
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __m128i *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a3[3].m128i_i8[10];
  v7 = a3[3].m128i_u16[4];
  v17[0] = 0;
  sub_1E5F010(a3[5].m128i_i64[13 * ((v6 & 4) != 0) + 2 * ((v6 & 8) != 0) + v7], v17);
  v10 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  v11 = v10[294];
  v10[304] += 56LL;
  v12 = (__m128i *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10[295] >= (unsigned __int64)&v12[3].m128i_u64[1] && v11 )
    v10[294] = (char *)v12 + 56;
  else
    v12 = (__m128i *)sub_986170((__int64)(v10 + 294), 56, 56, 3, v8, v9);
  sub_B18EA0(v12, *(_QWORD *)(*(_QWORD *)a1 + 248LL), a3, v17[0]);
  sub_B8CC60(a2, (__int64)v12, v13, v14, v15, v16);
}
