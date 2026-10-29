__int64 __fastcall sub_3D17D0(__int64 a1, __int64 a2, __m128i a3)
{
  char **v3; // r12
  __int64 v4; // rdx
  char **exception; // r12
  __int64 v6; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  size_t v14; // rsi
  char *v15; // rdi
  int v16; // ecx
  char *v17; // rax
  char *v18; // rdx
  unsigned int v19; // r12d
  size_t v20; // rbx
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v23; // rdx
  __int64 *v24; // rbx
  _QWORD *v25; // r12
  _QWORD *v26; // rsi
  __int64 v27; // rbx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rbx
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // rcx
  const char *v35; // rsi
  int v36; // ebx
  __int64 v37; // r12
  __int64 v38; // r12
  __int64 v39; // rbp
  __int64 v40; // rdi
  __int64 v41; // rbx
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // r12
  __int64 v46; // rsi
  int v47; // edx
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // r15
  _BYTE *v51; // rcx
  int v52; // r14d
  __int64 v53; // rax
  _DWORD *v54; // rbx
  _BYTE *v55; // rsi
  __int64 v56; // rax
  _DWORD *v57; // rbx
  _BYTE *v58; // rbx
  __int64 v59; // rsi
  __int64 v60; // rdi
  _BYTE *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rbx
  unsigned int v64; // ebx
  unsigned __int64 *v66; // rbx
  unsigned __int64 v67; // r12
  __int64 v68; // r8
  __m128i *v69; // rbp
  __int32 v70; // r9d
  __int64 v71; // r8
  __m128i *v72; // r14
  int v73; // esi
  __m128i v74; // xmm1
  __int64 v75; // r9
  __m128i *v76; // rdi
  __m128i *v77; // rax
  __m128i *v78; // r8
  __int64 v79; // rdx
  __int64 v80; // r12
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // r12
  _DWORD *v84; // rdx
  unsigned int v85; // eax
  unsigned int v86; // ebp
  __int64 v87; // rsi
  unsigned int v88; // eax
  unsigned __int64 *v89; // rsi
  unsigned __int64 v90; // r12
  unsigned __int64 *v91; // rax
  unsigned int v92; // ebp
  size_t v93; // rsi
  unsigned int *v94; // rax
  size_t v95; // rsi
  unsigned int *v96; // rax
  __int64 v97; // rsi
  __int64 v98; // rax
  int v99; // r10d
  __m128i *v100; // rdx
  __m128i *v101; // rax
  const __m128i *v102; // r15
  __m128i *v103; // r11
  __int64 v104; // rdx
  __m128i *v105; // rsi
  __m128i *v106; // rdx
  __m128i v107; // xmm1
  int v108; // edx
  int v109; // ecx
  int v110; // r8d
  int v111; // r9d
  __int64 v112; // rsi
  int v113; // edx
  int v114; // ecx
  int v115; // r8d
  int v116; // r9d
  __int64 v117; // rdi
  void (__fastcall ***v118)(void *, __int64); // rbx
  _QWORD *v119; // rax
  __int64 v120; // rsi
  int v121; // eax
  void (__fastcall ***v122)(void *, __int64); // rbx
  __int64 v123; // rbp
  _BYTE *v124; // [rsp+0h] [rbp-1C8h]
  __int64 v125; // [rsp+0h] [rbp-1C8h]
  __int64 v126; // [rsp+8h] [rbp-1C0h]
  __int64 v127; // [rsp+8h] [rbp-1C0h]
  __m128i v128; // [rsp+10h] [rbp-1B8h] BYREF
  unsigned __int64 *v129; // [rsp+20h] [rbp-1A8h]
  __m128i v130; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 v131; // [rsp+38h] [rbp-190h]
  __int64 v132; // [rsp+40h] [rbp-188h]
  __m128i *v133; // [rsp+48h] [rbp-180h]
  _BYTE v134[32]; // [rsp+50h] [rbp-178h] BYREF
  void *ptr[4]; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v136[312]; // [rsp+90h] [rbp-138h] BYREF

  sub_64C320(*(_QWORD *)(a1 + 48));
  v9 = *(_QWORD **)(a1 + 592);
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(_QWORD *)(a1 + 584);
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_8;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_8:
    v9 = *(_QWORD **)(a1 + 592);
    if ( v9 )
LABEL_9:
      *((_DWORD *)v9 - 1) = 0;
  }
  v14 = *(unsigned int *)(a1 + 572);
  if ( *(_QWORD *)(a1 + 572) )
  {
    v15 = *(char **)(a1 + 560);
    v16 = 0;
    v14 = *(unsigned int *)(a1 + 568);
    v17 = v15;
    v18 = &v15[16 * v14];
    if ( v15 == v18 )
      goto LABEL_24;
    do
    {
      while ( *(_QWORD *)v17 )
      {
        *(_QWORD *)v17 = 0;
        v17 += 16;
        if ( v18 == v17 )
          goto LABEL_16;
      }
      v17 += 16;
      ++v16;
    }
    while ( v18 != v17 );
LABEL_16:
    if ( (unsigned int)v14 <= 0x10 || 3 * (int)v14 >= (unsigned int)(4 * v16) )
      goto LABEL_24;
    if ( v15 )
    {
      sub_186B220(v15);
      v19 = *(_DWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 560) = 0;
      v19 >>= 1;
      *(_DWORD *)(a1 + 568) = v19;
      v20 = v19;
      v21 = (_OWORD *)sub_186B270(v20 * 16);
      if ( !v19 )
      {
LABEL_23:
        *(_QWORD *)(a1 + 560) = v21;
LABEL_24:
        *(_QWORD *)(a1 + 572) = 0;
        goto LABEL_25;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 560) = 0;
      v14 = (unsigned int)v14 >> 1;
      *(_DWORD *)(a1 + 568) = v14;
      v20 = v14;
      v21 = (_OWORD *)sub_186B270(16 * v14);
    }
    v22 = &v21[v20];
    a3.m128i_i64[0] = 0;
    v23 = v21;
    if ( ((v20 * 16) & 0x10) == 0 || (v23 = v21 + 1, *v21 = 0, v21 + 1 != v22) )
    {
      do
      {
        *v23 = 0;
        v23 += 2;
        *(v23 - 1) = 0;
      }
      while ( v23 != v22 );
    }
    goto LABEL_23;
  }
