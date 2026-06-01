__int64 __fastcall sub_78C7C0(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, _BYTE *a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 result; // rax
  _QWORD *v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rdi
  void (__fastcall *v14)(__int64, __int64, int *, __int64 *); // rax
  const void *v15; // rdi
  void *v16; // rax
  bool v17; // zf
  const void *v18; // rdi
  char *v19; // rax
  const __m128i *v20; // rax
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edi
  _QWORD *v28; // rsi
  unsigned int v29; // edx
  _QWORD *v30; // r8
  __int64 v31; // rdx
  _QWORD *v32; // r9
  _QWORD *i; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // edx
  char *v38; // rsi
  __int64 v39; // rdx
  char *j; // rax
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 (__fastcall *v43)(__int64, unsigned __int8); // rax
  unsigned int v44; // r12d
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned int *v50; // rbx
  _QWORD *v51; // rax
  __int64 v52; // r13
  unsigned int v53; // edx
  char v54; // al
  char *v55; // rax
  __int64 v56; // rdi
  void (__fastcall *v57)(__int64, __int64, int *, __int64 *); // rax
  const void *v58; // rdi
  void *v59; // rax
  unsigned int v60; // ebp
  int v61; // ebp
  __int64 v62; // rax
  __int64 v63; // rax
  void *v64; // rax
  __int64 v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // r8
  __int64 v71; // r9
  _QWORD *v72; // rdx
  int *v73; // r14
  int *v74; // r12
  int v75; // eax
  __int64 v76; // rax
  _DWORD *v77; // rcx
  unsigned int v78; // ebx
  size_t v79; // rsi
  unsigned int *v80; // rax
  __int64 v81; // rax
  unsigned int v82; // r14d
  _QWORD *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rsi
  unsigned int v90; // eax
  unsigned int v91; // ebx
  size_t v92; // rsi
  unsigned int *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rax
  void *v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rdi
  __int64 v100; // rax
  void *v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rcx
  _QWORD *v104; // r8
  unsigned int v105; // r14d
  unsigned int v106; // r13d
  _QWORD *v107; // r14
  unsigned int v108; // ebx
  unsigned int v109; // ecx
  unsigned int *v110; // rax
  unsigned int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rcx
  _QWORD *v114; // rax
  _QWORD *v115; // rdx
  char **exception; // rbx
  __int64 v117; // [rsp+0h] [rbp-A8h]
  _BYTE *v118; // [rsp+8h] [rbp-A0h]
  int *v119; // [rsp+8h] [rbp-A0h]
  __int64 v120; // [rsp+8h] [rbp-A0h]
  unsigned int v121; // [rsp+8h] [rbp-A0h]
  _QWORD *v122; // [rsp+8h] [rbp-A0h]
  _QWORD *v123; // [rsp+8h] [rbp-A0h]
  _QWORD *v124; // [rsp+8h] [rbp-A0h]
  __int64 v125; // [rsp+10h] [rbp-98h]
  __int64 v126; // [rsp+18h] [rbp-90h]
  unsigned int *v127; // [rsp+18h] [rbp-90h]
  __int64 v128; // [rsp+18h] [rbp-90h]
  __int64 v129; // [rsp+20h] [rbp-88h]
  int v130; // [rsp+28h] [rbp-80h]
  unsigned __int8 v131; // [rsp+2Ch] [rbp-7Ch]
  int v132; // [rsp+34h] [rbp-74h] BYREF
  int v133; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v134; // [rsp+3Ch] [rbp-6Ch]
  __int64 v135; // [rsp+40h] [rbp-68h] BYREF
  __int64 v136; // [rsp+48h] [rbp-60h]
  unsigned __int64 v137; // [rsp+50h] [rbp-58h] BYREF
  __int64 v138; // [rsp+58h] [rbp-50h]

  v8 = a2;
  result = *(unsigned int *)(a2 + 24);
  v10 = *(_QWORD **)(a1 + 88);
  LODWORD(v125) = *(_DWORD *)(a2 + 24);
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 - 1);
    HIDWORD(v125) = v11 - result;
    if ( a3 )
    {
      if ( !a4 )
      {
        if ( (_DWORD)v125 )
        {
LABEL_5:
          v12 = 0;
          while ( 1 )
          {
            v17 = *(_BYTE *)(a1 + 273) == 0;
            v133 = *((_DWORD *)v10 + v12);
            if ( !v17 )
            {
              v18 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
              if ( v18 )
              {
                a5 = __dynamic_cast(
                       v18,
                       (const struct __class_type_info *)&`typeinfo for'sat::extension,
                       (const struct __class_type_info *)&`typeinfo for'euf::solver,
                       0);
                if ( !a5 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v137, "cannot convert to euf");
                  goto LABEL_163;
                }
              }
              else
              {
                v88 = sub_186B270(0x20E0u);
                v89 = *(_QWORD *)(a1 + 8);
                v118 = (_BYTE *)v88;
                v137 = 0;
                sub_7D2250(v88, v89, a1, &v137);
                sub_18572D0(&v137);
                (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 192) + 96LL))(*(_QWORD *)(a1 + 192), v118);
                a5 = v118;
              }
              if ( a5[168] )
              {
                v19 = (char *)sub_789F10(a1);
                sub_7F1790(v19 + 160, 1, &v133);
              }
            }
            v13 = *(_QWORD *)(a1 + 192);
            v14 = *(void (__fastcall **)(__int64, __int64, int *, __int64 *))(*(_QWORD *)v13 + 16LL);
            v135 = 0xFFFFFFFF00000000LL;
            v136 = 0;
            if ( (char *)v14 == (char *)sub_788610 )
            {
              v137 = 0xFFFFFFFF00000000LL;
              v138 = 0;
              sub_11C4C20(v13, 1, &v133, &v137, a5, a6, v117, v118, v125, v126);
            }
            else
            {
              v14(v13, 1, &v133, &v135);
            }
            if ( *(_BYTE *)(a1 + 274) )
            {
              v15 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
              if ( v15 )
              {
                v16 = __dynamic_cast(
                        v15,
                        (const struct __class_type_info *)&`typeinfo for'sat::extension,
                        (const struct __class_type_info *)&`typeinfo for'euf::solver,
                        0);
                if ( v16 )
                  sub_79B170(v16, 1, &v133);
              }
            }
            result = *(_QWORD *)(a1 + 88);
            ++v12;
            v10 = (_QWORD *)result;
            if ( (unsigned int)v12 >= (unsigned int)v125 )
              goto LABEL_30;
          }
        }
        goto LABEL_31;
      }
      if ( !(_DWORD)result )
        goto LABEL_29;
