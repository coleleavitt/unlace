__int64 __fastcall sub_BFE080(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, _DWORD **a5, _DWORD **a6, double a7)
{
  char **exception; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned int v10; // r15d
  __int64 v13; // rdx
  unsigned int *v18; // rbx
  _DWORD *v19; // r13
  void *v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r13d
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 *v31; // rdx
  __int64 v32; // rcx
  void *v33; // rdi
  int v34; // eax
  int v35; // eax
  void *v36; // rdi
  unsigned int v37; // r9d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rdx
  _DWORD *v41; // rcx
  __int64 v42; // rdx
  _DWORD *v43; // rcx
  __int64 v44; // rdx
  _DWORD *v45; // rsi
  bool v46; // zf
  _DWORD *v47; // r13
  void *v48; // r14
  int v49; // ecx
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r13
  int v53; // ecx
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  unsigned __int64 v60; // rax
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // rdi
  __m128i v67; // xmm1
  __int64 v68; // rax
  int v69; // eax
  int v70; // r8d
  int v71; // r9d
  _DWORD *v72; // rax
  __m128i v73; // kr00_16
  __int64 v74; // rax
  __int64 v75; // r15
  int v76; // ecx
  __int64 v77; // rax
  unsigned int *v78; // r15
  int v79; // eax
  int v80; // r8d
  int v81; // r9d
  int v82; // [rsp+0h] [rbp-1A0h]
  __int64 v83; // [rsp+8h] [rbp-198h]
  int v84; // [rsp+8h] [rbp-198h]
  int v85; // [rsp+10h] [rbp-190h]
  unsigned __int8 v86; // [rsp+17h] [rbp-189h]
  unsigned int v87; // [rsp+18h] [rbp-188h]
  unsigned int v88; // [rsp+18h] [rbp-188h]
  __int64 v89; // [rsp+18h] [rbp-188h]
  __int64 v90; // [rsp+20h] [rbp-180h]
  void *v91; // [rsp+28h] [rbp-178h]
  unsigned int v92; // [rsp+28h] [rbp-178h]
  unsigned int *v93; // [rsp+28h] [rbp-178h]
  __int64 v94; // [rsp+28h] [rbp-178h]
  _QWORD *v95; // [rsp+30h] [rbp-170h]
  _QWORD *v96; // [rsp+38h] [rbp-168h]
  _QWORD *v97; // [rsp+40h] [rbp-160h]
  _QWORD *v98; // [rsp+48h] [rbp-158h]
  _DWORD **v99; // [rsp+58h] [rbp-148h]
  void *v100; // [rsp+58h] [rbp-148h]
  struct _Unwind_Exception *v102; // [rsp+60h] [rbp-140h]
  struct _Unwind_Exception *v103; // [rsp+60h] [rbp-140h]
  __int64 v105; // [rsp+68h] [rbp-138h]
  int *v106; // [rsp+78h] [rbp-128h] BYREF
  __int64 v107; // [rsp+80h] [rbp-120h] BYREF
  _DWORD **v108; // [rsp+88h] [rbp-118h] BYREF
  __int64 v109[2]; // [rsp+90h] [rbp-110h] BYREF
  __int64 v110[2]; // [rsp+A0h] [rbp-100h] BYREF
  __int64 v111[2]; // [rsp+B0h] [rbp-F0h] BYREF
  __int64 v112[2]; // [rsp+C0h] [rbp-E0h] BYREF
  __int64 v113[2]; // [rsp+D0h] [rbp-D0h] BYREF
  __m128i v114; // [rsp+E0h] [rbp-C0h] BYREF
  _QWORD v115[2]; // [rsp+F0h] [rbp-B0h] BYREF
  _QWORD v116[2]; // [rsp+100h] [rbp-A0h] BYREF
  _QWORD v117[2]; // [rsp+110h] [rbp-90h] BYREF
  _QWORD v118[2]; // [rsp+120h] [rbp-80h] BYREF
  _QWORD v119[2]; // [rsp+130h] [rbp-70h] BYREF
  _QWORD v120[2]; // [rsp+140h] [rbp-60h] BYREF
  __m128i v121[5]; // [rsp+150h] [rbp-50h] BYREF

  v8 = *(_QWORD *)(a3 + 8);
  v9 = *(_QWORD *)(a1 + 24);
  if ( !v8 )
    return 0;
  if ( !*(_DWORD *)(v8 - 4) )
    return 0;
  v13 = *(_QWORD *)(a4 + 8);
  if ( !v13 || !*(_DWORD *)(v13 - 4) )
    return 0;
  if ( (unsigned __int8)sub_BB1010(a1) && !**a5 )
    return (unsigned int)sub_BBF540((_QWORD *)a1, **(_DWORD ***)(a3 + 8), a7);
  if ( (unsigned __int8)sub_BB1010(a1) && !**a6 )
    return (unsigned int)sub_BBF540((_QWORD *)a1, **(_DWORD ***)(a4 + 8), a7);
  if ( (unsigned __int8)sub_BB1010(a1) && !(unsigned __int8)sub_BB1010(a1) )
    return (unsigned int)sub_BFE080(a1, a2, a4, a3, a6, a5);
  v86 = sub_BB1010(a1);
  if ( !v86 )
    return 0;
  v18 = **(unsigned int ***)(a3 + 8);
  if ( v18 )
    ++v18[2];
  v19 = *a5;
  v115[0] = 0;
  v115[1] = 0;
  v116[0] = 1;
  v20 = qword_1C7F2C0;
  v116[1] = 0;
  if ( (v19[1] & 1) != 0 )
  {
    v100 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v115, v19);
    v20 = v100;
  }
  else
  {
    LODWORD(v115[0]) = *v19;
  }
  if ( (v19[5] & 1) != 0 )
  {
    sub_182C690(v20, v116, v19 + 4);
  }
  else
  {
    v21 = v19[4];
    BYTE4(v116[0]) &= ~1u;
    LODWORD(v116[0]) = v21;
  }
  v22 = *(_QWORD *)(a1 + 24);
  v118[0] = 1;
  v117[0] = 0;
  v83 = v22;
  v107 = v22;
  v117[1] = 0;
  v118[1] = 0;
  v95 = v118;
  sub_182CBA0(qword_1C7F2C0, v118);
  BYTE4(v118[0]) &= ~1u;
  LODWORD(v118[0]) = 1;
  v119[0] = 0;
  v119[1] = 0;
  v120[0] = 1;
  v120[1] = 0;
  v96 = v120;
  sub_182CBA0(qword_1C7F2C0, v120);
  BYTE4(v120[0]) &= ~1u;
  v23 = 0;
  v98 = v115;
  v97 = v119;
  LODWORD(v120[0]) = 1;
  v99 = nullptr;
  v24 = qword_1C7F2C0;
  if ( (v118[0] & 0x100000000LL) == 0 )
    goto LABEL_23;
