void *__fastcall sub_22929C0(__pid_t *a1, unsigned __int64 a2, void **a3, __m128 *a4, int a5)
{
  unsigned __int64 v6; // r14
  __pid_t v7; // ebx
  _BOOL4 v8; // r13d
  int *v9; // rcx
  int v10; // eax
  __pid_t v11; // r9d
  unsigned int v12; // r12d
  bool v14; // zf
  int v15; // edi
  int v16; // eax
  char *v17; // rax
  __m128i v18; // xmm0
  void *v19; // r15
  size_t v20; // rbx
  _QWORD *v21; // rax
  size_t v22; // rbx
  unsigned __int64 v23; // rdx
  _BYTE *v24; // rdi
  size_t v25; // rbx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __m128i *v28; // rax
  __m128i *v29; // rdi
  void **v30; // rcx
  __int64 v31; // rax
  char *v32; // rbx
  size_t v33; // rax
  __m128i *v34; // rdi
  void **v35; // rcx
  __int64 v36; // rdx
  __pid_t v37; // eax
  unsigned int v38; // r9d
  __m128i *v39; // rax
  __m128i si128; // xmm0
  const void *v41; // r14
  size_t v42; // rbx
  _QWORD *v43; // rax
  size_t v44; // rbx
  unsigned __int64 v45; // rdx
  _BYTE *v46; // rax
  size_t v47; // rbx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  __m128i *v50; // rax
  __m128i *v51; // rdi
  void **v52; // rdx
  __m128 v53; // xmm0
  void *v54; // rax
  _BYTE *v55; // rdi
  size_t v56; // rdx
  void **v57; // rax
  char *v58; // rbp
  void *v59; // rbx
  unsigned __int64 v60; // rdx
  void **v61; // rax
  size_t v62; // rdx
  void **v63; // rdi
  void *v64; // r14
  size_t v65; // rbx
  _QWORD *v66; // rax
  size_t v67; // rbx
  unsigned __int64 v68; // rdx
  _BYTE *v69; // rax
  size_t v70; // rbx
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  __m128i *v73; // rax
  _BYTE *v74; // rdi
  __m128i *v75; // rax
  void **v76; // rdi
  __m128 v77; // xmm0
  void *v78; // rdx
  _BYTE *v79; // rdi
  _BYTE *v80; // rdi
  size_t v81; // rdx
  void **v82; // rax
  __m128 v83; // xmm0
  size_t v84; // rdx
  void **v85; // [rsp+0h] [rbp-388h] BYREF
  int *v86; // [rsp+8h] [rbp-380h] BYREF
  int *v87; // [rsp+10h] [rbp-378h]
  char v88; // [rsp+1Bh] [rbp-36Dh]
  int v89; // [rsp+1Ch] [rbp-36Ch]
  _DWORD stat_loc[3]; // [rsp+3Ch] [rbp-34Ch] BYREF
  size_t v91; // [rsp+48h] [rbp-340h]
  _QWORD v92[2]; // [rsp+50h] [rbp-338h] BYREF
  void *v93; // [rsp+60h] [rbp-328h]
  size_t v94; // [rsp+68h] [rbp-320h]
  char v95[16]; // [rsp+70h] [rbp-318h] BYREF
  void *src; // [rsp+80h] [rbp-308h]
  size_t n; // [rsp+88h] [rbp-300h]
  _QWORD v98[2]; // [rsp+90h] [rbp-2F8h] BYREF
  void *v99; // [rsp+A0h] [rbp-2E8h] BYREF
  size_t v100; // [rsp+A8h] [rbp-2E0h]
  _QWORD v101[2]; // [rsp+B0h] [rbp-2D8h] BYREF
  void *v102; // [rsp+C0h] [rbp-2C8h] BYREF
  size_t v103; // [rsp+C8h] [rbp-2C0h]
  _QWORD v104[2]; // [rsp+D0h] [rbp-2B8h] BYREF
  void *v105; // [rsp+E0h] [rbp-2A8h] BYREF
  size_t v106; // [rsp+E8h] [rbp-2A0h]
  _QWORD v107[2]; // [rsp+F0h] [rbp-298h] BYREF
  void *v108; // [rsp+100h] [rbp-288h] BYREF
  size_t v109; // [rsp+108h] [rbp-280h]
  _QWORD v110[2]; // [rsp+110h] [rbp-278h] BYREF
  void *v111; // [rsp+120h] [rbp-268h] BYREF
  size_t v112; // [rsp+128h] [rbp-260h]
  _QWORD v113[2]; // [rsp+130h] [rbp-258h] BYREF
  void *v114; // [rsp+140h] [rbp-248h] BYREF
  size_t v115; // [rsp+148h] [rbp-240h]
  _QWORD v116[2]; // [rsp+150h] [rbp-238h] BYREF
  void *v117; // [rsp+160h] [rbp-228h] BYREF
  size_t v118; // [rsp+168h] [rbp-220h]
  __m128i v119; // [rsp+170h] [rbp-218h] BYREF
  struct rusage usage; // [rsp+180h] [rbp-208h] BYREF
  struct sigaction act; // [rsp+210h] [rbp-178h] BYREF
  struct sigaction oact; // [rsp+2B0h] [rbp-D8h] BYREF

  v6 = HIDWORD(a2);
  v7 = *a1;
  v86 = a1;
  v85 = a3;
  v89 = a5;
  v87 = (int *)HIDWORD(a2);
  if ( BYTE4(a2) )
  {
    v8 = a2 == 0;
    memset(&act.sa_mask, 0, 0x90u);
    act.sa_handler = (__sighandler_t)nullsub_1525;
    sigemptyset(&act.sa_mask);
    sigaction(14, &act, &oact);
    alarm(a2);
    v88 = 0;
  }
  else
  {
    LOBYTE(v6) = 0;
    v88 = 1;
    v8 = 0;
  }
  stat_loc[0] = 0;
  if ( a4 && a4[1].m128_i8[8] )
    a4[1].m128_i8[8] = 0;
  do
  {
    v11 = wait4(v7, (__WAIT_STATUS)stat_loc, v8, &usage);
    if ( v11 != -1 || (_BYTE)v6 )
    {
      v12 = *v86;
      if ( v11 == *v86 )
        goto LABEL_15;
      if ( !v11 )
      {
        v117 = nullptr;
        LODWORD(v118) = 0;
        return v117;
      }
      LODWORD(v86) = v11;
      v9 = __errno_location();
      v10 = *v9;
      if ( (_BYTE)v87 )
      {
        if ( v10 != 4 || (_BYTE)v89 )
        {
          v12 = (unsigned int)v86;
          if ( v10 != 4 )
            goto LABEL_28;
          goto LABEL_16;
        }
        v87 = v9;
        kill(v12, 9);
        alarm(0);
        sigaction(14, &oact, nullptr);
        v37 = wait((__WAIT_STATUS)stat_loc);
        v38 = (unsigned int)v86;
        if ( v37 != v7 )
        {
          *(_QWORD *)&stat_loc[1] = v92;
          v39 = (__m128i *)operator new(0x21u);
          v14 = v85 == nullptr;
          v38 = (unsigned int)v86;
          v92[0] = 32;
          *(_QWORD *)&stat_loc[1] = v39;
          v91 = 32;
          *v39 = _mm_load_si128((const __m128i *)&xmmword_23ABD70);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23ABD80);
          v39[2].m128i_i8[0] = 0;
          v39[1] = si128;
          if ( v14 )
          {
LABEL_153:
            LODWORD(v85) = v38;
            operator delete(v39);
            v38 = (unsigned int)v85;
LABEL_116:
            v117 = (void *)v38;
            LODWORD(v118) = -2;
            return v117;
          }
          sub_2287FA0((__int64)&v102, *v87);
          v41 = *(const void **)&stat_loc[1];
          v42 = v91;
          v99 = v101;
          v38 = (unsigned int)v86;
          if ( !(v91 + *(_QWORD *)&stat_loc[1]) || *(_QWORD *)&stat_loc[1] )
          {
            if ( v91 <= 0xF )
            {
              if ( v91 == 1 )
              {
                LOBYTE(v101[0]) = **(_BYTE **)&stat_loc[1];
                v43 = v101;
                goto LABEL_90;
              }
              v43 = v101;
              if ( !v91 )
              {
LABEL_90:
                v100 = v42;
                *((_BYTE *)v43 + v42) = 0;
                v44 = v100;
                if ( v100 == 0x7FFFFFFFFFFFFFFFLL || v100 == 9223372036854775806LL )
                  goto LABEL_235;
                if ( v99 == v101 )
                  v45 = 15;
                else
                  v45 = v101[0];
                if ( v100 + 2 > v45 )
                {
                  LODWORD(v86) = v38;
                  sub_998B30((__int64)&v99, v100, 0, ": ", 2u);
                  v38 = (unsigned int)v86;
                }
                else
                {
                  *(_WORD *)((char *)v99 + v100) = 8250;
                }
                v100 = v44 + 2;
                *((_BYTE *)v99 + v44 + 2) = 0;
                v46 = v99;
                v47 = v100 + v103;
                if ( v99 == v101 )
                  v48 = 15;
                else
                  v48 = v101[0];
                if ( v47 <= v48 )
                {
                  if ( v103 )
                  {
                    v79 = (char *)v99 + v100;
                    if ( v103 == 1 )
                    {
                      *v79 = *(_BYTE *)v102;
                      v46 = v99;
                    }
                    else
                    {
                      LODWORD(v86) = v38;
                      memcpy(v79, v102, v103);
                      v46 = v99;
                      v38 = (unsigned int)v86;
                    }
                  }
                }
                else
                {
                  if ( v102 == v104 )
                    v49 = 15;
                  else
                    v49 = v104[0];
                  LODWORD(v86) = v38;
                  if ( v47 <= v49 )
                  {
                    v50 = (__m128i *)sub_99BDC0(&v102, 0, 0, v99, v100);
                    v38 = (unsigned int)v86;
LABEL_103:
                    v117 = &v119;
                    if ( (__m128i *)v50->m128i_i64[0] == &v50[1] )
                    {
                      v119 = _mm_loadu_si128(v50 + 1);
                    }
                    else
                    {
                      v117 = (void *)v50->m128i_i64[0];
                      v119.m128i_i64[0] = v50[1].m128i_i64[0];
                    }
                    v118 = v50->m128i_u64[1];
                    v50->m128i_i64[0] = (__int64)v50[1].m128i_i64;
                    v50->m128i_i64[1] = 0;
                    v50[1].m128i_i8[0] = 0;
                    v51 = (__m128i *)*v85;
                    if ( v117 == &v119 )
                    {
                      v81 = v118;
                      if ( v118 )
                      {
                        if ( v118 == 1 )
                        {
                          v51->m128i_i8[0] = v119.m128i_i8[0];
                        }
                        else
                        {
                          LODWORD(v86) = v38;
                          memcpy(v51, v117, v118);
                          v38 = (unsigned int)v86;
                        }
                        v81 = v118;
                        v51 = (__m128i *)*v85;
                      }
                      v85[1] = (void *)v81;
                      v51->m128i_i8[v81] = 0;
                      v51 = (__m128i *)v117;
                    }
                    else
                    {
                      v86 = (int *)v119.m128i_i64[0];
                      if ( v51 == (__m128i *)(v85 + 2) )
                      {
                        v82 = v85;
                        v83 = _mm_loadh_ps((const double *)&v86);
                        *v85 = v117;
                        *(__m128 *)(v82 + 1) = v83;
                      }
                      else
                      {
                        v52 = v85;
                        v53 = _mm_loadh_ps((const double *)&v86);
                        v54 = v85[2];
                        *v85 = v117;
                        *(__m128 *)(v52 + 1) = v53;
                        if ( v51 )
                        {
                          v117 = v51;
                          v119.m128i_i64[0] = (__int64)v54;
                          goto LABEL_109;
                        }
                      }
                      v51 = &v119;
                      v117 = &v119;
                    }
LABEL_109:
                    v118 = 0;
                    v51->m128i_i8[0] = 0;
                    if ( v117 != &v119 )
                    {
                      LODWORD(v85) = v38;
                      operator delete(v117);
                      v38 = (unsigned int)v85;
                    }
                    if ( v99 != v101 )
                    {
                      LODWORD(v85) = v38;
                      operator delete(v99);
                      v38 = (unsigned int)v85;
                    }
                    if ( v102 != v104 )
                    {
                      LODWORD(v85) = v38;
                      operator delete(v102);
                      v38 = (unsigned int)v85;
                    }
                    v39 = *(__m128i **)&stat_loc[1];
                    if ( *(_QWORD **)&stat_loc[1] == v92 )
                      goto LABEL_116;
                    goto LABEL_153;
                  }
                  sub_998B30((__int64)&v99, v100, 0, v102, v103);
                  v46 = v99;
                  v38 = (unsigned int)v86;
                }
                v100 = v47;
                v46[v47] = 0;
                v50 = (__m128i *)&v99;
                goto LABEL_103;
              }
LABEL_192:
              LODWORD(v86) = v38;
              memcpy(v43, v41, v42);
              v43 = v99;
              v38 = (unsigned int)v86;
              goto LABEL_90;
            }
            if ( (v91 & 0x8000000000000000LL) == 0LL )
            {
              v43 = (_QWORD *)operator new(v91 + 1);
              v101[0] = v42;
              v38 = (unsigned int)v86;
              v99 = v43;
              goto LABEL_192;
            }
LABEL_231:
            std::__throw_length_error("basic_string::_M_create");
          }
LABEL_234:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        }
        strcpy(v95, "Child timed out");
        v93 = v95;
        v94 = 15;
        if ( !v85 )
          goto LABEL_116;
        sub_2287FA0((__int64)&v108, 0);
        v64 = v93;
        v65 = v94;
        v105 = v107;
        v38 = (unsigned int)v86;
        if ( (char *)v93 + v94 && !v93 )
          goto LABEL_234;
        if ( v94 > 0xF )
        {
          if ( (v94 & 0x8000000000000000LL) != 0LL )
            goto LABEL_231;
          v66 = (_QWORD *)operator new(v94 + 1);
          v107[0] = v65;
          v38 = (unsigned int)v86;
          v105 = v66;
        }
        else
        {
          if ( v94 == 1 )
          {
            LOBYTE(v107[0]) = *(_BYTE *)v93;
            v66 = v107;
            goto LABEL_160;
          }
          v66 = v107;
          if ( !v94 )
          {
LABEL_160:
            v106 = v65;
            *((_BYTE *)v66 + v65) = 0;
            v67 = v106;
            if ( v106 == 0x7FFFFFFFFFFFFFFFLL || v106 == 9223372036854775806LL )
              goto LABEL_235;
            if ( v105 == v107 )
              v68 = 15;
            else
              v68 = v107[0];
            if ( v106 + 2 > v68 )
            {
              LODWORD(v86) = v38;
              sub_998B30((__int64)&v105, v106, 0, ": ", 2u);
              v38 = (unsigned int)v86;
            }
            else
            {
              *(_WORD *)((char *)v105 + v106) = 8250;
            }
            v106 = v67 + 2;
            *((_BYTE *)v105 + v67 + 2) = 0;
            v69 = v105;
            v70 = v106 + v109;
            if ( v105 == v107 )
              v71 = 15;
            else
              v71 = v107[0];
            if ( v70 <= v71 )
            {
              if ( v109 )
              {
                v80 = (char *)v105 + v106;
                if ( v109 == 1 )
                {
                  *v80 = *(_BYTE *)v108;
                  v69 = v105;
                }
                else
                {
                  LODWORD(v86) = v38;
                  memcpy(v80, v108, v109);
                  v69 = v105;
                  v38 = (unsigned int)v86;
                }
              }
            }
            else
            {
              if ( v108 == v110 )
                v72 = 15;
              else
                v72 = v110[0];
              LODWORD(v86) = v38;
              if ( v70 <= v72 )
              {
                v73 = (__m128i *)sub_99BDC0(&v108, 0, 0, v105, v106);
                v38 = (unsigned int)v86;
LABEL_173:
                v117 = &v119;
                if ( (__m128i *)v73->m128i_i64[0] == &v73[1] )
                {
                  v119 = _mm_loadu_si128(v73 + 1);
                }
                else
                {
                  v117 = (void *)v73->m128i_i64[0];
                  v119.m128i_i64[0] = v73[1].m128i_i64[0];
                }
                v118 = v73->m128i_u64[1];
                v73->m128i_i64[0] = (__int64)v73[1].m128i_i64;
                v73->m128i_i64[1] = 0;
                v73[1].m128i_i8[0] = 0;
                v74 = *v85;
                v75 = (__m128i *)*v85;
                if ( v117 == &v119 )
                {
                  v84 = v118;
                  if ( v118 )
                  {
                    if ( v118 == 1 )
                    {
                      *v74 = v119.m128i_i8[0];
                    }
                    else
                    {
                      LODWORD(v86) = v38;
                      memcpy(v74, v117, v118);
                      v38 = (unsigned int)v86;
                    }
                    v84 = v118;
                    v74 = *v85;
                  }
                  v85[1] = (void *)v84;
                  v74[v84] = 0;
                  v75 = (__m128i *)v117;
                  goto LABEL_179;
                }
                v86 = (int *)v119.m128i_i64[0];
                v76 = v85;
                if ( v75 == (__m128i *)(v85 + 2) )
                {
                  *v85 = v117;
                  *(__m128 *)(v76 + 1) = _mm_loadh_ps((const double *)&v86);
                }
                else
                {
                  v77 = _mm_loadh_ps((const double *)&v86);
                  v78 = v85[2];
                  *v85 = v117;
                  *(__m128 *)(v76 + 1) = v77;
                  if ( v75 )
                  {
                    v117 = v75;
                    v119.m128i_i64[0] = (__int64)v78;
LABEL_179:
                    v118 = 0;
                    v75->m128i_i8[0] = 0;
                    if ( v117 != &v119 )
                    {
                      LODWORD(v85) = v38;
                      operator delete(v117);
                      v38 = (unsigned int)v85;
                    }
                    if ( v105 != v107 )
                    {
                      LODWORD(v85) = v38;
                      operator delete(v105);
                      v38 = (unsigned int)v85;
                    }
                    if ( v108 != v110 )
                    {
                      LODWORD(v85) = v38;
                      operator delete(v108);
                      v38 = (unsigned int)v85;
                    }
                    if ( v93 != v95 )
                    {
                      LODWORD(v85) = v38;
                      operator delete(v93);
                      v38 = (unsigned int)v85;
                    }
                    goto LABEL_116;
                  }
                }
                v75 = &v119;
                v117 = &v119;
                goto LABEL_179;
              }
              sub_998B30((__int64)&v105, v106, 0, v108, v109);
              v69 = v105;
              v38 = (unsigned int)v86;
            }
            v106 = v70;
            v69[v70] = 0;
            v73 = (__m128i *)&v105;
            goto LABEL_173;
          }
        }
        LODWORD(v86) = v38;
        memcpy(v66, v64, v65);
        v66 = v105;
        v38 = (unsigned int)v86;
        goto LABEL_160;
      }
      v12 = (unsigned int)v86;
LABEL_27:
      if ( v10 == 4 )
        goto LABEL_18;
LABEL_28:
      v86 = v9;
      src = v98;
      v17 = (char *)operator new(0x20u);
      v18 = _mm_load_si128((const __m128i *)&xmmword_23ABD90);
      v14 = v85 == nullptr;
      strcpy(v17 + 16, "r child process");
      src = v17;
      v98[0] = 31;
      *(__m128i *)v17 = v18;
      n = 31;
      if ( v14 )
      {
LABEL_78:
        operator delete(v17);
        goto LABEL_60;
      }
      sub_2287FA0((__int64)&v114, *v86);
      v19 = src;
      v20 = n;
      v111 = v113;
      if ( (char *)src + n && !src )
        goto LABEL_234;
      if ( n > 0xF )
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          goto LABEL_231;
        v21 = (_QWORD *)operator new(n + 1);
        v113[0] = v20;
        v111 = v21;
      }
      else
      {
        if ( n == 1 )
        {
          LOBYTE(v113[0]) = *(_BYTE *)src;
          v21 = v113;
          goto LABEL_34;
        }
        v21 = v113;
        if ( !n )
        {
LABEL_34:
          v112 = v20;
          *((_BYTE *)v21 + v20) = 0;
          v22 = v112;
          if ( v112 == 0x7FFFFFFFFFFFFFFFLL || v112 == 9223372036854775806LL )
            goto LABEL_235;
          if ( v111 == v113 )
            v23 = 15;
          else
            v23 = v113[0];
          if ( v112 + 2 > v23 )
            sub_998B30((__int64)&v111, v112, 0, ": ", 2u);
          else
            *(_WORD *)((char *)v111 + v112) = 8250;
          v112 = v22 + 2;
          *((_BYTE *)v111 + v22 + 2) = 0;
          v24 = v111;
          v25 = v112 + v115;
          if ( v111 == v113 )
            v26 = 15;
          else
            v26 = v113[0];
          if ( v25 <= v26 )
          {
            if ( v115 )
            {
              v55 = (char *)v111 + v112;
              if ( v115 == 1 )
                *v55 = *(_BYTE *)v114;
              else
                memcpy(v55, v114, v115);
              v24 = v111;
            }
          }
          else
          {
            if ( v114 == v116 )
              v27 = 15;
            else
              v27 = v116[0];
            if ( v25 <= v27 )
            {
              v28 = (__m128i *)sub_99BDC0(&v114, 0, 0, v111, v112);
LABEL_47:
              v117 = &v119;
              if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
              {
                v119 = _mm_loadu_si128(v28 + 1);
              }
              else
              {
                v117 = (void *)v28->m128i_i64[0];
                v119.m128i_i64[0] = v28[1].m128i_i64[0];
              }
              v118 = v28->m128i_u64[1];
              v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
              v28->m128i_i64[1] = 0;
              v28[1].m128i_i8[0] = 0;
              v29 = (__m128i *)*v85;
              if ( v117 == &v119 )
              {
                v56 = v118;
                if ( v118 )
                {
                  if ( v118 == 1 )
                    v29->m128i_i8[0] = v119.m128i_i8[0];
                  else
                    memcpy(v29, v117, v118);
                  v56 = v118;
                  v29 = (__m128i *)*v85;
                }
                v85[1] = (void *)v56;
                v29->m128i_i8[v56] = 0;
                v29 = (__m128i *)v117;
              }
              else
              {
                if ( v29 == (__m128i *)(v85 + 2) )
                {
                  v57 = v85;
                  v85 = (void **)v119.m128i_i64[0];
                  *v57 = v117;
                  *(__m128 *)(v57 + 1) = _mm_loadh_ps((const double *)&v85);
                }
                else
                {
                  v30 = v85;
                  v85 = (void **)v119.m128i_i64[0];
                  v31 = (__int64)v30[2];
                  *v30 = v117;
                  *(__m128 *)(v30 + 1) = _mm_loadh_ps((const double *)&v85);
                  if ( v29 )
                  {
                    v117 = v29;
                    v119.m128i_i64[0] = v31;
                    goto LABEL_53;
                  }
                }
                v29 = &v119;
                v117 = &v119;
              }
LABEL_53:
              v118 = 0;
              v29->m128i_i8[0] = 0;
              if ( v117 != &v119 )
                operator delete(v117);
              if ( v111 != v113 )
                operator delete(v111);
              if ( v114 != v116 )
                operator delete(v114);
              v17 = (char *)src;
              if ( src == v98 )
                goto LABEL_60;
              goto LABEL_78;
            }
            sub_998B30((__int64)&v111, v112, 0, v114, v115);
            v24 = v111;
          }
          v112 = v25;
          v28 = (__m128i *)&v111;
          v24[v25] = 0;
          goto LABEL_47;
        }
      }
      memcpy(v21, v19, v20);
      v21 = v111;
      goto LABEL_34;
    }
    v9 = __errno_location();
    v10 = *v9;
  }
  while ( *v9 == 4 );
  v12 = *v86;
  if ( *v86 != -1 )
  {
    v12 = -1;
    if ( !(_BYTE)v87 )
      goto LABEL_27;
    goto LABEL_28;
  }