LABEL_19:
      if ( (unsigned int)v125 <= 3 )
      {
        v23 = 0;
      }
      else
      {
        v20 = *(const __m128i **)(a1 + 88);
        v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
        do
        {
          v22 = _mm_loadu_si128(v20++);
          v20[-1] = _mm_xor_si128(v22, v21);
        }
        while ( v20 != (const __m128i *)&v10[2 * ((unsigned int)v125 >> 2)] );
        if ( (v125 & 3) == 0 )
        {
LABEL_27:
          if ( v10 )
            v11 = *((_DWORD *)v10 - 1);
          else
            v11 = 0;
          goto LABEL_29;
        }
        v23 = v125 & 0xFFFFFFFC;
      }
      *((_DWORD *)v10 + v23) ^= 1u;
      v24 = v23 + 1;
      if ( (unsigned int)v24 < (unsigned int)v125 )
      {
        v25 = v23 + 2;
        *((_DWORD *)v10 + v24) ^= 1u;
        if ( (unsigned int)v25 < (unsigned int)v125 )
          *((_DWORD *)v10 + v25) ^= 1u;
      }
      goto LABEL_27;
    }
    goto LABEL_34;
  }
  HIDWORD(v125) = -(int)result;
  if ( !a3 )
  {
LABEL_34:
    v26 = *(unsigned int *)(a1 + 104);
    v27 = *(_DWORD *)(v8 + 12);
    v28 = *(_QWORD **)(a1 + 96);
    v29 = v26 - 1;
    v26 *= 16;
    v30 = (_QWORD *)((char *)v28 + v26);
    v31 = 16LL * (v27 & v29);
    v32 = &v28[(unsigned __int64)v31 / 8];
    if ( v31 != v26 )
    {
      for ( i = &v28[(unsigned __int64)v31 / 8]; v30 != i; i += 2 )
      {
        v34 = *i;
        if ( *i > 1u )
        {
          if ( *(_DWORD *)(v34 + 12) == v27 && v8 == v34 )
            goto LABEL_72;
        }
        else if ( !v34 )
        {
          goto LABEL_41;
        }
      }
    }
    if ( v28 != v32 )
    {
      v63 = *v28;
      if ( *v28 <= 1u )
        goto LABEL_82;
LABEL_78:
      if ( *(_DWORD *)(v63 + 12) == v27 && v8 == v63 )
      {
        i = v28;
LABEL_72:
        v61 = *((_DWORD *)i + 2) ^ a4;
        if ( v10 )
        {
          v62 = *((unsigned int *)v10 - 1);
          if ( (_DWORD)v62 == *((_DWORD *)v10 - 2) )
          {
            v91 = (unsigned int)(3 * v62 + 1) >> 1;
            v92 = 4 * v91 + 8;
            if ( 4 * (int)v62 + 8 >= (unsigned int)v92 || (unsigned int)v62 >= v91 )
            {
LABEL_164:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v137, "Overflow encountered when expanding vector");
              goto LABEL_163;
            }
            v93 = (unsigned int *)sub_186B300(v10 - 1, v92);
            v10 = v93 + 2;
            *v93 = v91;
            v94 = v93[1];
            *(_QWORD *)(a1 + 88) = v10;
            result = (__int64)v10 + 4 * v94;
          }
          else
          {
            result = (__int64)v10 + 4 * v62;
          }
        }
        else
        {
          v96 = (_QWORD *)sub_186B270(0x10u);
          *v96 = 2;
          v10 = v96 + 1;
          *(_QWORD *)(a1 + 88) = v96 + 1;
          result = (__int64)(v96 + 1);
        }
        *(_DWORD *)result = v61;
        ++*((_DWORD *)v10 - 1);
        return result;
      }
      do
      {
        v28 += 2;
        if ( v32 == v28 )
          break;
        v63 = *v28;
        if ( *v28 > 1u )
          goto LABEL_78;
LABEL_82:
        ;
      }
      while ( v63 );
    }
