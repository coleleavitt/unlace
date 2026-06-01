__int64 __fastcall sub_684C20(__int64 *a1, __int64 *a2, unsigned int **a3, __m128 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int **v7; // r12
  unsigned int j; // ebx
  unsigned int v9; // r13d
  _QWORD *v10; // rbx
  _DWORD *(__fastcall *v11)(__int64, _DWORD **); // rax
  __int64 v12; // rax
  void (__fastcall ***v13)(void *); // r13
  bool v14; // zf
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r15
  _QWORD *v22; // rax
  unsigned int **v23; // r14
  int v24; // eax
  unsigned int *v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // eax
  _QWORD *v28; // r8
  _QWORD *v29; // r13
  _QWORD *v30; // r14
  _QWORD *v31; // rax
  __int64 v32; // r15
  __int64 v33; // rdx
  _QWORD *v34; // rdx
  std::ios_base *v35; // rdi
  int v36; // esi
  unsigned int v37; // eax
  _QWORD *v38; // rsi
  __int64 *(__fastcall *v39)(__int64 *, __int64); // rax
  signed __int64 v40; // r12
  _BYTE *v41; // r15
  double *v42; // rax
  double *v43; // rdi
  size_t v44; // rdx
  double v45; // rcx
  unsigned int v47; // ecx
  size_t v48; // rsi
  unsigned int *v49; // rax
  _DWORD *v50; // rax
  __int64 *v51; // r13
  __int64 (__fastcall *v52)(__int64, __int64 *); // rax
  __int64 *v53; // r14
  __int64 (__fastcall *v54)(__int64, __int64 *); // rdx
  __int64 *v55; // r15
  __int64 (__fastcall *v56)(__int64, __int64 *); // rax
  _QWORD **v57; // r8
  __int64 (__fastcall *v58)(__int64, __int64 *); // rdx
  struct _Unwind_Exception *v59; // rax
  struct _Unwind_Exception *v60; // rcx
  int v61; // edx
  struct _Unwind_Exception *v62; // r8
  __int64 v63; // r9
  unsigned int *v64; // rdx
  __int64 v65; // rdi
  _Unwind_Word private_2; // rcx
  unsigned int **v67; // r10
  unsigned int *v68; // rsi
  __int64 v69; // rdx
  _DWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 *v73; // rax
  unsigned int private_2_high; // r14d
  __int64 v75; // rdx
  struct _Unwind_Exception *v76; // rdi
  _Unwind_Exception_Class *v77; // rax
  _Unwind_Exception_Class exception_class; // r13
  unsigned int v79; // r14d
  unsigned int v80; // eax
  __int64 v81; // r14
  __int64 v82; // r15
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // rax
  unsigned int *v87; // rbx
  int v88; // edx
  __int64 v89; // r8
  unsigned int *v90; // rdx
  __int64 v91; // rdi
  __int64 v92; // rcx
  struct _Unwind_Exception *v93; // r9
  unsigned int *v94; // rsi
  __int64 v95; // rdx
  _DWORD *v96; // rax
  unsigned int i; // ebx
  __int64 v98; // rdi
  int v99; // edx
  __int64 v100; // r15
  unsigned int *v101; // rdx
  __int64 v102; // rdi
  __int64 v103; // rcx
  struct _Unwind_Exception *v104; // r9
  unsigned int *v105; // rsi
  __int64 v106; // rdx
  _DWORD *v107; // rax
  int v108; // edx
  __int64 v109; // r14
  unsigned int *v110; // r15
  __int64 v111; // rdi
  __int64 v112; // rcx
  unsigned int *v113; // rsi
  __int64 v114; // rdi
  _DWORD *v115; // rax
  unsigned int **v116; // rdx
  __int64 v117; // r13
  unsigned int *v118; // r15
  __int64 v119; // rdi
  unsigned int **v120; // r14
  __int64 v121; // rcx
  unsigned int *v122; // rsi
  __int64 v123; // rax
  _DWORD *v124; // rax
  double *v125; // rdi
  __int64 v126; // rax
  char **exception; // r12
  __int64 v128; // rdx
  unsigned int v129; // [rsp+0h] [rbp-E8h]
  struct _Unwind_Exception *v130; // [rsp+0h] [rbp-E8h]
  struct _Unwind_Exception *v131; // [rsp+0h] [rbp-E8h]
  struct _Unwind_Exception *v132; // [rsp+0h] [rbp-E8h]
  unsigned int *v133; // [rsp+0h] [rbp-E8h]
  struct _Unwind_Exception *v134; // [rsp+0h] [rbp-E8h]
  unsigned int *v135; // [rsp+0h] [rbp-E8h]
  struct _Unwind_Exception *v136; // [rsp+0h] [rbp-E8h]
  unsigned int *v137; // [rsp+0h] [rbp-E8h]
  unsigned int **v138; // [rsp+8h] [rbp-E0h]
  __int64 v139; // [rsp+8h] [rbp-E0h]
  _Unwind_Exception_Class v140; // [rsp+8h] [rbp-E0h]
  unsigned int **v141; // [rsp+8h] [rbp-E0h]
  struct _Unwind_Exception *v142; // [rsp+8h] [rbp-E0h]
  unsigned int v144; // [rsp+24h] [rbp-C4h]
  unsigned int *v145; // [rsp+30h] [rbp-B8h]
  _Unwind_Exception_Class v146; // [rsp+30h] [rbp-B8h]
  __int64 v147; // [rsp+30h] [rbp-B8h]
  __int64 *p_private_1; // [rsp+40h] [rbp-A8h]
  __int64 v149; // [rsp+40h] [rbp-A8h]
  __int64 v150; // [rsp+48h] [rbp-A0h]
  __int64 v151; // [rsp+50h] [rbp-98h] BYREF
  __int64 v152; // [rsp+58h] [rbp-90h] BYREF
  __int64 v153; // [rsp+60h] [rbp-88h] BYREF
  struct _Unwind_Exception *v154; // [rsp+68h] [rbp-80h]
  __int64 v155[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v156; // [rsp+80h] [rbp-68h] BYREF
  unsigned int *v157; // [rsp+88h] [rbp-60h] BYREF
  void *v158; // [rsp+90h] [rbp-58h] BYREF
  size_t n; // [rsp+98h] [rbp-50h]
  double src[9]; // [rsp+A0h] [rbp-48h] BYREF

  v5 = (__int64)a1;
  v144 = (unsigned int)a2;
  sub_677B20(a1);
  sub_6800E0(a1);
  v6 = a1[17];
  v154 = nullptr;
  v155[1] = 0;
  v153 = v6;
  v155[0] = v6;
  v7 = &a3[(unsigned int)a2];
  while ( 2 )
  {
    if ( (unsigned int)sub_180B130(a1) )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a4.m128_u64) )
      {
        sub_186A4C0(*(double *)a4.m128_u64);
        for ( i = 0; i < *(_DWORD *)(v5 + 408); ++i )
        {
          a1 = (__int64 *)sub_180B150(a1, a2);
          a2 = (__int64 *)" ";
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v98 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v98, ")\n");
      }
      else
      {
        for ( j = 0; j < *(_DWORD *)(v5 + 408); ++j )
        {
          a1 = (__int64 *)sub_180B150(a1, a2);
          a2 = (__int64 *)" ";
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    ++*(_DWORD *)(v5 + 124);
    sub_EE4F40(*(_QWORD *)(v5 + 136));
    v9 = sub_6837D0(v5, v144, a3);
    if ( v9 != 1 )
      goto LABEL_54;
    v10 = *(_QWORD **)(v5 + 1352);
    v156 = *(_QWORD *)(v5 + 136);
    v11 = *(_DWORD *(__fastcall **)(__int64, _DWORD **))(*v10 + 32LL);
    if ( v11 == sub_676820 )
    {
      v12 = v10[199];
      if ( v12 )
      {
        v13 = *(void (__fastcall ****)(void *))(v5 + 1592);
        ++*(_DWORD *)(v12 + 16);
        if ( !v13 || (v14 = *((_DWORD *)v13 + 4) == 1, --*((_DWORD *)v13 + 4), !v14) )
        {
          *(_QWORD *)(v5 + 1592) = v12;
          goto LABEL_13;
        }
      }
      else
      {
        v13 = *(void (__fastcall ****)(void *))(v5 + 1592);
        if ( !v13 || (v14 = *((_DWORD *)v13 + 4) == 1, --*((_DWORD *)v13 + 4), !v14) )
        {
          *(_QWORD *)(v5 + 1592) = 0;
          v12 = 0;
          goto LABEL_15;
        }
      }
      (**v13)(v13);
      sub_186B220(v13);
      v12 = v10[199];
      *(_QWORD *)(v5 + 1592) = v12;
    }
    else
    {
      v11((__int64)v10, (_DWORD **)(v5 + 1592));
      v12 = *(_QWORD *)(v5 + 1592);
    }
    if ( v12 )
    {
LABEL_13:
      v15 = v10[7];
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v5 + 1592);
        v12 = *(_QWORD *)(v5 + 1592);
      }
      goto LABEL_15;
    }
    v12 = 0;
LABEL_15:
    sub_1360B80(v12 + 128, 1);
    v157 = nullptr;
    sub_2FCDE0(&v156);
    v16 = *(_QWORD *)(v5 + 1576);
    v17 = 0x7FFFFFFF8LL;
    if ( v16 )
      v17 = 8LL * (unsigned int)(*(_DWORD *)(v16 - 4) - 1);
    v18 = *(_QWORD *)(v16 + v17);
    v151 = v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    sub_6761A0(&v157, &v151);
    v19 = v157;
    if ( !v144 )
    {
      v28 = *(_QWORD **)(v5 + 200);
      if ( v28 )
        goto LABEL_30;
LABEL_38:
      v35 = *(std::ios_base **)(v5 + 1360);
      v36 = 0;
      if ( v19 )
        goto LABEL_39;
      goto LABEL_40;
    }
    v20 = sub_67B850((__int64 *)(v5 + 144), *a3);
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    if ( !v19 )
    {
      v22 = (_QWORD *)sub_186B270(0x18u);
      v19 = (unsigned int *)(v22 + 1);
      v23 = a3;
      *v22 = 2;
      v24 = 1;
      v25 = v19;
      goto LABEL_24;
    }
    v23 = a3;
    while ( 1 )
    {
      v27 = *(v19 - 1);
      if ( v27 == *(v19 - 2) )
        break;
      ++v23;
      *(_QWORD *)&v19[2 * v27] = v21;
      *(v19 - 1) = v27 + 1;
      if ( v7 == v23 )
        goto LABEL_29;
LABEL_25:
      v26 = sub_67B850((__int64 *)(v5 + 144), *v23);
      v21 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
    }
    v47 = (3 * v27 + 1) >> 1;
    v48 = 8 * v47 + 8;
    if ( 8 * v27 + 8 >= (unsigned int)v48 || v27 >= v47 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_107EF6((__int64 *)&v158, "Overflow encountered when expanding vector", v128);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v158);
      sub_233E40((__int64)&v158);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v129 = (3 * v27 + 1) >> 1;
    v49 = (unsigned int *)sub_186B300(v19 - 2, v48);
    v19 = v49 + 2;
    *v49 = v129;
    LODWORD(v49) = v49[1];
    v25 = &v19[2 * (unsigned int)v49];
    v24 = (_DWORD)v49 + 1;
LABEL_24:
    ++v23;
    *(_QWORD *)v25 = v21;
    *(v19 - 1) = v24;
    if ( v7 != v23 )
      goto LABEL_25;
LABEL_29:
    v28 = *(_QWORD **)(v5 + 200);
    if ( v28 )
    {
LABEL_30:
      v29 = &v28[*((unsigned int *)v28 - 1)];
      if ( v29 != v28 )
      {
        v30 = v28;
        do
        {
          while ( 1 )
          {
            v31 = *(_QWORD **)(v5 + 1576);
            v32 = *v30;
            if ( v31 )
            {
              v33 = *((unsigned int *)v31 - 1);
              if ( (_DWORD)v33 )
                break;
            }
LABEL_58:
            if ( (unsigned __int8)sub_1374270(*(_QWORD *)(v5 + 1592), *v30) )
            {
              v152 = v32;
              if ( v32 )
                ++*(_DWORD *)(v32 + 8);
              v157 = v19;
              sub_6761A0(&v157, &v152);
            }
            else
            {
              v50 = (_DWORD *)sub_15E1A70(*(_QWORD *)(v5 + 136));
              v158 = v50;
              if ( v50 )
                ++v50[2];
              v157 = v19;
              sub_6761A0(&v157, &v158);
            }
            ++v30;
            v19 = v157;
            if ( v29 == v30 )
              goto LABEL_38;
          }
          v34 = &v31[v33];
          while ( v32 != *v31 )
          {
            if ( v34 == ++v31 )
              goto LABEL_58;
          }
          ++v30;
        }
        while ( v29 != v30 );
      }
      goto LABEL_38;
    }
    v35 = *(std::ios_base **)(v5 + 1360);
LABEL_39:
    v36 = *(v19 - 1);
LABEL_40:
    v37 = sub_E60CB0(v35, v36, (int)v19);
    v9 = v37;
    if ( v37 )
    {
      if ( v37 != -1 )
        goto LABEL_53;
      v51 = *(__int64 **)(v5 + 1360);
      v52 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v51 + 24);
      if ( v52 != sub_67E100 )
      {
        v52(*(_QWORD *)(v5 + 1360), &v153);
        v60 = v154;
LABEL_88:
        v71 = *(_QWORD *)(v5 + 1576);
        v72 = 0x7FFFFFFF8LL;
        if ( v71 )
          v72 = 8LL * (unsigned int)(*(_DWORD *)(v71 - 4) - 1);
        v73 = (__int64 *)(v72 + v71);
        if ( !v60 )
          goto LABEL_100;
LABEL_91:
        private_2_high = HIDWORD(v60[-1].private_2);
        v75 = *v73;
        if ( !private_2_high )
          goto LABEL_100;
        v76 = v60;
        v77 = &v60->exception_class + private_2_high;
        while ( 1 )
        {
          exception_class = v76->exception_class;
          if ( v75 == v76->exception_class )
            break;
          v76 = (struct _Unwind_Exception *)((char *)v76 + 8);
          if ( v76 == (struct _Unwind_Exception *)v77 )
            goto LABEL_177;
        }
        if ( &v76->exception_cleanup != (_Unwind_Exception_Cleanup_Fn *)v77 )
        {
          v131 = v60;
          memmove(v76, &v76->exception_cleanup, (char *)(v77 - 1) - (char *)v76);
          v60 = v131;
        }
        v79 = private_2_high - 1;
        HIDWORD(v60[-1].private_2) = v79;
        if ( exception_class )
        {
          v14 = (*(_DWORD *)(exception_class + 8))-- == 1;
          if ( v14 )
          {
            sub_15D7BC0(v153, exception_class);
            v60 = v154;
            if ( !v154 )
              goto LABEL_100;
          }
LABEL_177:
          v79 = HIDWORD(v60[-1].private_2);
        }
        if ( !v79 )
        {
LABEL_100:
          v157 = v19;
          sub_2334C0(&v156);
          a2 = &v153;
          a1 = (__int64 *)v5;
          v80 = sub_6840E0(v5, &v153, *(double *)a4.m128_u64);
          v9 = v80;
          switch ( v80 )
          {
            case 0u:
              goto LABEL_54;
            case 1u:
              a2 = &v153;
              a1 = (__int64 *)v5;
              v9 = sub_6806C0(v5, &v153, a4);
              if ( v9 == 1 )
                goto LABEL_54;
              break;
            case 0xFFFFFFFF:
              v81 = *(_QWORD *)(v5 + 136);
              v82 = v153;
              if ( v154 )
                v83 = HIDWORD(v154[-1].private_2);
              else
                v83 = 0;
              v84 = sub_15EC1C0(v153, v83);
              v85 = v84;
              if ( v84 )
                ++*(_DWORD *)(v84 + 8);
              v86 = sub_15E1A70(v81);
              v87 = (unsigned int *)v86;
              if ( v86 )
                ++*(_DWORD *)(v86 + 8);
              sub_675460(v85, v82);
              sub_67BEB0(v5, v87);
              a2 = (__int64 *)v81;
              a1 = (__int64 *)v87;
              sub_675460((__int64)v87, v81);
              break;
          }
          continue;
        }
        v117 = 8LL * (v79 - 1);
        while ( 1 )
        {
          v120 = (unsigned int **)((char *)v60 + v117);
          v121 = *(_QWORD *)(v5 + 184);
          v122 = *v120;
          if ( v121 )
          {
            v123 = *v122;
            if ( (unsigned int)v123 < *(_DWORD *)(v121 - 4) )
            {
              v118 = *(unsigned int **)(v121 + 8 * v123);
              if ( v118 )
                break;
            }
          }
          if ( *((_WORD *)v122 + 2) )
            goto LABEL_86;
          v124 = *(_DWORD **)(*((_QWORD *)v122 + 2) + 24LL);
          if ( !v124 || *v124 || v124[1] != 8 || v122[6] != 1 )
            goto LABEL_86;
          v118 = (unsigned int *)sub_15E1A70(*(_QWORD *)(v5 + 144));
          sub_67B850((__int64 *)(v5 + 144), v118);
          v119 = v153;
          v120 = (unsigned int **)((char *)v154 + v117);
          v122 = *(unsigned int **)((char *)&v154->exception_class + v117);
          if ( v118 )
            goto LABEL_182;
LABEL_183:
          if ( v122 )
          {
            v14 = v122[2]-- == 1;
            if ( v14 )
              sub_15D7BC0(v119, v122);
          }
          v117 -= 8;
          *v120 = v118;
          if ( v117 == -8 )
            goto LABEL_100;
          v60 = v154;
        }
        v119 = v153;
LABEL_182:
        ++v118[2];
        goto LABEL_183;
      }
      v53 = (__int64 *)v51[169];
      v54 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v53 + 24);
      if ( v54 == v52 )
      {
        v55 = (__int64 *)v53[169];
        v56 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v55 + 24);
        if ( v56 == v54 )
        {
          v57 = (_QWORD **)v55[169];
          v58 = (__int64 (__fastcall *)(__int64, __int64 *))(*v57)[3];
          if ( v58 == v56 )
          {
            v130 = (struct _Unwind_Exception *)v55[169];
            (*(void (__fastcall **)(_QWORD *, __int64 *))(*v57[169] + 24LL))(v57[169], &v153);
            v59 = v154;
            v60 = v154;
            if ( !v154 )
              goto LABEL_100;
            v61 = HIDWORD(v154[-1].private_2);
            if ( v61 )
            {
              v62 = v130;
              v63 = 8LL * (unsigned int)(v61 - 1);
              p_private_1 = (__int64 *)&v130[4].private_1;
              while ( 1 )
              {
                private_2 = v62[5].private_2;
                v67 = (unsigned int **)((char *)v59 + v63);
                v68 = *(unsigned int **)((char *)&v59->exception_class + v63);
                if ( private_2
                  && (v69 = *v68, (unsigned int)v69 < *(_DWORD *)(private_2 - 4))
                  && (v64 = *(unsigned int **)(private_2 + 8 * v69)) != nullptr )
                {
                  v65 = v153;
                }
                else
                {
                  if ( *((_WORD *)v68 + 2)
                    || (v70 = *(_DWORD **)(*((_QWORD *)v68 + 2) + 24LL)) == nullptr
                    || *v70
                    || v70[1] != 8
                    || v68[6] != 1 )
                  {
LABEL_86:
                    sub_1872CE0("");
                    sub_1873130(114, 365);
                  }
                  v147 = v63;
                  v142 = v62;
                  v137 = (unsigned int *)sub_15E1A70(v62[4].private_1);
                  sub_67B850(p_private_1, v137);
                  v59 = v154;
                  v63 = v147;
                  v64 = v137;
                  v65 = v153;
                  v67 = (unsigned int **)((char *)v154 + v147);
                  v62 = v142;
                  v68 = *(unsigned int **)((char *)&v154->exception_class + v147);
                  if ( !v137 )
                    goto LABEL_78;
                }
                ++v64[2];
LABEL_78:
                if ( v68 && (v14 = v68[2] == 1, --v68[2], v14) )
                {
                  v150 = v63;
                  v145 = v64;
                  v138 = v67;
                  v132 = v62;
                  sub_15D7BC0(v65, v68);
                  v59 = v154;
                  v63 = v150 - 8;
                  v62 = v132;
                  *v138 = v145;
                  if ( !v150 )
                    goto LABEL_112;
                }
                else
                {
                  v63 -= 8;
                  *v67 = v64;
                  if ( v63 == -8 )
                    goto LABEL_112;
                }
              }
            }
            goto LABEL_229;
          }
          v58(v55[169], &v153);
          v59 = v154;
LABEL_112:
          v60 = v59;
          if ( !v59 )
            goto LABEL_100;
          v88 = HIDWORD(v59[-1].private_2);
          if ( v88 )
          {
            v89 = 8LL * (unsigned int)(v88 - 1);
            while ( 1 )
            {
              v92 = v55[23];
              v93 = (struct _Unwind_Exception *)((char *)v59 + v89);
              v94 = *(unsigned int **)((char *)&v59->exception_class + v89);
              if ( v92 )
              {
                v95 = *v94;
                if ( (unsigned int)v95 < *(_DWORD *)(v92 - 4) )
                {
                  v90 = *(unsigned int **)(v92 + 8 * v95);
                  if ( v90 )
                    break;
                }
              }
              if ( *((_WORD *)v94 + 2) )
                goto LABEL_86;
              v96 = *(_DWORD **)(*((_QWORD *)v94 + 2) + 24LL);
              if ( !v96 || *v96 || v96[1] != 8 || v94[6] != 1 )
                goto LABEL_86;
              v139 = v89;
              v133 = (unsigned int *)sub_15E1A70(v55[18]);
              sub_67B850(v55 + 18, v133);
              v59 = v154;
              v89 = v139;
              v90 = v133;
              v91 = v153;
              v93 = (struct _Unwind_Exception *)((char *)v154 + v139);
              v94 = *(unsigned int **)((char *)&v154->exception_class + v139);
              if ( v133 )
                goto LABEL_117;
LABEL_118:
              if ( v94 && (v14 = v94[2] == 1, --v94[2], v14) )
              {
                v149 = v89;
                v140 = (_Unwind_Exception_Class)v90;
                v134 = v93;
                sub_15D7BC0(v91, v94);
                v59 = v154;
                v89 = v149 - 8;
                v134->exception_class = v140;
                if ( !v149 )
                  goto LABEL_139;
              }
              else
              {
                v89 -= 8;
                v93->exception_class = (_Unwind_Exception_Class)v90;
                if ( v89 == -8 )
                  goto LABEL_139;
              }
            }
            v91 = v153;
LABEL_117:
            ++v90[2];
            goto LABEL_118;
          }
LABEL_229:
          v126 = *(_QWORD *)(v5 + 1576);
          if ( !v126 )
            goto LABEL_100;
          v73 = (__int64 *)(v126 + 8LL * (unsigned int)(*(_DWORD *)(v126 - 4) - 1));
          goto LABEL_91;
        }
        v56(v53[169], &v153);
        v59 = v154;
