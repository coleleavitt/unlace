unsigned __int64 __fastcall sub_5D84C0(__int64 a1, __int64 a2, __m128 a3)
{
  char **exception; // r14
  char **v4; // r14
  char **v5; // r14
  char **v6; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  int v15; // r8d
  int v16; // r9d
  _QWORD *v17; // rax
  _DWORD **v18; // r12
  _DWORD *v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD *v23; // rsi
  size_t v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // r10
  _QWORD *v28; // r12
  __int64 v29; // r14
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // r14d
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // r14
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  unsigned __int64 *v47; // rcx
  bool *v48; // rdx
  bool v49; // r15
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  bool *v53; // rcx
  int v54; // edx
  __int64 v55; // rbx
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  unsigned __int64 result; // rax
  unsigned int v60; // r14d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // edi
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r15d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  __int64 *v73; // rbx
  unsigned __int64 v74; // r14
  __int64 v75; // rsi
  unsigned int v77; // ecx
  size_t v78; // rsi
  _DWORD *v79; // rax
  unsigned int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rax
  char *v83; // rax
  unsigned int v84; // r9d
  char *v85; // rdi
  __int64 v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rcx
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rsi
  void *v94; // [rsp+0h] [rbp-170h]
  __int64 v95; // [rsp+0h] [rbp-170h]
  int v96; // [rsp+8h] [rbp-168h]
  __int64 v97; // [rsp+8h] [rbp-168h]
  unsigned int v98; // [rsp+10h] [rbp-160h]
  __int64 v99; // [rsp+10h] [rbp-160h]
  void *v100; // [rsp+10h] [rbp-160h]
  char *v101; // [rsp+10h] [rbp-160h]
  __int64 *v102; // [rsp+18h] [rbp-158h]
  __int64 v103; // [rsp+20h] [rbp-150h]
  int v104; // [rsp+28h] [rbp-148h]
  int v105; // [rsp+28h] [rbp-148h]
  __int64 v106; // [rsp+30h] [rbp-140h]
  int v107; // [rsp+30h] [rbp-140h]
  void *v108; // [rsp+38h] [rbp-138h]
  void *v109; // [rsp+40h] [rbp-130h]
  void *v110; // [rsp+48h] [rbp-128h]
  __int64 v111; // [rsp+50h] [rbp-120h]
  int v112; // [rsp+58h] [rbp-118h]
  char v113; // [rsp+5Fh] [rbp-111h]
  void *v114; // [rsp+60h] [rbp-110h]
  int v115[2]; // [rsp+70h] [rbp-100h] BYREF
  __int64 v116; // [rsp+78h] [rbp-F8h] BYREF
  int v117[2]; // [rsp+80h] [rbp-F0h] BYREF
  _QWORD *v118; // [rsp+88h] [rbp-E8h]
  __int64 v119[4]; // [rsp+90h] [rbp-E0h] BYREF
  void *ptr; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v121; // [rsp+B8h] [rbp-B8h]
  _BYTE v122[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v8 = a2;
  v9 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 80) = a2;
  v106 = a2;
  v96 = v9;
  v10 = *(_QWORD *)(a1 + 32);
  v118 = nullptr;
  *(_QWORD *)v117 = v10;
  v11 = *(unsigned int *)(a2 + 56);
  *(_QWORD *)v115 = 0;
  if ( !(_DWORD)v11 )
    goto LABEL_61;
  v12 = 0;
  v111 = a2 + 8 * v11;
  v102 = &v116;
  do
  {
    v13 = *(_QWORD *)(v8 + 80);
    v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    v113 = sub_5D8290(a1, v13 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v113 || (*(_QWORD *)(v8 + 80) & 7LL) == 1 )
    {
      if ( v13 > 7 )
        ++*(_DWORD *)(v14 + 8);
      v43 = v118;
      if ( v118 )
      {
        v44 = *((_DWORD *)v118 - 1);
        if ( v44 == *((_DWORD *)v118 - 2) )
        {
          v64 = (3 * v44 + 1) >> 1;
          v65 = 8 * v64 + 8;
          if ( 8 * v44 + 8 >= (unsigned int)v65 || v44 >= v64 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &ptr);
            sub_233E40((__int64)&ptr);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v66 = (unsigned int *)sub_186B300(v118 - 1, v65);
          v67 = v66[1];
          v43 = v66 + 2;
          *v66 = v64;
          v118 = v43;
          LODWORD(v66) = v67;
          v47 = &v43[v67];
          v46 = (_DWORD)v66 + 1;
        }
        else
        {
          v45 = v44;
          v46 = v44 + 1;
          v47 = &v118[v45];
        }
      }
      else
      {
        v90 = (_QWORD *)sub_186B270(0x18u);
        v43 = v90 + 1;
        *v90 = 2;
        v46 = 1;
        v118 = v43;
        v47 = v43;
      }
      *v47 = v14;
      *((_DWORD *)v43 - 1) = v46;
    }
    else
    {
      v17 = (_QWORD *)sub_62B2A0(*(_QWORD *)(a1 + 40), v106, v14);
      v116 = 0;
      v18 = (_DWORD **)v17;
      v19 = (_DWORD *)*v17;
      if ( v19 )
      {
        v20 = *(v19 - 1);
        v21 = (unsigned int)*(v19 - 2);
        LODWORD(v110) = v21;
        v22 = sub_186B270(4 * v21 + 8);
        v116 = v22 + 8;
        v23 = *v18;
        a3 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v110), _mm_cvtsi32_si128(v20));
        *(_QWORD *)v22 = a3.m128_u64[0];
        if ( v23 )
        {
          v24 = 4LL * (unsigned int)*(v23 - 1);
          if ( v24 <= 4 )
          {
            if ( v24 == 4 )
              *(_DWORD *)(v22 + 8) = *v23;
          }
          else
          {
            memmove((void *)(v22 + 8), v23, v24);
          }
        }
      }
      v105 = sub_5D7A00(a1, v14, (int)v102, a3);
      ptr = v122;
      v121 = 0x1000000000LL;
      v26 = *(unsigned int *)(v14 + 24);
      if ( (_DWORD)v26 )
      {
        v27 = (void *)(v14 + 8 * v26);
        v28 = nullptr;
        LODWORD(v26) = 0;
        while ( 1 )
        {
          v29 = *(_QWORD *)(v14 + 32);
          if ( *(_WORD *)(v29 + 4) != 1 )
            goto LABEL_11;
          v30 = *(_DWORD *)(v29 + 16);
          v31 = v30 >> 5;
          if ( !v116 )
            goto LABEL_11;
          if ( v31 >= *(_DWORD *)(v116 - 4) )
            goto LABEL_11;
          v103 = 4LL * v31;
          v112 = 1 << v30;
          if ( (*(_DWORD *)(v116 + v103) & (1 << v30)) == 0 )
            goto LABEL_11;
          if ( !v28 )
          {
            v32 = HIDWORD(v121);
            if ( (unsigned int)v26 < HIDWORD(v121) )
            {
              *((_QWORD *)ptr + (unsigned int)v26) = v29;
              LODWORD(v121) = v26 + 1;
LABEL_94:
              v110 = v27;
              v34 = v31 + 1;
              v89 = (_QWORD *)sub_186B270(0x10u);
              *v89 = 2;
              v27 = v110;
              v28 = v89 + 1;
              v98 = 0;
LABEL_77:
              while ( 1 )
              {
                v80 = *((_DWORD *)v28 - 2);
                if ( v80 >= v34 )
                  break;
                v77 = (3 * v80 + 1) >> 1;
                v78 = 4 * v77 + 8;
                if ( 4 * v80 + 8 >= (unsigned int)v78 || v80 >= v77 )
                {
                  v5 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v119, "Overflow encountered when expanding vector");
                  *v5 = (char *)off_1C63128;
                  sub_2333C0(v5 + 1, v119);
                  sub_233E40((__int64)v119);
                  __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v109 = v27;
                LODWORD(v110) = (3 * v80 + 1) >> 1;
                v79 = (_DWORD *)sub_186B300(v28 - 1, v78);
                v27 = v109;
                v28 = v79 + 2;
                *v79 = (_DWORD)v110;
              }
              *((_DWORD *)v28 - 1) = v34;
              v81 = 4LL * v34;
              LODWORD(v26) = v121;
              v82 = 4LL * v98;
              if ( v82 != v81 )
              {
                v109 = v27;
                LODWORD(v110) = v121;
                memset((char *)v28 + v82, 0, v81 - v82);
                v27 = v109;
                LODWORD(v26) = (_DWORD)v110;
              }
              goto LABEL_22;
            }
            goto LABEL_81;
          }
          v98 = *((_DWORD *)v28 - 1);
          if ( v31 >= v98 || (*((_DWORD *)v28 + v31) & (1 << v30)) == 0 )
          {
            v32 = HIDWORD(v121);
            if ( (unsigned int)v26 < HIDWORD(v121) )
            {
              v33 = (unsigned int)v26;
              LODWORD(v26) = v26 + 1;
              *((_QWORD *)ptr + v33) = v29;
              LODWORD(v121) = v26;
              goto LABEL_21;
            }
LABEL_81:
            v100 = v27;
            LODWORD(v110) = 2 * v32;
            LODWORD(v109) = *(_DWORD *)(v29 + 16) >> 5;
            v83 = (char *)sub_186B270(8LL * (unsigned int)(2 * v32));
            v84 = v121;
            v85 = (char *)ptr;
            v31 = (unsigned int)v109;
            v27 = v100;
            if ( (_DWORD)v121 )
            {
              if ( (unsigned int)(v121 - 1) <= 2 || v83 == (char *)ptr + 8 )
              {
                v92 = 0;
                v93 = 8LL * (unsigned int)v121;
                do
                {
                  v25 = *(_QWORD *)&v85[v92];
                  *(_QWORD *)&v83[v92] = v25;
                  v92 += 8;
                }
                while ( v92 != v93 );
              }
              else
              {
                v86 = 0;
                v87 = 16LL * ((unsigned int)v121 >> 1);
                do
                {
                  a3 = (__m128)_mm_loadu_si128((const __m128i *)&v85[v86]);
                  *(__m128 *)&v83[v86] = a3;
                  v86 += 16;
                }
                while ( v86 != v87 );
                if ( (v84 & 1) != 0 )
                  *(_QWORD *)&v83[8 * (v84 & 0xFFFFFFFE)] = *(_QWORD *)&v85[8 * (v84 & 0xFFFFFFFE)];
              }
            }
            if ( v85 != v122 && v85 )
            {
              v94 = v100;
              v101 = v83;
              sub_186B220(v85);
              v84 = v121;
              v27 = v94;
              v83 = v101;
              v31 = (unsigned int)v109;
            }
            v88 = v84;
            LODWORD(v26) = v84 + 1;
            ptr = v83;
            HIDWORD(v121) = (_DWORD)v110;
            *(_QWORD *)&v83[8 * v88] = v29;
            LODWORD(v121) = v26;
            if ( !v28 )
              goto LABEL_94;
            v98 = *((_DWORD *)v28 - 1);
LABEL_21:
            v34 = v31 + 1;
            if ( v31 >= v98 )
              goto LABEL_77;
LABEL_22:
            v14 += 8LL;
            *(_DWORD *)((char *)v28 + v103) |= v112;
            if ( (void *)v14 == v27 )
            {
LABEL_23:
              v35 = (int)ptr;
              goto LABEL_24;
            }
          }
          else
          {
LABEL_11:
            v14 += 8LL;
            if ( (void *)v14 == v27 )
              goto LABEL_23;
          }
        }
      }
      v35 = (unsigned int)v122;
      v28 = nullptr;
LABEL_24:
      v36 = sub_15DC610(
              *(_QWORD *)(a1 + 32),
              v105,
              v26,
              v35,
              v25,
              v26,
              (int)v94,
              v96,
              v98,
              (int)v102,
              v103,
              v105,
              v106,
              (int)v122,
              (int)v109,
              v110);
      v37 = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      v38 = v118;
      if ( v118 )
      {
        v39 = *((_DWORD *)v118 - 1);
        if ( v39 == *((_DWORD *)v118 - 2) )
        {
          v68 = (3 * v39 + 1) >> 1;
          v69 = 8 * v68 + 8;
          if ( 8 * v39 + 8 >= (unsigned int)v69 || v39 >= v68 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v119, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v119);
            sub_233E40((__int64)v119);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v70 = (unsigned int *)sub_186B300(v118 - 1, v69);
          v71 = v70[1];
          v38 = v70 + 2;
          *v70 = v68;
          v118 = v38;
          LODWORD(v70) = v71;
          v42 = &v38[v71];
          v41 = (_DWORD)v70 + 1;
        }
        else
        {
          v40 = v39;
          v41 = v39 + 1;
          v42 = &v118[v40];
        }
      }
      else
      {
        v91 = (_QWORD *)sub_186B270(0x18u);
        v38 = v91 + 1;
        *v91 = 2;
        v41 = 1;
        v118 = v38;
        v42 = v38;
      }
      *v42 = v37;
      *((_DWORD *)v38 - 1) = v41;
      if ( v28 )
        sub_186B220(v28 - 1);
      if ( ptr != v108 && ptr )
        sub_186B220(ptr);
      if ( v116 )
        sub_186B220((void *)(v116 - 8));
      v12 = v113;
    }
    v48 = *(bool **)v115;
    v49 = (*(_QWORD *)(v8 + 80) & 7LL) == 1;
    if ( *(_QWORD *)v115 )
    {
      v50 = *(_DWORD *)(*(_QWORD *)v115 - 4LL);
      if ( v50 == *(_DWORD *)(*(_QWORD *)v115 - 8LL) )
      {
        v60 = (3 * v50 + 1) >> 1;
        v61 = v60 + 8;
        if ( v50 + 8 >= (unsigned int)v61 || v50 >= v60 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v62 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v115 - 8LL), v61);
        v63 = v62[1];
        v48 = (bool *)(v62 + 2);
        *v62 = v60;
        *(_QWORD *)v115 = v48;
        LODWORD(v62) = v63;
        v53 = &v48[v63];
        v52 = (_DWORD)v62 + 1;
      }
      else
      {
        v51 = v50;
        v52 = v50 + 1;
        v53 = (bool *)(*(_QWORD *)v115 + v51);
      }
    }
    else
    {
      v72 = (_QWORD *)sub_186B270(0xAu);
      v48 = (bool *)(v72 + 1);
      *v72 = 2;
      v52 = 1;
      *(_QWORD *)v115 = v48;
      v53 = v48;
    }
    *v53 = v49;
    v8 += 8;
    *((_DWORD *)v48 - 1) = v52;
  }
  while ( v8 != v111 );
  if ( v12 )
  {
    sub_6447F0(
      (int)v117,
      (int)v115,
      (int)v48,
      (int)v53,
      v15,
      v16,
      (int)v94,
      v96,
      v98,
      (__int64)v102,
      v103,
      v104,
      v106,
      (int)v108,
      (int)v109,
      v110,
      v111,
      v112,
      v114);
    if ( v118 )
      v54 = *((_DWORD *)v118 - 1);
    else
      v54 = 0;
    v55 = sub_62C680(*(_DWORD *)(a1 + 24) + 656, v97, v54, (_DWORD)v118, v115[0], v107 + 72, 1);
    sub_629AF0(v55, *(_QWORD *)(a1 + 24));
    sub_63DAD0(*(_QWORD *)(a1 + 72), v55, *(double *)a3.m128_u64);
    result = sub_62F7F0(*(_DWORD *)(a1 + 24) + 656, v107, v55, v56, v57, v58, v95, v97, v99);
    *(_BYTE *)(a1 + 88) = 1;
  }
  else
  {
LABEL_61:
    result = sub_63DAD0(*(_QWORD *)(a1 + 72), v106, *(double *)a3.m128_u64);
  }
  if ( *(_QWORD *)v115 )
    result = sub_186B220((void *)(*(_QWORD *)v115 - 8LL));
  v73 = v118;
  if ( v118 )
  {
    result = (unsigned __int64)&v118[*((unsigned int *)v118 - 1)];
    if ( (unsigned __int64)v118 >= result )
      return sub_186B220(v73 - 1);
    v74 = (unsigned __int64)&v118[*((unsigned int *)v118 - 1)];
    do
    {
      while ( 1 )
      {
        v75 = *v73;
        if ( *v73 )
        {
          if ( (*(_DWORD *)(v75 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v73 >= v74 )
          goto LABEL_71;
      }
      result = sub_15D7BC0(*(_QWORD *)v117, v75);
      ++v73;
    }
    while ( (unsigned __int64)v73 < v74 );
LABEL_71:
    v73 = v118;
    if ( v118 )
      return sub_186B220(v73 - 1);
  }
  return result;
}