LABEL_41:
    v35 = *(_QWORD *)(a1 + 216);
    if ( v35 )
    {
      v10 = *(_QWORD **)v35;
      v36 = *(unsigned int *)(v35 + 8);
      v37 = v36 - 1;
      v36 *= 16;
      v38 = (char *)v10 + v36;
      v39 = 16LL * (v27 & v37);
      v30 = &v10[(unsigned __int64)v39 / 8];
      if ( v39 != v36 )
      {
        for ( j = (char *)&v10[(unsigned __int64)v39 / 8]; v38 != j; j += 16 )
        {
          v41 = *(_QWORD *)j;
          if ( *(_QWORD *)j > 1u )
          {
            if ( *(_DWORD *)(v41 + 12) == v27 && v8 == v41 )
            {
LABEL_123:
              v44 = *((_DWORD *)j + 2);
              goto LABEL_52;
            }
          }
          else if ( !v41 )
          {
            goto LABEL_49;
          }
        }
      }
      for ( ; v30 != v10; v10 += 2 )
      {
        v95 = *v10;
        if ( *v10 > 1u )
        {
          if ( *(_DWORD *)(v95 + 12) == v27 && v8 == v95 )
          {
            j = (char *)v10;
            goto LABEL_123;
          }
        }
        else if ( !v95 )
        {
          break;
        }
      }
    }
