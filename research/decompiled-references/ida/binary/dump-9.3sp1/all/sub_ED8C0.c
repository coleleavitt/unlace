__int64 __fastcall sub_ED8C0(__int64 a1, __m128i *a2, __int64 a3)
{
  int v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int32 v9; // r13d
  __int64 v11; // r14
  __m128i *v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __m128i *v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i v23; // xmm3
  bool v24; // zf
  __int64 v25; // rbp
  _QWORD *v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __m128i si128; // xmm4
  __int64 v31; // rax
  __int64 v32; // rcx
  void *v33; // r14
  __int64 v34; // r8
  __m128i v35; // xmm0
  __int64 v36; // rdi
  __m128i v37; // xmm0
  __int64 v38; // rcx
  __int8 v39; // al
  __m128i *v40; // rdx
  _QWORD *v41; // rbp
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rdx
  int v47; // eax
  const void *v48; // r11
  const void *v49; // rsi
  const void *v50; // r14
  __int64 v51; // rcx
  __int64 v52; // rdx
  void *v53; // rax
  size_t v54; // rdx
  void *v55; // rax
  size_t v56; // rdx
  __m128i v57; // [rsp+0h] [rbp-E8h] BYREF
  __m128i *v58; // [rsp+10h] [rbp-D8h]
  unsigned int v59; // [rsp+1Ch] [rbp-CCh]
  size_t n[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+30h] [rbp-B8h]
  size_t v62; // [rsp+38h] [rbp-B0h]
  __int64 v63; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+48h] [rbp-A0h]
  __int64 v65; // [rsp+58h] [rbp-90h]
  _BYTE v66[16]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v67; // [rsp+78h] [rbp-70h]
  void *src; // [rsp+80h] [rbp-68h]
  __int64 v69; // [rsp+88h] [rbp-60h]
  __int8 v70; // [rsp+98h] [rbp-50h]
  unsigned __int64 v71; // [rsp+A8h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 360);
  v71 = __readfsqword(0x28u);
  if ( (v5 & 0xFFFFFFF0) != 0xD0 && (v5 & 0xFFFFFFF0) != 0x40 )
  {
    if ( *(_QWORD *)(a1 + 320) == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL)
      || (v5 & 0xFFFFFFBF) != 0x30
      || a2->m128i_i64[1] <= 1uLL
      || get_tinfo_size() != 1
      || *(_DWORD *)(a2->m128i_i64[0] + 80 * a2->m128i_i64[1] - 80) != 1
      || !*(_BYTE *)(a1 + 366) )
    {
      return *(unsigned int *)(a1 + 348);
    }
    v58 = (__m128i *)&v63;
    sub_E8500((__int64)&v63, (__int64)a2, v7, v8);
    HIDWORD(v65) = 0;
    v70 = v70 & 0xF | 0x40;
    if ( v64 )
    {
      --v64;
      v41 = (_QWORD *)(v63 + 80 * v64);
      clear_tinfo_t();
      v42 = v41[5];
      if ( v42 )
      {
        v41[6] = 0;
        qfree(v42);
      }
      v43 = v41[2];
      if ( v43 )
      {
        v41[3] = 0;
        qfree(v43);
      }
      cleanup_argloc();
    }
    if ( (unsigned __int8)calc_arglocs() )
    {
      v57.m128i_i64[0] = v64;
      v59 = v64;
      if ( (int)v64 <= 0 )
      {
LABEL_30:
        v19 = v58;
        *(_DWORD *)(a1 + 348) = v57.m128i_i32[0];
        v9 = sub_EC750((_QWORD *)a1, v19);
        if ( v9 == -1
          || v57.m128i_i32[0] + 1 >= v9
          || (v20 = a2->m128i_i64[0] + 80 * a2->m128i_i64[1] - 80, (unsigned int)compare_arglocs()) )
        {
          v44 = a2->m128i_i64[1];
          v12 = (__m128i *)v66;
          *(_DWORD *)(a1 + 348) = v44;
          v9 = v44;
        }
        else
        {
          v61 = 0;
          n[0] = v64;
          if ( v64 )
          {
            v61 = qalloc_or_throw(80 * v64, v20, v21, v22);
            v45 = v61;
            v57.m128i_i64[0] = 0;
            do
            {
              v48 = (const void *)(v63 + 80 * v57.m128i_i64[0]);
              *(_DWORD *)v45 = 0;
              v49 = v48;
              v50 = v48;
              copy_argloc();
              *(_QWORD *)(v45 + 16) = 0;
              *(_OWORD *)(v45 + 24) = 0;
              v52 = *((_QWORD *)v50 + 3);
              if ( v52 )
              {
                v62 = *((_QWORD *)v50 + 3);
                v53 = (void *)qalloc_or_throw(v62, (__int64)v49, v52, v51);
                v54 = v62;
                *(_QWORD *)(v45 + 16) = v53;
                *(_QWORD *)(v45 + 32) = v54;
                v49 = *((const void **)v50 + 2);
                memcpy(v53, v49, v54);
                *(_QWORD *)(v45 + 24) = v62;
              }
              *(_QWORD *)(v45 + 40) = 0;
              *(_OWORD *)(v45 + 48) = 0;
              v46 = *((_QWORD *)v50 + 6);
              if ( v46 )
              {
                v62 = *((_QWORD *)v50 + 6);
                v55 = (void *)qalloc_or_throw(v62, (__int64)v49, v46, v51);
                v56 = v62;
                *(_QWORD *)(v45 + 40) = v55;
                *(_QWORD *)(v45 + 56) = v56;
                memcpy(v55, *((const void **)v50 + 5), v56);
                *(_QWORD *)(v45 + 48) = v62;
              }
              *(_QWORD *)(v45 + 64) = 0;
              copy_tinfo_t();
              v47 = *((_DWORD *)v50 + 18);
              ++v57.m128i_i64[0];
              v45 += 80;
              *(_DWORD *)(v45 - 8) = v47;
            }
            while ( n[0] != v57.m128i_i64[0] );
          }
          v23 = _mm_loadl_epi64((const __m128i *)n);
          v24 = a2->m128i_i64[0] == 0;
          *(__m128i *)n = _mm_unpacklo_epi64(v23, v23);
          if ( !v24 )
          {
            v25 = 0;
            v57.m128i_i64[0] = a2->m128i_i64[1];
            if ( v57.m128i_i64[0] )
            {
              do
              {
                v26 = (_QWORD *)(a2->m128i_i64[0] + 80 * v25);
                clear_tinfo_t();
                v27 = v26[5];
                if ( v27 )
                {
                  v26[6] = 0;
                  qfree(v27);
                }
                v28 = v26[2];
                if ( v28 )
                {
                  v26[3] = 0;
                  qfree(v28);
                }
                ++v25;
                cleanup_argloc();
              }
              while ( v57.m128i_i64[0] != v25 );
            }
            v29 = a2->m128i_i64[0];
            a2->m128i_i64[1] = 0;
            qfree(v29);
          }
          si128 = _mm_load_si128((const __m128i *)n);
          a2->m128i_i64[0] = v61;
          v31 = v65;
          *(__m128i *)((char *)a2 + 8) = si128;
          a2[1].m128i_i64[1] = v31;
          copy_tinfo_t();
          n[0] = (size_t)v66;
          copy_argloc();
          v33 = nullptr;
          v34 = n[0];
          a2[3].m128i_i64[1] = v67;
          v57.m128i_i64[0] = v69;
          if ( v69 )
          {
            v61 = v34;
            n[0] = 8 * v69;
            v33 = (void *)qalloc_or_throw(8 * v69, (__int64)v66, 8 * v69, v32);
            memcpy(v33, src, n[0]);
            v34 = v61;
          }
          v35 = _mm_loadl_epi64(&v57);
          v36 = a2[4].m128i_i64[0];
          v37 = _mm_unpacklo_epi64(v35, v35);
          if ( v36 )
          {
            n[0] = v34;
            a2[4].m128i_i64[1] = 0;
            v57 = v37;
            qfree(v36);
            v34 = n[0];
            v37 = _mm_load_si128(&v57);
          }
          a2[4].m128i_i64[0] = (__int64)v33;
          v38 = v59;
          v39 = v70;
          v40 = v58;
          *(__m128i *)((char *)a2 + 72) = v37;
          v57.m128i_i64[0] = v34;
          a2[5].m128i_i8[8] = v39;
          sub_F3650(a1, a3, v40, v38);
          v12 = (__m128i *)v57.m128i_i64[0];
        }
        goto LABEL_19;
      }
      v11 = 0;
      while ( !(unsigned int)compare_arglocs() )
      {
        v11 += 80;
        if ( 16 * (5LL * (unsigned int)(v57.m128i_i32[0] - 1) + 5) == v11 )
          goto LABEL_30;
      }
    }
    v9 = *(_DWORD *)(a1 + 348);
    v12 = (__m128i *)v66;
LABEL_19:
    if ( src )
    {
      v58 = v12;
      v69 = 0;
      qfree((__int64)src);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v13 = v63;
    if ( v63 )
    {
      v14 = v64;
      if ( v64 )
      {
        v15 = 0;
        do
        {
          v16 = (_QWORD *)(v13 + 80 * v15);
          clear_tinfo_t();
          v17 = v16[5];
          if ( v17 )
          {
            v16[6] = 0;
            qfree(v17);
          }
          v18 = v16[2];
          if ( v18 )
          {
            v16[3] = 0;
            qfree(v18);
          }
          ++v15;
          cleanup_argloc();
          v13 = v63;
        }
        while ( v14 != v15 );
      }
      v64 = 0;
      qfree(v13);
    }
    return (unsigned int)v9;
  }
  return sub_EC750((_QWORD *)a1, a2);
}
