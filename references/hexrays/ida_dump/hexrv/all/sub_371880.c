unsigned __int64 __fastcall sub_371880(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // r14
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rbp
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __m128i v22; // [rsp+0h] [rbp-B8h] BYREF
  _DWORD v23[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-98h]
  int v25; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+30h] [rbp-88h]
  __m128i v27; // [rsp+38h] [rbp-80h] BYREF
  __int64 v28; // [rsp+48h] [rbp-70h]
  __m128i v29; // [rsp+50h] [rbp-68h] BYREF
  __int64 v30; // [rsp+60h] [rbp-58h] BYREF
  __int64 v31; // [rsp+68h] [rbp-50h]
  __int64 v32; // [rsp+70h] [rbp-48h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v3 = a1 + 80;
  v33 = __readfsqword(0x28u);
  v23[0] = 0;
  copy_argloc(v23, a1);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v30 = 0;
  v24 = v4;
  LODWORD(v4) = *(_DWORD *)(a1 + 24);
  v27 = v5;
  v25 = v4;
  v7 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0;
  v26 = v7;
  v8 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v28 = v8;
  v29 = v6;
  copy_tinfo_t(&v30, a1 + 80);
  v31 = *(_QWORD *)(a1 + 88);
  v32 = *(_QWORD *)(a1 + 96);
  copy_argloc(a1, a2);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a2 + 32);
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0;
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    v22 = v10;
    qfree(v11);
    v10 = _mm_load_si128(&v22);
  }
  *(_QWORD *)(a1 + 32) = v9;
  *(__m128i *)(a1 + 40) = v10;
  v12 = *(_QWORD *)(a2 + 56);
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_QWORD *)(a2 + 56) = 0;
  *(_OWORD *)(a2 + 64) = 0;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    v22 = v13;
    qfree(v14);
    v13 = _mm_load_si128(&v22);
  }
  *(_QWORD *)(a1 + 56) = v12;
  *(__m128i *)(a1 + 64) = v13;
  copy_tinfo_t(v3, a2 + 80);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  copy_argloc(a2, v23);
  v15 = *(_QWORD *)(a2 + 32);
  v16 = v26;
  v17 = _mm_loadu_si128(&v27);
  v27 = 0;
  *(_QWORD *)(a2 + 16) = v24;
  v26 = 0;
  *(_DWORD *)(a2 + 24) = v25;
  if ( v15 )
  {
    *(_QWORD *)(a2 + 40) = 0;
    v22 = v17;
    qfree(v15);
    v17 = _mm_load_si128(&v22);
  }
  v18 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 32) = v16;
  *(__m128i *)(a2 + 40) = v17;
  v19 = v28;
  v20 = _mm_load_si128(&v29);
  v28 = 0;
  v29 = 0;
  if ( v18 )
  {
    *(_QWORD *)(a2 + 64) = 0;
    v22 = v20;
    qfree(v18);
    v20 = _mm_load_si128(&v22);
  }
  *(_QWORD *)(a2 + 56) = v19;
  *(__m128i *)(a2 + 64) = v20;
  copy_tinfo_t(a2 + 80, &v30);
  *(_QWORD *)(a2 + 88) = v31;
  *(_QWORD *)(a2 + 96) = v32;
  clear_tinfo_t(&v30);
  if ( v28 )
  {
    v29.m128i_i64[0] = 0;
    qfree(v28);
  }
  if ( v26 )
  {
    v27.m128i_i64[0] = 0;
    qfree(v26);
  }
  cleanup_argloc(v23);
  return v33 - __readfsqword(0x28u);
}