LABEL_25:
  v24 = *(__int64 **)(a1 + 48);
  v25 = v24 + 82;
  v126 = *v24;
  sub_654110(v24, v14);
  v26 = v24 + 295;
  v128.m128i_i64[1] = (__int64)v136;
  sub_643420(v136, v24 + 295);
  v27 = *(_QWORD *)(a1 + 48);
  sub_654110(v27, v26);
  sub_632080(v25, a2, v27 + 2360);
  sub_3D05E0((_QWORD *)a1, a2);
  sub_5D9090(*(_QWORD *)(a1 + 48), a2, v28, v29, v30, v31);
  if ( (unsigned __int8)sub_1859630(
                          **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
                          "xform.slice",
                          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
                          1) )
  {
    v124 = v134;
    sub_6440D0(v134, *(_QWORD *)(a1 + 48));
    v32 = sub_186B270(0xA8u);
    sub_5BDEB0(v32, *(_QWORD *)(a1 + 48));
    sub_644270(v134, v32);
    sub_64C400(*(_QWORD *)(a1 + 48), v134);
    v33 = *(unsigned __int64 **)(v32 + 88);
    v34 = &v33[2 * *(unsigned int *)(v32 + 96)];
    if ( v34 == v33 )
      goto LABEL_27;
    while ( 1 )
    {
      v66 = v33;
      if ( *v33 > 1 )
        break;
      v33 += 2;
      if ( v34 == v33 )
        goto LABEL_27;
    }
    if ( v34 != v33 )
    {
      v67 = *v33;
      while ( 1 )
      {
        v68 = *(unsigned int *)(a1 + 568);
        a3 = _mm_loadl_epi64((const __m128i *)(v66 + 1));
        if ( 3 * (int)v68 < (unsigned int)(4 * (*(_DWORD *)(a1 + 572) + *(_DWORD *)(a1 + 576))) )
        {
          v130.m128i_i64[1] = (__int64)v34;
          LODWORD(v129) = 2 * v68;
          v128.m128i_i64[0] = 16LL * (unsigned int)(2 * v68);
          v130.m128i_i64[0] = a3.m128i_i64[0];
          v98 = sub_186B270(v128.m128i_u64[0]);
          v99 = (int)v129;
          v71 = v128.m128i_i64[0];
          v69 = (__m128i *)v98;
          v100 = (__m128i *)v98;
          a3 = _mm_loadl_epi64(&v130);
          v34 = (unsigned __int64 *)v130.m128i_i64[1];
          v101 = (__m128i *)(v98 + v128.m128i_i64[0]);
          if ( (_DWORD)v129 )
          {
            if ( (((_BYTE)v101 - (_BYTE)v69) & 0x10) == 0 || (v100 = v69 + 1, *v69 = 0, v101 != &v69[1]) )
            {
              do
              {
                v100 += 2;
                v100[-2] = 0;
                v100[-1] = 0;
              }
              while ( v101 != v100 );
            }
          }
          v102 = *(const __m128i **)(a1 + 560);
          v70 = v99 - 1;
          v72 = v101;
          v103 = (__m128i *)&v102[*(unsigned int *)(a1 + 568)];
          if ( v102 != v103 )
          {
            do
            {
              while ( v102->m128i_i64[0] <= 1uLL )
              {
                if ( v103 == ++v102 )
                  goto LABEL_120;
              }
              v104 = 16LL * (*(_DWORD *)(v102->m128i_i64[0] + 12) & (unsigned int)v70);
              v105 = &v69[(unsigned __int64)v104 / 0x10];
              if ( v71 == v104 )
              {
LABEL_124:
                if ( v69 == v105 )
                {
LABEL_132:
                  v133 = v101;
                  HIDWORD(v132) = v99;
                  v131 = v71;
                  v130.m128i_i32[2] = v99 - 1;
                  v130.m128i_i64[0] = (__int64)v103;
                  v129 = v34;
                  v128.m128i_i64[0] = a3.m128i_i64[0];
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v106 = v69;
                while ( v106->m128i_i64[0] )
                {
                  if ( v105 == ++v106 )
                    goto LABEL_132;
                }
              }
              else
              {
                v106 = &v69[(unsigned __int64)v104 / 0x10];
                while ( v106->m128i_i64[0] )
                {
                  if ( v101 == ++v106 )
                    goto LABEL_124;
                }
              }
              v107 = _mm_loadu_si128(v102++);
              *v106 = v107;
            }
            while ( v103 != v102 );
LABEL_120:
            v103 = *(__m128i **)(a1 + 560);
          }
          if ( v103 )
          {
            LODWORD(v131) = v99;
            v130.m128i_i64[1] = v71;
            v130.m128i_i32[0] = v99 - 1;
            v129 = v34;
            v128.m128i_i64[0] = a3.m128i_i64[0];
            sub_186B220(v103);
            v99 = v131;
            v71 = v130.m128i_i64[1];
            v70 = v130.m128i_i32[0];
            v34 = v129;
            a3 = _mm_loadl_epi64(&v128);
          }
          *(_QWORD *)(a1 + 560) = v69;
          *(_DWORD *)(a1 + 568) = v99;
          *(_DWORD *)(a1 + 576) = 0;
        }
        else
        {
          v69 = *(__m128i **)(a1 + 560);
          v70 = v68 - 1;
          v71 = 16 * v68;
          v72 = (__m128i *)((char *)v69 + v71);
        }
        v73 = *(_DWORD *)(v67 + 12);
        v74 = _mm_unpacklo_epi64((__m128i)v67, a3);
        v75 = 16LL * (v73 & (unsigned int)v70);
        v76 = &v69[(unsigned __int64)v75 / 0x10];
        if ( v75 != v71 )
        {
          v77 = &v69[(unsigned __int64)v75 / 0x10];
          v78 = nullptr;
          while ( 1 )
          {
            v79 = v77->m128i_i64[0];
            if ( v77->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v79 + 12) == v73 && v79 == v67 )
              {
                *v77 = v74;
                goto LABEL_87;
              }
            }
            else
            {
              if ( !v79 )
              {
                if ( v78 )
                  goto LABEL_130;
                v78 = v77;
                goto LABEL_131;
              }
              v78 = v77;
            }
            if ( ++v77 == v72 )
              goto LABEL_82;
          }
        }
        v78 = nullptr;
        while ( 1 )
        {
LABEL_82:
          if ( v76 == v69 )
          {
            v128.m128i_i64[0] = (__int64)v34;
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v82 = v69->m128i_i64[0];
          if ( v69->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v82 + 12) == v73 && v82 == v67 )
          {
            *v69 = v74;
            goto LABEL_87;
          }
LABEL_81:
          ++v69;
        }
        if ( v82 )
          break;
        if ( v78 )
LABEL_130:
          --*(_DWORD *)(a1 + 576);
        else
          v78 = v69;
LABEL_131:
        *v78 = v74;
        ++*(_DWORD *)(a1 + 572);
LABEL_87:
        v83 = *v66;
        if ( *v66 )
          ++*(_DWORD *)(v83 + 8);
        v84 = *(_DWORD **)(a1 + 592);
        if ( v84 )
        {
          v85 = *(v84 - 1);
          v86 = *(v84 - 2);
          if ( v85 == v86 )
          {
            v86 = (3 * v85 + 1) >> 1;
            v95 = 8 * v86 + 8;
            if ( 8 * v85 + 8 >= (unsigned int)v95 || v85 >= v86 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C88C8((__int64 *)ptr, "Overflow encountered when expanding vector", v6);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, ptr);
              sub_233E40((__int64)ptr);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v128.m128i_i64[0] = (__int64)v34;
            v96 = (unsigned int *)sub_186B300(v84 - 2, v95);
            v97 = v96[1];
            v84 = v96 + 2;
            v34 = (unsigned __int64 *)v128.m128i_i64[0];
            *v96 = v86;
            *(_QWORD *)(a1 + 592) = v96 + 2;
            LODWORD(v96) = v97;
            v89 = (unsigned __int64 *)&v84[2 * v97];
            v88 = (_DWORD)v96 + 1;
          }
          else
          {
            v87 = v85;
            v88 = v85 + 1;
            v89 = (unsigned __int64 *)&v84[2 * v87];
          }
          *v89 = v83;
          v90 = v66[1];
          *(v84 - 1) = v88;
          if ( v90 )
          {
LABEL_93:
            ++*(_DWORD *)(v90 + 8);
            v88 = *(v84 - 1);
            v86 = *(v84 - 2);
          }
          if ( v88 == v86 )
          {
            v92 = (3 * v88 + 1) >> 1;
            v93 = 8 * v92 + 8;
            if ( 8 * v88 + 8 >= (unsigned int)v93 || v88 >= v92 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_C88C8((__int64 *)ptr, "Overflow encountered when expanding vector", v4);
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, ptr);
              sub_233E40((__int64)ptr);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v128.m128i_i64[0] = (__int64)v34;
            v94 = (unsigned int *)sub_186B300(v84 - 2, v93);
            v84 = v94 + 2;
            *v94 = v92;
            v34 = (unsigned __int64 *)v128.m128i_i64[0];
            *(_QWORD *)(a1 + 592) = v94 + 2;
            v88 = v94[1];
          }
        }
        else
        {
          v128.m128i_i64[0] = (__int64)v34;
          v119 = (_QWORD *)sub_186B270(0x18u);
          v119[1] = v83;
          v90 = v66[1];
          v84 = v119 + 1;
          *v119 = 0x100000002LL;
          v34 = (unsigned __int64 *)v128.m128i_i64[0];
          v88 = 1;
          *(_QWORD *)(a1 + 592) = v84;
          if ( v90 )
            goto LABEL_93;
        }
        *(_QWORD *)&v84[2 * v88] = v90;
        *(v84 - 1) = v88 + 1;
        v91 = v66 + 2;
        if ( v34 != v66 + 2 )
        {
          while ( 1 )
          {
            v67 = *v91;
            v66 = v91;
            if ( *v91 > 1 )
              break;
            v91 += 2;
            if ( v34 == v91 )
              goto LABEL_27;
          }
          if ( v34 != v91 )
            continue;
        }
        goto LABEL_27;
      }
      v78 = v69;
      goto LABEL_81;
    }
