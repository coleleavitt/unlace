__int64 __fastcall sub_696F60(__int64 a1, _DWORD *a2, unsigned int a3, int a4, _QWORD *a5)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  _DWORD *v10; // rdi
  _DWORD *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbp
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // r15
  int v18; // r10d
  int v19; // ecx
  __int64 v20; // r14
  unsigned int v21; // ebp
  int v22; // ebx
  __int64 v23; // r15
  unsigned int v24; // r14d
  __int64 v25; // rax
  char *v26; // rbp
  char *v27; // r12
  __m128i *v28; // rbx
  __m128i *v29; // rbp
  __int64 v31; // rdx
  __int64 v32; // rsi
  _BYTE *v33; // r13
  bool v34; // r12
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __m128i si128; // xmm0
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v49; // edi
  int v50; // ebp
  int v51; // r14d
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // ebp
  int v55; // ebx
  unsigned int v56; // r14d
  _DWORD *v57; // rax
  _DWORD *v58; // r15
  unsigned int v59; // esi
  int v60; // eax
  int v61; // r15d
  int v62; // r14d
  _DWORD *v63; // rax
  unsigned int v64; // ebp
  int v65; // eax
  __int64 v66; // [rsp+28h] [rbp-1D0h]
  __int64 v67; // [rsp+30h] [rbp-1C8h]
  int v68; // [rsp+30h] [rbp-1C8h]
  __int64 v69; // [rsp+30h] [rbp-1C8h]
  _DWORD *v70; // [rsp+30h] [rbp-1C8h]
  char v71; // [rsp+38h] [rbp-1C0h]
  __int64 v72; // [rsp+38h] [rbp-1C0h]
  __int64 v73; // [rsp+38h] [rbp-1C0h]
  char v74; // [rsp+40h] [rbp-1B8h]
  __int64 v75; // [rsp+40h] [rbp-1B8h]
  int v76; // [rsp+40h] [rbp-1B8h]
  char v77; // [rsp+48h] [rbp-1B0h]
  int v78; // [rsp+48h] [rbp-1B0h]
  char v79; // [rsp+4Ch] [rbp-1ACh]
  __int128 v80; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v81; // [rsp+60h] [rbp-198h] BYREF
  void (__fastcall *v82)(__int128 *, __int128 *, __int64); // [rsp+70h] [rbp-188h]
  __int64 v83; // [rsp+78h] [rbp-180h]
  _OWORD v84[4]; // [rsp+80h] [rbp-178h] BYREF
  __m128i v85; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v86; // [rsp+D0h] [rbp-128h]
  _OWORD *v87; // [rsp+D8h] [rbp-120h]
  int v88; // [rsp+E0h] [rbp-118h]
  _QWORD *v89; // [rsp+E8h] [rbp-110h]
  __int64 v90; // [rsp+F0h] [rbp-108h]
  __int64 v91; // [rsp+F8h] [rbp-100h]
  int v92; // [rsp+100h] [rbp-F8h]
  __int64 v93; // [rsp+108h] [rbp-F0h]
  __int64 v94; // [rsp+110h] [rbp-E8h]
  int v95; // [rsp+118h] [rbp-E0h]
  __int64 v96; // [rsp+120h] [rbp-D8h]
  __int64 v97; // [rsp+128h] [rbp-D0h]
  int v98; // [rsp+130h] [rbp-C8h]
  __int64 v99; // [rsp+138h] [rbp-C0h]
  __int64 v100; // [rsp+140h] [rbp-B8h]
  int v101; // [rsp+148h] [rbp-B0h]
  __int128 v102; // [rsp+150h] [rbp-A8h]
  void *ptr; // [rsp+160h] [rbp-98h]
  __int64 v104; // [rsp+168h] [rbp-90h]
  _BYTE v105[32]; // [rsp+170h] [rbp-88h] BYREF
  __m128i *v106; // [rsp+190h] [rbp-68h]
  __int64 v107; // [rsp+198h] [rbp-60h]
  __m128i v108; // [rsp+1A0h] [rbp-58h] BYREF
  int v109; // [rsp+1B0h] [rbp-48h]

  if ( !a5 )
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v33 = (_BYTE *)qword_4AD21C8;
    v34 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v34 = *v33 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v85.m128i_i64[0] = 31;
      v35 = operator new(0xC0u);
      *(_DWORD *)v35 = 0;
      *(_QWORD *)(v35 + 8) = v35 + 24;
      v36 = std::string::_M_create();
      v37 = v85.m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E5B0);
      *(_QWORD *)(v35 + 8) = v36;
      *(_QWORD *)(v35 + 24) = v37;
      *(__m128i *)v36 = si128;
      *(__m128i *)(v36 + 15) = _mm_load_si128((const __m128i *)&xmmword_3C7E5C0);
      v39 = v85.m128i_i64[0];
      v40 = *(_QWORD *)(v35 + 8);
      v41 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v35 + 16) = v85.m128i_i64[0];
      *(_BYTE *)(v40 + v39) = 0;
      *(_QWORD *)(v35 + 48) = v35 + 72;
      *(_BYTE *)(v35 + 40) = v34;
      *(__m128i *)(v35 + 56) = v41;
      *(_QWORD *)(v35 + 136) = &off_49DA340;
      *(_QWORD *)(v35 + 184) = v35 + 48;
      *(_DWORD *)(v35 + 144) = 2;
      *(_BYTE *)(v35 + 176) = 0;
      *(_DWORD *)(v35 + 180) = 1;
      *(_QWORD *)(v35 + 168) = 0;
      *(_OWORD *)(v35 + 152) = 0;
      sub_2623850(v35 + 136, 0, 0, 0, v42, v43);
      v44 = *(_QWORD *)(v35 + 168);
      v45 = *(_QWORD *)(v35 + 160);
      ++*(_DWORD *)v35;
      if ( (unsigned __int64)(v45 - v44) <= 0x15 )
      {
        sub_26240F0(v35 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v44 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v44 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v35 + 168) += 22LL;
      }
      sub_60BBA0(v35, 0);
      if ( (*(_DWORD *)v35)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v35, nullptr, v46, v47);
        operator delete((void *)v35, 0xC0u);
      }
    }
    return 3;
  }
  if ( !a2 )
    return 3;
  v6 = a3;
  if ( !a3 )
    return 3;
  v7 = a1;
  LODWORD(v8) = a4;
  if ( (*(_BYTE *)(*a5 + 4LL) & 1) != 0 )
  {
    sub_60B480();
    v7 = a1;
  }
  v84[0] = 0;
  v10 = v84;
  if ( v6 > 0x40 )
    v6 = 64;
  memset(&v84[1], 0, 48);
  v11 = a2;
  if ( v6 >= 8 )
  {
    LODWORD(v31) = 0;
    do
    {
      v32 = (unsigned int)v31;
      v31 = (unsigned int)(v31 + 8);
      *(_QWORD *)((char *)v84 + v32) = *(_QWORD *)((char *)a2 + v32);
    }
    while ( (unsigned int)v31 < (v6 & 0xFFFFFFF8) );
    v10 = (_DWORD *)((char *)v84 + v31);
    v11 = (_DWORD *)((char *)a2 + v31);
  }
  v12 = 0;
  if ( (v6 & 4) == 0 )
  {
    if ( (v6 & 2) == 0 )
      goto LABEL_11;
LABEL_49:
    *(_WORD *)((char *)v10 + v12) = *(_WORD *)((char *)v11 + v12);
    v12 += 2;
    if ( (v6 & 1) == 0 )
      goto LABEL_12;
    goto LABEL_48;
  }
  *v10 = *v11;
  v12 = 4;
  if ( (v6 & 2) != 0 )
    goto LABEL_49;
