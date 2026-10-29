__int64 __fastcall sub_BE3000(__int64 a1, _QWORD *a2, _DWORD **a3, double a4, double a5, __m128 a6)
{
  char **exception; // r14
  char **v7; // r14
  char **v8; // r14
  char **v9; // r14
  __int64 v10; // r15
  _DWORD *v11; // rbx
  _DWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // r13
  __int64 v20; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // r12
  __int64 v23; // r14
  _QWORD *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  __int64 *v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  size_t v42; // rsi
  _DWORD *v43; // rax
  unsigned int v44; // ecx
  size_t v45; // rsi
  _DWORD *v46; // rax
  unsigned int v47; // r8d
  size_t v48; // rsi
  _DWORD *v49; // rax
  __int64 v50; // rsi
  _DWORD *v51; // rdx
  unsigned int v52; // ecx
  size_t v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // r14
  __int64 v57; // rax
  __m128 v58; // xmm0
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rdi
  unsigned int *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // r14
  int v68; // esi
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdi
  bool v72; // zf
  __int64 *v73; // r14
  unsigned __int64 v74; // r15
  __int64 v75; // rsi
  __int64 *v76; // rbx
  unsigned __int64 v77; // r15
  __int64 v78; // rsi
  __int64 *v79; // rbx
  unsigned __int64 v80; // r15
  __int64 v81; // rsi
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // [rsp+0h] [rbp-E0h]
  int v86; // [rsp+8h] [rbp-D8h]
  unsigned int v87; // [rsp+Ch] [rbp-D4h]
  __int64 v88; // [rsp+10h] [rbp-D0h]
  __int64 v89; // [rsp+20h] [rbp-C0h]
  __int64 v90; // [rsp+28h] [rbp-B8h]
  __int64 v91; // [rsp+30h] [rbp-B0h]
  __int64 v92; // [rsp+38h] [rbp-A8h]
  __int64 v93; // [rsp+38h] [rbp-A8h]
  __int64 v94; // [rsp+38h] [rbp-A8h]
  __int64 v95; // [rsp+38h] [rbp-A8h]
  __int64 v96; // [rsp+38h] [rbp-A8h]
  __int64 v97; // [rsp+38h] [rbp-A8h]
  __int64 v98; // [rsp+48h] [rbp-98h]
  unsigned int v99; // [rsp+50h] [rbp-90h]
  unsigned int v100; // [rsp+50h] [rbp-90h]
  _QWORD *v101; // [rsp+58h] [rbp-88h]
  _QWORD v102[4]; // [rsp+68h] [rbp-78h] BYREF
  __m128i v103; // [rsp+90h] [rbp-50h] BYREF

  v10 = a1;
  v11 = (_DWORD *)*a2;
  v12 = *a3;
  v98 = sub_15D1F10(*a2);
  v13 = *(_QWORD *)(v98 + 24);
  if ( v13 && (v14 = *(_QWORD *)(v13 + 8)) != 0 )
  {
    LODWORD(v90) = *(_DWORD *)(v14 - 4);
    v87 = v90 - 1;
  }
  else
  {
    v87 = -1;
    LODWORD(v90) = 0;
  }
  v15 = sub_966380(a1, v11, v12);
  v16 = *(_QWORD *)(a1 + 16);
  v86 = v15;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 7488) + 48LL))(
    *(_QWORD *)(v16 + 7488),
    *(_QWORD *)(*(_QWORD *)(v16 + 8840) + 8LL * (v15 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 7488) + 64LL))(*(_QWORD *)(v16 + 7488));
  v89 = *(_QWORD *)(a1 + 24);
  v102[1] = v89;
  v102[3] = v89;
  sub_BDE740(&v103, a1, (unsigned __int64)v11);
  v17 = v103.m128i_i64[0];
  v18 = (_QWORD *)sub_186B270(0x18u);
  v18[1] = v17;
  v19 = v18 + 1;
  *v18 = 0x100000002LL;
  sub_BDE740(&v103, a1, (unsigned __int64)v12);
  v20 = v103.m128i_i64[0];
  v21 = (_QWORD *)sub_186B270(0x18u);
  v21[1] = v20;
  v22 = v21 + 1;
  *v21 = 0x100000002LL;
  v88 = *(_QWORD *)(a1 + 24);
  if ( v87 )
  {
    v23 = 0;
    v101 = nullptr;
    v99 = v90 - 2;
    v24 = nullptr;
    do
    {
      v26 = *(_QWORD *)(*(_QWORD *)(v98 + 24) + 8LL) + 2 * v23;
      if ( *(_BYTE *)(v26 + 8) != 1 )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v27 = *(_QWORD *)v26;
      if ( *(_QWORD *)v26 )
        ++*(_DWORD *)(v27 + 8);
      if ( v24 )
      {
        v28 = *((_DWORD *)v24 - 1);
        if ( v28 == *((_DWORD *)v24 - 2) )
        {
          v52 = (3 * v28 + 1) >> 1;
          v53 = 8 * v52 + 8;
          if ( 8 * v28 + 8 >= (unsigned int)v53 || v28 >= v52 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v103.m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v103);
            sub_233E40((__int64)&v103);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v91) = (3 * v28 + 1) >> 1;
          v95 = v27;
          v54 = sub_186B300(v24 - 1, v53);
          v24 = (_QWORD *)(v54 + 8);
          v27 = v95;
          *(_DWORD *)v54 = v91;
          LODWORD(v54) = *(_DWORD *)(v54 + 4);
          v31 = &v24[(unsigned int)v54];
          v30 = v54 + 1;
        }
        else
        {
          v29 = v28;
          v30 = v28 + 1;
          v31 = &v24[v29];
        }
      }
      else
      {
        v96 = v27;
        v83 = (_QWORD *)sub_186B270(0x18u);
        v24 = v83 + 1;
        *v83 = 2;
        v27 = v96;
        v30 = 1;
        v31 = v24;
      }
      *v31 = v27;
      *((_DWORD *)v24 - 1) = v30;
      v32 = v23 | 1;
      if ( v101 )
      {
        v33 = *((_DWORD *)v101 - 1);
        if ( v33 == *((_DWORD *)v101 - 2) )
        {
          v47 = (3 * v33 + 1) >> 1;
          v48 = 8 * v47 + 8;
          if ( 8 * v33 + 8 >= (unsigned int)v48 || v33 >= v47 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v103.m128i_i64, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v103);
            sub_233E40((__int64)&v103);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          HIDWORD(v90) = (3 * v33 + 1) >> 1;
          v91 = v23 | 1;
          v94 = v27;
          v49 = (_DWORD *)sub_186B300(v101 - 1, v48);
          v50 = (unsigned int)v49[1];
          v51 = v49 + 2;
          v101 = v49 + 2;
          v32 = v23 | 1;
          *v49 = HIDWORD(v90);
          LODWORD(v49) = v50;
          v36 = (__int64 *)&v51[2 * v50];
          v27 = v94;
          v35 = (_DWORD)v49 + 1;
        }
        else
        {
          v34 = v33;
          v35 = v33 + 1;
          v36 = &v101[v34];
        }
      }
      else
      {
        v91 = v23 | 1;
        v97 = v27;
        v84 = (_QWORD *)sub_186B270(0x18u);
        *v84 = 2;
        v27 = v97;
        v101 = v84 + 1;
        v36 = v84 + 1;
        v32 = v23 | 1;
        v35 = 1;
      }
      *v36 = v32;
      v37 = *(_QWORD *)(v10 + 24);
      *((_DWORD *)v101 - 1) = v35;
      v38 = sub_15DB5C0(v37, v99, v27);
      v39 = v38;
      if ( v38 )
        ++*(_DWORD *)(v38 + 8);
      v40 = *((_DWORD *)v19 - 1);
      if ( v40 == *((_DWORD *)v19 - 2) )
      {
        v41 = (3 * v40 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v103.m128i_i64, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, &v103);
          sub_233E40((__int64)&v103);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v91) = (3 * v40 + 1) >> 1;
        v92 = v39;
        v43 = (_DWORD *)sub_186B300(v19 - 1, v42);
        v19 = v43 + 2;
        v39 = v92;
        *v43 = v91;
        v40 = v43[1];
      }
      v19[v40] = v39;
      *((_DWORD *)v19 - 1) = v40 + 1;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      v25 = *((_DWORD *)v22 - 1);
      if ( v25 == *((_DWORD *)v22 - 2) )
      {
        v44 = (3 * v25 + 1) >> 1;
        v45 = 8 * v44 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v45 || v25 >= v44 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v103.m128i_i64, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, &v103);
          sub_233E40((__int64)&v103);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v91) = (3 * v25 + 1) >> 1;
        v93 = v39;
        v46 = (_DWORD *)sub_186B300(v22 - 1, v45);
        v22 = v46 + 2;
        v39 = v93;
        *v46 = v91;
        v25 = v46[1];
      }
      --v99;
      v23 += 8;
      v22[v25] = v39;
      *((_DWORD *)v22 - 1) = v25 + 1;
    }
    while ( 8LL * v87 != v23 );
    a1 = *(_QWORD *)(v10 + 24);
  }
  else
  {
    v101 = nullptr;
    LODWORD(a1) = *(_QWORD *)(a1 + 24);
    v24 = nullptr;
  }
  sub_15DCAD0(a1, (int)v19, 0);
  sub_15DCAD0(*(_QWORD *)(v10 + 24), (int)v22, 0);
  v55 = sub_15E1B70(*(_QWORD *)(v10 + 24));
  v56 = *(_QWORD *)(v10 + 24);
  v57 = sub_15DB6A0(v56, 0, v87, v24, v101, v55, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
  v58 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v57, (__m128i)v56);
  v103 = (__m128i)v58;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  sub_14B9B80(*(_QWORD *)(v10 + 16) + 7456LL, &v103);
  v62 = *(_QWORD **)(v10 + 16);
  v63 = (unsigned int *)v103.m128i_i64[0];
  v64 = v62[1104];
  if ( !v64
    || (v65 = *(unsigned int *)v103.m128i_i64[0], (unsigned int)v65 >= *(_DWORD *)(v64 - 4))
    || *(_DWORD *)(v64 + 4 * v65) == 0x7FFFFFFF )
  {
    sub_B6F780(
      v62,
      v103.m128i_i64[0],
      1u,
      v58,
      (__m128)v56,
      a6,
      v59,
      v60,
      v61,
      v85,
      v86,
      v88,
      (__int64)&v103,
      v89,
      v90,
      v91);
    v62 = *(_QWORD **)(v10 + 16);
    v63 = (unsigned int *)v103.m128i_i64[0];
  }
  v66 = sub_B645B0((__int64)v62, v63);
  v67 = *(_QWORD *)(v10 + 16);
  v100 = v66;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v67 + 7488) + 48LL))(
    *(_QWORD *)(v67 + 7488),
    *(_QWORD *)(*(_QWORD *)(v67 + 8840) + 8LL * (v66 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v67 + 7488) + 64LL))(*(_QWORD *)(v67 + 7488));
  v68 = *(_DWORD *)(v10 + 8);
  v69 = *(_QWORD *)(v10 + 16);
  v102[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v86 ^ 1u), _mm_cvtsi32_si128(v100)).m128i_u64[0];
  sub_B69FE0(v69, v68, 2, (unsigned int *)v102, 0, 0, 1u);
  v70 = v103.m128i_i64[0];
  if ( v103.m128i_i64[0] )
  {
    v71 = v103.m128i_i64[1];
    v72 = (*(_DWORD *)(v103.m128i_i64[0] + 8))-- == 1;
    if ( v72 )
      sub_15D7BC0(v71, v70);
  }
  if ( v24 )
  {
    v73 = v24;
    v74 = (unsigned __int64)&v24[*((unsigned int *)v24 - 1)];
    if ( (unsigned __int64)v24 < v74 )
    {
      do
      {
        while ( 1 )
        {
          v75 = *v73;
          if ( *v73 )
          {
            v72 = (*(_DWORD *)(v75 + 8))-- == 1;
            if ( v72 )
              break;
          }
          if ( (unsigned __int64)++v73 >= v74 )
            goto LABEL_50;
        }
        ++v73;
        sub_15D7BC0(v88, v75);
      }
      while ( (unsigned __int64)v73 < v74 );
    }
LABEL_50:
    sub_186B220(v24 - 1);
  }
  if ( v101 )
    sub_186B220(v101 - 1);
  v76 = v22;
  v77 = (unsigned __int64)&v22[*((unsigned int *)v22 - 1)];
  if ( (unsigned __int64)v22 < v77 )
  {
    do
    {
      while ( 1 )
      {
        v78 = *v76;
        if ( *v76 )
        {
          v72 = (*(_DWORD *)(v78 + 8))-- == 1;
          if ( v72 )
            break;
        }
        if ( (unsigned __int64)++v76 >= v77 )
          goto LABEL_59;
      }
      ++v76;
      sub_15D7BC0(v89, v78);
    }
    while ( (unsigned __int64)v76 < v77 );
  }
LABEL_59:
  v79 = v19;
  sub_186B220(v22 - 1);
  if ( v19 < &v19[*((unsigned int *)v19 - 1)] )
  {
    v80 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
    do
    {
      while ( 1 )
      {
        v81 = *v79;
        if ( *v79 )
        {
          v72 = (*(_DWORD *)(v81 + 8))-- == 1;
          if ( v72 )
            break;
        }
        if ( (unsigned __int64)++v79 >= v80 )
          return sub_186B220(v19 - 1);
      }
      ++v79;
      sub_15D7BC0(v89, v81);
    }
    while ( (unsigned __int64)v79 < v80 );
  }
  return sub_186B220(v19 - 1);
}

