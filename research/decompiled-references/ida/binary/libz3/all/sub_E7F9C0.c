__int64 __fastcall sub_E7F9C0(__int64 a1, _QWORD *a2, const __m128i *a3)
{
  __int64 result; // rax
  __m128i v4; // xmm0
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rdx
  _QWORD *v8; // r13
  __int64 *v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // rdx
  __int64 v16; // r15
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rsi
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // eax
  char v26; // cl
  __int64 *v27; // rdx
  unsigned int v28; // esi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned int v37; // edx
  size_t v38; // rsi
  unsigned int *v39; // rax
  unsigned int v40; // edx
  size_t v41; // rsi
  unsigned int *v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  _DWORD *v45; // rdi
  _DWORD *v46; // rdi
  _QWORD *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rbx
  int v50; // r9d
  __int64 v51; // r8
  int v52; // ecx
  unsigned int v53; // ebx
  __int64 v54; // rsi
  __int64 v55; // rdi
  unsigned int *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rsi
  unsigned int *v62; // rdi
  bool v63; // zf
  unsigned int *v64; // rax
  unsigned int v65; // r12d
  __int64 v66; // rdx
  unsigned int *v67; // rdi
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  unsigned __int64 v71; // r12
  __int64 v72; // rsi
  unsigned int *v73; // rdi
  char **exception; // r15
  char **v75; // r15
  __int64 v76; // [rsp+0h] [rbp-320h]
  int v77; // [rsp+0h] [rbp-320h]
  __int64 *v78; // [rsp+8h] [rbp-318h]
  __int64 v79; // [rsp+10h] [rbp-310h]
  __int64 v80; // [rsp+10h] [rbp-310h]
  __int64 *v82; // [rsp+18h] [rbp-308h]
  __int64 *v83; // [rsp+18h] [rbp-308h]
  void *v84; // [rsp+20h] [rbp-300h]
  __int64 v85; // [rsp+20h] [rbp-300h]
  __int64 v86; // [rsp+28h] [rbp-2F8h]
  _QWORD *v87; // [rsp+30h] [rbp-2F0h]
  unsigned int **v89; // [rsp+38h] [rbp-2E8h]
  __int64 v90; // [rsp+40h] [rbp-2E0h]
  _QWORD *v91; // [rsp+48h] [rbp-2D8h]
  __int64 v92; // [rsp+50h] [rbp-2D0h]
  unsigned int v93; // [rsp+50h] [rbp-2D0h]
  unsigned int v94; // [rsp+50h] [rbp-2D0h]
  int v96; // [rsp+58h] [rbp-2C8h]
  unsigned int v97; // [rsp+58h] [rbp-2C8h]
  __int64 *v98; // [rsp+58h] [rbp-2C8h]
  int v99; // [rsp+64h] [rbp-2BCh] BYREF
  __int64 v100; // [rsp+68h] [rbp-2B8h] BYREF
  int v101[4]; // [rsp+70h] [rbp-2B0h] BYREF
  int v102[2]; // [rsp+80h] [rbp-2A0h] BYREF
  __int64 v103; // [rsp+88h] [rbp-298h]
  __int64 v104; // [rsp+90h] [rbp-290h] BYREF
  void *ptr; // [rsp+98h] [rbp-288h]
  __int64 v106; // [rsp+A0h] [rbp-280h]
  int v107; // [rsp+A8h] [rbp-278h]
  __int64 v108; // [rsp+B0h] [rbp-270h]
  __int64 v109; // [rsp+B8h] [rbp-268h]
  __int64 *v110; // [rsp+C0h] [rbp-260h] BYREF
  __int64 v111; // [rsp+C8h] [rbp-258h]
  int v112; // [rsp+D0h] [rbp-250h]
  int v113; // [rsp+D4h] [rbp-24Ch]
  _BYTE v114[72]; // [rsp+2D8h] [rbp-48h] BYREF

  result = a2[1];
  if ( !result )
    return result;
  result = *(unsigned int *)(result - 4);
  if ( !(_DWORD)result )
    return result;
  v4 = _mm_loadu_si128(a3);
  *(__m128i *)v101 = v4;
  if ( v4.m128i_i64[0] )
    ++*(_DWORD *)(v4.m128i_i64[0] + 8);
  v84 = *(void **)a1;
  sub_180C5A0(&v100, "QE");
  v5 = a2[1];
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  sub_1697FC0(*(_QWORD *)a1, 0, v6, v5, a3->m128i_i64[0], (int)v101, v76, (__int64)v101, v79, (__int64)a3, v84);
  v7 = a2[1];
  if ( v7 )
  {
    v8 = nullptr;
    v9 = nullptr;
    v10 = 0;
    while ( v10 < *(_DWORD *)(v7 - 4) )
    {
      v11 = sub_15D1F10(*(_QWORD *)(v7 + 8LL * v10));
      if ( v9 )
      {
        v12 = *((_DWORD *)v9 - 1);
        if ( v12 == *((_DWORD *)v9 - 2) )
        {
          v37 = (3 * v12 + 1) >> 1;
          v38 = 8 * v37 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v38 || v12 >= v37 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_E65BE0((__int64 *)&v110, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v110);
            sub_233E40((__int64)&v110);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v93 = (3 * v12 + 1) >> 1;
          v39 = (unsigned int *)sub_186B300(v9 - 1, v38);
          v9 = (__int64 *)(v39 + 2);
          *v39 = v93;
          LODWORD(v39) = v39[1];
          v15 = &v9[(unsigned int)v39];
          v14 = (_DWORD)v39 + 1;
        }
        else
        {
          v13 = v12;
          v14 = v12 + 1;
          v15 = &v9[v13];
        }
      }
      else
      {
        v70 = (_QWORD *)sub_186B270(0x18u);
        v15 = v70 + 1;
        *v70 = 2;
        v14 = 1;
        v9 = v15;
      }
      *v15 = v11;
      *((_DWORD *)v9 - 1) = v14;
      v7 = a2[1];
      v16 = *(_QWORD *)(*(_QWORD *)(v7 + 8LL * v10) + 16LL);
      if ( v8 )
      {
        v17 = *((_DWORD *)v8 - 1);
        if ( v17 == *((_DWORD *)v8 - 2) )
        {
          v40 = (3 * v17 + 1) >> 1;
          v41 = 8 * v40 + 8;
          if ( 8 * v17 + 8 >= (unsigned int)v41 || v17 >= v40 )
          {
            v75 = (char **)__cxa_allocate_exception(0x28u);
            sub_E65BE0((__int64 *)&v110, "Overflow encountered when expanding vector");
            *v75 = (char *)off_1C63128;
            sub_2333C0(v75 + 1, &v110);
            sub_233E40((__int64)&v110);
            __cxa_throw(v75, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (3 * v17 + 1) >> 1;
          v42 = (unsigned int *)sub_186B300(v8 - 1, v41);
          v8 = v42 + 2;
          *v42 = v94;
          v7 = a2[1];
          LODWORD(v42) = v42[1];
          v20 = &v8[(unsigned int)v42];
          v19 = (_DWORD)v42 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v17 + 1;
          v20 = &v8[v18];
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x18u);
        v8 = v69 + 1;
        *v69 = 2;
        v20 = v69 + 1;
        v7 = a2[1];
        v19 = 1;
      }
      ++v10;
      *v20 = *(_QWORD *)(v16 + 16);
      *((_DWORD *)v8 - 1) = v19;
      if ( !v7 )
      {
        v21 = *(_QWORD *)v101;
        v7 = 0;
        v22 = *(_QWORD *)a1;
        goto LABEL_19;
      }
    }
    v21 = *(_QWORD *)v101;
    v7 = *(unsigned int *)(v7 - 4);
    v22 = *(_QWORD *)a1;
  }
  else
  {
    v21 = *(_QWORD *)v101;
    v9 = nullptr;
    v8 = nullptr;
    v22 = *(_QWORD *)a1;
  }
LABEL_19:
  v23 = sub_15DB6A0(v22, 1, v7, v9, v8, v21, 1, &v100, &qword_18D6CD0, 0, 0, 0, 0);
  v80 = v23;
  v91 = (_QWORD *)(a1 + 8);
  if ( v23 )
    *(_DWORD *)(v23 + 8) += 2;
  sub_E65BC0(*(__int64 *)v101, *(__int64 *)&v101[2]);
  v90 = 0;
  *(_QWORD *)v101 = v80;
  do
  {
    sub_EE4F40(*(_QWORD *)(a1 + 8));
    v24 = *(_QWORD *)v101;
    v92 = *(_QWORD *)(a1 + 8);
    v104 = *(_QWORD *)(*(_QWORD *)v101 + 24LL);
    v25 = *(_DWORD *)(*(_QWORD *)v101 + 20LL);
    v110 = (__int64 *)&off_1C5D190;
    v112 = v25;
    v111 = 0;
    v113 = 2;
    sub_E72F60(v91, (__int64)&v110);
    if ( *(_WORD *)(v24 + 4) != 2 )
    {
      v26 = 0;
      v27 = &v104;
      v28 = 1;
LABEL_24:
      v99 = 0;
      v102[0] = 0;
      sub_E6D7F0(v91, v28, (__int64)v27, v26, &v99, (unsigned int *)v102);
      if ( v99
        && (sub_E6B720((__int64)v91, (_QWORD *)(a1 + 704), (__int64 *)(a1 + 680), (unsigned int **)(a1 + 712)),
            (v29 = *(_QWORD *)(a1 + 712)) != 0)
        && *(_DWORD *)(v29 - 4) )
      {
        sub_E7C920((__int64)v91, v102[0] + 1);
        sub_E7E480((__int64)v91, v24, v78);
        v30 = *(_QWORD *)(a1 + 8);
        if ( *(_DWORD *)(v30 + 712) )
        {
          if ( v24 != *(_QWORD *)v101 )
          {
            v31 = sub_15DED30(v30);
            v32 = v31;
            if ( v31 )
              ++*(_DWORD *)(v31 + 8);
            goto LABEL_31;
          }
LABEL_67:
          v32 = 0;
LABEL_31:
          sub_E65BA0(0, v92);
          goto LABEL_32;
        }
      }
      else
      {
        ++*(_DWORD *)(v24 + 8);
        sub_E65BC0(*(__int64 *)v101, *(__int64 *)&v101[2]);
        *(_QWORD *)v101 = v24;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 712LL) )
          goto LABEL_67;
      }
      v32 = 0;
LABEL_32:
      v110 = (__int64 *)&off_1C5D190;
      if ( v111 )
        sub_186B220((void *)(v111 - 8));
      goto LABEL_34;
    }
    v43 = *(_DWORD *)(v24 + 16);
    if ( v43 != 2 )
    {
      v44 = *(_QWORD *)(v24 + 24);
      if ( v43 )
      {
        if ( v43 == 1 )
        {
          if ( *(_WORD *)(v44 + 4) )
          {
            v28 = 1;
            v27 = &v104;
            v26 = 1;
            goto LABEL_24;
          }
          v28 = 1;
          v46 = *(_DWORD **)(*(_QWORD *)(v44 + 16) + 24LL);
          v27 = &v104;
          if ( !v46 || *v46 || v46[1] != 5 )
            goto LABEL_66;
LABEL_73:
          v28 = *(_DWORD *)(v44 + 24);
          v27 = (__int64 *)(v44 + 32);
LABEL_66:
          v26 = v43 == 1;
          goto LABEL_24;
        }
      }
      else if ( !*(_WORD *)(v44 + 4) )
      {
        v28 = 1;
        v45 = *(_DWORD **)(*(_QWORD *)(v44 + 16) + 24LL);
        v27 = &v104;
        if ( !v45 || *v45 || v45[1] != 6 )
          goto LABEL_66;
        goto LABEL_73;
      }
      v27 = &v104;
      v28 = 1;
      v26 = v43 == 1;
      goto LABEL_24;
    }
    ++*(_DWORD *)(v24 + 8);
    sub_E65BC0(*(__int64 *)v101, *(__int64 *)&v101[2]);
    *(_QWORD *)v101 = v24;
    sub_E65BA0(0, v92);
    v110 = (__int64 *)&off_1C5D190;
    if ( v111 )
      sub_186B220((void *)(v111 - 8));
    v32 = 0;
LABEL_34:
    v33 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v33 + 712) && v24 != *(_QWORD *)v101 )
    {
      v34 = sub_15E2470(v33, v90, v32);
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      v86 = v34;
      sub_E65BA0(v90, v85);
      v90 = v86;
    }
    sub_E65BA0(v32, v92);
  }
  while ( v24 != *(_QWORD *)v101 && *(_WORD *)(*(_QWORD *)v101 + 4LL) == 2 );
  sub_2FCDE0((__int64 *)(a1 + 648));
  if ( *(_WORD *)(*(_QWORD *)v101 + 4LL) == 2
    && *(_DWORD *)(*(_QWORD *)v101 + 16LL) == 1
    && *(_QWORD *)(*(_QWORD *)v101 + 56LL) == v100 )
  {
    v104 = 0;
    v47 = (_QWORD *)sub_186B270(0xC0u);
    v48 = *(_QWORD *)v101;
    *v47 = 0;
    v47[1] = 0;
    v47[3] = 0;
    v47[4] = 0;
    v47[6] = 0;
    v47[7] = 0;
    v47[9] = 0;
    v47[10] = 0;
    v47[12] = 0;
    v47[13] = 0;
    v47[15] = 0;
    v47[16] = 0;
    v47[18] = 0;
    v47[19] = 0;
    v47[21] = 0;
    v47[22] = 0;
    v49 = *(_QWORD *)(v48 + 24);
    *((_DWORD *)v47 + 4) = 0;
    *((_DWORD *)v47 + 10) = 0;
    *((_DWORD *)v47 + 16) = 0;
    *((_DWORD *)v47 + 22) = 0;
    *((_DWORD *)v47 + 28) = 0;
    *((_DWORD *)v47 + 34) = 0;
    *((_DWORD *)v47 + 40) = 0;
    *((_DWORD *)v47 + 46) = 0;
    ptr = v47;
    v106 = 8;
    v107 = 0;
    v108 = 0;
    v109 = 0xFFFFFFFFLL;
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    sub_E65BC0(v48, *(__int64 *)&v101[2]);
    *(_QWORD *)v101 = v49;
    if ( v104 )
      *(_DWORD *)(v104 - 4) = 0;
    v109 = 0xFFFFFFFFLL;
    sub_1662C60(&v104, v49, 0);
    sub_633760((__int64)&v110, *(_QWORD *)a1, 0, (__int64)v114);
    v114[8] = 1;
    v110 = &off_1C4CA80;
    v51 = a2[1];
    if ( v51 )
      v52 = *(_DWORD *)(v51 - 4);
    else
      v52 = 0;
    sub_157BE40(
      (int)v102,
      (int)&v110,
      v101[0],
      v52,
      v51,
      v50,
      v77,
      (__int64)v78,
      v80,
      (int)v82,
      v85,
      v86,
      (__int64)&v110,
      a2);
    v53 = 0;
    v54 = v103;
    v55 = *v83;
    *v83 = *(_QWORD *)v102;
    *(_QWORD *)v102 = v55;
    sub_E65BC0(v55, v54);
    v97 = 0;
    v56 = v89[1];
    if ( v56 )
    {
      while ( 1 )
      {
        v57 = *(v56 - 1);
        if ( v97 >= (unsigned int)v57 )
          break;
        v58 = (unsigned int)v57 - v97 - 1;
        if ( v104 && (unsigned int)v58 < *(_DWORD *)(v104 - 4) && *(_QWORD *)(v104 + 8 * v58) )
        {
          v59 = *(_QWORD *)&v56[2 * v97];
          if ( v59 )
            ++*(_DWORD *)(v59 + 8);
          v60 = v53;
          v61 = *(_QWORD *)&v56[2 * v53];
          if ( v61 )
          {
            v62 = *v89;
            v63 = (*(_DWORD *)(v61 + 8))-- == 1;
            if ( v63 )
            {
              sub_15D7BC0(v62, v61);
              v56 = v89[1];
              v60 = v53;
            }
          }
          *(_QWORD *)&v56[2 * v60] = v59;
          ++v53;
        }
        ++v97;
        if ( !v56 )
          goto LABEL_99;
      }
      if ( v53 < (unsigned int)v57 )
      {
        v71 = (unsigned __int64)&v56[2 * v57];
        v98 = (__int64 *)&v56[2 * v53];
        if ( (unsigned __int64)v98 < v71 )
        {
          do
          {
            v72 = *v98;
            if ( *v98 )
            {
              v73 = *v89;
              v63 = (*(_DWORD *)(v72 + 8))-- == 1;
              if ( v63 )
                sub_15D7BC0(v73, v72);
            }
            ++v98;
          }
          while ( (unsigned __int64)v98 < v71 );
          v56 = v89[1];
        }
      }
LABEL_99:
      v64 = v56;
      if ( v56 )
      {
        v65 = *(v56 - 1);
        if ( v65 >= v53 )
        {
          *(v56 - 1) = v53;
        }
        else
        {
LABEL_103:
          while ( !v64 || *(v64 - 2) < v53 )
          {
            sub_3A6B20(v89 + 1);
            v64 = v89[1];
          }
          *(v64 - 1) = v53;
          v66 = 8LL * v65;
          v67 = &v64[(unsigned __int64)v66 / 4];
          v68 = 8LL * v53;
          if ( v66 != v68 )
            memset(v67, 0, v68 - v66);
        }
      }
      else if ( v53 )
      {
        v65 = 0;
        goto LABEL_103;
      }
    }
    v110 = &off_1C4CA80;
    sub_267D20(v87);
    if ( v108 )
      sub_186B220((void *)(v108 - 8));
    if ( ptr )
      sub_186B220(ptr);
    if ( v104 )
      sub_186B220((void *)(v104 - 8));
  }
  else
  {
    v35 = *(_QWORD *)&v101[2];
    v36 = *v82;
    *v82 = *(_QWORD *)v101;
    *(_QWORD *)v101 = v36;
    sub_E65BC0(v36, v35);
    *(_QWORD *)v101 = 0;
  }
  if ( v8 )
    sub_186B220(v8 - 1);
  if ( v9 )
    sub_186B220(v9 - 1);
  sub_E65BA0(v90, v85);
  if ( v80 )
  {
    v96 = *(_DWORD *)(v80 + 8);
    *(_DWORD *)(v80 + 8) = v96 - 1;
    if ( v96 == 1 )
      sub_15D7BC0(v85, v80);
  }
  return sub_E65BC0(*(__int64 *)v101, *(__int64 *)&v101[2]);
}

