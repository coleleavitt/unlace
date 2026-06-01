unsigned __int64 __fastcall sub_4A7E80(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 i; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rsi
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  __m128 v18; // xmm0
  __m128i v19; // xmm0
  void *v20; // rcx
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // rsi
  char v24; // cl
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // rbp
  __m128i v30; // xmm0
  void *v31; // rdi
  __int64 v32; // rbp
  __m128i v33; // xmm0
  void *v34; // rdi
  __m128i v35; // xmm0
  void *v36; // r12
  __m128i v37; // xmm0
  void *v38; // rdi
  __m128i v39; // xmm0
  void *v40; // rdi
  void *v41; // r12
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __int64 v44; // rcx
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rbx
  __int64 v48; // r15
  __m128i v51; // [rsp+10h] [rbp-108h] BYREF
  __int64 v52; // [rsp+20h] [rbp-F8h]
  __int64 v53; // [rsp+28h] [rbp-F0h]
  __int64 *v54; // [rsp+38h] [rbp-E0h] BYREF
  __m128i v55; // [rsp+40h] [rbp-D8h] BYREF
  void *v56; // [rsp+50h] [rbp-C8h]
  __m128i v57; // [rsp+58h] [rbp-C0h] BYREF
  void *ptr; // [rsp+68h] [rbp-B0h]
  __m128i v59; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+80h] [rbp-98h] BYREF
  __m128i v61; // [rsp+88h] [rbp-90h] BYREF
  __m128i v62; // [rsp+98h] [rbp-80h] BYREF
  __m128i v63; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-60h]
  __int64 v65; // [rsp+C0h] [rbp-58h]
  char v66; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+D8h] [rbp-40h]

  v52 = a2;
  v4 = a2 - (_QWORD)a1;
  v53 = a3;
  v67 = __readfsqword(0x28u);
  if ( v4 > 2304 )
  {
    v6 = v4;
    if ( v53 )
    {
      while ( 1 )
      {
        v7 = v52;
        v8 = (unsigned __int64)(a1 + 18);
        --v53;
        sub_4A7E00(
          (__int64)a1,
          a1 + 18,
          &a1[18 * ((__int64)(0x8E38E38E38E38E39LL * (v6 >> 4)) >> 1)],
          (__int64 *)(v52 - 144),
          a4);
        for ( i = v7; ; i = v14 )
        {
          v10 = *a4;
          v11 = *(_QWORD *)(*a4 + 8LL * *(_QWORD *)v8);
          if ( v11 == -1 )
            goto LABEL_32;
          v12 = *(_QWORD *)(v10 + 8LL * *a1);
          if ( v12 == -1 )
            goto LABEL_32;
          while ( v11 < v12 )
          {
            v13 = *(_QWORD *)(v8 + 144);
            v8 += 144LL;
            v11 = *(_QWORD *)(v10 + 8 * v13);
            if ( v11 == -1 )
              goto LABEL_32;
          }
          v14 = i - 144;
          v15 = *(_QWORD *)(v10 + 8LL * *(_QWORD *)(i - 144));
          if ( v15 == -1 )
          {
LABEL_32:
            if ( !under_debugger )
              interr(2166);
            BUG();
          }
          while ( v12 < v15 )
          {
            v16 = *(_QWORD *)(v14 - 144);
            v14 -= 144LL;
            v15 = *(_QWORD *)(v10 + 8 * v16);
            if ( v15 == -1 )
              goto LABEL_32;
          }
          if ( v8 >= v14 )
            break;
          v17 = *(void **)(v8 + 16);
          v18 = _mm_loadh_ps((const double *)(v8 + 8));
          *(_QWORD *)(v8 + 16) = 0;
          v55 = (__m128i)v18;
          v19 = _mm_loadu_si128((const __m128i *)(v8 + 24));
          v56 = v17;
          v20 = *(void **)(v8 + 40);
          *(_QWORD *)(v8 + 40) = 0;
          v57 = v19;
          v21 = _mm_loadu_si128((const __m128i *)(v8 + 48));
          *(_OWORD *)(v8 + 24) = 0;
          *(_OWORD *)(v8 + 48) = 0;
          ptr = v20;
          v60 = 0;
          v59 = v21;
          copy_tinfo_t(&v60);
          v22 = _mm_loadu_si128((const __m128i *)(v8 + 72));
          v23 = *(_QWORD *)(v8 + 128);
          v64 = *(_QWORD *)(v8 + 120);
          v24 = *(_BYTE *)(v8 + 136);
          v61 = v22;
          v25 = _mm_loadu_si128((const __m128i *)(v8 + 88));
          v66 = v24;
          v26 = *(_QWORD *)v14;
          v62 = v25;
          v27 = _mm_loadu_si128((const __m128i *)(v8 + 104));
          *(_QWORD *)v8 = v26;
          v28 = *(_QWORD *)(v14 + 8);
          v63 = v27;
          *(_QWORD *)(v8 + 8) = v28;
          v29 = *(_QWORD *)(v14 + 16);
          v30 = _mm_loadu_si128((const __m128i *)(v14 + 24));
          *(_QWORD *)(v14 + 16) = 0;
          *(_OWORD *)(v14 + 24) = 0;
          v31 = *(void **)(v8 + 16);
          v65 = v23;
          if ( v31 )
          {
            *(_QWORD *)(v8 + 24) = 0;
            v51 = v30;
            qfree(v31);
            v30 = _mm_load_si128(&v51);
          }
          *(_QWORD *)(v8 + 16) = v29;
          *(__m128i *)(v8 + 24) = v30;
          v32 = *(_QWORD *)(v14 + 40);
          v33 = _mm_loadu_si128((const __m128i *)(v14 + 48));
          *(_QWORD *)(v14 + 40) = 0;
          *(_OWORD *)(v14 + 48) = 0;
          v34 = *(void **)(v8 + 40);
          if ( v34 )
          {
            *(_QWORD *)(v8 + 48) = 0;
            v51 = v33;
            qfree(v34);
            v33 = _mm_load_si128(&v51);
          }
          *(_QWORD *)(v8 + 40) = v32;
          *(__m128i *)(v8 + 48) = v33;
          copy_tinfo_t(v8 + 64);
          v35 = _mm_loadu_si128((const __m128i *)(v14 + 72));
          v36 = v56;
          v56 = nullptr;
          *(__m128i *)(v8 + 72) = v35;
          *(__m128i *)(v8 + 88) = _mm_loadu_si128((const __m128i *)(v14 + 88));
          *(__m128i *)(v8 + 104) = _mm_loadu_si128((const __m128i *)(v14 + 104));
          v37 = _mm_load_si128(&v55);
          *(_DWORD *)(v8 + 120) = *(_DWORD *)(v14 + 120);
          *(_DWORD *)(v8 + 128) = *(_DWORD *)(v14 + 128);
          *(_DWORD *)(v8 + 132) = *(_DWORD *)(v14 + 132);
          *(_BYTE *)(v8 + 136) = *(_BYTE *)(v14 + 136);
          v38 = *(void **)(v14 + 16);
          *(__m128i *)v14 = v37;
          v39 = _mm_loadu_si128(&v57);
          v57 = 0;
          if ( v38 )
          {
            *(_QWORD *)(v14 + 24) = 0;
            v51 = v39;
            qfree(v38);
            v39 = _mm_load_si128(&v51);
          }
          v40 = *(void **)(v14 + 40);
          *(_QWORD *)(v14 + 16) = v36;
          *(__m128i *)(v14 + 24) = v39;
          v41 = ptr;
          v42 = _mm_load_si128(&v59);
          ptr = nullptr;
          v59 = 0;
          if ( v40 )
          {
            *(_QWORD *)(v14 + 48) = 0;
            v51 = v42;
            qfree(v40);
            v42 = _mm_load_si128(&v51);
          }
          *(_QWORD *)(v14 + 40) = v41;
          *(__m128i *)(v14 + 48) = v42;
          copy_tinfo_t(v14 + 64);
          v43 = _mm_loadu_si128(&v61);
          *(_DWORD *)(v14 + 120) = v64;
          v44 = v65;
          *(__m128i *)(v14 + 72) = v43;
          v45 = _mm_loadu_si128(&v62);
          *(_QWORD *)(v14 + 128) = v44;
          LOBYTE(v44) = v66;
          *(__m128i *)(v14 + 88) = v45;
          v46 = _mm_loadu_si128(&v63);
          *(_BYTE *)(v14 + 136) = v44;
          *(__m128i *)(v14 + 104) = v46;
          clear_tinfo_t(&v60);
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
          v8 += 144LL;
        }
        sub_4A7E80(v8, v52, v53, a4);
        v6 = v8 - (_QWORD)a1;
        if ( (__int64)(v8 - (_QWORD)a1) <= 2304 )
          break;
        v52 = v8;
        if ( !v53 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      v47 = v52;
      v54 = a4;
      v55.m128i_i64[0] = (__int64)a4;
      sub_4A7350((__int64)a1, v52, &v55);
      if ( v47 - (__int64)a1 > 144 )
      {
        do
        {
          v52 -= 144;
          v48 = v52;
          sub_4A7700((__int64)a1, v52, v52, &v54);
        }
        while ( v48 - (__int64)a1 > 144 );
      }
    }
  }
  return v67 - __readfsqword(0x28u);
}