LABEL_24:
  if ( (unsigned __int8)sub_1848D40(v24, v117, v115) )
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)(a4 + 8);
      if ( !v25 || v23 >= *(_DWORD *)(v25 - 4) )
        break;
      v26 = v23;
      v27 = *(_QWORD *)(v25 + 8LL * v23);
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      if ( v99 )
      {
        v28 = *((_DWORD *)v99 - 1);
        if ( v28 == *((_DWORD *)v99 - 2) )
        {
          v37 = (3 * v28 + 1) >> 1;
          v38 = 8 * v37 + 8;
          if ( 8 * v28 + 8 >= (unsigned int)v38 || v28 >= v37 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v121[0].m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v121);
            sub_233E40((__int64)v121);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v87 = (3 * v28 + 1) >> 1;
          v90 = v27;
          LOBYTE(v91) = v23;
          v39 = (unsigned int *)sub_186B300(v99 - 1, v38);
          v40 = v39[1];
          v41 = v39 + 2;
          v99 = (_DWORD **)(v39 + 2);
          v27 = v90;
          *v39 = v87;
          LODWORD(v39) = v40;
          v31 = (__int64 *)&v41[2 * v40];
          v26 = v23;
          v30 = (_DWORD)v39 + 1;
        }
        else
        {
          v29 = v28;
          v30 = v28 + 1;
          v31 = (__int64 *)&v99[v29];
        }
      }
      else
      {
        v90 = v27;
        LOBYTE(v91) = v23;
        v50 = (_QWORD *)sub_186B270(0x18u);
        *v50 = 2;
        v26 = v23;
        v99 = (_DWORD **)(v50 + 1);
        v31 = v50 + 1;
        v27 = v90;
        v30 = 1;
      }
      *v31 = v27;
      *((_DWORD *)v99 - 1) = v30;
      v32 = (__int64)&(*a6)[8 * v26];
      v33 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v32 + 4) & 1) != 0 )
      {
        v90 = v32;
        v91 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v119, v32);
        v33 = v91;
        v32 = v90;
      }
      else
      {
        v34 = *(_DWORD *)v32;
        BYTE4(v119[0]) &= ~1u;
        LODWORD(v119[0]) = v34;
      }
      if ( (*(_BYTE *)(v32 + 20) & 1) != 0 )
      {
        sub_182C690(v33, v120, v32 + 16);
      }
      else
      {
        v35 = *(_DWORD *)(v32 + 16);
        BYTE4(v120[0]) &= ~1u;
        LODWORD(v120[0]) = v35;
      }
      v36 = qword_1C7F2C0;
      if ( LODWORD(v119[0]) )
      {
        if ( LODWORD(v117[0]) )
        {
          if ( (v118[0] & 0x100000000LL) != 0
            || LODWORD(v118[0]) != 1
            || (v120[0] & 0x100000000LL) != 0
            || LODWORD(v120[0]) != 1 )
          {
            sub_1851D20(qword_1C7F2C0, v117, v119, v117);
          }
          else
          {
            v91 = qword_1C7F2C0;
            sub_1831A80(qword_1C7F2C0, v117, v119, v117);
            sub_182CBA0(v91, v118);
            BYTE4(v118[0]) &= ~1u;
            LODWORD(v118[0]) = 1;
          }
        }
        else
        {
          if ( (v119[0] & 0x100000000LL) != 0 )
          {
            v91 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v117, v119);
            v36 = v91;
          }
          else
          {
            BYTE4(v117[0]) &= ~1u;
            LODWORD(v117[0]) = v119[0];
          }
          if ( (v120[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v36, v118, v120);
          }
          else
          {
            BYTE4(v118[0]) &= ~1u;
            LODWORD(v118[0]) = v120[0];
          }
        }
      }
      else
      {
        if ( (v117[0] & 0x100000000LL) != 0 )
        {
          v91 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v117, v117);
          v36 = v91;
        }
        else
        {
          BYTE4(v117[0]) &= ~1u;
        }
        if ( (v118[0] & 0x100000000LL) != 0 )
          sub_182C690(v36, v118, v118);
        else
          BYTE4(v118[0]) &= ~1u;
      }
      ++v23;
      v24 = qword_1C7F2C0;
      if ( (v118[0] & 0x100000000LL) != 0 )
        goto LABEL_24;
