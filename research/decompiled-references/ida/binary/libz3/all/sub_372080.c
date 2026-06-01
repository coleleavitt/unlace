__int64 __fastcall sub_372080(__int64 a1, __int64 a2, __int64 *a3, unsigned int **a4)
{
  __int64 v5; // r12
  _QWORD *v6; // r13
  _QWORD *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // r13
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  int v21; // esi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 *v25; // r8
  __int64 *v26; // r13
  __int64 *v27; // r14
  __int64 v28; // r11
  __int64 v29; // rax
  int v30; // edi
  __int64 *v31; // rcx
  unsigned int v32; // edx
  __int64 *v33; // rsi
  __int64 v34; // rdx
  __int64 *v35; // r10
  __int64 *v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r15d
  unsigned int *v40; // rcx
  unsigned int *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rdi
  unsigned __int64 v47; // r9
  __int64 *v48; // r8
  __int64 *v49; // r13
  __int64 *v50; // r14
  __int64 v51; // r10
  __int64 v52; // rax
  int v53; // edi
  _QWORD *v54; // rcx
  unsigned int v55; // edx
  _QWORD *v56; // rsi
  __int64 v57; // rdx
  _QWORD *v58; // r11
  _QWORD *v59; // rdx
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // rsi
  __int64 v64; // rdi
  unsigned __int64 v65; // rdi
  _QWORD *v66; // r14
  void *v67; // rdi
  _QWORD *v68; // rdi
  unsigned __int64 v69; // r14
  __int64 *v70; // r15
  __int64 v71; // rsi
  unsigned __int64 v72; // rdi
  _QWORD *v73; // rdi
  unsigned __int64 v74; // r14
  __int64 *v75; // r15
  __int64 v76; // rsi
  unsigned __int64 v77; // rdi
  _QWORD *v78; // rdi
  unsigned __int64 v79; // r14
  __int64 *v80; // r15
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 *v83; // r13
  unsigned __int64 v84; // r14
  __int64 v85; // rsi
  __int64 v86; // rax
  unsigned int v87; // ecx
  size_t v88; // rsi
  unsigned int v89; // r14d
  unsigned int *v90; // rax
  __int64 v91; // rcx
  void *v92; // r12
  __int64 v93; // rax
  void (__fastcall ***v94)(_QWORD); // r14
  __int64 v95; // r13
  _QWORD *v96; // rdx
  char **exception; // r14
  __int64 v98; // rdx
  __int64 v99; // [rsp+10h] [rbp-110h]
  int v100; // [rsp+1Ch] [rbp-104h]
  unsigned int *v102; // [rsp+28h] [rbp-F8h]
  unsigned int *v103; // [rsp+30h] [rbp-F0h]
  __int64 v105; // [rsp+38h] [rbp-E8h]
  __int64 v106; // [rsp+38h] [rbp-E8h]
  int v107; // [rsp+38h] [rbp-E8h]
  __int64 v108; // [rsp+40h] [rbp-E0h] BYREF
  __int64 *v109; // [rsp+48h] [rbp-D8h]
  __int64 v110; // [rsp+50h] [rbp-D0h] BYREF
  unsigned __int64 v111; // [rsp+58h] [rbp-C8h]
  __m128i v112; // [rsp+60h] [rbp-C0h] BYREF
  _QWORD *v113; // [rsp+70h] [rbp-B0h]
  unsigned __int64 v114; // [rsp+78h] [rbp-A8h]
  _QWORD *v115; // [rsp+80h] [rbp-A0h]
  __int64 v116; // [rsp+88h] [rbp-98h]
  __int64 v117; // [rsp+90h] [rbp-90h]
  __int64 v118; // [rsp+98h] [rbp-88h]
  unsigned __int64 v119; // [rsp+A0h] [rbp-80h]
  _QWORD *v120; // [rsp+A8h] [rbp-78h]
  void *s; // [rsp+B0h] [rbp-70h]
  __int64 v122; // [rsp+B8h] [rbp-68h]
  void *v123; // [rsp+C0h] [rbp-60h]
  __int64 v124; // [rsp+C8h] [rbp-58h]
  int v125; // [rsp+D0h] [rbp-50h]
  __int64 v126; // [rsp+D8h] [rbp-48h]
  _QWORD v127[8]; // [rsp+E0h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  *a4 = nullptr;
  if ( !v5 )
  {
    sub_1862370(a1 + 16, "smt.max_conflicts", 100);
    v92 = (void *)sub_AFF8B0();
    v93 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, _QWORD, _QWORD, __int64, const int *))(*(_QWORD *)v92 + 16LL))(
            v92,
            *(_QWORD *)(a1 + 8),
            a1 + 16,
            0,
            0,
            1,
            &qword_18D6CD0);
    v94 = *(void (__fastcall ****)(_QWORD))(a1 + 24);
    v95 = v93;
    if ( (void (__fastcall ***)(_QWORD))v93 != v94 )
    {
      if ( v94 )
      {
        (**v94)(*(_QWORD *)(a1 + 24));
        sub_186B220(v94);
      }
      *(_QWORD *)(a1 + 24) = v95;
    }
    (**(void (__fastcall ***)(void *))v92)(v92);
    sub_186B220(v92);
    v5 = *(_QWORD *)(a1 + 24);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 192LL))(v5);
  v6 = *(_QWORD **)(a1 + 80);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = *(_QWORD *)(a1 + 72);
          v10 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_9;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_9:
    v6 = *(_QWORD **)(a1 + 80);
    if ( v6 )