LABEL_15:
  if ( (_BYTE)v87 )
  {
LABEL_16:
    if ( !v88 )
    {
      alarm(0);
      sigaction(14, &oact, nullptr);
    }
  }
LABEL_18:
  if ( a4 )
  {
    v14 = a4[1].m128_i8[8] == 0;
    v86 = (int *)(usage.ru_utime.tv_usec + 1000000 * usage.ru_utime.tv_sec);
    a4[1].m128_u64[0] = usage.ru_maxrss;
    *a4 = _mm_loadh_ps((const double *)&v86);
    if ( v14 )
      a4[1].m128_i8[8] = 1;
  }
  v15 = stat_loc[0] & 0x7F;
  if ( (stat_loc[0] & 0x7F) != 0 )
  {
    if ( (char)(v15 + 1) <= 1 )
    {
      v16 = 0;
      goto LABEL_24;
    }
    if ( !v85
      || (v32 = strsignal(v15),
          v33 = strlen(v32),
          sub_99BDC0(v85, 0, (unsigned __int64)v85[1], v32, v33),
          SLOBYTE(stat_loc[0]) >= 0) )
    {
LABEL_64:
      v16 = -2;
LABEL_24:
      v117 = (void *)v12;
      LODWORD(v118) = v16;
      return v117;
    }
    v58 = (char *)v85[1];
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - (_QWORD)v58) > 0xD )
    {
      v59 = v58 + 14;
      if ( *v85 == v85 + 2 )
        v60 = 15;
      else
        v60 = (unsigned __int64)v85[2];
      if ( (unsigned __int64)v59 > v60 )
        sub_998B30((__int64)v85, (size_t)v85[1], 0, " (core dumped)", 0xEu);
      else
        qmemcpy((char *)*v85 + (_QWORD)v58, " (core dumped)", 14);
      v61 = v85;
      v85[1] = v59;
      v58[(_QWORD)*v61 + 14] = 0;
      goto LABEL_64;
    }
