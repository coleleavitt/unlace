__int64 __fastcall sub_15D9E80(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v8 = *(_QWORD **)(a2 + 248);
  v9 = v8[294];
  v8[304] += 40LL;
  v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v8[295] >= (unsigned __int64)&v10[2].m128i_u64[1] && v9 )
    v8[294] = (char *)v10 + 40;
  else
    v10 = (__m128i *)sub_986170((__int64)(v8 + 294), 40, 40, 3, a5, a6);
  sub_B10CE0(v10, *(_QWORD *)(a2 + 248), a4);
  sub_B8CC60(a3, (__int64)v10, v11, v12, v13, v14);
  return 1;
}