LABEL_139:
        v60 = v59;
        if ( !v59 )
          goto LABEL_100;
        v99 = HIDWORD(v59[-1].private_2);
        if ( !v99 )
          goto LABEL_229;
        v100 = 8LL * (unsigned int)(v99 - 1);
        while ( 1 )
        {
          v103 = v53[23];
          v104 = (struct _Unwind_Exception *)((char *)v59 + v100);
          v105 = *(unsigned int **)((char *)&v59->exception_class + v100);
          if ( v103 )
          {
            v106 = *v105;
            if ( (unsigned int)v106 < *(_DWORD *)(v103 - 4) )
            {
              v101 = *(unsigned int **)(v103 + 8 * v106);
              if ( v101 )
                break;
            }
          }
          if ( *((_WORD *)v105 + 2) )
            goto LABEL_86;
          v107 = *(_DWORD **)(*((_QWORD *)v105 + 2) + 24LL);
          if ( !v107 || *v107 || v107[1] != 8 || v105[6] != 1 )
            goto LABEL_86;
          v135 = (unsigned int *)sub_15E1A70(v53[18]);
          sub_67B850(v53 + 18, v135);
          v59 = v154;
          v101 = v135;
          v102 = v153;
          v104 = (struct _Unwind_Exception *)((char *)v154 + v100);
          v105 = *(unsigned int **)((char *)&v154->exception_class + v100);
          if ( v135 )
            goto LABEL_144;
LABEL_145:
          if ( v105 && (v14 = v105[2] == 1, --v105[2], v14) )
          {
            v146 = (_Unwind_Exception_Class)v101;
            v136 = v104;
            sub_15D7BC0(v102, v105);
            v100 -= 8;
            v59 = v154;
            v136->exception_class = v146;
            if ( v100 == -8 )
              goto LABEL_158;
          }
          else
          {
            v100 -= 8;
            v104->exception_class = (_Unwind_Exception_Class)v101;
            if ( v100 == -8 )
              goto LABEL_158;
          }
        }
        v102 = v153;
