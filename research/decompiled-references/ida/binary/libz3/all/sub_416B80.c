__int64 __fastcall sub_416B80(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        char *a4,
        _QWORD *a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  char **exception; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r12
  __int64 v18; // r13
  __int64 v19; // r13
  int i; // eax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // r12
  unsigned int *v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned int *v32; // rdx
  _QWORD *v33; // r14
  _QWORD *v34; // r13
  int v35; // eax
  _QWORD *v36; // rax
  __m128 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128i si128; // xmm0
  unsigned __int64 v41; // rax
  unsigned int v42; // r14d
  _QWORD *v43; // rax
  __m128 *v44; // rax
  unsigned int v45; // r12d
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned int v48; // eax
  unsigned int v49; // r14d
  __m128 *v50; // rax
  __m128i v51; // xmm2
  unsigned int v52; // eax
  unsigned int v53; // edx
  unsigned int v54; // eax
  int v55; // eax
  __int64 v56; // r14
  __int32 *v57; // r13
  __int64 v58; // r14
  __int32 v59; // r12d
  _QWORD *v60; // rax
  __int64 *v61; // rsi
  int v62; // ecx
  int v63; // eax
  bool v64; // zf
  unsigned int v65; // ecx
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r12
  __int64 **v69; // r15
  int v70; // eax
  unsigned int v71; // r15d
  unsigned __int64 v73; // r12
  __int64 v74; // rax
  unsigned __int64 v75; // r15
  __int64 *v76; // rdi
  unsigned __int64 v77; // r12
  __int64 v78; // rax
  unsigned __int64 v79; // r15
  __int64 *v80; // rdi
  __int64 v81; // rax
  int v82; // eax
  int v83; // r8d
  int v84; // edi
  int v85; // esi
  __int64 v86; // rcx
  int *v87; // rax
  int v88; // edx
  int v89; // r9d
  unsigned __int32 v90; // ecx
  unsigned int v91; // eax
  __m128 *v92; // rdx
  unsigned __int32 v93; // r8d
  __int64 v94; // rcx
  int v95; // esi
  __int32 *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rsi
  int v99; // [rsp+0h] [rbp-160h]
  __int64 v100; // [rsp+8h] [rbp-158h]
  __int64 v101; // [rsp+10h] [rbp-150h]
  int v102; // [rsp+18h] [rbp-148h]
  __int64 *v103; // [rsp+18h] [rbp-148h]
  __int64 *v104; // [rsp+20h] [rbp-140h]
  __int64 v105; // [rsp+28h] [rbp-138h]
  __int64 *v106; // [rsp+30h] [rbp-130h]
  __int64 *v107; // [rsp+38h] [rbp-128h]
  __int64 *v108; // [rsp+40h] [rbp-120h]
  void *v109; // [rsp+48h] [rbp-118h]
  __int32 *v110; // [rsp+48h] [rbp-118h]
  __int64 v111; // [rsp+60h] [rbp-100h]
  __m128 *ptr; // [rsp+70h] [rbp-F0h]
  __int64 v114; // [rsp+78h] [rbp-E8h]
  int v116; // [rsp+88h] [rbp-D8h]
  __int64 v117; // [rsp+90h] [rbp-D0h]
  char *s; // [rsp+98h] [rbp-C8h]
  __m128 *sa; // [rsp+98h] [rbp-C8h]
  __int64 v120; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 v121; // [rsp+A8h] [rbp-B8h] BYREF
  __int64 v122; // [rsp+B0h] [rbp-B0h] BYREF
  __int64 v123; // [rsp+B8h] [rbp-A8h] BYREF
  int v124[2]; // [rsp+C0h] [rbp-A0h] BYREF
  unsigned int *v125; // [rsp+C8h] [rbp-98h] BYREF
  int v126[4]; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v127[2]; // [rsp+E0h] [rbp-80h] BYREF
  __int64 *v128; // [rsp+F0h] [rbp-70h] BYREF
  unsigned int *v129; // [rsp+F8h] [rbp-68h] BYREF
  __int64 *v130[2]; // [rsp+100h] [rbp-60h] BYREF
  __int64 v131[10]; // [rsp+110h] [rbp-50h] BYREF

  v106 = a3;
  v100 = a6;
  v101 = a1 + 96;
  if ( !*(_BYTE *)(a1 + 112) )
  {
    v81 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 112) = 1;
    *(_QWORD *)(a1 + 96) = v81;
  }
  v120 = 0;
  v11 = *(_QWORD *)(a2 + 16);
  sub_403090((__int64)v106, &v120);
  v125 = nullptr;
  v128 = v106;
  v114 = v120;
  v12 = *(_QWORD *)(a1 + 152);
  v129 = nullptr;
  *(_QWORD *)v124 = v12;
  v105 = v11 + 64;
  v107 = (__int64 *)&v128;
  v13 = sub_41F0C0(v11 + 64, &v128);
  if ( v13 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
    v121 = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
  }
  else
  {
    v121 = 0;
  }
  sub_407600(&v125, &v121);
  v15 = *(_QWORD *)(a2 + 24);
  v122 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  sub_407600(&v125, &v122);
  v104 = (__int64 *)v126;
  v108 = (__int64 *)v124;
  sub_3D6CD0(v126, (unsigned __int64)a4, (__int64 *)v124);
  sub_41C800(v127, v126);
  v16 = *(_QWORD *)(v11 + 24);
  v17 = *(__int64 **)(a1 + 152);
  v129 = nullptr;
  v18 = *(unsigned int *)(v16 + 32);
  v128 = v17;
  if ( (_DWORD)v18 )
  {
    v19 = 8 * v18;
    s = nullptr;
    for ( i = sub_439010(a1 + 176, **(_QWORD **)(v11 + 48), 1, 0);
          ;
          i = sub_439010(a1 + 176, *(_QWORD *)&s[*(_QWORD *)(v11 + 48)], 1, 0) )
    {
      v23 = sub_15DC610(
              (int)v17,
              i,
              0,
              0,
              v21,
              v22,
              v99,
              v100,
              v101,
              v102,
              (int)v104,
              v105,
              (int)v106,
              (int)v107,
              (int)v108,
              v109);
      v24 = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      v25 = v129;
      if ( !v129 || (v26 = *(v129 - 1), v26 == *(v129 - 2)) )
      {
        sub_3A6B20(&v129);
        v25 = v129;
        v26 = *(v129 - 1);
      }
      s += 8;
      *(_QWORD *)&v25[2 * v26] = v24;
      *(v25 - 1) = v26 + 1;
      if ( (char *)v19 == s )
        break;
      v17 = *(__int64 **)(a1 + 152);
    }
  }
  v131[1] = 0;
  v131[0] = (__int64)v106;
  v27 = sub_41F0C0(v105, v131);
  if ( !v27 )
  {
    sub_1872CE0("");
    sub_1873130(114, 608);
  }
  v28 = *(_QWORD **)(*(_QWORD *)(v27 + 8) + 24LL);
  if ( v28 )
  {
    v29 = v28;
    v30 = *((unsigned int *)v28 - 1);
    if ( (_DWORD)v30 )
    {
      v31 = *v29;
      v32 = v129;
      v33 = v29;
      v34 = &v29[v30];
      if ( *v29 )
        ++*(_DWORD *)(v31 + 8);
      if ( v32 )
        goto LABEL_27;
LABEL_23:
      sub_3A6B20(&v129);
      v32 = v129;
      v35 = *(v129 - 1);
      while ( 1 )
      {
        *(_QWORD *)&v32[2 * v35] = v31;
        *(v32 - 1) = v35 + 1;
        v36 = v33 + 1;
        v33 = v36;
        if ( v34 == v36 )
          break;
        v31 = *v36;
        if ( *v36 )
          ++*(_DWORD *)(v31 + 8);
LABEL_27:
        v35 = *(v32 - 1);
        if ( v35 == *(v32 - 2) )
          goto LABEL_23;
      }
    }
  }
  sub_403BD0(a2, v107);
  sub_3FF2A0(*(_QWORD *)(a2 + 16), v107, v127, a4, 1u, *(_BYTE *)(a1 + 662));
  if ( *(_BYTE *)(a1 + 664) && v114 && *(_DWORD *)(v114 - 4) > 1u )
  {
    v71 = sub_4274E0(a1, a2, v106, v127[0], a4, v100);
    goto LABEL_71;
  }
  v37 = (__m128 *)sub_186B270(0x40u);
  ptr = v37;
  v38 = v127[0];
  v37[1].m128_u64[0] = 0;
  v37->m128_u64[1] = (unsigned __int64)v106;
  v39 = *(_QWORD *)(a2 + 16);
  v37->m128_u64[0] = a2;
  si128 = (__m128i)_mm_loadh_ps((const double *)(v39 + 8));
  v37[1].m128_i32[2] = 0;
  v37[2] = (__m128)si128;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  v41 = (unsigned __int64)v128;
  v37[3].m128_u64[1] = 0;
  v37[3].m128_u64[0] = v41;
  v103 = (__int64 *)&v37[3];
  sub_3EE030((__int64)&v37[3], (__int64)v107);
  if ( !v114 || (v42 = *(_DWORD *)(v114 - 4)) == 0 )
  {
    sa = nullptr;
    goto LABEL_59;
  }
  v43 = (_QWORD *)sub_186B270(0x10u);
  *v43 = 2;
  v44 = (__m128 *)(v43 + 1);
  sa = v44;
  while ( 1 )
  {
    v48 = v44[-1].m128_u32[2];
    if ( v48 >= v42 )
      break;
    v45 = (3 * v48 + 1) >> 1;
    v46 = 4 * v45 + 8;
    if ( 4 * v48 + 8 >= (unsigned int)v46 || v48 >= v45 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_3FCFD0(v131, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v131);
      sub_233E40((__int64)v131);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v47 = (unsigned int *)sub_186B300(&sa[-1].m128_u16[4], v46);
    *v47 = v45;
    sa = (__m128 *)(v47 + 2);
    v44 = (__m128 *)(v47 + 2);
  }
  sa[-1].m128_i32[3] = v42;
  memset(sa, 0, 4LL * v42);
  v49 = *(_DWORD *)(v114 - 4);
  if ( v49 )
  {
    if ( v49 - 1 <= 2 )
    {
      v52 = 0;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B6590);
      v50 = sa;
      v51 = _mm_shuffle_epi32(_mm_cvtsi32_si128(4u), 0);
      do
      {
        a8 = (__m128)si128;
        ++v50;
        si128 = _mm_add_epi32(si128, v51);
        v50[-1] = a8;
      }
      while ( &sa[v49 >> 2] != v50 );
      if ( (v49 & 3) == 0 )
        goto LABEL_50;
      v52 = v49 & 0xFFFFFFFC;
    }
    sa->m128_i32[v52] = v52;
    v53 = v52 + 1;
    if ( v52 + 1 < v49 )
    {
      v54 = v52 + 2;
      sa->m128_i32[v53] = v53;
      if ( v54 < v49 )
        sa->m128_i32[v54] = v54;
    }
LABEL_50:
    v55 = *(_DWORD *)(a1 + 260);
    if ( v55 != 1 )
    {
      if ( v55 != 2 )
        goto LABEL_52;
      goto LABEL_96;
    }
    goto LABEL_100;
  }
  v82 = *(_DWORD *)(a1 + 260);
  if ( v82 != 1 )
  {
    if ( v82 != 2 )
      goto LABEL_59;
LABEL_96:
    v83 = sa[-1].m128_i32[3];
    v84 = v83 - 1;
    if ( v83 - 1 > 0 )
    {
      v85 = *(_DWORD *)(a1 + 256);
      v86 = v84;
      do
      {
        v85 = 214013 * v85 + 2531011;
        v87 = &sa->m128_i32[(HIWORD(v85) & 0x7FFF) % ((int)v86 + 1)];
        v88 = sa->m128_i32[v86];
        v89 = *v87;
        sa->m128_i32[v86--] = *v87;
        *v87 = v88;
      }
      while ( (int)v86 > 0 );
      *(_DWORD *)(a1 + 256) = v85;
      sa->m128_i32[v84 - (__int64)(v83 - 2)] = v89;
      *v87 = v88;
    }
    goto LABEL_52;
  }
