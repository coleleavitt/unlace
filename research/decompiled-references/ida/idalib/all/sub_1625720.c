void __fastcall sub_1625720(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __m128i *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int32 v19[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v7 = a3[5].m128i_i64[0];
  v8 = *a1;
  v19[0] = 0;
  if ( (unsigned __int8)sub_16211A0(v8, a3, v7 & 0xFFFFFFFFFFFFFFFCLL, v19, 0xFFFFFFFFLL, 0) )
  {
    v9 = sub_168B6C0(a1);
    v10 = (_QWORD *)sub_168B6C0(a1);
    v13 = v10[294];
    v10[304] += 48LL;
    v14 = (__m128i *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10[295] >= (unsigned __int64)&v14[3] && v13 )
      v10[294] = v14 + 3;
    else
      v14 = (__m128i *)sub_986170((__int64)(v10 + 294), 48, 48, 3, v11, v12);
    sub_B06EB0(v14, v9, a3, v19[0]);
    sub_B8CC60(a2, (__int64)v14, v15, v16, v17, v18);
  }
}