LABEL_144:
        ++v101[2];
        goto LABEL_145;
      }
      v54(v51[169], &v153);
      v59 = v154;
LABEL_158:
      v60 = v59;
      if ( !v59 )
        goto LABEL_100;
      v108 = HIDWORD(v59[-1].private_2);
      if ( !v108 )
        goto LABEL_229;
      v109 = 8LL * (unsigned int)(v108 - 1);
      while ( 1 )
      {
        v112 = v51[23];
        v116 = (unsigned int **)((char *)v59 + v109);
        v113 = *(unsigned int **)((char *)&v59->exception_class + v109);
        if ( v112
          && (v114 = *v113, (unsigned int)v114 < *(_DWORD *)(v112 - 4))
          && (v110 = *(unsigned int **)(v112 + 8 * v114)) != nullptr )
        {
          v111 = v153;
        }
        else
        {
          if ( *((_WORD *)v113 + 2) )
            goto LABEL_86;
          v115 = *(_DWORD **)(*((_QWORD *)v113 + 2) + 24LL);
          if ( !v115 || *v115 || v115[1] != 8 || v113[6] != 1 )
            goto LABEL_86;
          v110 = (unsigned int *)sub_15E1A70(v51[18]);
          sub_67B850(v51 + 18, v110);
          v59 = v154;
          v111 = v153;
          v116 = (unsigned int **)((char *)v154 + v109);
          v113 = *(unsigned int **)((char *)&v154->exception_class + v109);
          if ( !v110 )
            goto LABEL_164;
        }
        ++v110[2];
LABEL_164:
        if ( v113 )
        {
          v14 = v113[2]-- == 1;
          if ( v14 )
          {
            v141 = v116;
            sub_15D7BC0(v111, v113);
            v59 = v154;
            v116 = v141;
          }
        }
        v109 -= 8;
        *v116 = v110;
        v60 = v59;
        if ( v109 == -8 )
          goto LABEL_88;
      }
    }
    break;
  }
  v38 = *(_QWORD **)(v5 + 1360);
  v39 = *(__int64 *(__fastcall **)(__int64 *, __int64))(*v38 + 48LL);
  if ( v39 == sub_676760 )
  {
    v40 = v38[201];
    v158 = src;
    v41 = (_BYTE *)v38[200];
    if ( (unsigned __int64)v40 > 0xF )
    {
      if ( v40 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( v40 + 1 < 0 )
        std::__throw_bad_alloc();
      v158 = (void *)operator new(v40 + 1);
      v125 = (double *)v158;
      *(_QWORD *)&src[0] = v40;
      goto LABEL_206;
    }
    if ( v40 == 1 )
    {
      LOBYTE(src[0]) = *v41;
LABEL_45:
      v42 = src;
    }
    else
    {
      if ( !v40 )
        goto LABEL_45;
      v125 = src;
LABEL_206:
      memcpy(v125, v41, v40);
      v42 = (double *)v158;
    }
    n = v40;
    *((_BYTE *)v42 + v40) = 0;
  }
  else
  {
    ((void (__fastcall *)(void **))v39)(&v158);
  }
  v43 = *(double **)(v5 + 1600);
  v44 = n;
  if ( v43 == (double *)(v5 + 1616) )
  {
    if ( v158 != src )
    {
      *(_QWORD *)(v5 + 1600) = v158;
      *(__m128 *)(v5 + 1608) = _mm_loadh_ps(src);
      goto LABEL_209;
    }
  }
  else if ( v158 != src )
  {
    v45 = *(double *)(v5 + 1616);
    *(_QWORD *)(v5 + 1600) = v158;
    *(__m128 *)(v5 + 1608) = _mm_loadh_ps(src);
    if ( v43 )
    {
      v158 = v43;
      src[0] = v45;
      goto LABEL_51;
    }
LABEL_209:
    v158 = src;
    v43 = src;
    goto LABEL_51;
  }
  if ( n )
  {
    if ( n == 1 )
      *(_BYTE *)v43 = LOBYTE(src[0]);
    else
      memcpy(v43, src, n);
    v44 = n;
    v43 = *(double **)(v5 + 1600);
  }
  *(_QWORD *)(v5 + 1608) = v44;
  *((_BYTE *)v43 + v44) = 0;
  v43 = (double *)v158;
LABEL_51:
  n = 0;
  *(_BYTE *)v43 = 0;
  if ( v158 != src )
    operator delete(v158, *(_QWORD *)&src[0] + 1LL);
LABEL_53:
  v157 = v19;
  sub_2334C0(&v156);
LABEL_54:
  sub_2334C0(v155);
  sub_2334C0(&v153);
  return v9;
}