LABEL_49:
    v42 = *(_QWORD *)(a1 + 192);
    v43 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v42 + 24LL);
    if ( v43 == sub_788600 )
      v44 = sub_11CA540(v42, 0, 1);
    else
      v44 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8), _QWORD *, _QWORD *, _QWORD *))v43)(
              v42,
              0,
              sub_788600,
              v10,
              v30,
              v32);
    if ( *(_BYTE *)(a1 + 273) )
    {
      v99 = sub_789F10(a1);
      v100 = v99[3];
      if ( v100 )
      {
        if ( *(_BYTE *)(v100 + 352) )
        {
          sub_7A4170(v99);
          v101 = sub_789F10(a1);
          v102 = *((_QWORD *)v101 + 297);
          if ( !v102 || (v103 = *(unsigned int *)(v102 - 4), (_DWORD)v103 == *(_DWORD *)(v102 - 8)) )
          {
            v123 = v101;
            sub_2FD3F0((unsigned int **)v101 + 297);
            v101 = v123;
            v102 = v123[297];
            v103 = *(unsigned int *)(v102 - 4);
          }
          v104 = *((_QWORD **)v101 + 291);
          *(_DWORD *)(v102 + 4 * v103) = v44;
          ++*(_DWORD *)(v102 - 4);
          if ( v104 )
          {
            v105 = *((_DWORD *)v104 - 1);
            if ( v44 >= v105 )
            {
              v106 = v44 + 1;
              if ( v105 < v44 + 1 )
              {
                v121 = *((_DWORD *)v104 - 1);
                v107 = v101;
                v128 = v8;
                goto LABEL_153;
              }
              *((_DWORD *)v104 - 1) = v106;
            }
          }
          else
          {
            v106 = v44 + 1;
            if ( v44 != -1 )
            {
              v124 = v101;
              v114 = (_QWORD *)sub_186B270(0x18u);
              v115 = v124;
              v128 = v8;
              v104 = v114 + 1;
              *v114 = 2;
              v121 = 0;
              v107 = v115;
              v115[291] = v114 + 1;
LABEL_153:
              while ( 1 )
              {
                v111 = *((_DWORD *)v104 - 2);
                if ( v111 >= v106 )
                  break;
                v108 = (3 * v111 + 1) >> 1;
                v109 = 8 * v108 + 8;
                if ( 8 * v111 + 8 >= v109 || v111 >= v108 )
                  goto LABEL_164;
                v110 = (unsigned int *)sub_186B300(v104 - 1, v109);
                v104 = v110 + 2;
                v107[291] = v110 + 2;
                *v110 = v108;
              }
              v8 = v128;
              *((_DWORD *)v104 - 1) = v106;
              v112 = 8LL * v106;
              v113 = 8LL * v121;
              if ( v113 != v112 )
              {
                v122 = v104;
                memset(&v104[(unsigned __int64)v113 / 8], 0, v112 - v113);
                v104 = v122;
              }
            }
          }
          v104[v44] = v8;
        }
      }
    }