LABEL_10:
      *((_DWORD *)v6 - 1) = 0;
  }
  v11 = sub_15E1A70(*(_QWORD *)(a1 + 8));
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v13 = *(_QWORD **)(a1 + 80);
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v87 = (3 * v14 + 1) >> 1;
      v88 = 8 * v87 + 8;
      v89 = v87;
      if ( 8 * v14 + 8 >= (unsigned int)v88 || v14 >= v87 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C281C(v112.m128i_i64, "Overflow encountered when expanding vector", v98);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v112);
        sub_233E40((__int64)&v112);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v90 = (unsigned int *)sub_186B300(v13 - 1, v88);
      v91 = v90[1];
      v13 = v90 + 2;
      *v90 = v89;
      *(_QWORD *)(a1 + 80) = v90 + 2;
      LODWORD(v90) = v91;
      v17 = &v13[v91];
      v16 = (_DWORD)v90 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
    }
  }
  else
  {
    v96 = (_QWORD *)sub_186B270(0x18u);
    *v96 = 2;
    v16 = 1;
    v13 = v96 + 1;
    *(_QWORD *)(a1 + 80) = v13;
    v17 = v13;
  }
  *v17 = v12;
  *((_DWORD *)v13 - 1) = v16;
  v99 = *(_QWORD *)(a1 + 8);
  v18 = sub_15E1A70(v99);
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v20 = *(_QWORD *)(a1 + 80);
  if ( v20 )
    v21 = *(_DWORD *)(v20 - 4);
  else
    v21 = 0;
  LODWORD(v22) = sub_E60CB0(*(std::ios_base **)(a1 + 24), v21, v20);
  v100 = v22;
  if ( (_DWORD)v22 != -1 )
    goto LABEL_35;
  v23 = *(_QWORD *)(a1 + 8);
  v24 = *(_QWORD *)(a1 + 24);
  v109 = nullptr;
  v108 = v23;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 24LL))(v24, &v108);
  v25 = v109;
  if ( !v109 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    if ( !*(_DWORD *)(v22 + 712) )
      goto LABEL_35;
LABEL_46:
    v43 = sub_E39670(*(_QWORD *)(a1 + 24));
    v44 = v43;
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    v45 = *a3;
    if ( *a3 )
    {
      v46 = a3[1];
      v10 = (*(_DWORD *)(v45 + 8))-- == 1;
      if ( v10 )
      {
        v105 = v43;
        sub_15D7BC0(v46, v45);
        v44 = v105;
      }
    }
    v47 = *(_QWORD *)(a1 + 8);
    v113 = nullptr;
    v48 = v109;
    v115 = nullptr;
    *a3 = v44;
    v119 = v47;
    v114 = v47;
    v116 = 0;
    v117 = 0;
    v118 = 0;
    v120 = nullptr;
    s = v127;
    v122 = 1;
    v123 = nullptr;
    v124 = 0;
    v125 = 1065353216;
    v126 = 0;
    v127[0] = 0;
    v112 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
    if ( v48 )
    {
      v49 = &v48[*((unsigned int *)v48 - 1)];
      if ( v49 != v48 )
      {
        v50 = v48;
        do
        {
          v51 = *v50;
          if ( v19 != *v50 )
          {
            v52 = *(unsigned int *)(a1 + 56);
            v53 = *(_DWORD *)(v51 + 12);
            v54 = *(_QWORD **)(a1 + 48);
            v55 = v52 - 1;
            v52 *= 24;
            v56 = (_QWORD *)((char *)v54 + v52);
            v57 = 24LL * (v53 & v55);
            v58 = &v54[(unsigned __int64)v57 / 8];
            if ( v57 != v52 )
            {
              v59 = &v54[(unsigned __int64)v57 / 8];
              do
              {
                v60 = (_QWORD *)*v59;
                if ( *v59 > 1u )
                {
                  if ( *((_DWORD *)v60 + 3) == v53 && (_QWORD *)v51 == v60 )
                  {
                    v60 = v59;
                    goto LABEL_62;
                  }
                }
                else if ( !v60 )
                {
                  goto LABEL_62;
                }
                v59 += 3;
              }
              while ( v56 != v59 );
            }
            if ( v54 != v58 )
            {
              while ( 1 )
              {
                v60 = (_QWORD *)*v54;
                if ( *v54 > 1u )
                {
                  if ( *((_DWORD *)v60 + 3) == v53 && (_QWORD *)v51 == v60 )
                  {
                    v60 = v54;
                    goto LABEL_62;
                  }
                }
                else if ( !v60 )
                {
                  goto LABEL_62;
                }
                v54 += 3;
                if ( v58 == v54 )
                {
                  v60 = nullptr;
                  goto LABEL_62;
                }
              }
            }
            v60 = nullptr;
LABEL_62:
            v106 = v60[1];
            v61 = sub_15DE060(v47, v51, v106, v54, v50);
            sub_14EA0D0(&v112, v61, v106);
            v47 = *(_QWORD *)(a1 + 8);
          }
          ++v50;
        }
        while ( v49 != v50 );
        v44 = *a3;
      }
    }
    v110 = v44;
    v111 = v47;
    if ( v44 )
      ++*(_DWORD *)(v44 + 8);
    sub_14EA2A0(&v112, v44, &v110);
    v62 = v110;
    if ( v110 )
    {
      ++*(_DWORD *)(v110 + 8);
      v63 = *a3;
      if ( !*a3 )
      {
        *a3 = v62;
LABEL_71:
        v65 = v111;
        v107 = *(_DWORD *)(v62 + 8);
        *(_DWORD *)(v62 + 8) = v107 - 1;
        if ( v107 == 1 )
          sub_15D7BC0(v65, v62);
LABEL_73:
        v66 = v123;
        if ( v123 )
        {
          do
          {
            v67 = v66;
            v66 = (_QWORD *)*v66;
            operator delete(v67, 0x18u);
          }
          while ( v66 );
        }
        memset(s, 0, 8 * v122);
        v124 = 0;
        v123 = nullptr;
        if ( s != v127 )
          operator delete(s, 8 * v122);
        v68 = v120;
        if ( v120 )
        {
          v69 = (unsigned __int64)&v120[*((unsigned int *)v120 - 1)];
          if ( (unsigned __int64)v120 >= v69 )
            goto LABEL_85;
          v70 = v120;
          do
          {
            while ( 1 )
            {
              v71 = *v70;
              if ( *v70 )
              {
                v72 = v119;
                v10 = (*(_DWORD *)(v71 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( (unsigned __int64)++v70 >= v69 )
                goto LABEL_84;
            }
            sub_15D7BC0(v72, v71);
            ++v70;
          }
          while ( (unsigned __int64)v70 < v69 );
LABEL_84:
          v68 = v120;
          if ( v120 )
LABEL_85:
            sub_186B220(v68 - 1);
        }
        if ( v118 )
          sub_186B220((void *)(v118 - 8));
        if ( v117 )
          sub_186B220((void *)(v117 - 8));
        LODWORD(v22) = v116;
        if ( v116 )
          v22 = sub_186B220((void *)(v116 - 8));
        v73 = v115;
        if ( v115 )
        {
          v74 = (unsigned __int64)&v115[*((unsigned int *)v115 - 1)];
          if ( (unsigned __int64)v115 >= v74 )
            goto LABEL_100;
          v75 = v115;
          do
          {
            while ( 1 )
            {
              v76 = *v75;
              if ( *v75 )
              {
                v77 = v114;
                v10 = (*(_DWORD *)(v76 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( (unsigned __int64)++v75 >= v74 )
                goto LABEL_99;
            }
            sub_15D7BC0(v77, v76);
            ++v75;
          }
          while ( (unsigned __int64)v75 < v74 );
LABEL_99:
          LODWORD(v22) = (_DWORD)v115;
          v73 = v115;
          if ( v115 )
LABEL_100:
            v22 = sub_186B220(v73 - 1);
        }
        v78 = v113;
        if ( v113 )
        {
          v79 = (unsigned __int64)&v113[*((unsigned int *)v113 - 1)];
          if ( (unsigned __int64)v113 >= v79 )
            goto LABEL_109;
          v80 = v113;
          do
          {
            while ( 1 )
            {
              v81 = *v80;
              if ( *v80 )
              {
                v82 = v112.m128i_i64[1];
                v10 = (*(_DWORD *)(v81 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( (unsigned __int64)++v80 >= v79 )
                goto LABEL_108;
            }
            sub_15D7BC0(v82, v81);
            ++v80;
          }
          while ( (unsigned __int64)v80 < v79 );
LABEL_108:
          LODWORD(v22) = (_DWORD)v113;
          v78 = v113;
          if ( v113 )
LABEL_109:
            v22 = sub_186B220(v78 - 1);
        }
        goto LABEL_110;
      }
      v64 = a3[1];
      v10 = (*(_DWORD *)(v63 + 8))-- == 1;
      if ( !v10 )
      {
        *a3 = v62;
        goto LABEL_71;
      }
    }
    else
    {
      v63 = *a3;
      if ( !*a3 )
      {
        *a3 = 0;
        goto LABEL_73;
      }
      v64 = a3[1];
      v10 = (*(_DWORD *)(v63 + 8))-- == 1;
      if ( !v10 )
      {
        *a3 = 0;
        goto LABEL_73;
      }
    }
    sub_15D7BC0(v64, v63);
    *a3 = v62;
    v62 = v110;
    if ( !v110 )
      goto LABEL_73;
    goto LABEL_71;
  }
  v26 = &v109[*((unsigned int *)v109 - 1)];
  if ( v26 == v109 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a1 + 8) + 712LL) )
      goto LABEL_34;
    goto LABEL_46;
  }
  v27 = v109;
  do
  {
    v28 = *v27;
    if ( v19 == *v27 )
      goto LABEL_44;
    v29 = *(unsigned int *)(a1 + 56);
    v30 = *(_DWORD *)(v28 + 12);
    v31 = *(__int64 **)(a1 + 48);
    v32 = v29 - 1;
    v29 *= 24;
    v33 = (__int64 *)((char *)v31 + v29);
    v34 = 24LL * (v30 & v32);
    v35 = &v31[(unsigned __int64)v34 / 8];
    if ( v34 == v29 )
    {
LABEL_117:
      while ( v35 != v31 )
      {
        v86 = *v31;
        if ( (unsigned __int64)*v31 > 1 )
        {
          if ( *(_DWORD *)(v86 + 12) == v30 && v28 == v86 )
          {
            v36 = v31;
            goto LABEL_39;
          }
        }
        else if ( !v86 )
        {
          break;
        }
        v31 += 3;
      }
LABEL_32:
      BUG();
    }
    v36 = &v31[(unsigned __int64)v34 / 8];
    while ( 1 )
    {
      v37 = *v36;
      if ( (unsigned __int64)*v36 > 1 )
        break;
      if ( !v37 )
        goto LABEL_32;
LABEL_29:
      v36 += 3;
      if ( v33 == v36 )
        goto LABEL_117;
    }
    if ( *(_DWORD *)(v37 + 12) != v30 || v28 != v37 )
      goto LABEL_29;
LABEL_39:
    v40 = (unsigned int *)v36[2];
    v41 = *a4;
    if ( *a4 )
    {
      if ( v40 )
      {
        v103 = (unsigned int *)v36[2];
        if ( v41 != v40 )
        {
          v102 = *a4;
          v42 = sub_17E9C90(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 656LL), 24);
          *v102 = (*v102 + 1) & 0x3FFFFFFF | *v102 & 0xC0000000;
          v41 = (unsigned int *)v42;
          *v103 = (*v103 + 1) & 0x3FFFFFFF | *v103 & 0xC0000000;
          *(_QWORD *)v42 = 0;
          *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v102, (__m128i)(unsigned __int64)v103);
        }
      }
    }
    else
    {
      v41 = (unsigned int *)v36[2];
    }
    *a4 = v41;
LABEL_44:
    ++v27;
  }
  while ( v26 != v27 );
  v22 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v22 + 712) )
    goto LABEL_46;
LABEL_110:
  v25 = v109;
  if ( v109 )
  {
    v22 = (unsigned __int64)&v109[*((unsigned int *)v109 - 1)];
    if ( (unsigned __int64)v109 >= v22 )
      goto LABEL_34;
    v83 = v109;
    v84 = (unsigned __int64)&v109[*((unsigned int *)v109 - 1)];
    do
    {
      v85 = *v83;
      if ( *v83 )
      {
        v10 = (*(_DWORD *)(v85 + 8))-- == 1;
        if ( v10 )
          v22 = sub_15D7BC0(v108, v85);
      }
      ++v83;
    }
    while ( (unsigned __int64)v83 < v84 );
    v25 = v109;
    if ( v109 )
LABEL_34:
      v22 = sub_186B220(v25 - 1);
  }
LABEL_35:
  LOBYTE(v22) = v100 == -1;
  v38 = v22;
  if ( v19 )
  {
    v10 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v99, v19);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 200LL))(v5, 1);
  return v38;
}

