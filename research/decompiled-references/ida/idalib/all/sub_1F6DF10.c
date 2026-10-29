__m128i *__fastcall sub_1F6DF10(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // rsi
  __int64 *v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128i v12; // [rsp+0h] [rbp-E8h] BYREF
  __int32 v13; // [rsp+10h] [rbp-D8h]
  _BYTE v14[136]; // [rsp+60h] [rbp-88h] BYREF

  sub_2234D00(v14);
  sub_2236020(v14, **(_QWORD **)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL));
  v3 = *(_QWORD *)(a2 + 56);
  v4 = *(__int64 **)(v3 + 1032);
  v5 = &v4[*(unsigned int *)(v3 + 1040)];
  while ( v5 != v4 )
  {
    v6 = *v4++;
    sub_2235E40(v14, (v6 & 0xFFFFFFFFFFFFFFF8LL) + 104, 20);
  }
  v7 = *(__int64 **)(a2 + 1232);
  v8 = &v7[*(unsigned int *)(a2 + 1240)];
  while ( v8 != v7 )
  {
    v9 = *v7++;
    sub_2235E40(v14, v9 + 104, 20);
  }
  sub_22360E0(&v12, v14);
  v10 = _mm_load_si128(&v12);
  a1[1].m128i_i32[0] = v13;
  *a1 = v10;
  return a1;
}