LABEL_100:
  v90 = (unsigned __int32)sa[-1].m128_i32[3] >> 1;
  if ( v90 )
  {
    v91 = sa[-1].m128_i32[3] - 1;
    v92 = sa;
    v93 = v91 - v90;
    do
    {
      v94 = v91;
      v95 = v92->m128_i32[0];
      --v91;
      v92 = (__m128 *)((char *)v92 + 4);
      v96 = &sa->m128_i32[v94];
      v92[-1].m128_i32[3] = *v96;
      *v96 = v95;
    }
    while ( v91 != v93 );
  }
LABEL_52:
  v56 = *(unsigned int *)(v114 - 4);
  if ( (_DWORD)v56 )
  {
    v57 = (__int32 *)sa;
    v110 = &sa->m128_i32[v56];
    while ( 1 )
    {
      v58 = (unsigned int)*v57;
      v59 = *v57;
      v60 = sub_3FCD00(*(_QWORD **)(a1 + 264), *(_DWORD *)(a1 + 272), *(_QWORD *)(v114 + 8 * v58));
      v130[0] = nullptr;
      v61 = (__int64 *)v60[1];
      v111 = *(_QWORD *)(a1 + 152);
      v62 = *(unsigned __int16 *)(a2 + 72);
      v63 = (v62 == 0) + v62 - 1;
      v64 = v62 == 0xFFFF;
      v65 = -1;
      if ( !v64 )
        v65 = v63;
      sub_40B940(v131, v61, (unsigned __int64)a4, v65, v58, *(_BYTE *)(*a5 + v58), v130);
      v117 = v131[0];
      if ( !v131[0] )
        break;
      sub_405240((__int64)ptr, v61, v59, v131[0], *(_BYTE *)(*a5 + v58), v130[0], *(double *)si128.m128i_i64, a8);
      v116 = *(_DWORD *)(v117 + 8);
      *(_DWORD *)(v117 + 8) = v116 - 1;
      if ( v116 == 1 )
      {
        ++v57;
        sub_15D7BC0(v111, v117);
        if ( v110 == v57 )
          goto LABEL_59;
      }
      else if ( v110 == ++v57 )
      {
        goto LABEL_59;
      }
    }
    sub_2B4F40(v103);
    sub_3FCDF0(ptr[2].m128_i64[0], ptr[2].m128_i64[1]);
    v77 = ptr[1].m128_u64[0];
    if ( v77 )
    {
      v78 = *(unsigned int *)(v77 - 4);
      if ( (_DWORD)v78 )
      {
        v79 = v77 + 56 * v78;
        do
        {
          v80 = (__int64 *)(v77 + 40);
          v77 += 56LL;
          sub_2B4F40(v80);
          sub_3FCDF0(*(_QWORD *)(v77 - 40), *(_QWORD *)(v77 - 32));
        }
        while ( v77 != v79 );
        v77 = ptr[1].m128_u64[0];
      }
      sub_186B220((void *)(v77 - 8));
    }
    sub_186B220(ptr);
    v71 = 0;
    sub_3FCDF0(0, v111);
    goto LABEL_83;
  }
