__int64 __fastcall sub_99EB00(__m128i *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rsi
  __m128i v31; // xmm1
  __int64 v32; // rdx
  __int64 v33; // [rsp+0h] [rbp-48h] BYREF
  __m128i v34; // [rsp+8h] [rbp-40h] BYREF
  __int64 v35; // [rsp+18h] [rbp-30h]

  v2 = a1[1].m128i_i64[0];
  if ( v2 )
  {
    if ( a1[20].m128i_i8[0] )
      return 0;
  }
  else
  {
    v2 = a1[1].m128i_i64[1];
  }
  if ( sub_EEE1E0(a2) )
  {
    a1[20].m128i_i8[0] = 1;
    return a1[1].m128i_i64[0];
  }
  v10 = a1[7].m128i_i64[1];
  v11 = sub_999B20((__int64)a1, a2, v5, v6, v7, v8);
  *(_QWORD *)(v11 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  v12 = sub_EEE1C0(a2);
  if ( !v12 )
    goto LABEL_9;
  a1[1].m128i_i64[1] = v2;
  a1[1].m128i_i64[0] = 0;
  v17 = sub_99E9F0(a1, v12, v13, v14, v15, v16);
  if ( !v17 )
    return 0;
  sub_9999E0(v11, v17, 0, (_QWORD *)(a1->m128i_i64[1] + 32), v18, v19);
LABEL_9:
  v20 = a1->m128i_i64[1];
  v21 = (_QWORD *)(v20 + 32);
  if ( v10 )
    sub_9999E0(v11, v10, 0, v21, v15, v16);
  else
    sub_999860(v11, *(_QWORD *)(v20 + 8), 2LL * (*(_QWORD *)(v20 + 8) == 0), v21, v15, v16);
  v24 = a1->m128i_i64[1];
  v25 = a1[7].m128i_i64[1];
  a1[1].m128i_i64[1] = v2;
  a1[7].m128i_i64[1] = v11;
  v33 = v11;
  v26 = *(__int64 **)(v24 + 72);
  if ( v26 == *(__int64 **)(v24 + 80) )
  {
    sub_9981B0(v24 + 64, v26, &v33);
  }
  else
  {
    *v26 = v11;
    *(_QWORD *)(v24 + 72) = v26 + 1;
  }
  v27 = a1[6].m128i_i64[0];
  v28 = a1[8].m128i_i64[0];
  v29 = _mm_loadu_si128(a1 + 5);
  a1[1].m128i_i64[0] = 0;
  v35 = v27;
  LODWORD(v27) = a1[8].m128i_i32[2];
  a1[5].m128i_i64[0] = v2;
  a1[5].m128i_i64[1] = v28;
  a1[6].m128i_i32[0] = v27;
  v30 = *(_QWORD *)(a2 + 16);
  v34 = v29;
  result = sub_99D480((__int64)a1, v30, 1, 0, v22, v23);
  v31 = _mm_loadu_si128(&v34);
  v32 = v35;
  a1[7].m128i_i64[1] = v25;
  a1[5] = v31;
  a1[6].m128i_i64[0] = v32;
  return result;
}
