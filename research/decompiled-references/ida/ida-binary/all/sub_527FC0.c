void __fastcall sub_527FC0(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 (__fastcall *a5)(__int64 *, __int64 *))
{
  char v10; // al
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // rsi
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbp
  __int64 v23; // r13
  __m128i v24; // xmm1
  __int64 v25; // rdi
  __int64 v26; // rdi
  __m128i v27; // xmm5
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  const char *v32; // rsi
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r12
  __int64 v39; // rbp
  __m128i v40; // xmm1
  __int64 v41; // rdi
  __int64 v42; // rdi
  __m128i v43; // xmm6
  __int64 v44; // r12
  __m128i v45; // xmm1
  __int64 v46; // rdi
  __int64 v47; // rdi
  __m128i v48; // xmm4
  __int64 v49; // r13
  __m128i v50; // xmm1
  __int64 v51; // rdi
  __int64 v52; // rdi
  __m128i v53; // xmm7
  __m128i v54; // xmm4
  __int64 v55; // r12
  __int64 v56; // r13
  __m128i si128; // xmm1
  __int64 v58; // rdi
  __int64 v59; // rdi
  __m128i v60; // xmm5
  __m128i v61; // xmm6
  __int64 v62; // rbp
  __int64 v63; // r13
  __m128i v64; // xmm1
  __int64 v65; // rdi
  __int64 v66; // rdi
  __m128i v67; // xmm7
  __m128i v68; // [rsp+0h] [rbp-48h] BYREF
  __m128i v69[3]; // [rsp+10h] [rbp-38h] BYREF

  v10 = a5(a2, a3);
  v11 = (const char *)a4;
  if ( v10 )
  {
    if ( (unsigned __int8)a5(a3, a4) )
    {
      v54 = _mm_loadu_si128((const __m128i *)(a1 + 1));
      v55 = *a1;
      *a1 = 0;
      *(_OWORD *)(a1 + 1) = 0;
      v56 = *a3;
      si128 = _mm_loadu_si128((const __m128i *)(a3 + 1));
      *a3 = 0;
      *(_OWORD *)(a3 + 1) = 0;
      v58 = *a1;
      v68 = v54;
      if ( v58 )
      {
        a1[1] = 0;
        qfree(v58, v11, v12, v13, v14, v15, *(_OWORD *)&v68, *(_OWORD *)&si128);
        si128 = _mm_load_si128(v69);
      }
      *a1 = v56;
      *(__m128i *)(a1 + 1) = si128;
      v59 = *a3;
      if ( *a3 )
      {
        a3[1] = 0;
        qfree(v59, v11);
      }
      v60 = _mm_load_si128(&v68);
      *a3 = v55;
      *(__m128i *)(a3 + 1) = v60;
    }
    else
    {
      v16 = (const char *)a4;
      v17 = a5(a2, a4);
      v22 = *a1;
      v68 = _mm_loadu_si128((const __m128i *)(a1 + 1));
      *a1 = 0;
      *(_OWORD *)(a1 + 1) = 0;
      if ( v17 )
      {
        v44 = *a4;
        v45 = _mm_loadu_si128((const __m128i *)(a4 + 1));
        *a4 = 0;
        *(_OWORD *)(a4 + 1) = 0;
        v46 = *a1;
        if ( *a1 )
        {
          a1[1] = 0;
          qfree(v46, (const char *)a4, v18, v19, v20, v21, *(_OWORD *)&v68, *(_OWORD *)&v45);
          v45 = _mm_load_si128(v69);
        }
        *a1 = v44;
        *(__m128i *)(a1 + 1) = v45;
        v47 = *a4;
        if ( *a4 )
        {
          a4[1] = 0;
          qfree(v47, (const char *)a4);
        }
        v48 = _mm_load_si128(&v68);
        *a4 = v22;
        *(__m128i *)(a4 + 1) = v48;
      }
      else
      {
        v23 = *a2;
        v24 = _mm_loadu_si128((const __m128i *)(a2 + 1));
        *a2 = 0;
        *(_OWORD *)(a2 + 1) = 0;
        v25 = *a1;
        if ( *a1 )
        {
          a1[1] = 0;
          qfree(v25, v16, v18, v19, v20, v21, *(_OWORD *)&v68, *(_OWORD *)&v24);
          v24 = _mm_load_si128(v69);
        }
        *a1 = v23;
        *(__m128i *)(a1 + 1) = v24;
        v26 = *a2;
        if ( *a2 )
        {
          a2[1] = 0;
          qfree(v26, v16);
        }
        v27 = _mm_load_si128(&v68);
        *a2 = v22;
        *(__m128i *)(a2 + 1) = v27;
      }
    }
  }
  else if ( (unsigned __int8)a5(a2, a4) )
  {
    v61 = _mm_loadu_si128((const __m128i *)(a1 + 1));
    v62 = *a1;
    *a1 = 0;
    *(_OWORD *)(a1 + 1) = 0;
    v63 = *a2;
    v64 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = 0;
    *(_OWORD *)(a2 + 1) = 0;
    v65 = *a1;
    v68 = v61;
    if ( v65 )
    {
      a1[1] = 0;
      qfree(v65, v11, v28, v29, v30, v31, *(_OWORD *)&v68, *(_OWORD *)&v64);
      v64 = _mm_load_si128(v69);
    }
    *a1 = v63;
    *(__m128i *)(a1 + 1) = v64;
    v66 = *a2;
    if ( *a2 )
    {
      a2[1] = 0;
      qfree(v66, v11);
    }
    v67 = _mm_load_si128(&v68);
    *a2 = v62;
    *(__m128i *)(a2 + 1) = v67;
  }
  else
  {
    v32 = (const char *)a4;
    v33 = a5(a3, a4);
    v38 = *a1;
    v68 = _mm_loadu_si128((const __m128i *)(a1 + 1));
    *a1 = 0;
    *(_OWORD *)(a1 + 1) = 0;
    if ( v33 )
    {
      v39 = *a4;
      v40 = _mm_loadu_si128((const __m128i *)(a4 + 1));
      *a4 = 0;
      *(_OWORD *)(a4 + 1) = 0;
      v41 = *a1;
      if ( *a1 )
      {
        a1[1] = 0;
        qfree(v41, (const char *)a4, v34, v35, v36, v37, *(_OWORD *)&v68, *(_OWORD *)&v40);
        v40 = _mm_load_si128(v69);
      }
      *a1 = v39;
      *(__m128i *)(a1 + 1) = v40;
      v42 = *a4;
      if ( *a4 )
      {
        a4[1] = 0;
        qfree(v42, (const char *)a4);
      }
      v43 = _mm_load_si128(&v68);
      *a4 = v38;
      *(__m128i *)(a4 + 1) = v43;
    }
    else
    {
      v49 = *a3;
      v50 = _mm_loadu_si128((const __m128i *)(a3 + 1));
      *(_OWORD *)(a3 + 1) = 0;
      *a3 = 0;
      v51 = *a1;
      if ( *a1 )
      {
        a1[1] = 0;
        qfree(v51, v32, v34, v35, v36, v37, *(_OWORD *)&v68, *(_OWORD *)&v50);
        v50 = _mm_load_si128(v69);
      }
      *a1 = v49;
      *(__m128i *)(a1 + 1) = v50;
      v52 = *a3;
      if ( *a3 )
      {
        a3[1] = 0;
        qfree(v52, v32);
      }
      v53 = _mm_load_si128(&v68);
      *a3 = v38;
      *(__m128i *)(a3 + 1) = v53;
    }
  }
}