LABEL_52:
    v45 = *(_QWORD *)a1;
    v130 = 2 * v44;
    v132 = 2 * v44;
    (*(void (__fastcall **)(__int64, __int64))(v45 + 64))(a1, v8);
    v48 = *(_QWORD *)(a1 + 88);
    if ( v48 )
      v49 = *(unsigned int *)(v48 - 4);
    else
      v49 = 0;
    v129 = (unsigned int)v125;
    if ( !(_DWORD)v125 )
    {
LABEL_93:
      sub_787180((_QWORD *)(a1 + 88), (unsigned int *)&v132);
      v67 = *(_QWORD *)(a1 + 88);
      if ( v67 )
        v68 = 4LL * *(unsigned int *)(v67 - 4);
      else
        v68 = 0;
      v69 = 4 * v129;
      v120 = v67 + v68 - 4 * v129 - 4;
      if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192)) )
      {
        v72 = *(_QWORD **)(a1 + 280);
        if ( v72 )
        {
          *((_DWORD *)v72 - 1) = 0;
          v73 = (int *)v120;
          v74 = (int *)(v69 + v120);
          if ( (_DWORD)v125 )
          {
            do
            {
              v76 = *((unsigned int *)v72 - 1);
              v77 = (_DWORD *)v72 + v76;
              if ( (_DWORD)v76 == *((_DWORD *)v72 - 2) )
              {
                v78 = (unsigned int)(3 * v76 + 1) >> 1;
                v79 = 4 * v78 + 8;
                if ( 4 * (int)v76 + 8 >= (unsigned int)v79 || (unsigned int)v76 >= v78 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v137, "Overflow encountered when expanding vector");
LABEL_163:
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v137);
                  sub_233E40((__int64)&v137);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v80 = (unsigned int *)sub_186B300(v72 - 1, v79);
                v72 = v80 + 2;
                *v80 = v78;
                v81 = v80[1];
                *(_QWORD *)(a1 + 280) = v72;
                v77 = (_DWORD *)v72 + v81;
              }
LABEL_99:
              v75 = *v73++;
              *v77 = v75;
              ++*((_DWORD *)v72 - 1);
            }
            while ( v74 != v73 );
          }
        }
        else if ( (_DWORD)v125 )
        {
          v73 = (int *)v120;
          v74 = (int *)(v69 + v120);
          v98 = (_QWORD *)sub_186B270(0x10u);
          v72 = v98 + 1;
          *v98 = 2;
          *(_QWORD *)(a1 + 280) = v98 + 1;
          v77 = v98 + 1;
          goto LABEL_99;
        }
      }
      v82 = v125 + 1;
      if ( *(_BYTE *)(a1 + 273) && (v83 = sub_789F10(a1), (v84 = v83[3]) != 0) && *(_BYTE *)(v84 + 352) )
      {
        sub_7A4170(v83);
        v97 = sub_789F10(a1);
        v85 = sub_7A6620(v97, a1 + 288, v82, v120, 0, 0);
      }
      else
      {
        v85 = 0;
      }
      sub_78AC30(a1, v82, v120, v85, v70, v71);
      if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192)) )
      {
        v86 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192));
        sub_118D060(v86, (unsigned int)v132, (unsigned int)v125, *(_QWORD *)(a1 + 280));
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 48LL))(
        *(_QWORD *)(a1 + 192),
        (unsigned int)v132);
      if ( a4 )
        v132 = v130 ^ 1;
      v87 = *(_QWORD *)(a1 + 88);
      if ( v87 )
        *(_DWORD *)(v87 - 4) = HIDWORD(v125);
      return sub_787180((_QWORD *)(a1 + 88), (unsigned int *)&v132);
    }
    v50 = (unsigned int *)(v48 + 4 * (v49 - (unsigned int)v125));
    v131 = a4;
    v127 = (unsigned int *)(v48 + 4 * v49);
    v119 = &v133;
    while ( 1 )
    {
      v60 = *v50;
      if ( *(_BYTE *)(a1 + 273) )
        break;
      v133 = v130 ^ 1;
      v52 = 0;
      v134 = v60;
LABEL_62:
      v56 = *(_QWORD *)(a1 + 192);
      v57 = *(void (__fastcall **)(__int64, __int64, int *, __int64 *))(*(_QWORD *)v56 + 16LL);
      v135 = 1;
      v136 = v52;
      if ( (char *)v57 == (char *)sub_788610 )
      {
        v137 = 1;
        v138 = v52;
        sub_11C4C20(v56, 2, v119, &v137, v46, v47, v117, v119, v125, v127);
      }
      else
      {
        v57(v56, 2, v119, &v135);
      }
      if ( *(_BYTE *)(a1 + 274) )
      {
        v58 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
        if ( v58 )
        {
          v59 = __dynamic_cast(
                  v58,
                  (const struct __class_type_info *)&`typeinfo for'sat::extension,
                  (const struct __class_type_info *)&`typeinfo for'euf::solver,
                  0);
          if ( v59 )
            sub_79B170(v59, 2, v119);
        }
      }
      if ( v127 == ++v50 )
      {
        v65 = *(_QWORD *)(a1 + 88);
        a4 = v131;
        v66 = -(int)v125;
        if ( v65 )
        {
          do
            *(_DWORD *)(v65 + 4LL * (*(_DWORD *)(v65 - 4) + v66++)) ^= 1u;
          while ( v66 );
        }
        else
        {
          do
          {
            *(_DWORD *)(4LL * v66) ^= 1u;
            v90 = v66 + 1;
            if ( !v90 )
              break;
            *(_DWORD *)(4LL * v90) ^= 1u;
            v66 = v90 + 1;
          }
          while ( v66 );
        }
        goto LABEL_93;
      }
    }
    v51 = sub_789F10(a1);
    v52 = v51[3];
    if ( v52 )
    {
      if ( !*(_BYTE *)(v52 + 352) )
      {
        v53 = *v50;
        v54 = *(_BYTE *)(a1 + 273);
        v52 = 0;
LABEL_59:
        v133 = v130 ^ 1;
        v134 = v53;
        if ( v54 && *((_BYTE *)sub_789F10(a1) + 168) )
        {
          v55 = (char *)sub_789F10(a1);
          sub_7F3170(v55 + 160, 2, v119);
        }
        goto LABEL_62;
      }
      sub_7A4170(v51);
      v137 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v130 ^ 1u), _mm_cvtsi32_si128(v60)).m128i_u64[0];
      v64 = sub_789F10(a1);
      v52 = sub_7A6620(v64, a1 + 288, 2, &v137, 0, 0);
    }
    v53 = *v50;
    v54 = *(_BYTE *)(a1 + 273);
    goto LABEL_59;
  }
  if ( !a4 )
  {
    if ( (_DWORD)v125 )
      goto LABEL_5;
    return result;
  }
  if ( (_DWORD)result )
    goto LABEL_19;
  HIDWORD(v125) = 0;
  v11 = 0;
LABEL_29:
  sub_7872D0(a1, v11, (__int64)v10, (__int64)v10, (__int64)a5, a6);
  result = *(_QWORD *)(a1 + 88);
LABEL_30:
  v10 = (_QWORD *)result;
  if ( result )
  {
LABEL_31:
    result = HIDWORD(v125);
    *((_DWORD *)v10 - 1) = HIDWORD(v125);
  }
  return result;
}