LABEL_23:
      if ( LODWORD(v118[0]) != 1 || (v116[0] & 0x100000000LL) != 0 || LODWORD(v116[0]) != 1 )
        goto LABEL_24;
      if ( (v117[0] & 0x100000000LL) != 0 || (v115[0] & 0x100000000LL) != 0 )
      {
        if ( (int)sub_182C7B0(v24, v117, v115) >= 0 )
          break;
      }
      else if ( SLODWORD(v117[0]) >= SLODWORD(v115[0]) )
      {
        break;
      }
    }
  }
  if ( !v99 )
  {
    v105 = MEMORY[0x7FFFFFFF8];
    if ( MEMORY[0x7FFFFFFF8] )
    {
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v45 = (_DWORD *)MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_57:
      v46 = v45[2]-- == 1;
      if ( v46 )
        sub_15D7BC0(v83, v45);
      goto LABEL_59;
    }
    --MEMORY[0xFFFFFFFFFFFFFFFC];
    goto LABEL_94;
  }
  v42 = (unsigned int)(*((_DWORD *)v99 - 1) - 1);
  v43 = v99[v42];
  v105 = (__int64)v43;
  if ( !v43 )
  {
    *((_DWORD *)v99 - 1) = v42;
LABEL_94:
    v105 = 0;
    goto LABEL_59;
  }
  ++v43[2];
  v44 = (unsigned int)(*((_DWORD *)v99 - 1) - 1);
  LODWORD(v91) = *((_DWORD *)v99 - 1);
  v45 = v99[v44];
  *((_DWORD *)v99 - 1) = v44;
  if ( v45 )
    goto LABEL_57;
