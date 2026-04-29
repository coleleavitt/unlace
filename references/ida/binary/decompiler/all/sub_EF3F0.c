__int64 __fastcall sub_EF3F0(__int64 a1, __m128i *a2, __int64 a3)
{
  int v4; // eax
  __int32 v6; // r15d
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __m128i v14; // xmm3
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r13
  _QWORD *v19; // rbp
  __m128i v20; // xmm4
  __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int8 v26; // al
  _QWORD *v27; // r12
  __int64 v28; // rax
  size_t v29; // r12
  int v30; // eax
  __int64 v31; // r11
  __int64 v32; // r13
  void *v33; // rax
  size_t v34; // rdx
  void *v35; // rax
  size_t v36; // rdx
  __int32 v37; // [rsp+8h] [rbp-E0h]
  __m128i v38; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v39; // [rsp+20h] [rbp-C8h] BYREF
  size_t n; // [rsp+30h] [rbp-B8h]
  size_t v41; // [rsp+38h] [rbp-B0h]
  __m128i v42; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-70h]
  void *src; // [rsp+80h] [rbp-68h]
  __int64 v46; // [rsp+88h] [rbp-60h]
  __int8 v47; // [rsp+98h] [rbp-50h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 360);
  v48 = __readfsqword(0x28u);
  if ( (v4 & 0xFFFFFFF0) != 0xD0 && (v4 & 0xFFFFFFF0) != 0x40 )
  {
    if ( *(_QWORD *)(a1 + 320) == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL)
      || (v4 & 0xFFFFFFBF) != 0x30
      || a2->m128i_i64[1] <= 1uLL
      || get_tinfo_size() != 1
      || *(_DWORD *)(a2->m128i_i64[0] + 80 * a2->m128i_i64[1] - 80) != 1
      || !*(_BYTE *)(a1 + 366) )
    {
      return *(unsigned int *)(a1 + 348);
    }
    sub_E8860((__int64)&v42, (__int64)a2);
    HIDWORD(v43) = 0;
    v47 = v47 & 0xF | 0x40;
    v8 = v42.m128i_i64[1];
    if ( v42.m128i_i64[1] )
    {
      --v42.m128i_i64[1];
      v27 = (_QWORD *)(v42.m128i_i64[0] + 80 * (v8 - 1));
      clear_tinfo_t();
      if ( v27[5] )
      {
        v27[6] = 0;
        qfree();
      }
      if ( v27[2] )
      {
        v27[3] = 0;
        qfree();
      }
      cleanup_argloc();
    }
    if ( (unsigned __int8)calc_arglocs() )
    {
      v37 = v42.m128i_i32[2];
      if ( v42.m128i_i32[2] <= 0 )
      {
LABEL_30:
        *(_DWORD *)(a1 + 348) = v37;
        v6 = sub_EE130((_QWORD *)a1, &v42);
        if ( v6 == -1 || v37 + 1 >= v6 || (v39.m128i_i64[1] = v37, (unsigned int)compare_arglocs()) )
        {
          v28 = a2->m128i_i64[1];
          *(_DWORD *)(a1 + 348) = v28;
          v6 = v28;
        }
        else
        {
          n = 0;
          v39.m128i_i64[0] = v42.m128i_i64[1];
          if ( v42.m128i_i64[1] )
          {
            n = qalloc_or_throw();
            v29 = n;
            v38.m128i_i64[0] = 0;
            do
            {
              v31 = v42.m128i_i64[0] + 80 * v38.m128i_i64[0];
              *(_DWORD *)v29 = 0;
              v32 = v31;
              copy_argloc();
              *(_QWORD *)(v29 + 16) = 0;
              *(_OWORD *)(v29 + 24) = 0;
              if ( *(_QWORD *)(v32 + 24) )
              {
                v41 = *(_QWORD *)(v32 + 24);
                v33 = (void *)qalloc_or_throw();
                v34 = v41;
                *(_QWORD *)(v29 + 16) = v33;
                *(_QWORD *)(v29 + 32) = v34;
                memcpy(v33, *(const void **)(v32 + 16), v34);
                *(_QWORD *)(v29 + 24) = v41;
              }
              *(_QWORD *)(v29 + 40) = 0;
              *(_OWORD *)(v29 + 48) = 0;
              if ( *(_QWORD *)(v32 + 48) )
              {
                v41 = *(_QWORD *)(v32 + 48);
                v35 = (void *)qalloc_or_throw();
                v36 = v41;
                *(_QWORD *)(v29 + 40) = v35;
                *(_QWORD *)(v29 + 56) = v36;
                memcpy(v35, *(const void **)(v32 + 40), v36);
                *(_QWORD *)(v29 + 48) = v41;
              }
              *(_QWORD *)(v29 + 64) = 0;
              copy_tinfo_t();
              v30 = *(_DWORD *)(v32 + 72);
              ++v38.m128i_i64[0];
              v29 += 80LL;
              *(_DWORD *)(v29 - 8) = v30;
            }
            while ( v39.m128i_i64[0] != v38.m128i_i64[0] );
          }
          v14 = _mm_loadl_epi64(&v39);
          v15 = a2->m128i_i64[0] == 0;
          v38 = _mm_unpacklo_epi64(v14, v14);
          if ( !v15 )
          {
            v16 = a2->m128i_i64[1];
            v17 = 0;
            if ( v16 )
            {
              v39.m128i_i64[0] = a3;
              v18 = v16;
              do
              {
                v19 = (_QWORD *)(a2->m128i_i64[0] + 80 * v17);
                clear_tinfo_t();
                if ( v19[5] )
                {
                  v19[6] = 0;
                  qfree();
                }
                if ( v19[2] )
                {
                  v19[3] = 0;
                  qfree();
                }
                ++v17;
                cleanup_argloc();
              }
              while ( v18 != v17 );
              a3 = v39.m128i_i64[0];
            }
            a2->m128i_i64[1] = 0;
            qfree();
          }
          v20 = _mm_load_si128(&v38);
          a2->m128i_i64[0] = n;
          v21 = v43;
          *(__m128i *)((char *)a2 + 8) = v20;
          a2[1].m128i_i64[1] = v21;
          copy_tinfo_t();
          copy_argloc();
          v39.m128i_i64[0] = 0;
          a2[3].m128i_i64[1] = v44;
          v38.m128i_i64[0] = v46;
          if ( v46 )
          {
            n = 8 * v46;
            v39.m128i_i64[0] = qalloc_or_throw();
            memcpy((void *)v39.m128i_i64[0], src, n);
          }
          v22 = _mm_loadl_epi64(&v38);
          v23 = _mm_unpacklo_epi64(v22, v22);
          if ( a2[4].m128i_i64[0] )
          {
            v38 = v23;
            a2[4].m128i_i64[1] = 0;
            qfree();
            v23 = _mm_load_si128(&v38);
          }
          v24 = v39.m128i_i64[0];
          *(__m128i *)((char *)a2 + 72) = v23;
          v25 = v39.m128i_u64[1];
          a2[4].m128i_i64[0] = v24;
          a2[5].m128i_i8[8] = v47;
          *(_DWORD *)(a1 + 348) = v37;
          *(_DWORD *)(a3 + 8) = v37;
          sub_EC590(v42.m128i_i64, v25);
          v26 = v47;
          *(_DWORD *)(a1 + 360) = 64;
          HIDWORD(v43) = 0;
          v47 = v26 & 0xF | 0x40;
          create_tinfo();
          sub_E7290(a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1);
        }
        goto LABEL_19;
      }
      v9 = 0;
      while ( !(unsigned int)compare_arglocs() )
      {
        v9 += 80;
        if ( 16 * (5LL * (unsigned int)(v37 - 1) + 5) == v9 )
          goto LABEL_30;
      }
    }
    v6 = *(_DWORD *)(a1 + 348);
LABEL_19:
    if ( src )
    {
      v46 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v10 = v42.m128i_i64[0];
    if ( v42.m128i_i64[0] )
    {
      v11 = v42.m128i_i64[1];
      if ( v42.m128i_i64[1] )
      {
        v12 = 0;
        do
        {
          v13 = (_QWORD *)(v10 + 80 * v12);
          clear_tinfo_t();
          if ( v13[5] )
          {
            v13[6] = 0;
            qfree();
          }
          if ( v13[2] )
          {
            v13[3] = 0;
            qfree();
          }
          ++v12;
          cleanup_argloc();
          v10 = v42.m128i_i64[0];
        }
        while ( v11 != v12 );
      }
      v42.m128i_i64[1] = 0;
      qfree();
    }
    return (unsigned int)v6;
  }
  return sub_EE130((_QWORD *)a1, a2);
}
