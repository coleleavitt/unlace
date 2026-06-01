void __fastcall sub_1821430(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  const void *v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __m128i *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  const void *v21; // [rsp+0h] [rbp-48h] BYREF
  size_t v22; // [rsp+8h] [rbp-40h]

  v21 = nullptr;
  v22 = 0;
  if ( (unsigned __int8)sub_181F2D0(a1, (__int64)a3, &v21, nullptr, a4, a5)
    && !(unsigned __int8)sub_1804F80(a2, v21, v22, v7, v8, v9) )
  {
    v12 = *(_QWORD **)(a1 + 248);
    v13 = v21;
    v14 = v22;
    v15 = v12[294];
    v12[304] += 56LL;
    v16 = (__m128i *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12[295] >= (unsigned __int64)&v16[3].m128i_u64[1] && v15 )
      v12[294] = (char *)v16 + 56;
    else
      v16 = (__m128i *)sub_986170((__int64)(v12 + 294), 56, 56, 3, v10, v11);
    sub_B2DF00(v16, *(_QWORD *)(a1 + 248), a3, v13, v14);
    sub_B8CC60(a2, (__int64)v16, v17, v18, v19, v20);
  }
}
