__m128i *__fastcall sub_18074E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v8; // rbx
  __int64 v9; // r9
  _QWORD *v10; // rdi
  __int64 v11; // r8
  const void *v12; // r13
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-30h]

  v8 = nullptr;
  if ( !(unsigned __int8)sub_1804F80(a2, *(const void **)(a3 + 48), *(unsigned int *)(a3 + 40), a4, a5, a6) )
  {
    v10 = *(_QWORD **)(a1 + 248);
    v11 = *(unsigned int *)(a3 + 40);
    v12 = *(const void **)(a3 + 48);
    v13 = v10[294];
    v10[304] += 56LL;
    v8 = (__m128i *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10[295] >= (unsigned __int64)&v8[3].m128i_u64[1] && v13 )
    {
      v10[294] = (char *)v8 + 56;
    }
    else
    {
      v16 = v11;
      v15 = sub_986170((__int64)(v10 + 294), 56, 56, 3, v11, v9);
      v11 = v16;
      v8 = (__m128i *)v15;
    }
    sub_B2DF00(v8, *(_QWORD *)(a1 + 248), (const __m128i *)a3, v12, v11);
  }
  return v8;
}
