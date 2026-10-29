unsigned __int64 __fastcall sub_2FAA00(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 i; // rbp
  unsigned __int64 v6; // r14
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 j; // r12
  __int64 v14; // rax
  __int64 v15; // r15
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __int64 v19; // rax
  __m128i v20; // xmm6
  __int64 v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rdi
  __int64 v34; // rdi
  __m128i v35; // xmm4
  __int64 v36; // rdi
  __m128i v37; // xmm5
  __int64 v38; // rdi
  __m128i v39; // xmm6
  __int64 v40; // rdi
  __m128i v41; // xmm7
  const char *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  __m128i v49; // xmm3
  __m128i v50; // xmm4
  __m128i v51; // xmm5
  __int64 v52; // r15
  __int64 v53; // r14
  __int64 v54; // r13
  __int64 v55; // r12
  __int64 v56; // rax
  __m128i v57; // xmm1
  __int64 v58; // rdi
  __int64 v59; // rax
  __m128i v60; // xmm1
  __int64 v61; // rdi
  __int64 v62; // rax
  __m128i v63; // xmm1
  __int64 v64; // rdi
  __int64 v65; // rax
  __m128i v66; // xmm1
  __int64 v67; // rdi
  __m128i v68; // xmm6
  __m128i v69; // xmm7
  __m128i v70; // xmm6
  __m128i v71; // xmm7
  __int64 v72; // r12
  __int64 v73; // r13
  __int64 v74; // r14
  __m128i v76; // [rsp+0h] [rbp-198h] BYREF
  __m128i v77; // [rsp+10h] [rbp-188h] BYREF
  __m128i v78; // [rsp+20h] [rbp-178h] BYREF
  __m128i v79; // [rsp+30h] [rbp-168h] BYREF
  __m128i v80; // [rsp+40h] [rbp-158h] BYREF
  __m128i v81; // [rsp+50h] [rbp-148h] BYREF
  __m128i v82; // [rsp+60h] [rbp-138h] BYREF
  __m128i v83; // [rsp+70h] [rbp-128h] BYREF
  __int64 v84; // [rsp+88h] [rbp-110h]
  __int64 v85; // [rsp+90h] [rbp-108h]
  __m128i v86; // [rsp+98h] [rbp-100h]
  __int64 v87; // [rsp+A8h] [rbp-F0h]
  __m128i v88; // [rsp+B0h] [rbp-E8h]
  __int64 v89; // [rsp+C0h] [rbp-D8h]
  __m128i v90; // [rsp+C8h] [rbp-D0h]
  __int64 v91; // [rsp+D8h] [rbp-C0h]
  __m128i v92; // [rsp+E0h] [rbp-B8h]
  __int64 v93; // [rsp+F0h] [rbp-A8h] BYREF
  __m128i v94; // [rsp+F8h] [rbp-A0h]
  __int64 v95; // [rsp+108h] [rbp-90h]
  __m128i v96; // [rsp+110h] [rbp-88h]
  __int64 v97; // [rsp+120h] [rbp-78h]
  __m128i v98; // [rsp+128h] [rbp-70h]
  __int64 v99; // [rsp+138h] [rbp-60h]
  __m128i v100; // [rsp+140h] [rbp-58h]
  unsigned __int64 v101; // [rsp+158h] [rbp-40h]

  v84 = a3;
  v101 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) > 1536 )
  {
    for ( i = a2; v84; i = v6 )
    {
      v6 = a1 + 96;
      --v84;
      v7 = (__int64 *)(a1
                     + 32
                     * (((0xAAAAAAAAAAAAAAABLL * (v3 >> 5)) & 0xFFFFFFFFFFFFFFFELL)
                      + ((__int64)(0xAAAAAAAAAAAAAAABLL * (v3 >> 5)) >> 1)));
      v8 = i - 96;
      if ( (unsigned __int8)sub_2E3DE0(a1 + 96, (__int64)v7) )
      {
        if ( (unsigned __int8)sub_2E3DE0((__int64)v7, v8) )
          goto LABEL_54;
        if ( (unsigned __int8)sub_2E3DE0(a1 + 96, i - 96) )
          goto LABEL_31;
      }
      else if ( !(unsigned __int8)sub_2E3DE0(a1 + 96, v8) )
      {
        if ( !(unsigned __int8)sub_2E3DE0((__int64)v7, i - 96) )
        {
LABEL_54:
          sub_2FA7B0((__int64 *)a1, v7, v9, v10, v11, v12);
          goto LABEL_7;
        }
LABEL_31:
        sub_2FA7B0((__int64 *)a1, (__int64 *)(i - 96), v9, v10, v11, v12);
        goto LABEL_7;
      }
      sub_2FA7B0((__int64 *)a1, (__int64 *)(a1 + 96), v9, v10, v11, v12);
LABEL_7:
      for ( j = i; ; *(__m128i *)(j + 80) = v41 )
      {
        while ( (unsigned __int8)sub_2E3DE0(v6, a1) )
          v6 += 96LL;
        do
          j -= 96LL;
        while ( (unsigned __int8)sub_2E3DE0(a1, j) );
        if ( v6 >= j )
          break;
        v14 = *(_QWORD *)(v6 + 24);
        v15 = *(_QWORD *)v6;
        *(_QWORD *)(v6 + 24) = 0;
        *(_QWORD *)v6 = 0;
        v16 = _mm_loadu_si128((const __m128i *)(v6 + 8));
        v17 = _mm_loadu_si128((const __m128i *)(v6 + 32));
        v18 = _mm_loadu_si128((const __m128i *)(v6 + 56));
        v76.m128i_i64[0] = v14;
        v19 = *(_QWORD *)(v6 + 72);
        v20 = _mm_loadu_si128((const __m128i *)(v6 + 80));
        *(_OWORD *)(v6 + 8) = 0;
        *(_QWORD *)(v6 + 72) = 0;
        v21 = *(_QWORD *)(v6 + 48);
        *(_OWORD *)(v6 + 32) = 0;
        *(_QWORD *)(v6 + 48) = 0;
        *(_OWORD *)(v6 + 56) = 0;
        *(_OWORD *)(v6 + 80) = 0;
        v22 = _mm_loadu_si128((const __m128i *)(j + 8));
        v77.m128i_i64[0] = v19;
        v23 = *(_QWORD *)j;
        *(_OWORD *)(j + 8) = 0;
        *(_QWORD *)j = 0;
        v24 = *(_QWORD *)v6;
        v78 = v16;
        v79 = v17;
        v80 = v18;
        v81 = v20;
        if ( v24 )
        {
          *(_QWORD *)(v6 + 8) = 0;
          v82.m128i_i64[0] = v23;
          v83 = v22;
          qfree(v24, (const char *)j);
          v22 = _mm_load_si128(&v83);
          v23 = v82.m128i_i64[0];
        }
        *(_QWORD *)v6 = v23;
        *(__m128i *)(v6 + 8) = v22;
        v25 = *(_QWORD *)(j + 24);
        v26 = _mm_loadu_si128((const __m128i *)(j + 32));
        *(_QWORD *)(j + 24) = 0;
        *(_OWORD *)(j + 32) = 0;
        v27 = *(_QWORD *)(v6 + 24);
        if ( v27 )
        {
          *(_QWORD *)(v6 + 32) = 0;
          v82.m128i_i64[0] = v25;
          v83 = v26;
          qfree(v27, (const char *)j);
          v26 = _mm_load_si128(&v83);
          v25 = v82.m128i_i64[0];
        }
        *(_QWORD *)(v6 + 24) = v25;
        *(__m128i *)(v6 + 32) = v26;
        v28 = *(_QWORD *)(j + 48);
        v29 = _mm_loadu_si128((const __m128i *)(j + 56));
        *(_QWORD *)(j + 48) = 0;
        *(_OWORD *)(j + 56) = 0;
        v30 = *(_QWORD *)(v6 + 48);
        if ( v30 )
        {
          *(_QWORD *)(v6 + 56) = 0;
          v82.m128i_i64[0] = v28;
          v83 = v29;
          qfree(v30, (const char *)j);
          v29 = _mm_load_si128(&v83);
          v28 = v82.m128i_i64[0];
        }
        *(_QWORD *)(v6 + 48) = v28;
        *(__m128i *)(v6 + 56) = v29;
        v31 = *(_QWORD *)(j + 72);
        v32 = _mm_loadu_si128((const __m128i *)(j + 80));
        *(_QWORD *)(j + 72) = 0;
        *(_OWORD *)(j + 80) = 0;
        v33 = *(_QWORD *)(v6 + 72);
        if ( v33 )
        {
          *(_QWORD *)(v6 + 80) = 0;
          v82.m128i_i64[0] = v31;
          v83 = v32;
          qfree(v33, (const char *)j);
          v32 = _mm_load_si128(&v83);
          v31 = v82.m128i_i64[0];
        }
        *(_QWORD *)(v6 + 72) = v31;
        *(__m128i *)(v6 + 80) = v32;
        v34 = *(_QWORD *)j;
        if ( *(_QWORD *)j )
        {
          *(_QWORD *)(j + 8) = 0;
          *(double *)v32.m128i_i64 = qfree(v34, (const char *)j);
        }
        v35 = _mm_load_si128(&v78);
        v36 = *(_QWORD *)(j + 24);
        *(_QWORD *)j = v15;
        *(__m128i *)(j + 8) = v35;
        if ( v36 )
        {
          *(_QWORD *)(j + 32) = 0;
          *(double *)v32.m128i_i64 = qfree(v36, (const char *)j, *(double *)v32.m128i_i64);
        }
        v37 = _mm_load_si128(&v79);
        v38 = *(_QWORD *)(j + 48);
        *(_QWORD *)(j + 24) = v76.m128i_i64[0];
        *(__m128i *)(j + 32) = v37;
        if ( v38 )
        {
          *(_QWORD *)(j + 56) = 0;
          *(double *)v32.m128i_i64 = qfree(v38, (const char *)j, *(double *)v32.m128i_i64);
        }
        v39 = _mm_load_si128(&v80);
        v40 = *(_QWORD *)(j + 72);
        *(_QWORD *)(j + 48) = v21;
        *(__m128i *)(j + 56) = v39;
        if ( v40 )
        {
          *(_QWORD *)(j + 80) = 0;
          qfree(v40, (const char *)j, *(double *)v32.m128i_i64);
        }
        v41 = _mm_load_si128(&v81);
        v6 += 96LL;
        *(_QWORD *)(j + 72) = v77.m128i_i64[0];
      }
      sub_2FAA00(v6, i, v84);
      v3 = v6 - a1;
      if ( (__int64)(v6 - a1) <= 1536 )
        return v101 - __readfsqword(0x28u);
    }
    v42 = (const char *)i;
    sub_2F8240(a1, i, i);
    if ( (__int64)(i - a1) > 96 )
    {
      v47 = 0;
      v80.m128i_i64[0] = (__int64)&v93;
      do
      {
        v48 = _mm_loadu_si128((const __m128i *)(i - 88));
        v49 = _mm_loadu_si128((const __m128i *)(i - 64));
        *(__m128i *)(i - 88) = v47;
        i -= 96LL;
        v50 = _mm_loadu_si128((const __m128i *)(i + 56));
        v51 = _mm_loadu_si128((const __m128i *)(i + 80));
        *(__m128i *)(i + 56) = v47;
        v52 = *(_QWORD *)i;
        v53 = *(_QWORD *)(i + 24);
        *(_QWORD *)i = 0;
        v54 = *(_QWORD *)(i + 48);
        v55 = *(_QWORD *)(i + 72);
        *(_QWORD *)(i + 24) = 0;
        *(_QWORD *)(i + 48) = 0;
        *(_QWORD *)(i + 72) = 0;
        *(__m128i *)(i + 80) = v47;
        *(__m128i *)(i + 32) = v47;
        v56 = *(_QWORD *)a1;
        v76 = v48;
        v86 = v48;
        v57 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        v85 = v52;
        v87 = v53;
        v89 = v54;
        v91 = v55;
        *(_QWORD *)a1 = 0;
        v78 = v49;
        v88 = v49;
        v79 = v50;
        v90 = v50;
        v77 = v51;
        v92 = v51;
        *(__m128i *)(a1 + 8) = v47;
        v58 = *(_QWORD *)i;
        if ( *(_QWORD *)i )
        {
          *(_QWORD *)(i + 8) = 0;
          v81.m128i_i64[0] = v56;
          v82 = v57;
          qfree(v58, v42, v43, v44, v45, v46, *(_OWORD *)&v76, *(_OWORD *)&v77, *(_OWORD *)&v78, *(_OWORD *)&v79);
          v57 = _mm_load_si128(&v82);
          v56 = v81.m128i_i64[0];
          v47 = 0;
        }
        *(_QWORD *)i = v56;
        *(__m128i *)(i + 8) = v57;
        v59 = *(_QWORD *)(a1 + 24);
        v60 = _mm_loadu_si128((const __m128i *)(a1 + 32));
        *(_QWORD *)(a1 + 24) = 0;
        *(__m128i *)(a1 + 32) = v47;
        v61 = *(_QWORD *)(i + 24);
        if ( v61 )
        {
          *(_QWORD *)(i + 32) = 0;
          v82.m128i_i64[0] = v59;
          v81 = v60;
          qfree(v61, v42);
          v59 = v82.m128i_i64[0];
          v60 = _mm_load_si128(&v81);
          v47 = 0;
        }
        *(_QWORD *)(i + 24) = v59;
        *(__m128i *)(i + 32) = v60;
        v62 = *(_QWORD *)(a1 + 48);
        v63 = _mm_loadu_si128((const __m128i *)(a1 + 56));
        *(_QWORD *)(a1 + 48) = 0;
        *(__m128i *)(a1 + 56) = v47;
        v64 = *(_QWORD *)(i + 48);
        if ( v64 )
        {
          *(_QWORD *)(i + 56) = 0;
          v81.m128i_i64[0] = v62;
          v82 = v63;
          qfree(v64, v42);
          v63 = _mm_load_si128(&v82);
          v62 = v81.m128i_i64[0];
          v47 = 0;
        }
        *(_QWORD *)(i + 48) = v62;
        *(__m128i *)(i + 56) = v63;
        v65 = *(_QWORD *)(a1 + 72);
        v66 = _mm_loadu_si128((const __m128i *)(a1 + 80));
        *(_QWORD *)(a1 + 72) = 0;
        *(__m128i *)(a1 + 80) = v47;
        v67 = *(_QWORD *)(i + 72);
        if ( v67 )
        {
          *(_QWORD *)(i + 80) = 0;
          v81.m128i_i64[0] = v65;
          v82 = v66;
          qfree(v67, v42);
          v66 = _mm_load_si128(&v82);
          v65 = v81.m128i_i64[0];
          v47 = 0;
        }
        *(_QWORD *)(i + 72) = v65;
        v68 = _mm_load_si128(&v76);
        v42 = nullptr;
        v69 = _mm_load_si128(&v78);
        *(__m128i *)(i + 80) = v66;
        v76.m128i_i64[0] = i - a1;
        v94 = v68;
        v70 = _mm_load_si128(&v79);
        v96 = v69;
        v71 = _mm_load_si128(&v77);
        v85 = 0;
        v87 = 0;
        v89 = 0;
        v91 = 0;
        v93 = v52;
        v95 = v53;
        v97 = v54;
        v99 = v55;
        v86 = v47;
        v88 = v47;
        v98 = v70;
        v90 = v47;
        v100 = v71;
        v92 = v47;
        sub_2F5FD0(a1, nullptr, 0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 5), (__int64 *)v80.m128i_i64[0]);
        v72 = v93;
        v47 = 0;
        v73 = v95;
        v74 = v97;
        if ( v99 )
        {
          qfree(v99, nullptr, 0.0);
          v47 = 0;
        }
        if ( v74 )
        {
          qfree(v74, nullptr, *(double *)v47.m128i_i64);
          v47 = 0;
        }
        if ( v73 )
        {
          qfree(v73, nullptr, *(double *)v47.m128i_i64);
          v47 = 0;
        }
        if ( v72 )
        {
          qfree(v72, nullptr, *(double *)v47.m128i_i64);
          v47 = 0;
        }
      }
      while ( v76.m128i_i64[0] > 96 );
    }
  }
  return v101 - __readfsqword(0x28u);
}
