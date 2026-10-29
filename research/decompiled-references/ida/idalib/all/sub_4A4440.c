unsigned __int64 __fastcall sub_4A4440(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  __m128 v10; // xmm0
  __m128i *v11; // r14
  __int64 *v12; // rdi
  __m128i v13; // xmm0
  void *v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  int v17; // edx
  __m128i v18; // xmm0
  int v19; // edx
  __m128i v20; // xmm0
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  void *v24; // rdi
  __m128i *v25; // r15
  __m128i v26; // xmm0
  __int64 v27; // r13
  __int64 v28; // rcx
  void *v29; // rdi
  __int64 v30; // r13
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __int32 v33; // ecx
  __m128i v34; // xmm0
  __int32 v35; // ecx
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  void *v38; // rdi
  void *v39; // rbx
  __m128i v40; // xmm0
  void *v41; // rdi
  void *v42; // rbx
  __m128i v43; // xmm0
  __int64 *v44; // rbx
  __m128i v45; // xmm0
  __int64 v46; // rax
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __m128i v50; // [rsp+0h] [rbp-108h] BYREF
  __int64 v51; // [rsp+10h] [rbp-F8h]
  __int64 *v52; // [rsp+18h] [rbp-F0h]
  __int64 v53; // [rsp+20h] [rbp-E8h]
  __int64 *v54; // [rsp+28h] [rbp-E0h]
  __m128i v55; // [rsp+30h] [rbp-D8h] BYREF
  void *v56; // [rsp+40h] [rbp-C8h]
  __m128i v57; // [rsp+48h] [rbp-C0h] BYREF
  void *ptr; // [rsp+58h] [rbp-B0h]
  __m128i v59; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+70h] [rbp-98h] BYREF
  __m128i v61; // [rsp+78h] [rbp-90h] BYREF
  __m128i v62; // [rsp+88h] [rbp-80h] BYREF
  __m128i v63; // [rsp+98h] [rbp-70h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-60h]
  __int64 v65; // [rsp+B0h] [rbp-58h]
  char v66; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+C8h] [rbp-40h]

  v53 = a2;
  v52 = a3;
  v67 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 144 )
  {
    v4 = a1 + 288;
    v54 = &v60;
    do
    {
      v5 = *(_QWORD *)(v4 - 144);
      v51 = v4;
      v6 = v4 - 144;
      v7 = *(_QWORD *)(*v52 + 8 * v5);
      if ( v7 == -1 || (v8 = *(_QWORD *)(*v52 + 8LL * *(_QWORD *)a1), v8 == -1) )
      {
        if ( !under_debugger )
          interr(2166);
        BUG();
      }
      if ( v7 >= v8 )
      {
        sub_4A4070(v4 - 144, v52);
      }
      else
      {
        v9 = *(void **)(v4 - 128);
        *(_QWORD *)(v4 - 128) = 0;
        v10 = _mm_loadh_ps((const double *)(v4 - 136));
        v11 = (__m128i *)(v4 - 80);
        v12 = v54;
        v60 = 0;
        v55 = (__m128i)v10;
        v13 = _mm_loadu_si128((const __m128i *)(v4 - 120));
        v56 = v9;
        v14 = *(void **)(v4 - 104);
        *(_QWORD *)(v4 - 104) = 0;
        v57 = v13;
        v15 = _mm_loadu_si128((const __m128i *)(v4 - 96));
        *(_OWORD *)(v4 - 120) = 0;
        *(_OWORD *)(v4 - 96) = 0;
        ptr = v14;
        v59 = v15;
        copy_tinfo_t(v12);
        v16 = _mm_loadu_si128((const __m128i *)(v4 - 72));
        v64 = *(_QWORD *)(v4 - 24);
        v17 = *(_DWORD *)(v4 - 16);
        v61 = v16;
        v18 = _mm_loadu_si128((const __m128i *)(v4 - 56));
        LODWORD(v65) = v17;
        v19 = *(_DWORD *)(v4 - 12);
        v62 = v18;
        v20 = _mm_loadu_si128((const __m128i *)(v4 - 40));
        HIDWORD(v65) = v19;
        LOBYTE(v19) = *(_BYTE *)(v4 - 8);
        v63 = v20;
        v66 = v19;
        v21 = v6 - a1;
        v22 = 0x8E38E38E38E38E39LL * ((v6 - a1) >> 4);
        if ( v21 > 0 )
        {
          do
          {
            v23 = v11[-13].m128i_i64[0];
            v24 = (void *)v11[-3].m128i_i64[0];
            v25 = v11;
            v26 = _mm_loadu_si128((__m128i *)((char *)v11 - 184));
            v27 = v11[-12].m128i_i64[0];
            *(__m128i *)((char *)&v11[-12] + 8) = 0;
            v11[-4].m128i_i64[0] = v23;
            v28 = v11[-13].m128i_i64[1];
            v11[-12].m128i_i64[0] = 0;
            v11[-4].m128i_i64[1] = v28;
            if ( v24 )
            {
              v11[-3].m128i_i64[1] = 0;
              v50 = v26;
              qfree(v24);
              v26 = _mm_load_si128(&v50);
            }
            v29 = (void *)v11[-2].m128i_i64[1];
            v11[-3].m128i_i64[0] = v27;
            *(__m128i *)((char *)v11 - 40) = v26;
            v30 = v11[-11].m128i_i64[1];
            v31 = _mm_loadu_si128(v11 - 10);
            v11[-11].m128i_i64[1] = 0;
            v11[-10] = 0;
            if ( v29 )
            {
              v11[-1].m128i_i64[0] = 0;
              v50 = v31;
              qfree(v29);
              v31 = _mm_load_si128(&v50);
            }
            v11[-2].m128i_i64[1] = v30;
            v11 -= 9;
            v11[8] = v31;
            copy_tinfo_t(v25);
            v32 = _mm_loadu_si128((__m128i *)((char *)v25 - 136));
            v25[3].m128i_i32[2] = v25[-6].m128i_i32[2];
            v33 = v25[-5].m128i_i32[0];
            *(__m128i *)((char *)v25 + 8) = v32;
            v34 = _mm_loadu_si128((__m128i *)((char *)v25 - 120));
            v25[4].m128i_i32[0] = v33;
            v35 = v25[-5].m128i_i32[1];
            *(__m128i *)((char *)v25 + 24) = v34;
            v36 = _mm_loadu_si128((__m128i *)((char *)v25 - 104));
            v25[4].m128i_i32[1] = v35;
            LOBYTE(v35) = v25[-5].m128i_i8[8];
            *(__m128i *)((char *)v25 + 40) = v36;
            v25[4].m128i_i8[8] = v35;
            --v22;
          }
          while ( v22 );
        }
        v37 = _mm_load_si128(&v55);
        v38 = *(void **)(a1 + 16);
        v39 = v56;
        v56 = nullptr;
        *(__m128i *)a1 = v37;
        v40 = _mm_loadu_si128(&v57);
        v57 = 0;
        if ( v38 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v50 = v40;
          qfree(v38);
          v40 = _mm_load_si128(&v50);
        }
        v41 = *(void **)(a1 + 40);
        *(_QWORD *)(a1 + 16) = v39;
        *(__m128i *)(a1 + 24) = v40;
        v42 = ptr;
        v43 = _mm_load_si128(&v59);
        ptr = nullptr;
        v59 = 0;
        if ( v41 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v50 = v43;
          qfree(v41);
          v43 = _mm_load_si128(&v50);
        }
        *(_QWORD *)(a1 + 40) = v42;
        v44 = v54;
        *(__m128i *)(a1 + 48) = v43;
        copy_tinfo_t(a1 + 64);
        v45 = _mm_loadu_si128(&v61);
        *(_DWORD *)(a1 + 120) = v64;
        v46 = v65;
        *(__m128i *)(a1 + 72) = v45;
        v47 = _mm_loadu_si128(&v62);
        *(_QWORD *)(a1 + 128) = v46;
        LOBYTE(v46) = v66;
        *(__m128i *)(a1 + 88) = v47;
        v48 = _mm_loadu_si128(&v63);
        *(_BYTE *)(a1 + 136) = v46;
        *(__m128i *)(a1 + 104) = v48;
        clear_tinfo_t(v44);
        if ( ptr )
        {
          v59.m128i_i64[0] = 0;
          qfree(ptr);
        }
        if ( v56 )
        {
          v57.m128i_i64[0] = 0;
          qfree(v56);
        }
      }
      v4 += 144;
    }
    while ( v53 != v51 );
  }
  return v67 - __readfsqword(0x28u);
}