LABEL_235:
    std::__throw_length_error("basic_string::append");
  }
  v16 = BYTE1(stat_loc[0]);
  if ( BYTE1(stat_loc[0]) == 127 )
  {
    if ( !v85 )
      goto LABEL_60;
    sub_2287FA0((__int64)&v117, 2);
    v34 = (__m128i *)*v85;
    if ( v117 == &v119 )
    {
      v62 = v118;
      if ( v118 )
      {
        if ( v118 == 1 )
          v34->m128i_i8[0] = v119.m128i_i8[0];
        else
          memcpy(v34, v117, v118);
        v62 = v118;
        v34 = (__m128i *)*v85;
      }
      v85[1] = (void *)v62;
      v34->m128i_i8[v62] = 0;
      v34 = (__m128i *)v117;
      goto LABEL_71;
    }
    if ( v34 == (__m128i *)(v85 + 2) )
    {
      v63 = v85;
      v85 = (void **)v119.m128i_i64[0];
      *v63 = v117;
      *(__m128 *)(v63 + 1) = _mm_loadh_ps((const double *)&v85);
    }
    else
    {
      v35 = v85;
      v85 = (void **)v119.m128i_i64[0];
      v36 = (__int64)v35[2];
      *v35 = v117;
      *(__m128 *)(v35 + 1) = _mm_loadh_ps((const double *)&v85);
      if ( v34 )
      {
        v117 = v34;
        v119.m128i_i64[0] = v36;
        goto LABEL_71;
      }
    }
    v34 = &v119;
    v117 = &v119;
LABEL_71:
    v118 = 0;
    v34->m128i_i8[0] = 0;
    if ( v117 != &v119 )
      operator delete(v117);
    goto LABEL_60;
  }
  if ( BYTE1(stat_loc[0]) != 126 )
    goto LABEL_24;
  if ( v85 )
    sub_99BDC0(v85, 0, (unsigned __int64)v85[1], "Program could not be executed", 0x1Du);
LABEL_60:
  v117 = (void *)v12;
  LODWORD(v118) = -1;
  return v117;
}
