unsigned __int64 __fastcall sub_2F8240(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r13
  __m128i v5; // xmm0
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i v11; // xmm4
  __m128i v12; // xmm3
  __int64 v13; // rax
  __m128i v14; // xmm2
  __m128i v15; // xmm1
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rdx
  __m128i v19; // xmm7
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rdi
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __m128i v39; // xmm4
  __m128i v40; // xmm7
  __int64 v41; // rdx
  __m128i v42; // xmm4
  __m128i v43; // xmm7
  __int64 v44; // rbp
  __int64 v45; // r12
  __int64 v46; // r14
  __m128i v49; // [rsp+10h] [rbp-168h] BYREF
  __m128i v50; // [rsp+20h] [rbp-158h] BYREF
  __m128i v51; // [rsp+30h] [rbp-148h] BYREF
  __m128i v52; // [rsp+40h] [rbp-138h] BYREF
  unsigned __int64 v53; // [rsp+50h] [rbp-128h]
  __int64 v54; // [rsp+58h] [rbp-120h]
  __m128i v55; // [rsp+60h] [rbp-118h] BYREF
  __int64 v56; // [rsp+70h] [rbp-108h]
  __m128i v57; // [rsp+78h] [rbp-100h]
  __int64 v58; // [rsp+88h] [rbp-F0h]
  __m128i v59; // [rsp+90h] [rbp-E8h]
  __int64 v60; // [rsp+A0h] [rbp-D8h]
  __m128i v61; // [rsp+A8h] [rbp-D0h]
  __int64 v62; // [rsp+B8h] [rbp-C0h]
  __m128i v63; // [rsp+C0h] [rbp-B8h]
  __int64 v64; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v65; // [rsp+D8h] [rbp-A0h]
  __int64 v66; // [rsp+E8h] [rbp-90h]
  __m128i v67; // [rsp+F0h] [rbp-88h]
  __int64 v68; // [rsp+100h] [rbp-78h]
  __m128i v69; // [rsp+108h] [rbp-70h]
  __int64 v70; // [rsp+118h] [rbp-60h]
  __m128i v71; // [rsp+120h] [rbp-58h]
  unsigned __int64 v72; // [rsp+138h] [rbp-40h]

  v3 = a2;
  v72 = __readfsqword(0x28u);
  v52.m128i_i64[0] = a2 - a1;
  if ( (__int64)(a2 - a1) > 96 )
  {
    v5 = 0;
    v50.m128i_i64[0] = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a2 - a1) >> 5);
    v49.m128i_i64[0] = (__int64)&v64;
    v6 = (v50.m128i_i64[0] - 2) / 2;
    v7 = a1
       + 32 * (v6 + ((v50.m128i_i64[0] - 2 + ((unsigned __int64)(v50.m128i_i64[0] - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL));
    while ( 1 )
    {
      v8 = *(_QWORD *)v7;
      v9 = *(_QWORD *)(v7 + 48);
      v57 = v5;
      v10 = *(_QWORD *)(v7 + 24);
      v11 = _mm_loadu_si128((const __m128i *)(v7 + 8));
      *(__m128i *)(v7 + 8) = v5;
      v12 = _mm_loadu_si128((const __m128i *)(v7 + 32));
      v13 = *(_QWORD *)(v7 + 72);
      v64 = v8;
      v14 = _mm_loadu_si128((const __m128i *)(v7 + 56));
      v15 = _mm_loadu_si128((const __m128i *)(v7 + 80));
      v68 = v9;
      *(_QWORD *)v7 = 0;
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 48) = 0;
      *(_QWORD *)(v7 + 72) = 0;
      v56 = 0;
      v58 = 0;
      v60 = 0;
      v62 = 0;
      v66 = v10;
      v70 = v13;
      *(__m128i *)(v7 + 32) = v5;
      *(__m128i *)(v7 + 56) = v5;
      *(__m128i *)(v7 + 80) = v5;
      v65 = v11;
      v67 = v12;
      v59 = v5;
      v69 = v14;
      v61 = v5;
      v71 = v15;
      v63 = v5;
      sub_2F5FD0(a1, (const char *)v6, v50.m128i_i64[0], (__int64 *)v49.m128i_i64[0]);
      v16 = v64;
      v5 = 0;
      v17 = v66;
      v18 = v68;
      if ( v70 )
      {
        v51.m128i_i64[0] = v68;
        qfree(v70, (const char *)v6, 0.0);
        v18 = v51.m128i_i64[0];
        v5 = 0;
      }
      if ( v18 )
      {
        qfree(v18, (const char *)v6, *(double *)v5.m128i_i64);
        v5 = 0;
      }
      if ( v17 )
      {
        qfree(v17, (const char *)v6, *(double *)v5.m128i_i64);
        v5 = 0;
      }
      if ( v16 )
      {
        qfree(v16, (const char *)v6, *(double *)v5.m128i_i64);
        v5 = 0;
      }
      v7 -= 96LL;
      if ( !v6 )
        break;
      --v6;
    }
  }
  if ( v3 < a3 )
  {
    v53 = 0xAAAAAAAAAAAAAAABLL * (v52.m128i_i64[0] >> 5);
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int8)sub_2E3DE0(v3, a1) )
        {
          v19 = _mm_loadu_si128((const __m128i *)(v3 + 8));
          v20 = _mm_loadu_si128((const __m128i *)(v3 + 32));
          v21 = _mm_loadu_si128((const __m128i *)(v3 + 56));
          v22 = _mm_loadu_si128((const __m128i *)(v3 + 80));
          *(_OWORD *)(v3 + 8) = 0;
          v23 = *(_QWORD *)v3;
          v24 = *(_QWORD *)(v3 + 24);
          *(_OWORD *)(v3 + 32) = 0;
          v25 = *(_QWORD *)(v3 + 48);
          v26 = *(_QWORD *)(v3 + 72);
          *(_QWORD *)v3 = 0;
          *(_QWORD *)(v3 + 24) = 0;
          *(_QWORD *)(v3 + 48) = 0;
          *(_QWORD *)(v3 + 72) = 0;
          *(_OWORD *)(v3 + 56) = 0;
          *(_OWORD *)(v3 + 80) = 0;
          v27 = *(_QWORD *)a1;
          v28 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v56 = v23;
          v58 = v24;
          v60 = v25;
          v62 = v26;
          *(_QWORD *)a1 = 0;
          v52 = v19;
          v57 = v19;
          v51 = v20;
          v59 = v20;
          v50 = v21;
          v61 = v21;
          v49 = v22;
          v63 = v22;
          *(_OWORD *)(a1 + 8) = 0;
          v29 = *(_QWORD *)v3;
          if ( *(_QWORD *)v3 )
          {
            *(_QWORD *)(v3 + 8) = 0;
            v54 = v27;
            v55 = v28;
            qfree(v29, (const char *)a1);
            v28 = _mm_load_si128(&v55);
            v27 = v54;
          }
          *(_QWORD *)v3 = v27;
          *(__m128i *)(v3 + 8) = v28;
          v30 = *(_QWORD *)(a1 + 24);
          v31 = _mm_loadu_si128((const __m128i *)(a1 + 32));
          *(_QWORD *)(a1 + 24) = 0;
          *(_OWORD *)(a1 + 32) = 0;
          v32 = *(_QWORD *)(v3 + 24);
          if ( v32 )
          {
            *(_QWORD *)(v3 + 32) = 0;
            v54 = v30;
            v55 = v31;
            qfree(v32, (const char *)a1);
            v31 = _mm_load_si128(&v55);
            v30 = v54;
          }
          *(_QWORD *)(v3 + 24) = v30;
          *(__m128i *)(v3 + 32) = v31;
          v33 = *(_QWORD *)(a1 + 48);
          v34 = _mm_loadu_si128((const __m128i *)(a1 + 56));
          *(_QWORD *)(a1 + 48) = 0;
          *(_OWORD *)(a1 + 56) = 0;
          v35 = *(_QWORD *)(v3 + 48);
          if ( v35 )
          {
            *(_QWORD *)(v3 + 56) = 0;
            v54 = v33;
            v55 = v34;
            qfree(v35, (const char *)a1);
            v34 = _mm_load_si128(&v55);
            v33 = v54;
          }
          *(_QWORD *)(v3 + 48) = v33;
          *(__m128i *)(v3 + 56) = v34;
          v36 = *(_QWORD *)(a1 + 72);
          v37 = _mm_loadu_si128((const __m128i *)(a1 + 80));
          *(_QWORD *)(a1 + 72) = 0;
          *(_OWORD *)(a1 + 80) = 0;
          v38 = *(_QWORD *)(v3 + 72);
          if ( v38 )
          {
            *(_QWORD *)(v3 + 80) = 0;
            v54 = v36;
            v55 = v37;
            qfree(v38, (const char *)a1);
            v37 = _mm_load_si128(&v55);
            v36 = v54;
          }
          v39 = _mm_load_si128(&v52);
          *(_QWORD *)(v3 + 72) = v36;
          v40 = _mm_load_si128(&v51);
          v41 = v53;
          v65 = v39;
          v42 = _mm_load_si128(&v50);
          v67 = v40;
          v43 = _mm_load_si128(&v49);
          *(__m128i *)(v3 + 80) = v37;
          v56 = 0;
          v58 = 0;
          v60 = 0;
          v62 = 0;
          v64 = v23;
          v66 = v24;
          v68 = v25;
          v70 = v26;
          v49.m128i_i64[0] = (__int64)&v64;
          v57 = 0;
          v59 = 0;
          v69 = v42;
          v61 = 0;
          v71 = v43;
          v63 = 0;
          sub_2F5FD0(a1, nullptr, v41, &v64);
          v44 = v64;
          v45 = v66;
          v46 = v68;
          if ( v70 )
            *(double *)v37.m128i_i64 = qfree(v70, nullptr);
          if ( v46 )
            *(double *)v37.m128i_i64 = qfree(v46, nullptr, *(double *)v37.m128i_i64);
          if ( v45 )
            *(double *)v37.m128i_i64 = qfree(v45, nullptr, *(double *)v37.m128i_i64);
          if ( v44 )
            break;
        }
        v3 += 96LL;
        if ( v3 >= a3 )
          return v72 - __readfsqword(0x28u);
      }
      v3 += 96LL;
      qfree(v44, nullptr, *(double *)v37.m128i_i64);
    }
    while ( v3 < a3 );
  }
  return v72 - __readfsqword(0x28u);
}
