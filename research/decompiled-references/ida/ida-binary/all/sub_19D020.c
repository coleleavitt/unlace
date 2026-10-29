__int64 __fastcall sub_19D020(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  void (__fastcall **v15)(__int64, __int64, __int16 *); // rax
  __int64 (__fastcall *v16)(__int64); // rax
  __int64 v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  void (__fastcall **v22)(__int64, __int64, __int16 *); // rax
  __int64 (__fastcall *v23)(__int64); // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _BOOL4 v27; // ebp
  __int64 result; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r12
  _BYTE *v35; // rbp
  _BYTE *v36; // r8
  _BYTE *v37; // r15
  __int64 (__fastcall *v38)(__int64); // rax
  __int64 *v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  __int64 v48; // rdi
  const char *v49; // rdx
  unsigned int v50; // edx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __m128 v56; // xmm4
  __m128 v57; // xmm5
  unsigned int v58; // eax
  unsigned int v59; // ebp
  const char *v60; // rsi
  void (__fastcall **v61)(__int64, __int64, __int16 *); // rax
  void (__fastcall **v62)(__int64, __int64, __int16 *); // rax
  void (__fastcall *v63)(__int64, __int64, __int16 *); // rax
  unsigned int *v64; // r14
  __int64 v65; // rsi
  void (__fastcall **v66)(__int64, __int64, __int16 *); // rax
  double v67; // xmm0_8
  __int64 v68; // rdi
  __int64 (__fastcall *v69)(__int64); // rax
  _QWORD *v70; // r12
  __int64 bpt_kernel_interface; // rax
  char v72; // r13
  _QWORD *v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // r15
  _QWORD *v80; // r8
  unsigned int v81; // eax
  _QWORD *v82; // rdi
  __int64 v83; // rax
  _QWORD *v84; // r13
  char *v85; // r13
  const char *v86; // r14
  __int64 v87; // rax
  double (__fastcall **v88)(__int64, __int64, unsigned __int64 *); // rax
  const char *v89; // rsi
  __m128 v90; // xmm4
  __m128 v91; // xmm5
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdi
  __int64 v98; // rax
  _BOOL8 v99; // rdx
  __int64 v100; // rax
  unsigned __int64 *v101; // rdi
  __int64 debug_name; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  char *v105; // r8
  _QWORD *v106; // r14
  __int64 v107; // r13
  __int64 v108; // rax
  __int64 flags; // rax
  __int64 v110; // rax
  unsigned __int64 *v111; // r14
  __int64 nlist_idx; // rax
  unsigned __int64 nlist_ea; // rax
  char v114; // [rsp+0h] [rbp-98h]
  unsigned int v115; // [rsp+8h] [rbp-90h]
  _BYTE *v116; // [rsp+8h] [rbp-90h]
  char *v117; // [rsp+8h] [rbp-90h]
  _BYTE *v118; // [rsp+8h] [rbp-90h]
  __int16 v119; // [rsp+14h] [rbp-84h] BYREF
  __int16 v120; // [rsp+16h] [rbp-82h] BYREF
  _QWORD *v121; // [rsp+18h] [rbp-80h] BYREF
  __int64 v122; // [rsp+20h] [rbp-78h] BYREF
  __int128 v123; // [rsp+28h] [rbp-70h]
  unsigned __int64 v124; // [rsp+40h] [rbp-58h] BYREF
  __int128 v125; // [rsp+48h] [rbp-50h]
  unsigned __int64 v126; // [rsp+58h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  if ( a1 == -1 )
  {
    sub_19D020(5, a2, a3, a4, a5, a6);
    sub_19D020(21, a2, v18, v19, v20, v21);
    v22 = *(void (__fastcall ***)(__int64, __int64, __int16 *))a2;
    v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
    if ( v23 != form_actions_impl_t__::vfunc_9 )
    {
      v23(a2);
      v22 = *(void (__fastcall ***)(__int64, __int64, __int16 *))a2;
    }
LABEL_8:
    if ( dbg && (*(_BYTE *)(dbg + 34LL) & 4) == 0 )
    {
      v27 = 0;
    }
    else
    {
      v124 = 0;
      v125 = 0;
      (*v22)(a2, 2, (__int16 *)&v124);
      if ( (unsigned __int64)v125 <= 1 )
      {
        v27 = 0;
      }
      else
      {
        v24 = dbg;
        if ( dbg )
        {
          v27 = 1;
          if ( (*(_QWORD *)(dbg + 32LL) & 0x8000000010LL) == 0 )
            v27 = (((unsigned int)sub_1991F0((void (__fastcall ***)(_QWORD, __int64, __int16 *))a2) - 4) & 0xFFFFFFFB) == 0;
        }
        else
        {
          v27 = 1;
        }
      }
      if ( v124 )
      {
        *(_QWORD *)&v125 = 0;
        qfree(v124, 2, v24, v25, v26);
      }
      v22 = *(void (__fastcall ***)(__int64, __int64, __int16 *))a2;
    }
    v22[2](a2, 18, (__int16 *)v27);
    return 1;
  }
  v15 = *(void (__fastcall ***)(__int64, __int64, __int16 *))a2;
  if ( a1 != -2 )
  {
    v16 = (__int64 (__fastcall *)(__int64))v15[9];
    if ( v16 == form_actions_impl_t__::vfunc_9 )
      v17 = *(_QWORD *)(a2 + 32);
    else
      v17 = v16(a2);
    switch ( a1 )
    {
      case 2u:
      case 0xDu:
        v22 = *(void (__fastcall ***)(__int64, __int64, __int16 *))a2;
        goto LABEL_8;
      case 5u:
        v99 = 1;
        if ( dbg )
        {
          v99 = 0;
          if ( (*(_BYTE *)(dbg + 37LL) & 2) != 0 )
          {
            if ( *(_QWORD *)(dbg + 72LL) )
              v99 = *(_BYTE *)(dbg + 80LL) != 0;
          }
        }
        (*(void (__fastcall **)(__int64, __int64, _BOOL8))(*(_QWORD *)a2 + 16LL))(a2, 5, v99);
        (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 5, &v119);
        (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 13, v119 != 0);
        (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 17, v119 != 0);
        if ( v119 && *(_DWORD *)(*(_QWORD *)v17 + 64LL) == 4 )
          (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a2 + 8LL))(a2, 16, &v119);
        return 1;
      case 6u:
      case 7u:
      case 8u:
        (**(void (__fastcall ***)(__int64, _QWORD, __int16 *))a2)(a2, a1, &v119);
        if ( v119 )
        {
          v64 = (unsigned int *)&unk_5DF328;
          do
          {
            v65 = *v64++;
            LOWORD(v124) = (_DWORD)v65 == a1;
            (*(void (__fastcall **)(__int64, __int64, unsigned __int64 *))(*(_QWORD *)a2 + 8LL))(a2, v65, &v124);
          }
          while ( v64 != (unsigned int *)jpt_1A19F4 );
        }
        v66 = *(void (__fastcall ***)(__int64, __int64, __int16 *))a2;
        v67 = 0.0;
        v68 = a2;
        v123 = 0;
        v122 = 0;
        (*v66)(a2, 1, (__int16 *)&v122);
        v69 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
        if ( v69 == form_actions_impl_t__::vfunc_9 )
        {
          v70 = *(_QWORD **)(a2 + 32);
        }
        else
        {
          v68 = a2;
          v70 = (_QWORD *)v69(a2);
        }
        bpt_kernel_interface = get_bpt_kernel_interface(v68, 1);
        v72 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 232LL))(
                bpt_kernel_interface,
                *v70,
                v122,
                xmmword_8CC810);
        v73 = (_QWORD *)(&dword_0 + 3);
        v74 = a2;
        (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 3, &v120);
        v77 = 3;
        if ( (v120 & 0x10) == 0 )
        {
          v77 = 2;
          if ( (v120 & 8) == 0 )
            v77 = (v120 & 4) != 0;
        }
        v78 = *v70;
        if ( *(_DWORD *)(*v70 + 44LL) == v77 )
          goto LABEL_73;
        *(_DWORD *)(v78 + 44) = v77;
        if ( !v72 )
          goto LABEL_73;
        v79 = *v70;
        v80 = *(_QWORD **)(*v70 + 56LL);
        if ( v80 == (_QWORD *)-1LL )
        {
          v100 = v70[1];
          if ( !v100 || (v80 = *(_QWORD **)(v100 + 56), v80 == (_QWORD *)-1LL) )
            v80 = (_QWORD *)xmmword_8CC810;
        }
        v121 = v80;
        v81 = *(_DWORD *)(v79 + 44);
        if ( v81 == 2 )
        {
          v73 = &v121;
          v101 = &v124;
          v117 = (char *)v80;
          v124 = 0;
          v125 = 0;
          debug_name = get_debug_name(&v124, &v121, 3);
          v105 = v117;
          if ( debug_name <= 0 )
          {
            flags = get_flags_ex(v121, 4);
            v73 = v121;
            if ( (flags & 0x4000) != 0
              || (v101 = v121, v110 = getseg(v121), v105 = v117, (v111 = (unsigned __int64 *)v110) != nullptr)
              && (*(_WORD *)(v110 + 44) & 0x18) != 8
              && (v101 = v121, nlist_idx = get_nlist_idx(v121, v73, v103, v104, v117), v105 = v117, nlist_idx)
              && (v101 = (unsigned __int64 *)(nlist_idx - 1),
                  nlist_ea = get_nlist_ea(nlist_idx - 1, v73, v103, v104, v117),
                  v121 = (_QWORD *)nlist_ea,
                  v73 = (_QWORD *)nlist_ea,
                  v105 = v117,
                  nlist_ea >= *v111)
              && nlist_ea < v111[1] )
            {
              v101 = &v124;
              get_ea_name(&v124, v73, 0, 0);
              v105 = v117;
            }
          }
          if ( (unsigned __int64)v125 > 1 )
          {
            v106 = (_QWORD *)v124;
            v107 = v105 - (char *)v121;
            v108 = get_bpt_kernel_interface(v101, v73);
            v73 = v106;
            *(_DWORD *)(v79 + 40) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v108 + 72LL))(v108, v106);
            *(_QWORD *)(v79 + 32) = v107;
            *(_DWORD *)(v79 + 44) = 2;
          }
          else
          {
            *(_DWORD *)(v79 + 40) = 0;
            *(_QWORD *)(v79 + 32) = 0;
          }
          v74 = v124;
          if ( v124 )
          {
            *(_QWORD *)&v125 = 0;
            qfree(v124, v73, v103, v104, v105);
          }
        }
        else if ( v81 > 2 )
        {
          if ( v81 != 3 )
          {
LABEL_131:
            if ( !under_debugger )
              interr(41170, v73, v78, v75, v67);
            BUG();
          }
          *(_DWORD *)(v79 + 40) = 0;
          *(_QWORD *)(v79 + 32) = 0;
        }
        else if ( v81 )
        {
          v82 = v80;
          v83 = sub_235C00(v80);
          v84 = v121;
          if ( v83 )
          {
            v85 = (char *)v121 - *(_QWORD *)(v83 + 24);
            v86 = &s1;
            if ( *(_QWORD *)(v83 + 8) )
              v86 = *(const char **)v83;
            v74 = get_bpt_kernel_interface(v82, 3);
            v73 = v86;
            *(_DWORD *)(v79 + 40) = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v74 + 72LL))(v74, v86);
            *(_QWORD *)(v79 + 32) = v85;
            *(_DWORD *)(v79 + 44) = 1;
          }
          else
          {
            *(_DWORD *)(v79 + 40) = 0;
            v74 = 93;
            *(_QWORD *)(v79 + 32) = (char *)v84 - getinf(93);
          }
        }
        else
        {
          *(_QWORD *)(v79 + 32) = v80;
        }
        v87 = get_bpt_kernel_interface(v74, v73);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v87 + 224LL))(
          v87,
          *(_QWORD *)(*v70 + 32LL),
          *(_QWORD *)(*v70 + 40LL),
          &v122);
        v73 = (_QWORD *)(&dword_0 + 1);
        (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 1, &v122);
