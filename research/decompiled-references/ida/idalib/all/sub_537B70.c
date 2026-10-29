unsigned __int64 __fastcall sub_537B70(_QWORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  size_t v7; // r13
  __int64 v8; // rbp
  size_t v9; // r13
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  void *v14; // rcx
  __m128i v15; // xmm7
  __m128i v16; // xmm6
  __m128 v17; // xmm5
  __m128i v18; // xmm6
  __int64 v19; // rax
  __m128i v20; // xmm4
  __m128i v21; // xmm7
  void *v22; // rcx
  __m128i v23; // xmm4
  __int64 v24; // r13
  void *v25; // rax
  void *v26; // rax
  __m128 v27; // xmm0
  char *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // r15
  unsigned __int64 v32; // rbp
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // rdx
  void *v37; // rdi
  void *v38; // rdi
  bool v39; // cf
  __int64 v40; // rax
  void *v41; // rax
  const void *v42; // rsi
  void *v43; // rax
  const void *v44; // rsi
  char *v45; // r15
  __int64 v46; // rax
  __int64 v47; // rbp
  __int64 v48; // rbp
  unsigned __int64 v49; // rbx
  __int64 v50; // rsi
  __m128i v51; // xmm0
  __int64 v52; // rsi
  __int64 v53; // rsi
  void *v54; // rdi
  void *v55; // rdi
  __int64 v56; // rax
  __m128i v57; // [rsp+0h] [rbp-118h] BYREF
  __m128i v58; // [rsp+10h] [rbp-108h] BYREF
  __m128i v59; // [rsp+20h] [rbp-F8h] BYREF
  void *v60; // [rsp+30h] [rbp-E8h]
  void *v61; // [rsp+38h] [rbp-E0h]
  __int64 v62; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v63; // [rsp+48h] [rbp-D0h]
  void *v64; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v65; // [rsp+58h] [rbp-C0h] BYREF
  void *v66; // [rsp+68h] [rbp-B0h]
  _OWORD v67[2]; // [rsp+70h] [rbp-A8h] BYREF
  void *v68; // [rsp+90h] [rbp-88h]
  __m128i v69; // [rsp+98h] [rbp-80h]
  void *v70; // [rsp+A8h] [rbp-70h]
  __m128 v71; // [rsp+B0h] [rbp-68h]
  __m128i v72; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v73; // [rsp+D8h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  if ( a3 < a2[1] )
  {
    v5 = *a2 + 56 * a3;
    v6 = sub_416F70(a2, a3);
    v7 = *(_QWORD *)(v5 + 8);
    v64 = nullptr;
    v8 = v6;
    v65 = 0;
    if ( v7 )
    {
      v43 = (void *)qalloc_or_throw(v7);
      v44 = *(const void **)v5;
      v65.m128i_i64[1] = v7;
      v64 = v43;
      memcpy(v43, v44, v7);
      v65.m128i_i64[0] = v7;
    }
    v9 = *(_QWORD *)(v5 + 32);
    v66 = nullptr;
    v67[0] = 0;
    if ( v9 )
    {
      v41 = (void *)qalloc_or_throw(v9);
      v42 = *(const void **)(v5 + 24);
      v66 = v41;
      *((_QWORD *)&v67[0] + 1) = v9;
      memcpy(v41, v42, v9);
      *(_QWORD *)&v67[0] = v9;
    }
    v10 = a1[15];
    v11 = a1[16];
    v12 = a1[17];
    v13 = v11 + 1;
    v57 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v5 + 48)), (__m128i)(unsigned __int64)v8);
    v67[1] = v57;
    if ( (unsigned __int64)&v64 < v10 || (unsigned __int64)&v64 >= v10 + (v12 << 6) )
    {
      if ( v12 < v13 )
      {
        v59.m128i_i64[0] = v12;
        v10 = qvector_reserve(a1 + 15, 0, v13, 64);
        v28 = (char *)a1[15];
        v29 = a1[17];
        v30 = a1[16];
        a1[17] = v59.m128i_i64[0];
        v58.m128i_i64[0] = v29;
        v31 = v30 - 1;
        if ( v31 >= 0 )
        {
          v32 = v10;
          do
          {
            v33 = *(_QWORD *)v28;
            v34 = _mm_loadu_si128((const __m128i *)(v28 + 8));
            *(_QWORD *)v28 = 0;
            *(_OWORD *)(v28 + 8) = 0;
            *(_QWORD *)v32 = v33;
            *(__m128i *)(v32 + 8) = v34;
            v35 = *((_QWORD *)v28 + 3);
            *((_QWORD *)v28 + 3) = 0;
            *(_QWORD *)(v32 + 24) = v35;
            *(_QWORD *)(v32 + 32) = *((_QWORD *)v28 + 4);
            v36 = *((_QWORD *)v28 + 5);
            *((_QWORD *)v28 + 5) = 0;
            *(_QWORD *)(v32 + 40) = v36;
            *(_QWORD *)(v32 + 48) = *((_QWORD *)v28 + 6);
            *(_QWORD *)(v32 + 56) = *((_QWORD *)v28 + 7);
            v37 = *((void **)v28 + 3);
            if ( v37 )
            {
              *((_QWORD *)v28 + 4) = 0;
              qfree(v37);
            }
            v38 = *(void **)v28;
            if ( *(_QWORD *)v28 )
            {
              *((_QWORD *)v28 + 1) = 0;
              qfree(v38);
            }
            v28 += 64;
            v32 += 64LL;
            v39 = v31-- == 0;
          }
          while ( !v39 );
          v28 = (char *)a1[15];
        }
        qfree(v28);
        v40 = v58.m128i_i64[0];
        a1[15] = v10;
        a1[17] = v40;
        v11 = a1[16];
      }
      v23 = _mm_load_si128(&v57);
      v24 = (v11 << 6) + v10;
      v25 = v64;
      *(__m128i *)(v24 + 8) = _mm_loadu_si128(&v65);
      *(_QWORD *)v24 = v25;
      v26 = v66;
      v27 = _mm_loadh_ps((const double *)v67 + 1);
      *(__m128i *)(v24 + 48) = v23;
      *(_QWORD *)(v24 + 24) = v26;
      *(__m128 *)(v24 + 32) = v27;
    }
    else
    {
      v14 = v64;
      v64 = nullptr;
      v15 = _mm_loadu_si128(&v65);
      v16 = _mm_load_si128(&v57);
      v65 = 0;
      v60 = v14;
      v17 = _mm_loadh_ps((const double *)v67 + 1);
      v68 = v14;
      v58 = v15;
      v61 = v66;
      v70 = v66;
      v66 = nullptr;
      v69 = v15;
      v59 = (__m128i)v17;
      v67[0] = 0;
      v71 = v17;
      v72 = v16;
      if ( v12 < v13 )
      {
        v63 = v12;
        v10 = qvector_reserve(a1 + 15, 0, v13, 64);
        v45 = (char *)a1[15];
        v46 = a1[17];
        v47 = a1[16];
        a1[17] = v63;
        v62 = v46;
        v48 = v47 - 1;
        if ( v48 >= 0 )
        {
          v49 = v10;
          do
          {
            v50 = *(_QWORD *)v45;
            v51 = _mm_loadu_si128((const __m128i *)(v45 + 8));
            *(_QWORD *)v45 = 0;
            *(_OWORD *)(v45 + 8) = 0;
            *(_QWORD *)v49 = v50;
            *(__m128i *)(v49 + 8) = v51;
            v52 = *((_QWORD *)v45 + 3);
            *((_QWORD *)v45 + 3) = 0;
            *(_QWORD *)(v49 + 24) = v52;
            *(_QWORD *)(v49 + 32) = *((_QWORD *)v45 + 4);
            v53 = *((_QWORD *)v45 + 5);
            *((_QWORD *)v45 + 5) = 0;
            *(_QWORD *)(v49 + 40) = v53;
            *(_QWORD *)(v49 + 48) = *((_QWORD *)v45 + 6);
            *(_QWORD *)(v49 + 56) = *((_QWORD *)v45 + 7);
            v54 = *((void **)v45 + 3);
            if ( v54 )
            {
              *((_QWORD *)v45 + 4) = 0;
              qfree(v54);
            }
            v55 = *(void **)v45;
            if ( *(_QWORD *)v45 )
            {
              *((_QWORD *)v45 + 1) = 0;
              qfree(v55);
            }
            v45 += 64;
            v49 += 64LL;
            v39 = v48-- == 0;
          }
          while ( !v39 );
          v45 = (char *)a1[15];
        }
        qfree(v45);
        v56 = v62;
        a1[15] = v10;
        a1[17] = v56;
        v11 = a1[16];
      }
      v18 = _mm_load_si128(&v57);
      v19 = v10 + (v11 << 6);
      v20 = _mm_load_si128(&v58);
      v21 = _mm_load_si128(&v59);
      *(_QWORD *)v19 = v60;
      v22 = v61;
      *(__m128i *)(v19 + 8) = v20;
      *(_QWORD *)(v19 + 24) = v22;
      *(__m128i *)(v19 + 32) = v21;
      *(__m128i *)(v19 + 48) = v18;
    }
    ++a1[16];
  }
  return v73 - __readfsqword(0x28u);
}