LABEL_59:
  v10 = sub_BB1010(a1);
  if ( !(_BYTE)v10 )
  {
    if ( *(_WORD *)(v105 + 4) )
      goto LABEL_63;
    v47 = *(_DWORD **)(*(_QWORD *)(v105 + 16) + 24LL);
    if ( !v47 )
      goto LABEL_64;
    if ( *(_DWORD *)(a1 + 1744) != *v47 || v47[1] )
    {
LABEL_63:
      v47 = nullptr;
      goto LABEL_64;
    }
  }
  if ( v18 != (unsigned int *)v105 )
  {
    if ( !LODWORD(v119[0]) )
    {
      v10 = sub_BBF540((_QWORD *)a1, (_DWORD *)v105, a7);
      v47 = nullptr;
      goto LABEL_64;
    }
    v51 = sub_15D1F10(v18);
    v52 = *(_QWORD *)(a1 + 1736);
    v53 = *((_DWORD *)v99 - 1);
    if ( v53 )
    {
      if ( v53 == 1 )
      {
        v47 = *v99;
LABEL_104:
        if ( v47 )
          ++v47[2];
        sub_BB1EF0((__int64)v109, a1);
        sub_BB1EF0((__int64)v110, a1);
        sub_BB1EF0((__int64)v111, a1);
        sub_BB1E10(v121, a1);
        sub_993400(a1 + 2208, 0);
        v55 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
        v88 = sub_BF5550(a1 + 2184, v55, v56, v57, v58, v59) ^ 1;
        sub_BF6100(v121[0].m128i_i64[0], v121[0].m128i_i64[1]);
        sub_BB1E10(&v114, a1);
        sub_BB1E10(v121, a1);
        v84 = v121[0].m128i_i32[0];
        sub_993400(a1 + 2208, 0);
        v60 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
        v92 = sub_BF5550(a1 + 2184, v60, v61, v62, v63, v64);
        sub_BF6100(v121[0].m128i_i64[0], v121[0].m128i_i64[1]);
        sub_BF6100(v114.m128i_i64[0], v114.m128i_i64[1]);
        v106 = nullptr;
        v65 = sub_186B270(0x10u);
        v66 = *(_QWORD *)(a1 + 16);
        v67 = _mm_cvtsi32_si128(v92);
        v106 = (int *)(v65 + 8);
        *(_QWORD *)v65 = 0x200000002LL;
        *(_QWORD *)(v65 + 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v88), v67).m128i_u64[0];
        v68 = *(_QWORD *)(v66 + 8848);
        if ( *(_BYTE *)(v68 + v88) != 1 || *(_BYTE *)(v68 + (unsigned int)_mm_cvtsi128_si32(v67)) != 1 )
        {
          sub_9936C0(v66, v88 >> 1);
          sub_9936C0(*(_QWORD *)(a1 + 16), v92 >> 1);
LABEL_109:
          if ( v106 )
            sub_186B220(v106 - 2);
          sub_BF6100(v111[0], v111[1]);
          sub_BF6100(v110[0], v110[1]);
          sub_BF6100(v109[0], v109[1]);
          v10 = v86;
          goto LABEL_64;
        }
        if ( *(_WORD *)(v105 + 4)
          || (v72 = *(_DWORD **)(*(_QWORD *)(v105 + 16) + 24LL)) == nullptr
          || *(_DWORD *)(a1 + 1744) != *v72
          || v72[1] )
        {
          sub_1407560((unsigned int)v112, a1 + 1848, a1 + 2040, (_DWORD)v18, (_DWORD)v47, v105, 0, 0, 1);
          sub_1407560((unsigned int)v113, a1 + 1848, a1 + 2048, (_DWORD)v18, (_DWORD)v47, v105, 0, 0, 1);
          sub_BCEE10(&v114, a1);
          v89 = v114.m128i_i64[1];
          v93 = (unsigned int *)v114.m128i_i64[0];
          sub_BCEE10(v121, a1);
          v73 = v121[0];
          sub_BC5010(a1, a2, &v106, v18, v93, 1);
          sub_BC5010(a1, a2, &v106, (unsigned int *)v105, (unsigned int *)v73.m128i_i64[0], 1);
          sub_BF6100(v73.m128i_i64[0], v73.m128i_i64[1]);
          sub_BF6100((__int64)v93, v89);
          sub_BF6100(v113[0], v113[1]);
          sub_BF6100(v112[0], v112[1]);
          goto LABEL_109;
        }
        v113[0] = v105;
        ++*(_DWORD *)(v105 + 8);
        v108 = v99;
        sub_BF9A70(&v108, v113);
        v99 = v108;
        v74 = sub_15D1F10(v105);
        v75 = *(_QWORD *)(a1 + 1736);
        v94 = *(_QWORD *)(a1 + 24);
        if ( v99 && (v76 = *((_DWORD *)v99 - 1)) != 0 )
        {
          if ( v76 == 1 )
          {
            v78 = *v99;
            goto LABEL_128;
          }
          v77 = sub_15E1AF0(v75);
        }
        else
        {
          v79 = sub_15D2D60(v75, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v74);
          v77 = sub_15DC610(
                  v75,
                  v79,
                  0,
                  0,
                  v80,
                  v81,
                  (int)&v114,
                  v84,
                  v85,
                  v88,
                  (int)a1 + 2208,
                  v94,
                  (int)v95,
                  (int)v96,
                  (int)v97,
                  v98);
        }
        v78 = (unsigned int *)v77;
LABEL_128:
        if ( v78 )
          ++v78[2];
        sub_BC5010(a1, a2, &v106, v18, v78, 1);
        sub_BF6100((__int64)v78, v94);
        goto LABEL_109;
      }
      v54 = sub_15E1AF0(*(_QWORD *)(a1 + 1736));
    }
    else
    {
      v69 = sub_15D2D60(v52, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v51);
      v54 = sub_15DC610(
              v52,
              v69,
              0,
              0,
              v70,
              v71,
              v82,
              v83,
              v85,
              v87,
              v90,
              (char)v91,
              (int)v118,
              (int)v120,
              (int)v119,
              v115);
    }
    v47 = (_DWORD *)v54;
    goto LABEL_104;
  }
  v47 = nullptr;
  v10 = 0;
LABEL_64:
  v102 = (struct _Unwind_Exception *)qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v97);
  sub_182CBA0(v102, v96);
  v103 = (struct _Unwind_Exception *)qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v117);
  sub_182CBA0(v103, v95);
  v108 = v99;
  sub_2334C0(&v107);
  v48 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v98);
  sub_182CBA0(v48, v116);
  if ( v47 )
  {
    v46 = v47[2]-- == 1;
    if ( v46 )
      sub_15D7BC0(v9, v47);
  }
  if ( v105 )
  {
    v49 = *(_DWORD *)(v105 + 8);
    *(_DWORD *)(v105 + 8) = v49 - 1;
    if ( v49 == 1 )
      sub_15D7BC0(v9, v105);
  }
  if ( v18 )
  {
    v46 = v18[2]-- == 1;
    if ( v46 )
      sub_15D7BC0(v9, v18);
  }
  return v10;
}

