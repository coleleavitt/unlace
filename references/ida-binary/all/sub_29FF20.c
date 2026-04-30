unsigned __int64 __fastcall sub_29FF20(_QWORD *a1, const char *a2, __int64 *a3)
{
  const char *v4; // r14
  __int64 v5; // rdi
  __int64 v7; // r13
  __int64 v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rbx
  void *v11; // rdi
  __int64 *v12; // rcx
  _QWORD *v13; // r11
  const char *v14; // r12
  int v15; // r15d
  __int64 *v16; // r14
  int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rcx
  _QWORD *v21; // rdi
  int v22; // r15d
  unsigned int v23; // r9d
  __int64 (__fastcall *v24)(__int64, int); // rax
  int v25; // eax
  __int64 (__fastcall *v26)(__int64, int, int); // rax
  __int64 v27; // rbx
  __m128i v28; // xmm0
  __int64 v29; // rsi
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  signed int v35; // r15d
  __int64 v36; // rbx
  unsigned int *v37; // rsi
  __m128i v38; // xmm1
  int v39; // eax
  __m128i v40; // xmm0
  _QWORD *v42; // [rsp+0h] [rbp-C8h]
  _QWORD *v43; // [rsp+0h] [rbp-C8h]
  __m128i v44; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD *v45; // [rsp+18h] [rbp-B0h]
  unsigned int v46; // [rsp+24h] [rbp-A4h]
  __int64 v47; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v48; // [rsp+30h] [rbp-98h]
  __int64 v49; // [rsp+38h] [rbp-90h]
  __int64 v50; // [rsp+40h] [rbp-88h]
  _QWORD *v51; // [rsp+48h] [rbp-80h]
  int v52; // [rsp+50h] [rbp-78h]
  int v53; // [rsp+54h] [rbp-74h]
  const char *v54; // [rsp+58h] [rbp-70h]
  unsigned __int64 v55; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-60h] BYREF
  __m128i v57; // [rsp+70h] [rbp-58h] BYREF
  int v58; // [rsp+80h] [rbp-48h]
  unsigned __int64 v59; // [rsp+88h] [rbp-40h]

  v4 = a2;
  v5 = *a3;
  v59 = __readfsqword(0x28u);
  if ( v5 )
  {
    v7 = a3[1];
    if ( v7 )
    {
      v8 = 0;
      v9 = a1;
      do
      {
        v10 = *(_QWORD *)(v5 + 48 * v8 + 16);
        if ( v10 )
        {
          do
          {
            sub_290E80(*(_QWORD **)(v10 + 24));
            v11 = (void *)v10;
            v10 = *(_QWORD *)(v10 + 16);
            a2 = (const char *)&word_38;
            operator delete(v11, 0x38u);
          }
          while ( v10 );
          v5 = *a3;
        }
        ++v8;
      }
      while ( v7 != v8 );
      a1 = v9;
    }
    a3[1] = 0;
    v42 = a1;
    qfree(v5, a2);
    *a3 = 0;
    a1 = v42;
    a3[2] = 0;
  }
  v43 = a1;
  sub_29D700(a3, *((_QWORD *)v4 + 1));
  if ( *((_QWORD *)v4 + 1) > 1u )
  {
    v12 = a3;
    v13 = v43;
    v14 = v4;
    v15 = 1;
    v16 = v12;
    do
    {
      v17 = v15 - 1;
      v18 = 0;
      v19 = 32LL * (v15 - 1) + *(_QWORD *)v14;
      if ( *(_QWORD *)(v19 + 8) )
      {
        v54 = v14;
        v20 = (_QWORD *)v19;
        v21 = v13;
        v53 = v15;
        v22 = 0;
        do
        {
          v23 = *(_DWORD *)(*v20 + 4 * v18);
          v24 = *(__int64 (__fastcall **)(__int64, int))(*v21 + 96LL);
          if ( v24 == interactive_graph_t__::vfunc_12 )
          {
            v25 = *(_DWORD *)(v21[22] + 24LL * (int)v23 + 8);
          }
          else
          {
            v44.m128i_i64[1] = (__int64)v20;
            v44.m128i_i32[0] = v23;
            v25 = v24((__int64)v21, v23);
            v20 = (_QWORD *)v44.m128i_i64[1];
            v23 = v44.m128i_i32[0];
          }
          if ( v25 > 0 )
          {
            v46 = v23;
            v47 = v25;
            v48 = (unsigned __int64 *)&v56;
            v50 = 24LL * (int)v23;
            v44.m128i_i64[1] = 0;
            v49 = v23;
            v52 = v22;
            v51 = v20;
            do
            {
              v26 = *(__int64 (__fastcall **)(__int64, int, int))(*v21 + 112LL);
              if ( v26 == interactive_graph_t__::vfunc_14 )
                v27 = *(unsigned int *)(*(_QWORD *)(v21[22] + v50) + 4 * v44.m128i_i64[1]);
              else
                v27 = (unsigned int)v26((__int64)v21, v46, v44.m128i_i32[2]);
              v56 = 0;
              v55 = 0;
              v44.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), _mm_cvtsi32_si128(v27)).m128i_u64[0];
              v57.m128i_i64[0] = v44.m128i_i64[0];
              sub_298C80((__int64)v21, v44.m128i_i64[0], v48, &v55);
              v28 = _mm_cvtsi32_si128(v56);
              v29 = v49 | (v27 << 32);
              v30 = *(__int64 (__fastcall **)(__int64, __int64))(*v21 + 160LL);
              if ( v30 == interactive_graph_t__::vfunc_20 )
              {
                v31 = interactive_graph_t__::vfunc_20((__int64)v21, v29);
              }
              else
              {
                LODWORD(v45) = _mm_cvtsi128_si32(v28);
                v31 = v30((__int64)v21, v29);
                v28 = _mm_cvtsi32_si128((unsigned int)v45);
              }
              v45 = v21;
              v32 = v31;
              v33 = *(_QWORD *)(v31 + 24);
              v34 = 0;
              v35 = 0;
              v36 = v32;
              do
              {
                v37 = (unsigned int *)&v55;
                v38 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v44), _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), v28));
                if ( v34 != v33 )
                  v37 = (unsigned int *)(*(_QWORD *)(v36 + 16) + 8 * v34);
                v39 = v35 + v17;
                v40 = _mm_cvtsi32_si128(*v37);
                ++v35;
                v57 = v38;
                v58 = _mm_cvtsi128_si32(v40);
                sub_29FB40((_QWORD *)(*v16 + 48LL * v39), &v57);
                v33 = *(_QWORD *)(v36 + 24);
                v34 = v35;
                v28 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v40));
              }
              while ( v33 >= v35 );
              ++v44.m128i_i64[1];
              v21 = v45;
            }
            while ( v44.m128i_i64[1] != v47 );
            v22 = v52;
            v20 = v51;
          }
          v18 = ++v22;
        }
        while ( (unsigned __int64)v22 < v20[1] );
        v15 = v53;
        v14 = v54;
        v13 = v21;
      }
      ++v15;
    }
    while ( (unsigned __int64)v15 < *((_QWORD *)v14 + 1) );
  }
  return v59 - __readfsqword(0x28u);
}