LABEL_73:
        if ( v122 )
        {
          *(_QWORD *)&v123 = 0;
          qfree(v122, v73, v78, v75, v76);
        }
        return 1;
      case 0xEu:
      case 0xFu:
      case 0x10u:
        if ( !byte_8CACA1 )
        {
          v62 = *(void (__fastcall ***)(__int64, __int64, __int16 *))a2;
          byte_8CACA1 = 1;
          LOWORD(v124) = 0;
          v63 = v62[1];
          if ( a1 == 16 )
          {
            v63(a2, 15, (__int16 *)&v124);
            (*(void (__fastcall **)(__int64, __int64, unsigned __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 14, &v124);
          }
          else
          {
            v63(a2, 16, (__int16 *)&v124);
          }
          byte_8CACA1 = 0;
        }
        return 1;
      case 0x13u:
      case 0x14u:
      case 0x15u:
        v61 = *(void (__fastcall ***)(__int64, __int64, __int16 *))a2;
        LOWORD(v122) = 0;
        LOWORD(v121) = 0;
        (*v61)(a2, 19, (__int16 *)&v121);
        (**(void (__fastcall ***)(__int64, __int64, __int64 *))a2)(a2, 20, &v122);
        (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(
          a2,
          21,
          (unsigned __int16)v122 + (unsigned __int16)v121 != 0);
        LOWORD(v124) = 0;
        if ( a1 == 19 )
        {
          if ( (_WORD)v122 == 1 )
            (*(void (__fastcall **)(__int64, __int64, unsigned __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 20, &v124);
        }
        else
        {
          if ( a1 != 20 )
            return 1;
          if ( (_WORD)v121 == 1 )
            (*(void (__fastcall **)(__int64, __int64, unsigned __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 19, &v124);
        }
        (*(void (__fastcall **)(__int64, __int64, unsigned __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 10, &v124);
        return 1;
      case 0x18u:
        v88 = *(double (__fastcall ***)(__int64, __int64, unsigned __int64 *))a2;
        v125 = 0;
        v124 = 0;
        v67 = (*v88)(a2, 2, &v124);
        v89 = (const char *)&qword_8CACB0;
        LODWORD(v122) = *(_DWORD *)(*(_QWORD *)v17 + 72LL) >> 28;
        if ( !(unsigned __int8)sub_19A9C0(
                                 &v124,
                                 (__int64)&qword_8CACB0,
                                 (int *)&v122,
                                 v67,
                                 a8,
                                 a9,
                                 a10,
                                 v90,
                                 v91,
                                 a13,
                                 a14) )
          goto LABEL_80;
        v73 = (_QWORD *)(&dword_0 + 2);
        (*(void (__fastcall **)(__int64, __int64, unsigned __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 2, &v124);
        v97 = *(_QWORD *)v17;
        if ( (int)v122 < (unsigned __int64)xmmword_8CACB8 )
        {
          v89 = &s1;
          v98 = qword_8CACB0 + 24LL * (int)v122;
          if ( *(_QWORD *)(v98 + 8) )
            v89 = *(const char **)v98;
          sub_199E60(v97, v89);
LABEL_80:
          if ( v124 )
          {
            *(_QWORD *)&v125 = 0;
            qfree(v124, v89, v92, v93, v94);
          }
          return 1;
        }
        sub_199400(v67, v97, 2, v95, v96);
        goto LABEL_131;
      default:
        return 1;
    }
  }
  v29 = 1;
  v30 = a2;
  v124 = 0;
  v125 = 0;
  (*v15)(a2, 1, (__int16 *)&v124);
  v33 = v125;
  if ( (unsigned __int64)v125 > 1 )
  {
    v34 = v124;
    v35 = (_BYTE *)(v124 + v125 - 1);
    if ( v124 < (unsigned __int64)v35 )
    {
      while ( 1 )
      {
        v30 = (unsigned int)(char)*(v35 - 1);
        if ( (unsigned int)v30 > 0x7F || !isspace(v30) )
          break;
        if ( (_BYTE *)v34 == --v35 )
          goto LABEL_91;
      }
    }
    v36 = &v35[-v34];
    if ( v35 == (_BYTE *)v34 )
    {
LABEL_91:
      if ( v34 )
      {
        *(_QWORD *)&v125 = 0;
        v30 = v34;
        qfree(v34, 1, v31, v32, v36);
        v124 = 0;
        *((_QWORD *)&v125 + 1) = 0;
      }
    }
    else
    {
      v37 = v36 + 1;
      if ( v33 < (unsigned __int64)(v36 + 1) )
      {
        if ( *((_QWORD *)&v125 + 1) < (unsigned __int64)v37 )
        {
          v118 = &v35[-v34];
          v124 = qvector_reserve(&v124, v34, v36 + 1, 1);
          v33 = v125;
          v34 = v124;
          v36 = v118;
        }
        v30 = v34 + v33;
        v29 = 0;
        v116 = v36;
        memset((void *)(v34 + v33), 0, (size_t)&v37[-v33]);
        *(_QWORD *)&v125 = v37;
        v35 = &v116[v124];
      }
      else if ( (_BYTE *)v33 != v36 + 1 )
      {
        *(_QWORD *)&v125 = v36 + 1;
      }
      *v35 = 0;
    }
  }
  v38 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v38 == form_actions_impl_t__::vfunc_9 )
  {
    v39 = *(__int64 **)(a2 + 32);
  }
  else
  {
    v30 = a2;
    v39 = (__int64 *)v38(a2);
  }
  v40 = get_bpt_kernel_interface(v30, v29);
  v41 = *v39;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(*(_QWORD *)v40 + 232LL))(
          v40,
          *v39,
          v124,
          xmmword_8CC810) )
  {
    sub_169630(
      (int)"Wrong breakpoint location",
      v41,
      v42,
      v43,
      v44,
      v45,
      (__m128)0LL,
      a8,
      a9,
      a10,
      v46,
      v47,
      a13,
      a14,
      v114);
    v60 = (_BYTE *)(&dword_0 + 1);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 1);
    goto LABEL_41;
  }
  (**(void (__fastcall ***)(__int64, __int64, unsigned __int64 *))a2)(a2, 2, &v124);
  v48 = get_bpt_kernel_interface(a2, 2);
  v49 = &s1;
  if ( (_QWORD)v125 )
    v49 = (const char *)v124;
  (*(void (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)v48 + 96LL))(v48, *v39, v49);
  (**(void (__fastcall ***)(__int64, __int64, __int64 *))a2)(a2, 17, &v122);
  *(_DWORD *)(*v39 + 80) = v122;
  (**(void (__fastcall ***)(__int64, __int64, _QWORD **))a2)(a2, 18, &v121);
  v50 = *(_DWORD *)(*v39 + 72) & 0xFFFFFFEF;
  if ( (_WORD)v121 )
    v50 = *(_DWORD *)(*v39 + 72) | 0x10;
  *(_DWORD *)(*v39 + 72) = v50;
  v51 = sub_1991F0((void (__fastcall ***)(_QWORD, __int64, __int16 *))a2);
  if ( v51 == -1 )
  {
    v59 = 15;
    v60 = "Please select at least one hardware breakpoint mode (read, write or exec)";
    goto LABEL_39;
  }
  *(_DWORD *)(*v39 + 64) = v51;
  v58 = sub_19CF90(*v39, 0.0, a8, a9, a10, *(double *)v56.m128_u64, *(double *)v57.m128_u64, a13, a14);
  v59 = v58;
  if ( v58 == 2 )
  {
LABEL_40:
    v60 = (const char *)v59;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, v59);
LABEL_41:
    result = 0;
    goto LABEL_42;
  }
  if ( v58 == 5 )
  {
    v60 = "Unsupported breakpoint type";
    goto LABEL_39;
  }
  v60 = "Sorry, cannot set this breakpoint";
  if ( v58 == 1 )
  {
LABEL_39:
    sub_169630(
      (int)"ICON ERROR\nAUTOHIDE NONE\n%s",
      (__int64)v60,
      v52,
      v53,
      v54,
      v55,
      (__m128)0LL,
      a8,
      a9,
      a10,
      v56,
      v57,
      a13,
      a14,
      v114);
    goto LABEL_40;
  }
  result = 1;
LABEL_42:
  if ( v124 )
  {
    v115 = result;
    *(_QWORD *)&v125 = 0;
    qfree(v124, v60, v52, v53, v54);
    return v115;
  }
  return result;
}
