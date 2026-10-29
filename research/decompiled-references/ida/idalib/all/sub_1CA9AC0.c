void __fastcall sub_1CA9AC0(__int64 *a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  const void *v9; // r15
  __int64 v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __m128i *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // [rsp+Ch] [rbp-4Ch] BYREF
  const void *v22; // [rsp+10h] [rbp-48h] BYREF
  __int64 v23; // [rsp+18h] [rbp-40h]

  v7 = *a1;
  v22 = nullptr;
  v23 = 0;
  v21 = 0;
  if ( (unsigned __int8)sub_181EB00(v7, (__int64)a3, 0, &v22, &v21, a4, a5)
    && (unsigned __int8)sub_1CA3BD0(a1, a2, (unsigned __int64)v22, v23, v21, (__int64)a3, 1u) )
  {
    v8 = sub_168B6C0((__int64)a1);
    v9 = v22;
    v10 = v23;
    v11 = v8;
    v12 = (_QWORD *)sub_168B6C0((__int64)a1);
    v15 = v12[294];
    v12[304] += 56LL;
    v16 = (__m128i *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12[295] >= (unsigned __int64)&v16[3].m128i_u64[1] && v15 )
      v12[294] = (char *)v16 + 56;
    else
      v16 = (__m128i *)sub_986170((__int64)(v12 + 294), 56, 56, 3, v13, v14);
    sub_B2FF00(v16, v11, a3, v9, v10);
    sub_B8CC60(a2, (__int64)v16, v17, v18, v19, v20);
  }
}
