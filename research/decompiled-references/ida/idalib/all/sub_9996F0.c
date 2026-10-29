__int64 __fastcall sub_9996F0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v7; // r15d
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __m128i v24; // xmm0
  __m128i v25[4]; // [rsp+8h] [rbp-40h] BYREF

  v7 = a1[1].m128i_i32[2];
  v8 = a1[2].m128i_i64[1];
  v9 = a1[3].m128i_i64[0];
  a1[1].m128i_i32[2] = v7 + 1;
  v10 = (__int64 *)(a1[2].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL);
  v11 = *v10;
  v10[10] += 120;
  v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v10[1] >= (unsigned __int64)(v12 + 120) && v11 )
    *v10 = v12 + 120;
  else
    v12 = sub_986170((__int64)v10, 120, 120, 4, a5, a6);
  *(_QWORD *)(v12 + 16) = 0;
  *(_OWORD *)v12 = 0;
  sub_999590((const __m128i **)v12, (__m128i *)a1[2].m128i_i64, 4u, a4, a5, a6);
  *(_DWORD *)(v12 + 48) = v7;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 72) = 0;
  *(_OWORD *)(v12 + 56) = 0;
  sub_999640((const __m128i **)(v12 + 56), (__m128i *)a1[2].m128i_i64, 1u, v13, v14, v15);
  *(_QWORD *)(v12 + 96) = 0;
  *(_OWORD *)(v12 + 80) = 0;
  sub_999640((const __m128i **)(v12 + 80), (__m128i *)a1[2].m128i_i64, 1u, v16, v17, v18);
  *(_BYTE *)(v12 + 104) &= ~1u;
  *(_QWORD *)(v12 + 112) = a1;
  v22 = a1[3].m128i_u64[0];
  if ( a1[3].m128i_i64[1] <= v22 )
  {
    sub_9994F0((__int64)&a1[2].m128i_i64[1], (__m128i *)a1[2].m128i_i64, 1u, v19, v20, v21);
    v22 = a1[3].m128i_u64[0];
  }
  *(_QWORD *)v22 = v12;
  a1[3].m128i_i64[0] = v22 + 8;
  if ( v9 == v8 )
  {
    v25[0].m128i_i64[0] = v12;
    v24 = _mm_loadl_epi64(v25);
    *a1 = _mm_unpacklo_epi64(v24, v24);
    return *(_QWORD *)v22;
  }
  return v12;
}
