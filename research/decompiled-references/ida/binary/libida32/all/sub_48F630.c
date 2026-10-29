unsigned __int64 __fastcall sub_48F630(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // edx
  int v8; // ecx
  void *v9; // rax
  __m128 v10; // xmm0
  __m128i *v11; // r14
  void *v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  int v16; // edx
  __m128i v17; // xmm0
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rcx
  void *v22; // rdi
  __m128i *v23; // r15
  __m128i v24; // xmm0
  __int64 v25; // r13
  __int64 v26; // rcx
  void *v27; // rdi
  __int64 v28; // r13
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int32 v31; // ecx
  __m128i v32; // xmm0
  __int32 v33; // ecx
  __m128i v34; // xmm0
  void *v35; // rdi
  void *v36; // rbp
  __m128i v37; // xmm0
  void *v38; // rdi
  void *v39; // rbp
  __m128i v40; // xmm0
  __int64 *v41; // r15
  __m128i v42; // xmm0
  __int64 v43; // rax
  __m128i v44; // xmm0
  __m128i v46; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+10h] [rbp-E8h]
  __int64 *v48; // [rsp+18h] [rbp-E0h]
  __int64 v49; // [rsp+20h] [rbp-D8h]
  __int64 *v50; // [rsp+28h] [rbp-D0h]
  __m128i v51; // [rsp+30h] [rbp-C8h] BYREF
  void *v52; // [rsp+40h] [rbp-B8h]
  __m128i v53; // [rsp+48h] [rbp-B0h] BYREF
  void *ptr; // [rsp+58h] [rbp-A0h]
  __m128i v55; // [rsp+60h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-88h] BYREF
  __m128i v57; // [rsp+78h] [rbp-80h] BYREF
  __m128i v58; // [rsp+88h] [rbp-70h] BYREF
  __int64 v59; // [rsp+98h] [rbp-60h]
  __int64 v60; // [rsp+A0h] [rbp-58h]
  char v61; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+B8h] [rbp-40h]

  v49 = a2;
  v48 = a3;
  v62 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 128 )
  {
    v4 = a1 + 256;
    do
    {
      v5 = *(_QWORD *)(v4 - 128);
      v47 = v4;
      v6 = v4 - 128;
      v7 = *(_DWORD *)(*v48 + 4 * v5);
      if ( v7 == -1 || (v8 = *(_DWORD *)(*v48 + 4LL * *(_QWORD *)a1), v8 == -1) )
      {
        if ( !under_debugger )
          interr(2166);
        BUG();
      }
      if ( v7 >= v8 )
      {
        sub_48F2B0(v4 - 128, v48);
      }
      else
      {
        v9 = *(void **)(v4 - 112);
        *(_QWORD *)(v4 - 112) = 0;
        v10 = _mm_loadh_ps((const double *)(v4 - 120));
        v11 = (__m128i *)(v4 - 64);
        v56 = 0;
        v52 = v9;
        v12 = *(void **)(v4 - 88);
        v51 = (__m128i)v10;
        v13 = _mm_loadu_si128((const __m128i *)(v4 - 104));
        *(_QWORD *)(v4 - 88) = 0;
        ptr = v12;
        v53 = v13;
        v14 = _mm_loadu_si128((const __m128i *)(v4 - 80));
        *(_OWORD *)(v4 - 104) = 0;
        *(_OWORD *)(v4 - 80) = 0;
        v50 = &v56;
        v55 = v14;
        copy_tinfo_t(&v56);
        v15 = _mm_loadu_si128((const __m128i *)(v4 - 56));
        v59 = *(_QWORD *)(v4 - 24);
        v16 = *(_DWORD *)(v4 - 16);
        v57 = v15;
        v17 = _mm_loadu_si128((const __m128i *)(v4 - 40));
        LODWORD(v60) = v16;
        v18 = *(_DWORD *)(v4 - 12);
        v58 = v17;
        HIDWORD(v60) = v18;
        v61 = *(_BYTE *)(v4 - 8);
        v19 = v6 - a1;
        v20 = (v6 - a1) >> 7;
        if ( v19 > 0 )
        {
          do
          {
            v21 = v11[-12].m128i_i64[0];
            v22 = (void *)v11[-3].m128i_i64[0];
            v23 = v11;
            v24 = _mm_loadu_si128((__m128i *)((char *)v11 - 168));
            v25 = v11[-11].m128i_i64[0];
            *(__m128i *)((char *)&v11[-11] + 8) = 0;
            v11[-4].m128i_i64[0] = v21;
            v26 = v11[-12].m128i_i64[1];
            v11[-11].m128i_i64[0] = 0;
            v11[-4].m128i_i64[1] = v26;
            if ( v22 )
            {
              v11[-3].m128i_i64[1] = 0;
              v46 = v24;
              qfree(v22);
              v24 = _mm_load_si128(&v46);
            }
            v27 = (void *)v11[-2].m128i_i64[1];
            v11[-3].m128i_i64[0] = v25;
            *(__m128i *)((char *)v11 - 40) = v24;
            v28 = v11[-10].m128i_i64[1];
            v29 = _mm_loadu_si128(v11 - 9);
            v11[-10].m128i_i64[1] = 0;
            v11[-9] = 0;
            if ( v27 )
            {
              v11[-1].m128i_i64[0] = 0;
              v46 = v29;
              qfree(v27);
              v29 = _mm_load_si128(&v46);
            }
            v11[-2].m128i_i64[1] = v28;
            v11 -= 8;
            v11[7] = v29;
            copy_tinfo_t(v23);
            v30 = _mm_loadu_si128((__m128i *)((char *)v23 - 120));
            v23[2].m128i_i32[2] = v23[-6].m128i_i32[2];
            v31 = v23[-5].m128i_i32[0];
            *(__m128i *)((char *)v23 + 8) = v30;
            v32 = _mm_loadu_si128((__m128i *)((char *)v23 - 104));
            v23[3].m128i_i32[0] = v31;
            v33 = v23[-5].m128i_i32[1];
            *(__m128i *)((char *)v23 + 24) = v32;
            v23[3].m128i_i32[1] = v33;
            v23[3].m128i_i8[8] = v23[-5].m128i_i8[8];
            --v20;
          }
          while ( v20 );
        }
        v34 = _mm_load_si128(&v51);
        v35 = *(void **)(a1 + 16);
        v36 = v52;
        v52 = nullptr;
        *(__m128i *)a1 = v34;
        v37 = _mm_loadu_si128(&v53);
        v53 = 0;
        if ( v35 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v46 = v37;
          qfree(v35);
          v37 = _mm_load_si128(&v46);
        }
        v38 = *(void **)(a1 + 40);
        *(_QWORD *)(a1 + 16) = v36;
        *(__m128i *)(a1 + 24) = v37;
        v39 = ptr;
        v40 = _mm_load_si128(&v55);
        ptr = nullptr;
        v55 = 0;
        if ( v38 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v46 = v40;
          qfree(v38);
          v40 = _mm_load_si128(&v46);
        }
        v41 = v50;
        *(_QWORD *)(a1 + 40) = v39;
        *(__m128i *)(a1 + 48) = v40;
        copy_tinfo_t(a1 + 64);
        v42 = _mm_loadu_si128(&v57);
        *(_DWORD *)(a1 + 104) = v59;
        v43 = v60;
        *(__m128i *)(a1 + 72) = v42;
        v44 = _mm_loadu_si128(&v58);
        *(_QWORD *)(a1 + 112) = v43;
        LOBYTE(v43) = v61;
        *(__m128i *)(a1 + 88) = v44;
        *(_BYTE *)(a1 + 120) = v43;
        clear_tinfo_t(v41);
        if ( ptr )
        {
          v55.m128i_i64[0] = 0;
          qfree(ptr);
        }
        if ( v52 )
        {
          v53.m128i_i64[0] = 0;
          qfree(v52);
        }
      }
      v4 += 128;
    }
    while ( v49 != v47 );
  }
  return v62 - __readfsqword(0x28u);
}