LABEL_27:
    sub_6440F0(v134);
  }
  v35 = "xform.unfold_rules";
  if ( (unsigned int)sub_1859980(
                       **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
                       "xform.unfold_rules",
                       *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
                       0) )
  {
    v36 = sub_1859980(
            **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
            "xform.unfold_rules",
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
            0);
    v124 = v134;
    sub_6440D0(v134, *(_QWORD *)(a1 + 48));
    sub_6440D0(ptr, *(_QWORD *)(a1 + 48));
    v37 = sub_186B270(0x58u);
    sub_5DA440(v37, *(_QWORD *)(a1 + 48));
    sub_644270(v134, v37);
    v38 = sub_186B270(0x2C0u);
    sub_613120(v38, *(_QWORD *)(a1 + 48));
    sub_644270(ptr, v38);
    v35 = "xform.coalesce_rules";
    if ( (unsigned __int8)sub_1859630(
                            **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
                            "xform.coalesce_rules",
                            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
                            0) )
    {
      v35 = v134;
      sub_64C400(*(_QWORD *)(a1 + 48), v134);
      for ( ; v36; --v36 )
      {
LABEL_31:
        v35 = (const char *)ptr;
        sub_64C400(*(_QWORD *)(a1 + 48), ptr);
      }
    }
    else if ( v36 )
    {
      goto LABEL_31;
    }
    sub_6440F0(ptr);
    sub_6440F0(v134);
  }
  v39 = *(_QWORD *)(a1 + 48);
  v40 = v39;
  sub_654110(v39, v35);
  v41 = v39 + 2360;
  if ( !*(_DWORD *)(v39 + 2524) )
  {
    v64 = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 552) + 360LL) = -1;
    goto LABEL_63;
  }
  v42 = *(_QWORD **)(v39 + 2512);
  v43 = &v42[*(unsigned int *)(v39 + 2520)];
  if ( v42 == v43 )
  {
    v123 = *v42;
LABEL_143:
    if ( !v123 )
      goto LABEL_39;
  }
  else
  {
    while ( 1 )
    {
      v123 = *v42;
      v44 = v42;
      if ( *v42 > 1u )
        break;
      if ( v43 == ++v42 )
      {
        v123 = v44[1];
        goto LABEL_143;
      }
    }
  }
  ++*(_DWORD *)(v123 + 8);
