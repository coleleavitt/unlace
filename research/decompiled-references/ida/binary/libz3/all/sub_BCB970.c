__int64 __fastcall sub_BCB970(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // r12
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned int **v8; // rcx
  unsigned int **v9; // rax
  unsigned int *v10; // rbp
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // r12d
  __int64 v18; // rax
  __m128 v19; // xmm1
  __m128i v20; // xmm2
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r13
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned int *v28; // r14
  unsigned int i; // ecx
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r15
  __int64 v34; // r14
  __int64 v35; // rax
  int v36; // r14d
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // r12
  __m128i *v40; // r12
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // eax
  __m128i *v44; // rcx
  __int64 v45; // rdx
  __m128i v46; // xmm4
  __m128i v47; // xmm5
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rbx
  unsigned int *v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rax
  unsigned int *v54; // r14
  unsigned int *v55; // rdx
  __int64 v56; // r9
  __int64 v57; // rsi
  unsigned int *v58; // r8
  unsigned int *j; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int *v65; // rdx
  unsigned int *v66; // r14
  __int64 v67; // rax
  __int64 *v68; // r12
  __int64 v69; // rcx
  __int64 *v70; // rbx
  __int64 *v71; // r13
  __int64 *v72; // rbp
  __int64 *v73; // r12
  __int64 v74; // rsi
  __int64 v75; // rdi
  bool v76; // zf
  __int64 *v77; // rbp
  __int64 *v78; // r12
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdi
  unsigned int v85; // edi
  _QWORD *v86; // r12
  unsigned int *v87; // [rsp+8h] [rbp-180h]
  __int64 v88; // [rsp+10h] [rbp-178h] BYREF
  unsigned int *v89; // [rsp+18h] [rbp-170h]
  __int64 v90; // [rsp+20h] [rbp-168h]
  __int64 v91; // [rsp+28h] [rbp-160h]
  unsigned int *v92; // [rsp+30h] [rbp-158h]
  unsigned int *v93; // [rsp+38h] [rbp-150h]
  __int64 *v94; // [rsp+40h] [rbp-148h]
  unsigned int v95; // [rsp+4Ch] [rbp-13Ch]
  __m128i v96; // [rsp+50h] [rbp-138h] BYREF
  __m128i v97; // [rsp+60h] [rbp-128h] BYREF
  __int64 v98; // [rsp+70h] [rbp-118h]
  unsigned int *v99; // [rsp+78h] [rbp-110h]
  unsigned int *v100; // [rsp+88h] [rbp-100h] BYREF
  unsigned int *v101; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v102; // [rsp+98h] [rbp-F0h] BYREF
  __m128i v103; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v106; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v108; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v109; // [rsp+D8h] [rbp-B0h] BYREF
  __int64 v110; // [rsp+E0h] [rbp-A8h] BYREF
  unsigned int *v111; // [rsp+E8h] [rbp-A0h] BYREF
  __int64 v112[4]; // [rsp+F0h] [rbp-98h] BYREF
  __m128 v113; // [rsp+110h] [rbp-78h]
  __m128i v114; // [rsp+120h] [rbp-68h]
  __int64 v115; // [rsp+138h] [rbp-50h]
  __int64 v116; // [rsp+140h] [rbp-48h]

  v6 = (__int64 *)a1;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(unsigned int ***)(v7 + 8LL * a2);
  v9 = *(unsigned int ***)(v7 + 8LL * a3);
  v10 = *v8;
  v88 = *(_QWORD *)(a1 + 24);
  if ( v10 )
    ++v10[2];
  v87 = *v9;
  if ( *v9 )
    ++(*v9)[2];
  if ( v8[1] == v9[1] )
    goto LABEL_10;
  v11 = *(_DWORD **)(sub_15D1F10(v10) + 24);
  if ( v11 && *(_DWORD *)(a1 + 1720) == *v11 && v11[1] == 1 )
  {
    sub_BE7CB0(a1 + 3624, v10, v87);
LABEL_10:
    sub_BB0560((__int64)v87, v88);
    return sub_BB0560((__int64)v10, v88);
  }
  v12 = *(_DWORD **)(sub_15D1F10(v10) + 24);
  if ( !v12 || *(_DWORD *)(a1 + 1720) != *v12 || v12[1] )
    goto LABEL_10;
  sub_BB7160(a1 + 920, v10, v87);
  v14 = *(_QWORD *)(a1 + 24);
  v15 = sub_15E1B70(v14);
  v103 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)v14);
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  sub_14B9B80(a1 + 1192, &v103);
  v16 = v103.m128i_i64[0];
  if ( *(_QWORD *)(v6[3] + 864) != v103.m128i_i64[0] )
  {
    v95 = sub_966380((__int64)v6, v10, v87);
    sub_9936C0(v6[2], v95 >> 1);
    if ( (unsigned __int8)sub_BCED40(v6 + 216, v87) )
    {
      v51 = v10;
      v10 = v87;
      v87 = v51;
    }
    v17 = v95 ^ 1;
    v18 = sub_180C100(v6[15], 32);
    v19 = _mm_loadh_ps((const double *)&v88);
    v98 = v18;
    v20 = (__m128i)_mm_loadh_ps((const double *)&v88);
    *(_QWORD *)v18 = 0x80000000LL;
    *(_DWORD *)(v18 + 24) = v17;
    v96 = v20;
    v97 = (__m128i)v19;
    *(_OWORD *)(v18 + 8) = 0;
    v113 = v19;
    if ( v10 )
    {
      v21 = v10[2];
      v114 = v20;
      v22 = v21 + 1;
      v10[2] = v22;
      v101 = v10;
      v115 = 0;
      if ( v87 )
      {
        ++v87[2];
        v116 = v98;
        v22 = v10[2];
      }
      else
      {
        v116 = v98;
      }
      v10[2] = v22 + 1;
    }
    else
    {
      v114 = v20;
      v115 = 0;
      if ( v87 )
      {
        v101 = nullptr;
        ++v87[2];
        v116 = v98;
      }
      else
      {
        v116 = v18;
        v101 = nullptr;
      }
    }
    v105 = 0;
    v104 = v88;
    v89 = (unsigned int *)&v101;
    sub_BB70A0(&v105, &v101);
    v23 = v104;
    v24 = v105;
    v100 = v87;
    if ( v87 )
      ++v87[2];
    v107 = 0;
    v106 = v88;
    v99 = (unsigned int *)&v100;
    sub_BB70A0(&v107, &v100);
    v25 = 0;
    v91 = v106;
    v90 = v107;
    if ( v24 )
    {
      v26 = 0;
      v94 = &v102;
      while ( v26 < *(_DWORD *)(v24 - 4) )
      {
        v27 = *(_QWORD *)(v24 + 8LL * v26);
        v102 = v27;
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        LODWORD(v93) = v26;
        v108 = v23;
        v109 = v25;
        v110 = v5;
        v111 = v92;
        sub_BB70A0(&v109, v94);
        v23 = v108;
        v25 = v109;
        v92 = v111;
        v5 = v110;
        v26 = (_DWORD)v93 + 1;
      }
    }
    v28 = nullptr;
    if ( v90 )
    {
      for ( i = 0; i < *(_DWORD *)(v90 - 4); i = (_DWORD)v92 + 1 )
      {
        v30 = *(_QWORD *)(v90 + 8LL * i);
        v112[0] = v30;
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        LODWORD(v92) = i;
        v108 = v23;
        v109 = v25;
        v110 = v91;
        v111 = v28;
        sub_BB70A0(&v111, v112);
        v23 = v108;
        v25 = v109;
        v91 = v110;
        v28 = v111;
      }
    }
    v31 = (_QWORD *)sub_186B270(0x48u);
    v32 = v91;
    v31[1] = v23;
    v33 = v31 + 1;
    v31[4] = v28;
    v31[2] = v25;
    v34 = v32;
    v31[3] = v32;
    *v31 = 0x100000002LL;
    v108 = v23;
    v110 = v32;
    v109 = 0;
    v111 = nullptr;
    sub_2334C0(&v110);
    v110 = v34;
    v111 = nullptr;
    sub_2334C0(&v108);
    sub_2334C0(&v106);
    sub_2334C0(&v104);
    v35 = v6[40];
    if ( v35 )
      v36 = *(_DWORD *)(v35 - 4);
    else
      v36 = 0;
    v37 = *((unsigned int *)v6 + 76);
    LODWORD(v100) = *((_DWORD *)v6 + 76);
    while ( 1 )
    {
      v38 = v6[42];
      if ( v38 )
      {
        if ( (unsigned int)v37 < *(_DWORD *)(v38 - 4) )
          break;
      }
      LODWORD(v101) = 0;
      sub_BB7DA0(v6 + 42, v89);
    }
    if ( (unsigned int)v37 < *((_DWORD *)v6 + 77) )
    {
      sub_BB7E40(v6 + 43, v99);
      v39 = 4 * v37;
      sub_BB7E40(v6 + 44, (unsigned int *)(v39 + v6[42]));
      v38 = v6[42];
    }
    else
    {
      v39 = 4 * v37;
    }
    *(_DWORD *)(v38 + v39) = v36;
    v40 = (__m128i *)v6[40];
    if ( v40 )
    {
      v41 = v40[-1].m128i_u32[3];
      if ( v41 == v40[-1].m128i_i32[2] )
      {
        LODWORD(v90) = (3 * v41 + 1) >> 1;
        v52 = 56 * v90 + 8;
        if ( 56 * v41 + 8 >= v52 || v41 >= (3 * v41 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v112, "Overflow encountered when expanding vector", v4);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v112);
          sub_233E40((__int64)v112);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = sub_186B270(v52);
        v54 = (unsigned int *)v6[40];
        v55 = (unsigned int *)v53;
        v40 = (__m128i *)(v53 + 8);
        if ( v54 )
        {
          v56 = *(v54 - 1);
          v57 = v53 + 8;
          *(_DWORD *)(v53 + 4) = v56;
          v58 = &v54[14 * v56];
          for ( j = v54; v58 != j; *(_QWORD *)(v57 - 8) = *((_QWORD *)j - 1) )
          {
            v60 = *((_QWORD *)j + 1);
            j += 14;
            v57 += 56;
            *(_QWORD *)(v57 - 48) = v60;
            v61 = *((_QWORD *)j - 7);
            *((_QWORD *)j - 7) = 0;
            *(_QWORD *)(v57 - 56) = v61;
            *(_QWORD *)(v57 - 32) = *((_QWORD *)j - 4);
            v62 = *((_QWORD *)j - 5);
            *((_QWORD *)j - 5) = 0;
            *(_QWORD *)(v57 - 40) = v62;
            v63 = *((_QWORD *)j - 3);
            *((_QWORD *)j - 3) = 0;
            *(_QWORD *)(v57 - 24) = v63;
            v64 = *((_QWORD *)j - 2);
            *((_QWORD *)j - 2) = 0;
            *(_QWORD *)(v57 - 16) = v64;
          }
          if ( (_DWORD)v56 )
          {
            v91 = (__int64)v40;
            v93 = v10;
            v94 = v6;
            v92 = v55;
            v65 = v54;
            v66 = &v54[14 * v56];
            do
            {
              v67 = *((_QWORD *)v65 + 5);
              if ( v67 )
              {
                v89 = v65;
                sub_186B220((void *)(v67 - 8));
                v65 = v89;
              }
              v68 = *((__int64 **)v65 + 4);
              if ( v68 )
              {
                v69 = *((unsigned int *)v68 - 1);
                if ( (_DWORD)v69 )
                {
                  v89 = v65;
                  v70 = v68;
                  v71 = &v68[4 * v69];
                  do
                  {
                    v72 = (__int64 *)v70[3];
                    if ( v72 )
                    {
                      v73 = &v72[*((unsigned int *)v72 - 1)];
                      if ( v72 >= v73 )
                        goto LABEL_72;
                      do
                      {
                        while ( 1 )
                        {
                          v74 = *v72;
                          if ( *v72 )
                          {
                            v75 = v70[2];
                            v76 = (*(_DWORD *)(v74 + 8))-- == 1;
                            if ( v76 )
                              break;
                          }
                          if ( ++v72 >= v73 )
                            goto LABEL_71;
                        }
                        sub_15D7BC0(v75, v74);
                        ++v72;
                      }
                      while ( v72 < v73 );
LABEL_71:
                      v72 = (__int64 *)v70[3];
                      if ( v72 )
LABEL_72:
                        sub_186B220(v72 - 1);
                    }
                    v77 = (__int64 *)v70[1];
                    if ( v77 )
                    {
                      v78 = &v77[*((unsigned int *)v77 - 1)];
                      if ( v77 >= v78 )
                        goto LABEL_81;
                      do
                      {
                        while ( 1 )
                        {
                          v79 = *v77;
                          if ( *v77 )
                          {
                            v80 = *v70;
                            v76 = (*(_DWORD *)(v79 + 8))-- == 1;
                            if ( v76 )
                              break;
                          }
                          if ( ++v77 >= v78 )
                            goto LABEL_80;
                        }
                        sub_15D7BC0(v80, v79);
                        ++v77;
                      }
                      while ( v77 < v78 );
LABEL_80:
                      v77 = (__int64 *)v70[1];
                      if ( v77 )
LABEL_81:
                        sub_186B220(v77 - 1);
                    }
                    v70 += 4;
                  }
                  while ( v70 != v71 );
                  v65 = v89;
                  v68 = *((__int64 **)v89 + 4);
                }
                v89 = v65;
                sub_186B220(v68 - 1);
                v65 = v89;
              }
              v81 = *((_QWORD *)v65 + 2);
              if ( v81 )
              {
                v82 = *((_QWORD *)v65 + 3);
                v76 = (*(_DWORD *)(v81 + 8))-- == 1;
                if ( v76 )
                {
                  v89 = v65;
                  sub_15D7BC0(v82, v81);
                  v65 = v89;
                }
              }
              v83 = *(_QWORD *)v65;
              if ( *(_QWORD *)v65 )
              {
                v84 = *((_QWORD *)v65 + 1);
                v76 = (*(_DWORD *)(v83 + 8))-- == 1;
                if ( v76 )
                {
                  v89 = v65;
                  sub_15D7BC0(v84, v83);
                  v65 = v89;
                }
              }
              v65 += 14;
            }
            while ( v65 != v66 );
            v6 = v94;
            v40 = (__m128i *)v91;
            v55 = v92;
            v10 = v93;
            v54 = (unsigned int *)v94[40];
          }
          v89 = v55;
          sub_186B220(v54 - 2);
          v55 = v89;
          v43 = v89[1] + 1;
          v44 = (__m128i *)((char *)v40 + 56 * v89[1]);
        }
        else
        {
          *(_DWORD *)(v53 + 4) = 0;
          v44 = (__m128i *)(v53 + 8);
          v43 = 1;
        }
        v85 = v90;
        v6[40] = (__int64)v40;
        *v55 = v85;
      }
      else
      {
        v42 = v41;
        v43 = v41 + 1;
        v44 = (__m128i *)((char *)v40 + 56 * v42);
      }
    }
    else
    {
      v86 = (_QWORD *)sub_186B270(0x78u);
      *v86 = 2;
      v43 = 1;
      v40 = (__m128i *)(v86 + 1);
      v6[40] = (__int64)v40;
      v44 = v40;
    }
    v45 = v98;
    v46 = _mm_load_si128(&v97);
    v44[2].m128i_i64[0] = (__int64)v33;
    v47 = _mm_load_si128(&v96);
    v44[2].m128i_i64[1] = 0;
    *v44 = v46;
    v44[1] = v47;
    v44[3].m128i_i64[0] = v45;
    v48 = v6[2];
    v40[-1].m128i_i32[3] = v43;
    v49 = *(_QWORD *)(v48 + 8848);
    ++*((_DWORD *)v6 + 76);
    if ( *(_BYTE *)(v49 + v95) )
      sub_BF2F70((int)v6);
    v16 = v103.m128i_i64[0];
  }
  sub_BB0560(v16, v103.m128i_i64[1]);
  v50 = v88;
  sub_BB0560((__int64)v87, v88);
  return sub_BB0560((__int64)v10, v50);
}

