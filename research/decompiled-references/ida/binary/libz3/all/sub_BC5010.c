__int64 __fastcall sub_BC5010(__int64 a1, _DWORD *a2, int **a3, unsigned int *a4, unsigned int *a5, char a6)
{
  char **v6; // r14
  __int64 v7; // rdx
  char **exception; // r14
  __int64 v9; // rdx
  __int64 *v13; // r14
  __int64 v14; // r15
  __int64 v15; // r15
  int *v16; // r8
  __m128i v17; // xmm0
  _QWORD *v18; // rax
  int *v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 i; // rdx
  unsigned int v22; // r8d
  int *v23; // rax
  unsigned int v24; // edx
  int *v25; // rcx
  int v26; // ebx
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // ebx
  _QWORD *v30; // rax
  __m128i v31; // xmm0
  _QWORD *v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r15
  __m128i v35; // xmm0
  _QWORD *v36; // rbx
  _QWORD *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 *v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rbx
  __int64 v44; // rbx
  __int64 v45; // rdi
  _QWORD *v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // r13
  __m128i v49; // xmm0
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 *v53; // rsi
  __int64 v54; // rbx
  _QWORD *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 **v59; // rcx
  _DWORD *v61; // rax
  unsigned int v62; // ebx
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rcx
  unsigned int v66; // r15d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __m128i v72; // xmm0
  int v73; // [rsp-8h] [rbp-118h]
  __int64 *v74; // [rsp+0h] [rbp-110h]
  _QWORD *v75; // [rsp+8h] [rbp-108h]
  unsigned int v76; // [rsp+8h] [rbp-108h]
  __int64 *v77; // [rsp+10h] [rbp-100h]
  unsigned int **v78; // [rsp+18h] [rbp-F8h]
  __int64 v79; // [rsp+28h] [rbp-E8h]
  __int64 v81; // [rsp+30h] [rbp-E0h]
  __int64 v82; // [rsp+38h] [rbp-D8h]
  int *v83; // [rsp+40h] [rbp-D0h]
  __int64 *v84; // [rsp+48h] [rbp-C8h]
  unsigned int *v85; // [rsp+50h] [rbp-C0h] BYREF
  unsigned int *v86; // [rsp+58h] [rbp-B8h] BYREF
  int *v87; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v88; // [rsp+68h] [rbp-A8h] BYREF
  __int128 v89; // [rsp+70h] [rbp-A0h] BYREF
  __m128i v90; // [rsp+80h] [rbp-90h]
  __int64 **v91; // [rsp+90h] [rbp-80h] BYREF
  char v92; // [rsp+98h] [rbp-78h]
  int v93; // [rsp+9Ch] [rbp-74h]
  __int64 v94; // [rsp+A0h] [rbp-70h]
  int v95; // [rsp+A8h] [rbp-68h]
  __int64 v96; // [rsp+B0h] [rbp-60h]
  int v97; // [rsp+B8h] [rbp-58h]
  __int64 v98; // [rsp+C0h] [rbp-50h]
  __m128i v99; // [rsp+C8h] [rbp-48h] BYREF

  v86 = a4;
  v85 = a5;
  v84 = sub_966570(a1, a4);
  v13 = sub_966570(a1, v85);
  if ( v84[1] == v13[1] )
    return 0;
  v14 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v14 + 7488) + 48LL))(*(_QWORD *)(v14 + 7488), *v84);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 7488) + 64LL))(*(_QWORD *)(v14 + 7488));
  v15 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v15 + 7488) + 48LL))(*(_QWORD *)(v15 + 7488), *v13);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 7488) + 64LL))(*(_QWORD *)(v15 + 7488));
  v16 = *a3;
  if ( *a3 )
  {
    v17 = _mm_loadl_epi64((const __m128i *)(v16 - 2));
    v18 = (_QWORD *)sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v17) + 8);
    v19 = *a3;
    v16 = (int *)(v18 + 1);
    *v18 = v17.m128i_i64[0];
    if ( v19 )
    {
      v20 = 4LL * (unsigned int)*(v19 - 1);
      if ( v20 )
      {
        for ( i = 0; i != v20; i += 4LL )
          *(_DWORD *)((char *)v18 + i + 8) = v19[i / 4];
      }
    }
  }
  v87 = v16;
  v88 = 0;
  v78 = (unsigned int **)&v87;
  v77 = &v88;
  sub_BB8720(a1, (__int64)a2, &v88, &v87);
  v82 = v88;
  v83 = v87;
  if ( a6 )
  {
    v61 = sub_BB22C0(a1, a2, a3);
    sub_BBB5D0(a1, (__int64)v61, v84, v13);
  }
  v79 = *(_QWORD *)(a1 + 16);
  if ( v82 )
  {
    v22 = *(_DWORD *)(v82 - 4);
    v23 = v83;
    if ( v83 )
    {
LABEL_11:
      v24 = *(v23 - 1);
      v25 = v23;
      goto LABEL_12;
    }
  }
  else
  {
    v23 = v83;
    v22 = 0;
    if ( v83 )
      goto LABEL_11;
  }
  v24 = 0;
  v25 = v23;
