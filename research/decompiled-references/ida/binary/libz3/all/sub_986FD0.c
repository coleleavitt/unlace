__int64 __fastcall sub_986FD0(_QWORD *a1, __int64 a2, const __m128i **a3, unsigned __int64 a4, int a5, int a6)
{
  char **v6; // rbp
  char **v7; // rbp
  char **exception; // rbp
  unsigned int v9; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r12
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r13
  _QWORD *v28; // rsi
  __int64 v29; // rsi
  __int64 m128i_i64; // rdx
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // r8
  __int64 v34; // r12
  char *v35; // rax
  int *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // edx
  int *v45; // r15
  char v46; // r13
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rcx
  __m128d v50; // xmm0
  __m128d v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // r13
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rbx
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 *v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r12
  int *v69; // rax
  int *v70; // rdi
  unsigned __int64 v71; // rax
  __int64 v72; // rsi
  unsigned __int64 v73; // rax
  __int64 v74; // r11
  unsigned int v75; // r15d
  unsigned int v76; // ecx
  unsigned int *v77; // rax
  __int64 v78; // rcx
  unsigned int v79; // ebx
  unsigned int v80; // ecx
  unsigned int *v81; // rax
  __int64 v82; // rcx
  unsigned int v83; // r15d
  unsigned int v84; // ecx
  unsigned int *v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rdx
  unsigned __int64 v88; // rax
  _QWORD *v89; // rdx
  _QWORD *v90; // rdx
  __int64 v91; // [rsp+0h] [rbp-118h]
  char v92; // [rsp+0h] [rbp-118h]
  int *v93; // [rsp+8h] [rbp-110h]
  __int64 v94; // [rsp+10h] [rbp-108h]
  __int64 v95; // [rsp+10h] [rbp-108h]
  int v96; // [rsp+18h] [rbp-100h]
  int v97; // [rsp+20h] [rbp-F8h]
  char v98; // [rsp+28h] [rbp-F0h]
  int v99[4]; // [rsp+30h] [rbp-E8h] BYREF
  int v100; // [rsp+40h] [rbp-D8h]
  void *v101; // [rsp+48h] [rbp-D0h]
  void *v102; // [rsp+50h] [rbp-C8h]
  __int64 v103; // [rsp+58h] [rbp-C0h]
  int v104[46]; // [rsp+60h] [rbp-B8h] BYREF

  v9 = a4 & 7;
  if ( v9 == 2 )
  {
    v21 = sub_9836E0((__int64)a1, a4 >> 3);
    return sub_986130(a1, (unsigned int **)a2, (unsigned int **)a3, v21);
  }
  if ( v9 > 2 )
  {
    if ( v9 != 3 )
    {
      sub_1872CE0("");
      sub_1873130(114, 918);
    }
    v21 = sub_9833B0((__int64)a1, a4 & 0xFFFFFFFFFFFFFFF8LL);
    return sub_986130(a1, (unsigned int **)a2, (unsigned int **)a3, v21);
  }
  if ( (a4 & 7) != 0 )
  {
    v13 = a4 >> 3;
    if ( (*(_BYTE *)(a2 + 44) & 8) != 0 )
    {
      if ( !(_DWORD)v13 )
      {
        v102 = v104;
        v103 = 0x1000000000LL;
        goto LABEL_7;
      }
    }
    else if ( !(_DWORD)v13 )
    {
      v25 = *(unsigned int *)(*(_QWORD *)a2 + 24LL);
      v102 = v104;
      v103 = 0x1000000000LL;
      if ( (_DWORD)v25 )
      {
        v92 = 1;
        v26 = 8 * v25 + 112;
        v27 = 112;
        do
        {
          v29 = *(_QWORD *)(a2 + v27);
          m128i_i64 = (__int64)a3[(unsigned __int64)v27 / 8]->m128i_i64;
          if ( m128i_i64 != v29 )
          {
            v31 = sub_983520((__int64)a1, v29, m128i_i64);
            v32 = v103;
            v33 = v31;
            if ( (unsigned int)v103 < HIDWORD(v103) )
            {
              v28 = v102;
            }
            else
            {
              v95 = v31;
              v34 = (unsigned int)(2 * HIDWORD(v103));
              v35 = (char *)sub_186B270(8 * v34);
              v32 = v103;
              v36 = (int *)v102;
              v28 = v35;
              v33 = v95;
              if ( (_DWORD)v103 )
              {
                if ( (unsigned int)(v103 - 1) <= 2 || v35 == (char *)v102 + 8 )
                {
                  v73 = 0;
                  v74 = 8LL * (unsigned int)v103;
                  do
                  {
                    v28[v73 / 8] = *(_QWORD *)&v36[v73 / 4];
                    v73 += 8LL;
                  }
                  while ( v74 != v73 );
                }
                else
                {
                  v37 = 0;
                  v38 = 16LL * ((unsigned int)v103 >> 1);
                  do
                  {
                    *(__m128i *)&v28[v37 / 8] = _mm_loadu_si128((const __m128i *)&v36[v37 / 4]);
                    v37 += 16LL;
                  }
                  while ( v37 != v38 );
                  if ( (v32 & 1) != 0 )
                    v28[v32 & 0xFFFFFFFE] = *(_QWORD *)&v36[2 * (v32 & 0xFFFFFFFE)];
                }
              }
              if ( v36 != v104 && v36 )
              {
                sub_186B220(v36);
                v32 = v103;
                v33 = v95;
              }
              v102 = v28;
              HIDWORD(v103) = v34;
            }
            v28[v32] = v33;
            v92 &= v33 != 0;
            LODWORD(v103) = v32 + 1;
          }
          v27 += 8;
        }
        while ( v27 != v26 );
        if ( !v92 )
        {
          v15 = 0;
LABEL_13:
          if ( v102 != v104 )
          {
            if ( v102 )
              sub_186B220(v102);
          }
          return v15;
        }
      }
LABEL_7:
      v14 = sub_15E2980(a1[1]);
      v15 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      v16 = (_QWORD *)a1[35];
      if ( v16 )
      {
        v17 = *((_DWORD *)v16 - 1);
        if ( v17 == *((_DWORD *)v16 - 2) )
        {
          v79 = (3 * v17 + 1) >> 1;
          v80 = 8 * v79 + 8;
          if ( 8 * v17 + 8 >= v80 || v17 >= v79 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v99, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v99);
            sub_233E40((__int64)v99);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v81 = (unsigned int *)sub_186B300(v16 - 1, v80);
          v82 = v81[1];
          v16 = v81 + 2;
          *v81 = v79;
          a1[35] = v81 + 2;
          LODWORD(v81) = v82;
          v20 = &v16[v82];
          v19 = (_DWORD)v81 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v17 + 1;
          v20 = &v16[v18];
        }
      }
      else
      {
        v89 = (_QWORD *)sub_186B270(0x18u);
        *v89 = 2;
        v19 = 1;
        v16 = v89 + 1;
        a1[35] = v16;
        v20 = v16;
      }
      *v20 = v15;
      *((_DWORD *)v16 - 1) = v19;
      goto LABEL_13;
    }
    v39 = *(_QWORD *)(a2 + 112);
    v40 = (__int64)a3[15];
    v41 = *(_QWORD *)(a2 + 120);
    v42 = (__int64)a3[14];
    v93 = v104;
    v102 = v104;
    v103 = 0x1000000000LL;
    if ( v40 == v39
      || (v94 = v41,
          v91 = v42,
          v43 = sub_983520((__int64)a1, v39, v40),
          v44 = v103,
          v15 = v43,
          v42 = v91,
          v41 = v94,
          v45 = (int *)v102,
          *((_QWORD *)v102 + (unsigned int)v103) = v43,
          LODWORD(v103) = v44 + 1,
          v43) )
    {
      v46 = 1;
      if ( v42 == v41 )
        goto LABEL_52;
    }
    else
    {
      if ( v91 == v94 )
      {
LABEL_65:
        if ( v45 && v45 != v93 )
          sub_186B220(v45);
        return v15;
      }
      v46 = 0;
    }
    v47 = sub_983520((__int64)a1, v41, v42);
    v48 = v103;
    v49 = v47;
    if ( (unsigned int)v103 >= HIDWORD(v103) )
    {
      v91 = v47;
      v68 = (unsigned int)(2 * HIDWORD(v103));
      v69 = (int *)sub_186B270(8 * v68);
      v48 = v103;
      v70 = (int *)v102;
      v45 = v69;
      v49 = v91;
      if ( (_DWORD)v103 )
      {
        if ( (unsigned int)(v103 - 1) <= 2 || v69 == (int *)((char *)v102 + 8) )
        {
          v88 = 0;
          v42 = 8LL * (unsigned int)v103;
          do
          {
            *(_QWORD *)&v45[v88 / 4] = *(_QWORD *)&v70[v88 / 4];
            v88 += 8LL;
          }
          while ( v42 != v88 );
        }
        else
        {
          v71 = 0;
          v72 = 16LL * ((unsigned int)v103 >> 1);
          do
          {
            *(__m128i *)&v45[v71 / 4] = _mm_loadu_si128((const __m128i *)&v70[v71 / 4]);
            v71 += 16LL;
          }
          while ( v71 != v72 );
          if ( (v48 & 1) != 0 )
            *(_QWORD *)&v45[2 * (v48 & 0xFFFFFFFE)] = *(_QWORD *)&v70[2 * (v48 & 0xFFFFFFFE)];
        }
      }
      if ( v70 && v70 != v104 )
      {
        sub_186B220(v70);
        v48 = v103;
        v49 = v91;
      }
      v102 = v45;
      HIDWORD(v103) = v68;
    }
    else
    {
      v45 = (int *)v102;
    }
    *(_QWORD *)&v45[2 * v48] = v49;
    LODWORD(v103) = v48 + 1;
    if ( !v49 || !v46 )
    {
      v15 = 0;
      goto LABEL_65;
    }
LABEL_52:
    v50 = (__m128d)_mm_loadu_si128(*a3 + 2);
    v51 = _mm_shuffle_pd(v50, v50, 1);
    sub_15DC610(
      a1[1],
      (*a3)[1].m128i_i64[0],
      2,
      (int)v99,
      v42,
      a6,
      v91,
      (int)v104,
      v94,
      v96,
      v97,
      v98,
      SLODWORD(v51.m128d_f64[0]),
      SLODWORD(v51.m128d_f64[1]),
      v100,
      v101);
    if ( (_DWORD)v103 )
    {
      v52 = sub_15E2980(a1[1]);
      v53 = v52;
      if ( v52 )
        ++*(_DWORD *)(v52 + 8);
      v54 = (_QWORD *)a1[35];
      if ( v54 )
      {
        v55 = *((_DWORD *)v54 - 1);
        if ( v55 == *((_DWORD *)v54 - 2) )
        {
          v83 = (3 * v55 + 1) >> 1;
          v84 = 8 * v83 + 8;
          if ( 8 * v55 + 8 >= v84 || v55 >= v83 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v99, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v99);
            sub_233E40((__int64)v99);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v85 = (unsigned int *)sub_186B300(v54 - 1, v84);
          v86 = v85[1];
          v54 = v85 + 2;
          *v85 = v83;
          a1[35] = v85 + 2;
          LODWORD(v85) = v86;
          v58 = &v54[v86];
          v57 = (_DWORD)v85 + 1;
        }
        else
        {
          v56 = v55;
          v57 = v55 + 1;
          v58 = &v54[v56];
        }
      }
      else
      {
        v90 = (_QWORD *)sub_186B270(0x18u);
        *v90 = 2;
        v57 = 1;
        v54 = v90 + 1;
        a1[35] = v54;
        v58 = v54;
      }
      *v58 = v53;
      *((_DWORD *)v54 - 1) = v57;
    }
    else
    {
      v53 = 0;
    }
    v59 = sub_15E2100(a1[1]);
    v60 = v59;
    if ( v59 )
      ++*(_DWORD *)(v59 + 8);
    v61 = (_QWORD *)a1[35];
    if ( v61 )
    {
      v62 = *((_DWORD *)v61 - 1);
      if ( v62 == *((_DWORD *)v61 - 2) )
      {
        v75 = (3 * v62 + 1) >> 1;
        v76 = 8 * v75 + 8;
        if ( 8 * v62 + 8 >= v76 || v62 >= v75 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v99, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v99);
          sub_233E40((__int64)v99);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v77 = (unsigned int *)sub_186B300(v61 - 1, v76);
        v78 = v77[1];
        v61 = v77 + 2;
        *v77 = v75;
        a1[35] = v77 + 2;
        LODWORD(v77) = v78;
        v65 = &v61[v78];
        v64 = (_DWORD)v77 + 1;
      }
      else
      {
        v63 = v62;
        v64 = v62 + 1;
        v65 = &v61[v63];
      }
    }
    else
    {
      v87 = (_QWORD *)sub_186B270(0x18u);
      *v87 = 2;
      v64 = 1;
      v61 = v87 + 1;
      a1[35] = v61;
      v65 = v61;
    }
    *v65 = v60;
    v66 = a1[1];
    *((_DWORD *)v61 - 1) = v64;
    v67 = sub_15E2470(v66, v53, v60);
    v45 = (int *)v102;
    v15 = v67;
    goto LABEL_65;
  }
  v23 = a1[1];
  v24 = sub_15E1B70(v23);
  return sub_15DFBC0(v23, v24);
}

