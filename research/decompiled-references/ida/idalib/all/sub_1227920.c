__int64 __fastcall sub_1227920(__int64 a1, _DWORD *a2, void *a3, _BYTE *a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  size_t v8; // rax
  __m128i *v9; // rax
  __int64 v10; // rax
  __m128i *p_s1; // r15
  unsigned int v12; // r12d
  unsigned __int64 v14; // rax
  size_t v15; // rax
  unsigned __int64 v16; // r12
  size_t v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  char *v23; // r12
  size_t v24; // rbx
  size_t v25; // rax
  size_t v26; // r13
  _QWORD *v27; // rax
  __int64 v28; // rbx
  _BYTE *v29; // rsi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  size_t v34; // rax
  __m128i *v35; // rax
  void **v36; // rbx
  void *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 (__fastcall *v40)(__int64, __m128i *); // rax
  unsigned __int64 v41; // rax
  char v42; // r13
  __m128i *v43; // rdi
  unsigned int v44; // eax
  __m128i *v45; // rax
  __int64 v46; // rax
  size_t v47; // rax
  const __m128i *v48; // rbx
  const __m128i *v49; // r13
  __m128i *v50; // rdi
  unsigned __int64 v51; // rax
  void *v52; // rax
  size_t v53; // rax
  char *v54; // rbp
  size_t v55; // r15
  void *v56; // rax
  void *v57; // rdx
  void *v58; // rax
  char *v59; // rcx
  char *v60; // r8
  int v61; // eax
  size_t v62; // rax
  const __m128i *v63; // [rsp+28h] [rbp-310h]
  __int64 (__fastcall *v64)(__int64, __m128i *); // [rsp+30h] [rbp-308h]
  __int64 v65; // [rsp+30h] [rbp-308h]
  void **v66; // [rsp+50h] [rbp-2E8h]
  __m128i *v67; // [rsp+50h] [rbp-2E8h]
  void *v68; // [rsp+68h] [rbp-2D0h]
  __m128i *v72; // [rsp+90h] [rbp-2A8h]
  _BYTE *v73; // [rsp+A0h] [rbp-298h]
  __m128i v74; // [rsp+A8h] [rbp-290h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-280h]
  char *v76; // [rsp+C0h] [rbp-278h]
  char *v77; // [rsp+C8h] [rbp-270h]
  __m128i v78; // [rsp+D0h] [rbp-268h] BYREF
  __int64 v79[2]; // [rsp+E0h] [rbp-258h] BYREF
  char v80; // [rsp+F0h] [rbp-248h]
  __int64 v81[2]; // [rsp+100h] [rbp-238h] BYREF
  char v82; // [rsp+110h] [rbp-228h]
  __m128i v83; // [rsp+120h] [rbp-218h] BYREF
  _BYTE v84[16]; // [rsp+130h] [rbp-208h] BYREF
  void *v85; // [rsp+140h] [rbp-1F8h] BYREF
  char *v86; // [rsp+148h] [rbp-1F0h]
  __m128i v87; // [rsp+150h] [rbp-1E8h] BYREF
  void *v88; // [rsp+160h] [rbp-1D8h] BYREF
  void *v89; // [rsp+168h] [rbp-1D0h]
  _QWORD v90[2]; // [rsp+170h] [rbp-1C8h] BYREF
  __int16 v91; // [rsp+180h] [rbp-1B8h]
  void *v92[2]; // [rsp+190h] [rbp-1A8h] BYREF
  __m128i v93; // [rsp+1A0h] [rbp-198h] BYREF
  __int16 v94; // [rsp+1B0h] [rbp-188h]
  __m128i v95; // [rsp+1C0h] [rbp-178h] BYREF
  _BYTE v96[16]; // [rsp+1D0h] [rbp-168h] BYREF
  __int16 v97; // [rsp+1E0h] [rbp-158h]
  void *v98; // [rsp+1F0h] [rbp-148h] BYREF
  __int64 v99; // [rsp+1F8h] [rbp-140h]
  _WORD v100[16]; // [rsp+200h] [rbp-138h] BYREF
  void *ptr; // [rsp+220h] [rbp-118h] BYREF
  __int64 v102; // [rsp+228h] [rbp-110h]
  _BYTE v103[16]; // [rsp+230h] [rbp-108h] BYREF
  __int16 v104; // [rsp+240h] [rbp-F8h]
  void *s1; // [rsp+270h] [rbp-C8h] BYREF
  unsigned __int64 v106; // [rsp+278h] [rbp-C0h]
  __m128i v107; // [rsp+280h] [rbp-B8h]
  __int16 v108; // [rsp+290h] [rbp-A8h]

  v6 = a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  v104 = 257;
  v100[8] = 257;
  if ( a4 )
  {
    v83.m128i_i64[0] = (__int64)v84;
    sub_1213C40(&v83, a4, (__int64)&a4[a5]);
  }
  else
  {
    v84[0] = 0;
    v83.m128i_i64[0] = (__int64)v84;
    v83.m128i_i64[1] = 0;
  }
  v8 = j__strlen("/config-");
  v9 = (__m128i *)sub_99BDC0(&v83, 0, 0, "/config-", v8);
  v85 = &v87;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
  {
    v87 = _mm_loadu_si128(v9 + 1);
  }
  else
  {
    v85 = (void *)v9->m128i_i64[0];
    v87.m128i_i64[0] = v9[1].m128i_i64[0];
  }
  v86 = (char *)v9->m128i_i64[1];
  v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
  v9->m128i_i64[1] = 0;
  v9[1].m128i_i8[0] = 0;
  v97 = 260;
  v95.m128i_i64[0] = (__int64)&v85;
  v92[0] = (void *)(a1 + 1056);
  v68 = (void *)(a1 + 1056);
  v10 = *(_QWORD *)(a1 + 64);
  v94 = 260;
  sub_1130220(
    &v88,
    *(_BYTE **)(v10 + 488),
    *(_QWORD *)(v10 + 496),
    (__int64)v92,
    (__int64)&v95,
    (__int64)&v98,
    (__int64)&ptr);
  p_s1 = (__m128i *)&s1;
  v108 = 260;
  s1 = &v88;
  sub_225D6F0((unsigned int)v79, v7, (unsigned int)&s1, -1, 1, 0, 1);
  if ( v88 != v90 )
    operator delete(v88);
  if ( v85 != &v87 )
    operator delete(v85);
  if ( (_BYTE *)v83.m128i_i64[0] != v84 )
    operator delete((void *)v83.m128i_i64[0]);
  v12 = 0;
  if ( (v80 & 1) == 0 )
  {
    v98 = v100;
    v99 = 0x200000000LL;
    v14 = *(_QWORD *)(v79[0] + 16) - *(_QWORD *)(v79[0] + 8);
    s1 = *(void **)(v79[0] + 8);
    v106 = v14;
    v15 = j__strlen("\n");
    sub_22471D0(&s1, &v98, "\n", v15, 0xFFFFFFFFLL, 1);
    v72 = (__m128i *)((char *)v98 + 16 * (unsigned int)v99);
    if ( v98 != v72 )
    {
      v63 = (const __m128i *)v98;
      do
      {
        v16 = 0;
        v78 = _mm_loadu_si128(v63);
        v17 = j__strlen(asc_22E1692);
        v18 = sub_2246FB0(&v78, asc_22E1692, v17, 0);
        v19 = v78.m128i_u64[1];
        if ( v18 < v78.m128i_i64[1] )
        {
          v16 = v78.m128i_i64[1] - v18;
          v19 = v18;
        }
        v106 = v16;
        s1 = (void *)(v78.m128i_i64[0] + v19);
        v20 = sub_2247130(p_s1, asc_22E1692, v17, -1) + 1;
        if ( v20 > v106 )
          v20 = v106;
        v21 = v20;
        v22 = v106 - v16;
        v23 = (char *)s1;
        v24 = v22 + v21;
        v78.m128i_i64[0] = (__int64)s1;
        if ( v24 > v106 )
          v24 = v106;
        v78.m128i_i64[1] = v24;
        v25 = j__strlen("CURRENT=");
        v26 = v25;
        if ( v25 <= v24 && (!v25 || !memcmp(v23, "CURRENT=", v25)) )
        {
          v27 = *(_QWORD **)(v6 + 64);
          v78.m128i_i64[1] = v24 - v26;
          v28 = v27[1];
          v88 = "/";
          v90[1] = v78.m128i_i64[1];
          v104 = 257;
          v97 = 257;
          v91 = 1283;
          v90[0] = &v23[v26];
          v94 = 260;
          v92[0] = v68;
          v29 = (_BYTE *)v27[61];
          v78.m128i_i64[0] = (__int64)&v23[v26];
          sub_1130220(&v85, v29, v27[62], (__int64)v92, (__int64)&v88, (__int64)&v95, (__int64)&ptr);
          v108 = 260;
          s1 = &v85;
          sub_225D6F0((unsigned int)v81, v28, (_DWORD)p_s1, -1, 1, 0, 1);
          if ( v85 != &v87 )
            operator delete(v85);
          LOBYTE(s1) = 45;
          v30 = sub_2246E40(&v78, p_s1, 1);
          if ( v30 == -1 )
          {
            v74 = 0u;
            v75 = v78.m128i_u64[1];
            v73 = (_BYTE *)v78.m128i_i64[0];
          }
          else
          {
            v31 = v78.m128i_u64[1];
            v32 = v30 + 1;
            if ( v30 + 1 > v78.m128i_i64[1] )
            {
              v74.m128i_i64[1] = 0;
              v32 = v78.m128i_u64[1];
            }
            else
            {
              v74.m128i_i64[1] = v78.m128i_i64[1] - v32;
            }
            v33 = v78.m128i_i64[0] + v32;
            v73 = (_BYTE *)v78.m128i_i64[0];
            if ( v30 <= v78.m128i_i64[1] )
              v31 = v30;
            v74.m128i_i64[0] = v33;
            v75 = v31;
          }
          ptr = v103;
          v102 = 0x400000000LL;
          if ( (v82 & 1) == 0 )
          {
            s1 = &p_s1[1];
            v106 = 0x200000000LL;
            v46 = *(_QWORD *)(v81[0] + 16) - *(_QWORD *)(v81[0] + 8);
            v95.m128i_i64[0] = *(_QWORD *)(v81[0] + 8);
            v95.m128i_i64[1] = v46;
            v47 = j__strlen("\n");
            sub_22471D0(&v95, p_s1, "\n", v47, 0xFFFFFFFFLL, 1);
            v48 = (const __m128i *)s1;
            v49 = (const __m128i *)((char *)s1 + 16 * (unsigned int)v106);
            v50 = (__m128i *)v49;
            if ( s1 != v49 )
            {
              v65 = v6;
              v67 = p_s1;
              do
              {
                v54 = nullptr;
                *(__m128i *)v92 = _mm_loadu_si128(v48);
                v55 = j__strlen(asc_22E1692);
                v56 = (void *)sub_2246FB0(v92, asc_22E1692, v55, 0);
                v57 = v92[1];
                if ( v56 < v92[1] )
                {
                  v54 = (char *)((char *)v92[1] - (char *)v56);
                  v57 = v56;
                }
                v95.m128i_i64[0] = (__int64)v92[0] + (unsigned __int64)v57;
                v95.m128i_i64[1] = (__int64)v54;
                v51 = sub_2247130(&v95, asc_22E1692, v55, -1) + 1;
                v92[0] = (void *)v95.m128i_i64[0];
                if ( v51 > v95.m128i_i64[1] )
                  v51 = v95.m128i_u64[1];
                v52 = (void *)(v95.m128i_i64[1] - (_QWORD)v54 + v51);
                if ( (unsigned __int64)v52 > v95.m128i_i64[1] )
                  v52 = (void *)v95.m128i_i64[1];
                v92[1] = v52;
                v53 = j__strlen("LDPATH=");
                if ( (unsigned __int8)sub_11899B0((const void **)v92, "LDPATH=", v53) )
                {
                  v58 = (void *)j__strlen("\"");
                  v59 = (char *)v92[1];
                  if ( v58 <= v92[1] )
                  {
                    v60 = (char *)((char *)v92[1] - (char *)v58);
                    if ( !v58
                      || (v77 = (char *)v92[1],
                          v76 = (char *)((char *)v92[1] - (char *)v58),
                          v61 = memcmp((char *)v92[0] + (unsigned __int64)v60, "\"", (size_t)v58),
                          v60 = v76,
                          v59 = v77,
                          !v61) )
                    {
                      if ( v59 > v60 )
                        v59 = v60;
                      v92[1] = v59;
                    }
                  }
                  v62 = j__strlen("\"");
                  sub_11899B0((const void **)v92, "\"", v62);
                  sub_22476F0(v92, &ptr, 58, 0xFFFFFFFFLL, 0);
                }
                ++v48;
              }
              while ( v49 != v48 );
              v6 = v65;
              p_s1 = v67;
              v50 = (__m128i *)s1;
            }
            if ( v50 != &p_s1[1] )
              free(v50);
          }
          s1 = &p_s1[1];
          if ( v74.m128i_i64[0] )
          {
            sub_1213C40(p_s1, v74.m128i_i64[0], v74.m128i_i64[0] + v74.m128i_i64[1]);
          }
          else
          {
            v106 = 0;
            v107.m128i_i8[0] = 0;
          }
          if ( v73 )
          {
            v88 = v90;
            sub_1213C40(&v88, v73, (__int64)&v73[v75]);
          }
          else
          {
            LOBYTE(v90[0]) = 0;
            v89 = nullptr;
            v88 = v90;
          }
          v34 = j__strlen("/usr/lib/gcc/");
          v35 = (__m128i *)sub_99BDC0(&v88, 0, 0, "/usr/lib/gcc/", v34);
          v92[0] = &v93;
          if ( (__m128i *)v35->m128i_i64[0] == &v35[1] )
          {
            v93 = _mm_loadu_si128(v35 + 1);
          }
          else
          {
            v92[0] = (void *)v35->m128i_i64[0];
            v93.m128i_i64[0] = v35[1].m128i_i64[0];
          }
          v92[1] = (void *)v35->m128i_i64[1];
          v35->m128i_i64[0] = (__int64)v35[1].m128i_i64;
          v35->m128i_i64[1] = 0;
          v35[1].m128i_i8[0] = 0;
          sub_10E1980(&v95, (__m128i *)v92, "/");
          sub_1054B10(&v83, &v95, p_s1);
          if ( (_BYTE *)v95.m128i_i64[0] != v96 )
            operator delete((void *)v95.m128i_i64[0]);
          if ( v92[0] != &v93 )
            operator delete(v92[0]);
          if ( v88 != v90 )
            operator delete(v88);
          if ( s1 != &p_s1[1] )
            operator delete(s1);
          sub_111E070((__int64)&ptr, v83.m128i_i64[0], v83.m128i_i64[1]);
          v36 = (void **)ptr;
          v66 = (void **)((char *)ptr + 16 * (unsigned int)v102);
          if ( ptr != v66 )
          {
            do
            {
              v88 = *v36;
              v37 = v36[1];
              v108 = 257;
              v89 = v37;
              v38 = *(_QWORD *)(v6 + 64);
              v97 = 257;
              v94 = 257;
              v91 = 261;
              sub_1130220(
                &v85,
                *(_BYTE **)(v38 + 488),
                *(_QWORD *)(v38 + 496),
                (__int64)&v88,
                (__int64)v92,
                (__int64)&v95,
                (__int64)p_s1);
              v39 = *(_QWORD *)(*(_QWORD *)(v6 + 64) + 8LL);
              v40 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v39 + 96LL);
              v95.m128i_i64[0] = (__int64)v96;
              v64 = v40;
              sub_1213B80(&v95, v85, (__int64)&v86[(_QWORD)v85]);
              v41 = j__strlen("/crtbegin.o");
              if ( v41 > 0x7FFFFFFFFFFFFFFFLL - v95.m128i_i64[1] )
                std::__throw_length_error("basic_string::append");
              sub_9EE560(&v95, "/crtbegin.o", v41);
              v108 = 260;
              s1 = &v95;
              v42 = v64(v39, p_s1);
              if ( (_BYTE *)v95.m128i_i64[0] != v96 )
                operator delete((void *)v95.m128i_i64[0]);
              v43 = (__m128i *)v85;
              if ( v42 )
              {
                v44 = sub_1224500(v6, a2, a3, (char *)v85, v86, a6);
                if ( (_BYTE)v44 )
                {
                  v12 = v44;
                  v93 = v74;
                  sub_1220870(p_s1, v74.m128i_i64[0], v74.m128i_u64[1]);
                  sub_1214A30((_DWORD *)(v6 + 528), (__int64)p_s1);
                  sub_1213F50((__int64)p_s1);
                  sub_9EE8A0(v6 + 72, (__int64)&v85);
                  sub_1213D50(&v95, "/../../..");
                  v45 = (__m128i *)sub_99BDC0(&v95, 0, 0, v85, (size_t)v86);
                  s1 = &p_s1[1];
                  if ( (__m128i *)v45->m128i_i64[0] == &v45[1] )
                  {
                    v107 = _mm_loadu_si128(v45 + 1);
                  }
                  else
                  {
                    s1 = (void *)v45->m128i_i64[0];
                    v107.m128i_i64[0] = v45[1].m128i_i64[0];
                  }
                  v106 = v45->m128i_u64[1];
                  v45->m128i_i64[0] = (__int64)v45[1].m128i_i64;
                  v45->m128i_i64[1] = 0;
                  v45[1].m128i_i8[0] = 0;
                  sub_A0AAD0(v6 + 104, p_s1);
                  if ( s1 != &p_s1[1] )
                    operator delete(s1);
                  if ( (_BYTE *)v95.m128i_i64[0] != v96 )
                    operator delete((void *)v95.m128i_i64[0]);
                  v108 = 261;
                  s1 = v73;
                  v106 = v75;
                  sub_22BA1F0(v6 + 8, p_s1);
                  *(_BYTE *)v6 = 1;
                  if ( v85 != &v87 )
                    operator delete(v85);
                  if ( (_BYTE *)v83.m128i_i64[0] != v84 )
                    operator delete((void *)v83.m128i_i64[0]);
                  if ( ptr != v103 )
                    free(ptr);
                  sub_FC2AF0(v81);
                  if ( v98 != v100 )
                    free(v98);
                  goto LABEL_12;
                }
                v43 = (__m128i *)v85;
              }
              if ( v43 != &v87 )
                operator delete(v43);
              v36 += 2;
            }
            while ( v66 != v36 );
          }
          if ( (_BYTE *)v83.m128i_i64[0] != v84 )
            operator delete((void *)v83.m128i_i64[0]);
          if ( ptr != v103 )
            free(ptr);
          sub_FC2AF0(v81);
        }
        ++v63;
      }
      while ( v72 != v63 );
      v72 = (__m128i *)v98;
    }
    if ( v72 != (__m128i *)v100 )
      free(v72);
    v12 = 0;
  }
LABEL_12:
  sub_FC2AF0(v79);
  return v12;
}