LABEL_12:
  v26 = *(_DWORD *)(a1 + 8);
  v74 = (__int64 *)&v91;
  sub_B72D60((__int64)&v91, v79, v24, v25, v22, v82);
  v97 = v26;
  v98 = 0;
  v99.m128i_i64[1] = (__int64)v13;
  v91 = (__int64 **)&off_1C579E8;
  v99.m128i_i64[0] = (__int64)v84;
  nullsub_687();
  v27 = sub_180C100(v79 + 8400, 72);
  v81 = v27;
  *(_BYTE *)(v27 + 8) = v92 & 3 | *(_BYTE *)(v27 + 8) & 0xFC;
  *(_DWORD *)(v27 + 12) = v93;
  *(_QWORD *)(v27 + 16) = v94;
  *(_DWORD *)(v27 + 24) = v95;
  *(_QWORD *)(v27 + 32) = v96;
  *(_QWORD *)v27 = qword_1C6E7C8;
  v28 = v97;
  *(_QWORD *)(v27 + 48) = 0;
  *(_DWORD *)(v27 + 40) = v28;
  if ( v98 )
  {
    v29 = *(_DWORD *)(v98 - 4);
    v76 = *(_DWORD *)(v98 - 8);
    v30 = (_QWORD *)sub_186B270(16LL * v76 + 8);
    v31 = _mm_cvtsi32_si128(v76);
    v32 = v30 + 1;
    v75 = v30 + 1;
    *v30 = _mm_unpacklo_epi32(v31, _mm_cvtsi32_si128(v29)).m128i_u64[0];
    *(_QWORD *)(v81 + 48) = v30 + 1;
    v33 = v98;
    if ( !v98 )
    {
      *(__m128i *)(v81 + 56) = _mm_loadu_si128(&v99);
      *(_QWORD *)v81 = &off_1C579E8;
      goto LABEL_17;
    }
    v34 = v98 + 16LL * *(unsigned int *)(v98 - 4);
    if ( v98 == v34 )
    {
      v72 = _mm_loadu_si128(&v99);
      *(_QWORD *)v81 = &off_1C579E8;
      *(__m128i *)(v81 + 56) = v72;
      goto LABEL_17;
    }
    do
    {
      sub_15D0E50(v32, v33);
      v33 += 16;
      v32 += 2;
    }
    while ( v34 != v33 );
    v35 = _mm_loadu_si128(&v99);
    v36 = *(_QWORD **)(v81 + 48);
    *(_QWORD *)v81 = &off_1C579E8;
    v75 = v36;
    *(__m128i *)(v81 + 56) = v35;
    if ( v36 )
    {
LABEL_17:
      if ( *((_DWORD *)v75 - 1) )
      {
        v37 = *(_QWORD **)(v79 + 8600);
        if ( v37 )
        {
          v38 = *((_DWORD *)v37 - 1);
          if ( v38 == *((_DWORD *)v37 - 2) )
          {
            v62 = (3 * v38 + 1) >> 1;
            v63 = 8 * v62 + 8;
            if ( 8 * v38 + 8 >= (unsigned int)v63 || v38 >= v62 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_154526((__int64 *)&v89, "Overflow encountered when expanding vector", v9);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v89);
              sub_233E40((__int64)&v89);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v64 = (unsigned int *)sub_186B300(v37 - 1, v63);
            v65 = v64[1];
            v37 = v64 + 2;
            *(_QWORD *)(v79 + 8600) = v64 + 2;
            *v64 = v62;
            LODWORD(v64) = v65;
            v41 = &v37[v65];
            v40 = (_DWORD)v64 + 1;
          }
          else
          {
            v39 = v38;
            v40 = v38 + 1;
            v41 = &v37[v39];
          }
        }
        else
        {
          v71 = (_QWORD *)sub_186B270(0x18u);
          v37 = v71 + 1;
          *v71 = 2;
          v41 = v71 + 1;
          *(_QWORD *)(v79 + 8600) = v71 + 1;
          v40 = 1;
        }
        *v41 = v81;
        *((_DWORD *)v37 - 1) = v40;
      }
    }
  }
  else
  {
    *(__m128i *)(v27 + 56) = _mm_loadu_si128(&v99);
    *(_QWORD *)v27 = &off_1C579E8;
  }
  v42 = v98;
  v91 = (__int64 **)qword_1C6E7C8;
  if ( v98 )
  {
    v43 = *(unsigned int *)(v98 - 4);
    if ( (_DWORD)v43 )
    {
      v44 = v98 + 16 * v43;
      do
      {
        v45 = v42;
        v42 += 16;
        sub_15D0DF0(v45);
      }
      while ( v44 != v42 );
      v42 = v98;
    }
    sub_186B220((void *)(v42 - 8));
  }
  *(_BYTE *)(a1 + 4170) = 1;
  v90 = 0u;
  v89 = 0;
  v46 = (_QWORD *)operator new(0x18u);
  *v46 = a1;
  v47 = _mm_loadl_epi64((const __m128i *)&off_1C57F18);
  v46[1] = &v86;
  v48 = *(_QWORD *)(a1 + 24);
  v46[2] = &v85;
  *(_QWORD *)&v89 = v46;
  v49 = _mm_unpacklo_epi64(v47, (__m128i)(unsigned __int64)sub_BAFFC0);
  v90 = v49;
  if ( *(_QWORD *)(v48 + 912) )
  {
    v50 = sub_BAFFC0((__int64)&v89);
    v51 = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    v91 = nullptr;
    sub_966750(a1, v50, -1, 0, 0, -1, &v91, v73, (int)&v91, (int)v75, (int)&v88, &v87);
    if ( v91 )
      sub_186B220(v91 - 1);
    if ( v51 )
    {
      if ( (*(_DWORD *)(v51 + 8))-- == 1 )
        sub_15D7BC0(v48, v51);
    }
  }
  v53 = v84;
  if ( v84[1] != v13[1] )
  {
    v54 = *(_QWORD *)(a1 + 16);
    v55 = *(_QWORD **)(v54 + 8760);
    if ( v55 )
    {
      v56 = *((_DWORD *)v55 - 1);
      if ( v56 == *((_DWORD *)v55 - 2) )
      {
        v66 = (3 * v56 + 1) >> 1;
        v67 = 8 * (v66 + ((3 * v56 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v56 + 8 >= (unsigned int)v67 || v56 >= v66 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v74, "Overflow encountered when expanding vector", v7);
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v74);
          sub_233E40((__int64)v74);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v68 = (unsigned int *)sub_186B300(v55 - 1, v67);
        v69 = v68[1];
        v55 = v68 + 2;
        *(_QWORD *)(v54 + 8760) = v68 + 2;
        *v68 = v66;
        LODWORD(v68) = v69;
        v59 = (__int64 **)&v55[3 * v69];
        v58 = (_DWORD)v68 + 1;
      }
      else
      {
        v57 = v56;
        v58 = v56 + 1;
        v59 = (__int64 **)&v55[3 * v57];
      }
    }
    else
    {
      v70 = (_QWORD *)sub_186B270(0x38u);
      v55 = v70 + 1;
      *v70 = 2;
      v58 = 1;
      *(_QWORD *)(v54 + 8760) = v55;
      v59 = (__int64 **)v55;
    }
    v53 = v84;
    v59[1] = v13;
    *v59 = v84;
    v59[2] = (__int64 *)(v81 | 3);
    *((_DWORD *)v55 - 1) = v58;
  }
  sub_BC45D0(a1, v53, v13, v77, v78, *(double *)v49.m128i_i64);
  if ( *(_QWORD *)(v48 + 912) )
    std::operator<<<std::char_traits<char>>();
  if ( v90.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v90.m128i_i64[0])(&v89, &v89, 3);
  if ( v82 )
    sub_186B220((void *)(v82 - 8));
  if ( v83 )
    sub_186B220(v83 - 2);
  return 1;
}

