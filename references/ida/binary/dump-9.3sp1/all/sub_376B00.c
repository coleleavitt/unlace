unsigned __int64 __fastcall sub_376B00(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm1
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // r14
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rbp
  __m128i v18; // xmm0
  __m128i v20; // [rsp+0h] [rbp-B8h] BYREF
  int v21; // [rsp+10h] [rbp-A8h]
  __int64 v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+30h] [rbp-88h]
  __m128i v25; // [rsp+38h] [rbp-80h] BYREF
  __int64 v26; // [rsp+48h] [rbp-70h]
  __m128i v27; // [rsp+50h] [rbp-68h] BYREF
  __int64 v28; // [rsp+60h] [rbp-58h]
  __int64 v29; // [rsp+68h] [rbp-50h]
  __int64 v30; // [rsp+70h] [rbp-48h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v21 = 0;
  copy_argloc();
  v3 = *(_QWORD *)(a1 + 16);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v28 = 0;
  v22 = v3;
  LODWORD(v3) = *(_DWORD *)(a1 + 24);
  v25 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v23 = v3;
  v5 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0;
  v24 = v5;
  v6 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v26 = v6;
  v27 = v4;
  copy_tinfo_t();
  v29 = *(_QWORD *)(a1 + 88);
  v30 = *(_QWORD *)(a1 + 96);
  copy_argloc();
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0;
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    v20 = v8;
    qfree(v9);
    v8 = _mm_load_si128(&v20);
  }
  *(_QWORD *)(a1 + 32) = v7;
  *(__m128i *)(a1 + 40) = v8;
  v10 = *(_QWORD *)(a2 + 56);
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_QWORD *)(a2 + 56) = 0;
  *(_OWORD *)(a2 + 64) = 0;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    v20 = v11;
    qfree(v12);
    v11 = _mm_load_si128(&v20);
  }
  *(_QWORD *)(a1 + 56) = v10;
  *(__m128i *)(a1 + 64) = v11;
  copy_tinfo_t();
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  copy_argloc();
  v13 = *(_QWORD *)(a2 + 32);
  v14 = v24;
  v15 = _mm_loadu_si128(&v25);
  v25 = 0;
  *(_QWORD *)(a2 + 16) = v22;
  v24 = 0;
  *(_DWORD *)(a2 + 24) = v23;
  if ( v13 )
  {
    *(_QWORD *)(a2 + 40) = 0;
    v20 = v15;
    qfree(v13);
    v15 = _mm_load_si128(&v20);
  }
  v16 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 32) = v14;
  *(__m128i *)(a2 + 40) = v15;
  v17 = v26;
  v18 = _mm_load_si128(&v27);
  v26 = 0;
  v27 = 0;
  if ( v16 )
  {
    *(_QWORD *)(a2 + 64) = 0;
    v20 = v18;
    qfree(v16);
    v18 = _mm_load_si128(&v20);
  }
  *(_QWORD *)(a2 + 56) = v17;
  *(__m128i *)(a2 + 64) = v18;
  copy_tinfo_t();
  *(_QWORD *)(a2 + 88) = v29;
  *(_QWORD *)(a2 + 96) = v30;
  clear_tinfo_t();
  if ( v26 )
  {
    v27.m128i_i64[0] = 0;
    qfree(v26);
  }
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree(v24);
  }
  cleanup_argloc();
  return v31 - __readfsqword(0x28u);
}