LABEL_39:
  if ( (unsigned int)sub_180B130(v40) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
    {
      sub_186A4C0(*(double *)a3.m128i_i64);
      v45 = *(_QWORD *)(a1 + 48);
      v46 = sub_180B150(v40, v35);
      sub_63C8E0(v45 + 2360, v46);
      sub_186A500(v45 + 2360, v46);
    }
    else
    {
      v80 = *(_QWORD *)(a1 + 48);
      v81 = sub_180B150(v40, v35);
      sub_63C8E0(v80 + 2360, v81);
    }
  }
  sub_63ECD0(a1 + 56, v41);
  sub_6430A0(a1 + 56);
  sub_64C470(*(_QWORD *)(a1 + 48));
  sub_64C350(*(_QWORD *)(a1 + 48));
  sub_64C430(*(_QWORD *)(a1 + 48), v128.m128i_i64[1]);
  v50 = *(_QWORD *)(a1 + 48);
  v51 = *(_BYTE **)(a1 + 552);
  v52 = *(_DWORD *)(v126 + 712);
  v53 = *(_QWORD *)(v50 + 2960);
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  v54 = *((_DWORD **)v51 + 79);
  if ( v54 && (v13 = v54[2] == 1, --v54[2], v13) )
  {
    v124 = v51;
    (**(void (__fastcall ***)(_DWORD *))v54)(v54);
    sub_186B220(v54);
    v53 = *(_QWORD *)(v50 + 2960);
    v55 = *(_BYTE **)(a1 + 552);
    v50 = *(_QWORD *)(a1 + 48);
    v51 = v124;
  }
  else
  {
    v55 = v51;
  }
  *((_QWORD *)v51 + 79) = v53;
  v56 = *(_QWORD *)(v50 + 2952);
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  v57 = *((_DWORD **)v55 + 78);
  if ( v57 && (v13 = v57[2] == 1, --v57[2], v13) )
  {
    LODWORD(v124) = (_DWORD)v55;
    (**(void (__fastcall ***)(_DWORD *))v57)(v57);
    sub_186B220(v57);
    v58 = *(_BYTE **)(a1 + 552);
    v56 = *(_QWORD *)(v50 + 2952);
  }
  else
  {
    v58 = v55;
  }
  *((_QWORD *)v55 + 78) = v56;
  if ( v123 )
    ++*(_DWORD *)(v123 + 8);
  v59 = *((_QWORD *)v58 + 36);
  if ( v59 && (v60 = *((_QWORD *)v58 + 37), v13 = *(_DWORD *)(v59 + 8) == 1, --*(_DWORD *)(v59 + 8), v13) )
  {
    sub_15D7BC0(v60, v59);
    v61 = *(_BYTE **)(a1 + 552);
  }
  else
  {
    v61 = v58;
  }
  *((_QWORD *)v58 + 36) = v123;
  sub_415900(
    (int)v61,
    a1 + 56,
    v47,
    (int)v51,
    v48,
    v49,
    (int)v124,
    v126,
    v128.m128i_i32[0],
    v128.m128i_i32[2],
    v129,
    v130.m128i_i32[0],
    v130.m128i_i32[2],
    v131);
  v62 = *(_QWORD *)(a1 + 80);
  v63 = *(_QWORD *)(a1 + 552);
  if ( v62 && *(_DWORD *)(v62 - 4) )
  {
    sub_1859980(
      **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
      "spacer.min_level",
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
      0);
    v64 = sub_41C290(v63);
  }
  else
  {
    *(_DWORD *)(v63 + 360) = -1;
    if ( (unsigned int)sub_180B130(v61) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        v112 = *(_QWORD *)(a1 + 552);
        sub_40D4F0(
          (unsigned int)ptr,
          v112,
          v113,
          v114,
          v115,
          v116,
          v125,
          v127,
          v128.m128i_i32[0],
          v128.m128i_i32[2],
          (_DWORD)v129,
          v130.m128i_i32[0],
          v130.m128i_i32[2],
          v131,
          v132,
          (char)v133);
        v117 = sub_180B150(ptr, v112);
        sub_1352510(v117);
        v118 = (void (__fastcall ***)(void *, __int64))ptr[0];
        if ( ptr[0] )
        {
          v13 = (*((_DWORD *)ptr[0] + 4))-- == 1;
          if ( v13 )
          {
            (**v118)(v118, v127);
            v117 = (__int64)v118;
            sub_186B220(v118);
          }
        }
        sub_186A500(v117, v127);
      }
      else
      {
        v120 = *(_QWORD *)(a1 + 552);
        sub_40D4F0(
          (unsigned int)ptr,
          v120,
          v108,
          v109,
          v110,
          v111,
          v125,
          v127,
          v128.m128i_i32[0],
          v128.m128i_i32[2],
          (_DWORD)v129,
          v130.m128i_i32[0],
          v130.m128i_i32[2],
          v131,
          v132,
          (char)v133);
        v121 = sub_180B150(ptr, v120);
        sub_1352510(v121);
        v122 = (void (__fastcall ***)(void *, __int64))ptr[0];
        if ( ptr[0] )
        {
          v13 = (*((_DWORD *)ptr[0] + 4))-- == 1;
          if ( v13 )
          {
            (**v122)(v122, v127);
            sub_186B220(v122);
          }
        }
      }
    }
    v64 = -1;
  }
  *(_DWORD *)(v127 + 712) = v52;
  if ( v123 )
  {
    v13 = (*(_DWORD *)(v123 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v127, v123);
  }
LABEL_63:
  sub_63D960(v128.m128i_i64[1]);
  return v64;
}