LABEL_59:
  v66 = ptr[1].m128_u64[0];
  if ( v66
    && *(_DWORD *)(v66 - 4)
    && (ptr[1].m128_i32[2] = 0, v67 = sub_416440((__int64 *)ptr, a4, *(double *)si128.m128i_i64), (v68 = v67) != 0) )
  {
    v69 = (__int64 **)(v67 + 88);
    sub_400A10((__int64 **)(v67 + 88), (__int64 *)ptr);
    if ( !*(_BYTE *)(a1 + 659) )
      sub_400A10(v69, nullptr);
    if ( *(_BYTE *)(a1 + 643) )
    {
      v130[1] = nullptr;
      v130[0] = v106;
      v97 = sub_41F0C0(v105, v130);
      v98 = v97;
      if ( v97 )
        v98 = *(_QWORD *)(*(_QWORD *)(v97 + 8) + 8LL);
      if ( !(unsigned __int8)sub_1374270(a4, v98) || !(unsigned __int8)sub_1374270(a4, *(_QWORD *)(a2 + 24)) )
        sub_400A10(v69, nullptr);
    }
    if ( (*(_BYTE *)(v68 + 78) & 0x48) != 0 )
    {
      v70 = *(_DWORD *)(a2 + 136);
      *(_DWORD *)(a2 + 136) = v70 - 1;
      *(_DWORD *)(v68 + 136) = v70 - 2;
    }
    ++*(_DWORD *)v68;
    v123 = v68;
    sub_41EF60(v100, &v123);
    ++*(_DWORD *)(a1 + 544);
    v71 = 1;
  }
  else
  {
    sub_2B4F40(v103);
    sub_3FCDF0(ptr[2].m128_i64[0], ptr[2].m128_i64[1]);
    v73 = ptr[1].m128_u64[0];
    if ( v73 )
    {
      v74 = *(unsigned int *)(v73 - 4);
      if ( (_DWORD)v74 )
      {
        v75 = v73 + 56 * v74;
        do
        {
          v76 = (__int64 *)(v73 + 40);
          v73 += 56LL;
          sub_2B4F40(v76);
          sub_3FCDF0(*(_QWORD *)(v73 - 40), *(_QWORD *)(v73 - 32));
        }
        while ( v73 != v75 );
        v73 = ptr[1].m128_u64[0];
      }
      sub_186B220((void *)(v73 - 8));
    }
    sub_186B220(ptr);
    v71 = 0;
  }
LABEL_83:
  if ( sa )
    sub_186B220(&sa[-1].m128_u16[4]);
LABEL_71:
  sub_2B4F40(v107);
  sub_3FCDF0(v127[0], v127[1]);
  sub_2334C0(v104);
  sub_2334C0(v108);
  if ( v114 )
    sub_186B220((void *)(v114 - 8));
  if ( *(_BYTE *)(a1 + 112) )
    sub_3FCC40(v101);
  return v71;
}

