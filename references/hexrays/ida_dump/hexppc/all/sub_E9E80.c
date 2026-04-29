__int64 __fastcall sub_E9E80(__int64 a1, __m128i *a2, __int64 a3)
{
  int v5; // eax
  unsigned __int64 v7; // rax
  __int32 v8; // r13d
  __int64 v10; // r14
  __m128i *v11; // r8
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __m128i *v18; // rsi
  __m128i v19; // xmm3
  bool v20; // zf
  __int64 v21; // rbp
  _QWORD *v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __m128i si128; // xmm4
  __int64 v27; // rax
  void *v28; // r14
  __int64 v29; // r8
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // rcx
  __int8 v34; // al
  __m128i *v35; // rdx
  _QWORD *v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbp
  int v41; // eax
  __int64 v42; // r11
  __int64 v43; // r14
  void *v44; // rax
  size_t v45; // rdx
  void *v46; // rax
  size_t v47; // rdx
  __m128i v48; // [rsp+0h] [rbp-E8h] BYREF
  __m128i *v49; // [rsp+10h] [rbp-D8h]
  unsigned int v50; // [rsp+1Ch] [rbp-CCh]
  size_t n[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+30h] [rbp-B8h]
  size_t v53; // [rsp+38h] [rbp-B0h]
  __int64 v54; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+48h] [rbp-A0h]
  __int64 v56; // [rsp+58h] [rbp-90h]
  char v57[8]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v58[16]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v59; // [rsp+78h] [rbp-70h]
  void *src; // [rsp+80h] [rbp-68h]
  __int64 v61; // [rsp+88h] [rbp-60h]
  __int8 v62; // [rsp+98h] [rbp-50h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 360);
  v63 = __readfsqword(0x28u);
  if ( (v5 & 0xFFFFFFF0) != 0xD0 && (v5 & 0xFFFFFFF0) != 0x40 )
  {
    if ( *(_QWORD *)(a1 + 320) == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL) )
      return *(unsigned int *)(a1 + 348);
    if ( (v5 & 0xFFFFFFBF) != 0x30 )
      return *(unsigned int *)(a1 + 348);
    v7 = a2->m128i_u64[1];
    if ( v7 <= 1
      || get_tinfo_size(0, *(_QWORD *)(a2->m128i_i64[0] + 80 * v7 - 16), 0) != 1
      || *(_DWORD *)(a2->m128i_i64[0] + 80 * a2->m128i_i64[1] - 80) != 1
      || !*(_BYTE *)(a1 + 366) )
    {
      return *(unsigned int *)(a1 + 348);
    }
    v49 = (__m128i *)&v54;
    sub_E4AC0((__int64)&v54, (__int64)a2);
    HIDWORD(v56) = 0;
    v62 = v62 & 0xF | 0x40;
    if ( v55 )
    {
      --v55;
      v36 = (_QWORD *)(v54 + 80 * v55);
      clear_tinfo_t(v36 + 8);
      v37 = v36[5];
      if ( v37 )
      {
        v36[6] = 0;
        qfree(v37);
      }
      v38 = v36[2];
      if ( v38 )
      {
        v36[3] = 0;
        qfree(v38);
      }
      cleanup_argloc(v36);
    }
    if ( (unsigned __int8)calc_arglocs(v49) )
    {
      v48.m128i_i64[0] = v55;
      v50 = v55;
      if ( (int)v55 <= 0 )
      {
LABEL_30:
        v18 = v49;
        *(_DWORD *)(a1 + 348) = v48.m128i_i32[0];
        v8 = sub_E8D10((_QWORD *)a1, v18);
        if ( v8 == -1
          || v48.m128i_i32[0] + 1 >= v8
          || (unsigned int)compare_arglocs(v54 + 80LL * v48.m128i_i32[0], a2->m128i_i64[0] + 80 * a2->m128i_i64[1] - 80) )
        {
          v39 = a2->m128i_i64[1];
          v11 = (__m128i *)v58;
          *(_DWORD *)(a1 + 348) = v39;
          v8 = v39;
        }
        else
        {
          v52 = 0;
          n[0] = v55;
          if ( v55 )
          {
            v52 = qalloc_or_throw(80 * v55);
            v40 = v52;
            v48.m128i_i64[0] = 0;
            do
            {
              v42 = v54 + 80 * v48.m128i_i64[0];
              *(_DWORD *)v40 = 0;
              v43 = v42;
              copy_argloc(v40, v42);
              *(_QWORD *)(v40 + 16) = 0;
              *(_OWORD *)(v40 + 24) = 0;
              if ( *(_QWORD *)(v43 + 24) )
              {
                v53 = *(_QWORD *)(v43 + 24);
                v44 = (void *)qalloc_or_throw(v53);
                v45 = v53;
                *(_QWORD *)(v40 + 16) = v44;
                *(_QWORD *)(v40 + 32) = v45;
                memcpy(v44, *(const void **)(v43 + 16), v45);
                *(_QWORD *)(v40 + 24) = v53;
              }
              *(_QWORD *)(v40 + 40) = 0;
              *(_OWORD *)(v40 + 48) = 0;
              if ( *(_QWORD *)(v43 + 48) )
              {
                v53 = *(_QWORD *)(v43 + 48);
                v46 = (void *)qalloc_or_throw(v53);
                v47 = v53;
                *(_QWORD *)(v40 + 40) = v46;
                *(_QWORD *)(v40 + 56) = v47;
                memcpy(v46, *(const void **)(v43 + 40), v47);
                *(_QWORD *)(v40 + 48) = v53;
              }
              *(_QWORD *)(v40 + 64) = 0;
              copy_tinfo_t(v40 + 64, v43 + 64);
              v41 = *(_DWORD *)(v43 + 72);
              ++v48.m128i_i64[0];
              v40 += 80;
              *(_DWORD *)(v40 - 8) = v41;
            }
            while ( n[0] != v48.m128i_i64[0] );
          }
          v19 = _mm_loadl_epi64((const __m128i *)n);
          v20 = a2->m128i_i64[0] == 0;
          *(__m128i *)n = _mm_unpacklo_epi64(v19, v19);
          if ( !v20 )
          {
            v21 = 0;
            v48.m128i_i64[0] = a2->m128i_i64[1];
            if ( v48.m128i_i64[0] )
            {
              do
              {
                v22 = (_QWORD *)(a2->m128i_i64[0] + 80 * v21);
                clear_tinfo_t(v22 + 8);
                v23 = v22[5];
                if ( v23 )
                {
                  v22[6] = 0;
                  qfree(v23);
                }
                v24 = v22[2];
                if ( v24 )
                {
                  v22[3] = 0;
                  qfree(v24);
                }
                ++v21;
                cleanup_argloc(v22);
              }
              while ( v48.m128i_i64[0] != v21 );
            }
            v25 = a2->m128i_i64[0];
            a2->m128i_i64[1] = 0;
            qfree(v25);
          }
          si128 = _mm_load_si128((const __m128i *)n);
          a2->m128i_i64[0] = v52;
          v27 = v56;
          *(__m128i *)((char *)a2 + 8) = si128;
          a2[1].m128i_i64[1] = v27;
          copy_tinfo_t(&a2[2], v57);
          n[0] = (size_t)v58;
          copy_argloc(&a2[2].m128i_u64[1], v58);
          v28 = nullptr;
          v29 = n[0];
          a2[3].m128i_i64[1] = v59;
          v48.m128i_i64[0] = v61;
          if ( v61 )
          {
            v52 = v29;
            n[0] = 8 * v61;
            v28 = (void *)qalloc_or_throw(8 * v61);
            memcpy(v28, src, n[0]);
            v29 = v52;
          }
          v30 = _mm_loadl_epi64(&v48);
          v31 = a2[4].m128i_i64[0];
          v32 = _mm_unpacklo_epi64(v30, v30);
          if ( v31 )
          {
            n[0] = v29;
            a2[4].m128i_i64[1] = 0;
            v48 = v32;
            qfree(v31);
            v29 = n[0];
            v32 = _mm_load_si128(&v48);
          }
          a2[4].m128i_i64[0] = (__int64)v28;
          v33 = v50;
          v34 = v62;
          v35 = v49;
          *(__m128i *)((char *)a2 + 72) = v32;
          v48.m128i_i64[0] = v29;
          a2[5].m128i_i8[8] = v34;
          sub_EFC10(a1, a3, v35, v33);
          v11 = (__m128i *)v48.m128i_i64[0];
        }
        goto LABEL_19;
      }
      v10 = 0;
      while ( !(unsigned int)compare_arglocs(v10 + v54, v10 + a2->m128i_i64[0]) )
      {
        v10 += 80;
        if ( 16 * (5LL * (unsigned int)(v48.m128i_i32[0] - 1) + 5) == v10 )
          goto LABEL_30;
      }
    }
    v8 = *(_DWORD *)(a1 + 348);
    v11 = (__m128i *)v58;
LABEL_19:
    if ( src )
    {
      v49 = v11;
      v61 = 0;
      qfree(src);
      v11 = v49;
    }
    cleanup_argloc(v11);
    clear_tinfo_t(v57);
    v12 = v54;
    if ( v54 )
    {
      v13 = v55;
      if ( v55 )
      {
        v14 = 0;
        do
        {
          v15 = (_QWORD *)(v12 + 80 * v14);
          clear_tinfo_t(v15 + 8);
          v16 = v15[5];
          if ( v16 )
          {
            v15[6] = 0;
            qfree(v16);
          }
          v17 = v15[2];
          if ( v17 )
          {
            v15[3] = 0;
            qfree(v17);
          }
          ++v14;
          cleanup_argloc(v15);
          v12 = v54;
        }
        while ( v13 != v14 );
      }
      v55 = 0;
      qfree(v12);
    }
    return (unsigned int)v8;
  }
  return sub_E8D10((_QWORD *)a1, a2);
}