LABEL_11:
  if ( (v6 & 1) != 0 )
LABEL_48:
    *((_BYTE *)v10 + v12) = *((_BYTE *)v11 + v12);
LABEL_12:
  v86 = v7;
  v13 = a5[1];
  ptr = v105;
  v102 = 0;
  v104 = 0x400000000LL;
  v89 = a5;
  v14 = 1;
  v85.m128i_i64[0] = (__int64)&off_47D00E8;
  v85.m128i_i64[1] = 0;
  v87 = v84;
  v88 = v8;
  v92 = 0;
  v90 = 0;
  v91 = 0;
  v95 = 0;
  v93 = 0;
  v94 = 0;
  v98 = 0;
  v96 = 0;
  v97 = 0;
  v101 = 0;
  v99 = 0;
  v100 = 0;
  v106 = &v108;
  v107 = 0;
  v109 = 0;
  v108 = _mm_load_si128((const __m128i *)&xmmword_3C7E570);
  if ( v13 )
  {
    v66 = v13 + 2048;
    nullsub_173(v13 + 2048);
    v15 = sub_FEE520(v13, v12);
    if ( v15 )
      sub_67C4E0((__int64)&v85, v15);
    v16 = *(_QWORD *)(v13 + 352);
    if ( v16 )
    {
      sub_C7CB00((unsigned int)&v80, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 344), v16, 0, 1, 1);
      if ( (BYTE8(v80) & 1) != 0 )
        sub_67B460((__int64)&v85, 0);
      else
        sub_67B460((__int64)&v85, v80);
      if ( (BYTE8(v80) & 1) != 0 && (_QWORD)v80 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v80 + 8LL))(v80);
    }
    else
    {
      sub_67B460((__int64)&v85, 0);
    }
    sub_67B3D0((__int64)&v85, *(int **)(v13 + 80));
    sub_67C540(&v85);
    if ( *(_QWORD *)(*(_QWORD *)(v13 + 64) + 2880LL) )
    {
      v17 = sub_FEE590(v13);
      sub_FEE490(&v80, v13);
      v18 = v80;
      v19 = v81;
      v20 = *((_QWORD *)&v80 + 1);
      if ( (_DWORD)v80 != (_DWORD)v81 )
      {
        if ( v17 )
        {
          if ( (int)v80 >= 0 )
            goto LABEL_76;
          v60 = 0;
          v76 = v80;
          if ( (int)v81 <= 0 )
            v60 = v81;
          v73 = v13;
          v78 = v81;
          v79 = v8;
          v61 = v60;
          v8 = *((_QWORD *)&v80 + 1);
          v62 = v80;
          do
          {
            v63 = (_DWORD *)sub_11EE2A0(
                              v8,
                              ~(v62 + (unsigned int)((__int64)(*(_QWORD *)(v8 + 144) - *(_QWORD *)(v8 + 136)) >> 3)));
            if ( *v63 == 3 )
            {
              v64 = v63[1];
              v70 = v63;
              if ( (unsigned __int8)sub_FEE140(v73, v64) )
                v64 = 0;
              sub_67BB20(
                (__int64)&v85,
                v64,
                *((const char **)v70 + 2),
                *((_QWORD *)v70 + 3),
                *((_QWORD *)v70 + 5),
                ((*((_BYTE *)v70 + 32) >> 1) & 3) == 1,
                !(v70[8] & 1),
                (v70[8] & 8) != 0);
            }
            ++v62;
          }
          while ( v62 < v61 );
          v19 = v78;
          v20 = v8;
          v13 = v73;
          LOBYTE(v8) = v79;
          v65 = v61 - v76 - 1;
          if ( v76 >= v61 )
            v65 = 0;
          v18 = v76 + v65 + 1;
          if ( v78 != v18 )
          {
LABEL_76:
            v69 = v20;
            v75 = v13;
            v54 = v18 + 1;
            v77 = v8;
            v55 = v19;
            do
            {
              v56 = v54;
              v57 = (_DWORD *)sub_11EE2A0(v69, v54);
              v58 = v57;
              if ( *v57 == 3 )
              {
                v59 = v57[1];
                if ( (unsigned __int8)sub_FEE140(v75, v59) )
                  v59 = 0;
                sub_67BB20(
                  (__int64)&v85,
                  v59,
                  *((const char **)v58 + 2),
                  *((_QWORD *)v58 + 3),
                  *((_QWORD *)v58 + 5),
                  ((*((_BYTE *)v58 + 32) >> 1) & 3) == 1,
                  !(v58[8] & 1),
                  (v58[8] & 8) != 0);
              }
              ++v54;
            }
            while ( v55 != v56 );
            v13 = v75;
            LOBYTE(v8) = v77;
          }
        }
        else
        {
          if ( (int)v80 >= 0 )
            goto LABEL_21;
          v49 = 0;
          v68 = v80;
          if ( (int)v81 <= 0 )
            v49 = v81;
          v72 = v13;
          v50 = v80;
          v74 = v8;
          v8 = *((_QWORD *)&v80 + 1);
          v51 = v81;
          do
          {
            v52 = sub_11EE2A0(
                    v8,
                    ~(v50 + (unsigned int)((__int64)(*(_QWORD *)(v8 + 144) - *(_QWORD *)(v8 + 136)) >> 3)));
            if ( *(_DWORD *)v52 == 3 )
              sub_67BB20(
                (__int64)&v85,
                *(_DWORD *)(v52 + 4),
                *(const char **)(v52 + 16),
                *(_QWORD *)(v52 + 24),
                *(_QWORD *)(v52 + 40),
                ((*(_BYTE *)(v52 + 32) >> 1) & 3) == 1,
                !(*(_BYTE *)(v52 + 32) & 1),
                (*(_BYTE *)(v52 + 32) & 8) != 0);
            ++v50;
          }
          while ( v49 > v50 );
          v19 = v51;
          v13 = v72;
          v20 = v8;
          LOBYTE(v8) = v74;
          v53 = v49 - v68 - 1;
          if ( v49 <= v68 )
            v53 = 0;
          v18 = v68 + v53 + 1;
          if ( v19 != v18 )
          {
LABEL_21:
            v67 = v13;
            v71 = v8;
            v21 = v18 + 1;
            v22 = v19;
            v23 = v20;
            do
            {
              v24 = v21;
              v25 = sub_11EE2A0(v23, v21);
              if ( *(_DWORD *)v25 == 3 )
                sub_67BB20(
                  (__int64)&v85,
                  *(_DWORD *)(v25 + 4),
                  *(const char **)(v25 + 16),
                  *(_QWORD *)(v25 + 24),
                  *(_QWORD *)(v25 + 40),
                  ((*(_BYTE *)(v25 + 32) >> 1) & 3) == 1,
                  !(*(_BYTE *)(v25 + 32) & 1),
                  (*(_BYTE *)(v25 + 32) & 8) != 0);
              ++v21;
            }
            while ( v24 != v22 );
            v13 = v67;
            LOBYTE(v8) = v71;
          }
        }
      }
    }
    BYTE5(v80) = (v8 & 4) != 0;
    BYTE4(v80) = (v8 & 2) != 0;
    LODWORD(v80) = 1;
    *(_DWORD *)((char *)&v80 + 6) = 1;
    v82 = nullptr;
    v83 = 0;
    v81 = 0;
    sub_1113B80(v13, &v85, &v80);
    if ( v82 )
      v82(&v81, &v81, 3);
    sub_67CDB0(&v85);
    nullsub_174(v66);
    v26 = (char *)ptr;
    v27 = (char *)ptr + 8 * (unsigned int)v104;
    v85.m128i_i64[0] = (__int64)&off_47D00E8;
    if ( v27 != ptr )
    {
      do
      {
        v26 += 8;
        operator delete();
      }
      while ( v27 != v26 );
    }
    v14 = 0;
  }
  v28 = v106;
  v29 = &v106[(unsigned int)v107];
  if ( v106 != v29 )
  {
    do
    {
      ++v28;
      operator delete();
    }
    while ( v29 != v28 );
    v29 = v106;
  }
  if ( v29 != &v108 )
    free(v29);
  if ( ptr != v105 )
    free(ptr);
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  return v14;
}

