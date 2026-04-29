__int64 __fastcall sub_45960(__int64 a1, _QWORD *a2, __m128i *a3, __m128i *a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rsi
  __m128i *v6; // rbx
  __int64 *v8; // r14
  __int64 *v9; // rbp
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __m128i v16; // xmm8
  __m128i v17; // xmm7
  __m128i v18; // xmm6
  __m128i v19; // xmm5
  __m128i v20; // xmm4
  __m128i v21; // xmm3
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __m128i v25; // xmm9
  __int64 *v26; // rdi
  unsigned __int64 v27; // rdx
  bool v28; // zf
  unsigned __int64 v29; // rcx
  __int64 *v30; // rax
  char v31; // r10
  unsigned __int64 v32; // r11
  const __m128i *v33; // r13
  __m128i v34; // xmm0
  unsigned __int64 v35; // xmm0_8
  int v36; // edx
  __int64 v37; // rax
  __int64 *v38; // r15
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rbx
  unsigned int v43; // eax
  _QWORD *v44; // r14
  __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rdx
  __m128i *v49; // rdx
  __m128i *v50; // rax
  __m128i v51; // xmm8
  __m128i v52; // xmm7
  __m128i v53; // xmm6
  __m128i v54; // xmm9
  __m128i v55; // xmm5
  __m128i v56; // xmm4
  __m128i v57; // xmm3
  __m128i v58; // xmm9
  __m128i v59; // xmm2
  __m128i v60; // xmm1
  __m128i v61; // xmm0
  __m128i v62; // xmm9
  __m128i v63; // xmm9
  __m128i v64; // xmm9
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 v67; // r15
  __int64 v68; // r13
  __int64 *v69; // rbp
  __int64 v70; // rdi
  __int64 v71; // r12
  __int64 i; // r14
  _QWORD *v73; // rbx
  __int64 v74; // rdi
  __int64 v75; // rdi
  unsigned int v78; // [rsp+8h] [rbp-120h]
  unsigned int v79; // [rsp+8h] [rbp-120h]
  unsigned int v80; // [rsp+8h] [rbp-120h]
  __int64 v81; // [rsp+10h] [rbp-118h]
  __int64 v83; // [rsp+28h] [rbp-100h] BYREF
  __int64 v84; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v85; // [rsp+38h] [rbp-F0h]
  __m128i v86; // [rsp+50h] [rbp-D8h]
  __m128i v87; // [rsp+60h] [rbp-C8h]
  __m128i v88; // [rsp+70h] [rbp-B8h]
  __m128i v89; // [rsp+80h] [rbp-A8h]
  __m128i v90; // [rsp+90h] [rbp-98h]
  __m128i v91; // [rsp+A0h] [rbp-88h]
  __m128i v92; // [rsp+B0h] [rbp-78h]
  __m128i v93; // [rsp+C0h] [rbp-68h]
  __m128i v94; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v95; // [rsp+E8h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  if ( a3 == a4 )
    return 1;
  if ( a3 >= a4 )
    goto LABEL_75;
  v4 = a3->m128i_i64[0];
  v5 = 0;
  v6 = a3;
  v85 = 0;
  v8 = nullptr;
  v84 = 0;
  do
  {
    v29 = v6->m128i_i64[0] - v4;
    v28 = v6->m128i_i64[0] == v4;
    v6->m128i_i64[0] = v29;
    if ( v28 || !(40 * v5) )
      goto LABEL_4;
    v10 = v6[4].m128i_i64[0];
    v81 = v4;
    v30 = v8;
    v31 = v10 & 0xF;
    v32 = 0;
    v9 = nullptr;
    do
    {
      v33 = (const __m128i *)(*v30 + 144 * v30[1] - 144);
      if ( (v31 == 14) == ((v33[4].m128i_i8[0] & 0xF) == 14) || !v6[8].m128i_i32[3] )
      {
        v34 = _mm_loadu_si128(v33);
        v35 = _mm_add_epi64(v34, _mm_srli_si128(v34, 8)).m128i_u64[0];
        if ( v29 >= v35 && (!v9 || v32 < v35) )
        {
          v32 = v35;
          v9 = v30;
        }
      }
      v30 += 5;
    }
    while ( v30 != &v8[5 * v5] );
    v4 = v81;
    if ( v9 )
    {
      if ( v31 != 14 )
        goto LABEL_7;
    }
    else
    {
LABEL_4:
      if ( *((_QWORD *)&v85 + 1) < v5 + 1 )
      {
        v84 = qvector_reserve(&v84, v8, v5 + 1, 40);
        v5 = v85;
        v8 = (__int64 *)v84;
      }
      v9 = &v8[5 * v5];
      *v9 = 0;
      *(_OWORD *)(v9 + 1) = 0;
      v9[3] = 0;
      *((_DWORD *)v9 + 8) = 0;
      *((_BYTE *)v9 + 36) = 0;
      v10 = v6[4].m128i_i64[0];
      *(_QWORD *)&v85 = v85 + 1;
      if ( (v10 & 0xF) != 0xE )
      {
LABEL_7:
        v11 = v6->m128i_i64[0] + v6->m128i_i64[1] + 7;
        goto LABEL_8;
      }
    }
    BYTE2(v83) = 0;
    LOWORD(v83) = 0;
    get_tinfo_details(v10, 14, &v83);
    v36 = 8 * (unsigned __int8)v83;
    if ( ((v36 - 8) & 0xFFFFFFF0) != 0 && ((v36 - 32) & 0xFFFFFFD8) != 0 )
    {
      if ( under_debugger )
        goto LABEL_79;
      interr(30385);
LABEL_75:
      if ( !under_debugger )
      {
        interr(498);
LABEL_77:
        if ( !under_debugger )
          interr(499);
      }
LABEL_79:
      BUG();
    }
    v11 = v6->m128i_i64[0] + v36 - v6[8].m128i_u32[3];
LABEL_8:
    v12 = v11 >> 3;
    if ( v9[3] < v12 )
      v9[3] = v12;
    v13 = v9[1];
    v14 = *v9;
    if ( v9[2] < (unsigned __int64)(v13 + 1) )
    {
      v37 = qvector_reserve(v9, v14, v13 + 1, 144);
      *v9 = v37;
      v14 = v37;
      v13 = v9[1];
    }
    v6 += 9;
    v15 = 144 * v13 + v14;
    *(_OWORD *)(v15 + 24) = 0;
    *(_OWORD *)v15 = 0;
    *(_OWORD *)(v15 + 48) = 0;
    *(_OWORD *)(v15 + 64) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 112) = 1;
    *(_DWORD *)(v15 + 120) = -1;
    *(_QWORD *)(v15 + 128) = 0;
    *(_BYTE *)(v15 + 136) = 0;
    *(_DWORD *)(v15 + 140) = 0;
    ++v9[1];
    v16 = _mm_loadu_si128((const __m128i *)v15);
    v17 = _mm_loadu_si128((const __m128i *)(v15 + 16));
    v18 = _mm_loadu_si128((const __m128i *)(v15 + 32));
    v19 = _mm_loadu_si128((const __m128i *)(v15 + 48));
    v20 = _mm_loadu_si128((const __m128i *)(v15 + 64));
    v86 = v16;
    v21 = _mm_loadu_si128((const __m128i *)(v15 + 80));
    v22 = _mm_loadu_si128((const __m128i *)(v15 + 96));
    v87 = v17;
    v23 = _mm_loadu_si128((const __m128i *)(v15 + 112));
    v24 = _mm_loadu_si128((const __m128i *)(v15 + 128));
    v88 = v18;
    v25 = _mm_loadu_si128(v6 - 9);
    v89 = v19;
    v90 = v20;
    v91 = v21;
    v92 = v22;
    v93 = v23;
    v94 = v24;
    *(__m128i *)v15 = v25;
    v26 = (__int64 *)v84;
    v27 = v85;
    *(__m128i *)(v15 + 16) = _mm_loadu_si128(v6 - 8);
    v8 = v26;
    *(__m128i *)(v15 + 32) = _mm_loadu_si128(v6 - 7);
    *(__m128i *)(v15 + 48) = _mm_loadu_si128(v6 - 6);
    *(__m128i *)(v15 + 64) = _mm_loadu_si128(v6 - 5);
    *(__m128i *)(v15 + 80) = _mm_loadu_si128(v6 - 4);
    *(__m128i *)(v15 + 96) = _mm_loadu_si128(v6 - 3);
    *(__m128i *)(v15 + 112) = _mm_loadu_si128(v6 - 2);
    *(__m128i *)(v15 + 128) = _mm_loadu_si128(v6 - 1);
    v5 = v27;
    v6[-9] = v16;
    v6[-8] = v17;
    v6[-7] = v18;
    v6[-6] = v19;
    v6[-5] = v20;
    v6[-4] = v21;
    v6[-3] = v22;
    v6[-2] = v23;
    v6[-1] = v24;
  }
  while ( a4 != v6 );
  if ( !(40 * v27) )
    goto LABEL_43;
  do
  {
    if ( v8[1] != 1 || *(_QWORD *)*v8 || (*(_BYTE *)(*v8 + 64) & 0xF) == 0xE )
    {
      sub_31F60(a1, v8);
      v27 = v85;
      v26 = (__int64 *)v84;
    }
    v8 += 5;
    v38 = v26;
  }
  while ( v8 != &v26[5 * v27] );
  if ( v26 == v8 )
  {
LABEL_43:
    sub_37330(a2, v27);
    if ( !(_QWORD)v85 )
    {
      v66 = v84;
      v65 = 1;
      if ( !v84 )
        return v65;
      goto LABEL_61;
    }
    v46 = 0;
    v47 = 0;
    do
    {
      v48 = v84 + 40 * v47;
      if ( *(_QWORD *)(v48 + 8) != 1 )
        goto LABEL_77;
      v49 = *(__m128i **)v48;
      ++v46;
      v50 = (__m128i *)(*a2 + 144 * v47);
      v51 = _mm_loadu_si128(v50);
      v52 = _mm_loadu_si128(v50 + 1);
      v53 = _mm_loadu_si128(v50 + 2);
      *v50 = _mm_loadu_si128(v49);
      v54 = _mm_loadu_si128(v49 + 1);
      v55 = _mm_loadu_si128(v50 + 3);
      v56 = _mm_loadu_si128(v50 + 4);
      v57 = _mm_loadu_si128(v50 + 5);
      v86 = v51;
      v50[1] = v54;
      v58 = _mm_loadu_si128(v49 + 2);
      v59 = _mm_loadu_si128(v50 + 6);
      v60 = _mm_loadu_si128(v50 + 7);
      v61 = _mm_loadu_si128(v50 + 8);
      v87 = v52;
      v50[2] = v58;
      v62 = _mm_loadu_si128(v49 + 3);
      v88 = v53;
      v50[3] = v62;
      v63 = _mm_loadu_si128(v49 + 4);
      v89 = v55;
      v50[4] = v63;
      v64 = _mm_loadu_si128(v49 + 5);
      v90 = v56;
      v50[5] = v64;
      v91 = v57;
      v92 = v59;
      v93 = v60;
      v94 = v61;
      v50[6] = _mm_loadu_si128(v49 + 6);
      v50[7] = _mm_loadu_si128(v49 + 7);
      v50[8] = _mm_loadu_si128(v49 + 8);
      v47 = v46;
      *v49 = v51;
      v49[1] = v52;
      v49[2] = v53;
      v49[3] = v55;
      v49[4] = v56;
      v49[5] = v57;
      v49[6] = v59;
      v49[7] = v60;
      v49[8] = v61;
    }
    while ( v46 < (unsigned __int64)v85 );
    v65 = 1;
    v66 = v84;
    if ( !v84 )
      return v65;
LABEL_48:
    v67 = v85;
    if ( (_QWORD)v85 )
    {
      v78 = v65;
      v68 = 0;
      do
      {
        v69 = (__int64 *)(v66 + 40 * v68);
        v70 = *v69;
        if ( *v69 )
        {
          v71 = v69[1];
          if ( v71 )
          {
            for ( i = 0; i != v71; ++i )
            {
              v73 = (_QWORD *)(v70 + 144 * i);
              clear_tinfo_t(v73 + 8);
              v74 = v73[5];
              if ( v74 )
              {
                v73[6] = 0;
                qfree(v74);
              }
              v75 = v73[2];
              if ( v75 )
              {
                v73[3] = 0;
                qfree(v75);
              }
              v70 = *v69;
            }
          }
          v69[1] = 0;
          qfree(v70);
          v66 = v84;
        }
        ++v68;
      }
      while ( v67 != v68 );
      v65 = v78;
    }
LABEL_61:
    v79 = v65;
    *(_QWORD *)&v85 = 0;
    qfree(v66);
    return v79;
  }
  while ( 1 )
  {
    v39 = v38[1];
    v40 = (_QWORD *)*v38;
    if ( v39 == 1 && !*v40 && (v40[8] & 0xF) != 0xE )
      goto LABEL_42;
    v41 = &v40[18 * v39];
    if ( v41 != v40 )
      break;
LABEL_40:
    v83 = 0;
    v42 = v38[3];
    v43 = sub_46FD0(a1, &v83, v38, 0);
    if ( v43 != 1 )
    {
      v80 = v43;
      clear_tinfo_t(&v83);
      v26 = (__int64 *)v84;
      v65 = v80;
      goto LABEL_64;
    }
    sub_37330(v38, 1u);
    v44 = (_QWORD *)*v38;
    *v44 = 0;
    v45 = ((__int64)v38 - v84) >> 3;
    v44[1] = 8LL * (int)v42;
    sub_37FD0(v44 + 2, (__int64)"__s%u", -858993459 * v45);
    copy_tinfo_t(v44 + 8, &v83);
    clear_tinfo_t(&v83);
    v27 = v85;
    v26 = (__int64 *)v84;
LABEL_42:
    v38 += 5;
    if ( v38 == &v26[5 * v27] )
      goto LABEL_43;
  }
  while ( (v40[8] & 0xF) == 0xE || (*(_BYTE *)v40 & 7) == 0 )
  {
    v40 += 18;
    if ( v41 == v40 )
      goto LABEL_40;
  }
  v65 = 0;
LABEL_64:
  v66 = (__int64)v26;
  if ( v26 )
    goto LABEL_48;
  return v65;
}
