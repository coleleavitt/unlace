__int64 __fastcall sub_B4A7F0(__int64 a1, unsigned int a2, __int64 a3)
{
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **exception; // rbp
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdi
  _QWORD **v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned int v16; // r13d
  unsigned int **v17; // r12
  int v18; // eax
  int v19; // r10d
  __int64 v20; // rax
  int *v21; // rax
  unsigned int *v22; // r12
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  __m128i *v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // eax
  size_t v31; // rdi
  __int64 v32; // r10
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  char *v36; // r8
  __int64 v37; // rdi
  int v38; // eax
  unsigned int v39; // r8d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 result; // rax
  __int64 v43; // r15
  __int64 v44; // r8
  int v45; // ebp
  __int64 v46; // rbp
  int v47; // eax
  unsigned int v48; // ebx
  _QWORD *v49; // rax
  _QWORD *v50; // r14
  __int64 v51; // rbx
  _QWORD *v52; // r12
  __int64 v53; // r13
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 *v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rbp
  __int64 v62; // rdi
  unsigned int **v63; // rax
  __int64 v64; // r12
  __int64 v65; // r15
  __int64 v66; // r8
  __int64 v67; // rdx
  int *v68; // rcx
  int v69; // ebp
  __int64 v70; // rbp
  int v71; // eax
  unsigned int v72; // ebx
  _QWORD *v73; // rax
  __m128i v74; // xmm0
  _QWORD *v75; // r12
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // r14
  __int64 v79; // rcx
  _QWORD *v80; // rax
  unsigned int v81; // edx
  __int64 *v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rbp
  char v86; // al
  __int64 v87; // rax
  __int64 v88; // rbp
  __int64 v89; // rdi
  _QWORD *v90; // rax
  unsigned int v91; // ebx
  unsigned int v92; // ecx
  unsigned int *v93; // rax
  __int64 v94; // rcx
  _QWORD *v95; // rax
  int v96; // eax
  __int64 v97; // rbx
  int v98; // r8d
  int v99; // r9d
  __int64 v100; // rax
  unsigned int *v101; // rbp
  int v102; // eax
  bool v103; // zf
  unsigned int v104; // ebx
  unsigned int v105; // ecx
  unsigned int *v106; // rdx
  __int64 v107; // rcx
  _QWORD *v108; // rdx
  _QWORD *v109; // rax
  _QWORD **v110; // [rsp+0h] [rbp-F8h]
  int *v111; // [rsp+8h] [rbp-F0h]
  _QWORD *v112; // [rsp+10h] [rbp-E8h]
  __m128i v113; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v114; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h]
  unsigned int v116; // [rsp+38h] [rbp-C0h]
  unsigned int v117; // [rsp+3Ch] [rbp-BCh]
  _DWORD *v118; // [rsp+40h] [rbp-B8h]
  char *v119; // [rsp+48h] [rbp-B0h]
  __int64 v120; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v121[4]; // [rsp+60h] [rbp-98h] BYREF
  int v122[2]; // [rsp+80h] [rbp-78h] BYREF
  char v123; // [rsp+88h] [rbp-70h]
  int v124; // [rsp+8Ch] [rbp-6Ch]
  __int64 v125; // [rsp+90h] [rbp-68h]
  int v126; // [rsp+98h] [rbp-60h]
  __int64 v127; // [rsp+A0h] [rbp-58h]
  int v128; // [rsp+A8h] [rbp-50h]
  __int64 v129; // [rsp+B0h] [rbp-48h]
  __int32 v130; // [rsp+B8h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 32);
  v116 = a2;
  v10 = *(__int64 **)(v9 + 8LL * a2);
  v11 = *v10;
  v113.m128i_i64[0] = (__int64)v10;
  v114 = sub_15D1F10(v11);
  v12 = **(_QWORD ****)(*(_QWORD *)(a1 + 232) + 8LL * a2);
  v113.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)(a1 + 232) + 8LL * a2);
  if ( !v12 || (v13 = *((unsigned int *)v12 - 1), !(_DWORD)v13) )
  {
    v30 = sub_B39350(*(_QWORD *)(a3 + 112), *(_DWORD *)(a1 + 8));
    sub_B4A4F0(a1, v30, (double *)a3);
    v12 = *(_QWORD ***)v113.m128i_i64[1];
    if ( !*(_QWORD *)v113.m128i_i64[1] )
      goto LABEL_42;
    v13 = *((unsigned int *)v12 - 1);
  }
  v110 = &v12[v13];
  if ( v110 == v12 )
  {
LABEL_42:
    v112 = nullptr;
    v43 = *(_QWORD *)(a1 + 16);
    v44 = 0;
    v16 = 0;
    v111 = nullptr;
LABEL_43:
    v45 = *(_DWORD *)(a1 + 8);
    sub_B72D60(v122, v43, v16, v111, v44, v112);
    v128 = v45;
    v129 = 0;
    *(_QWORD *)v122 = &off_1C57990;
    sub_B73430(v122, v43);
    v46 = sub_180C100(v43 + 8400, 56);
    *(_BYTE *)(v46 + 8) = v123 & 3 | *(_BYTE *)(v46 + 8) & 0xFC;
    *(_DWORD *)(v46 + 12) = v124;
    *(_QWORD *)(v46 + 16) = v125;
    *(_DWORD *)(v46 + 24) = v126;
    *(_QWORD *)(v46 + 32) = v127;
    *(_QWORD *)v46 = qword_1C6E7C8;
    v47 = v128;
    *(_QWORD *)(v46 + 48) = 0;
    *(_DWORD *)(v46 + 40) = v47;
    if ( !v129 )
    {
      *(_QWORD *)v46 = &off_1C57990;
      goto LABEL_53;
    }
    v48 = *(_DWORD *)(v129 - 4);
    v113.m128i_i32[0] = *(_DWORD *)(v129 - 8);
    v49 = (_QWORD *)sub_186B270(16LL * v113.m128i_u32[0] + 8);
    v50 = v49 + 1;
    *v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v113.m128i_u32[0]), _mm_cvtsi32_si128(v48)).m128i_u64[0];
    *(_QWORD *)(v46 + 48) = v49 + 1;
    v51 = v129;
    if ( !v129 || (v52 = v49 + 1, v53 = v129 + 16LL * *(unsigned int *)(v129 - 4), v129 == v53) )
    {
      *(_QWORD *)v46 = &off_1C57990;
    }
    else
    {
      do
      {
        sub_15D0E50(v52, v51);
        v51 += 16;
        v52 += 2;
      }
      while ( v51 != v53 );
      v50 = *(_QWORD **)(v46 + 48);
      *(_QWORD *)v46 = &off_1C57990;
      if ( !v50 )
        goto LABEL_53;
    }
    if ( *((_DWORD *)v50 - 1) )
    {
      v54 = *(_QWORD **)(v43 + 8600);
      if ( v54 )
      {
        v55 = *((_DWORD *)v54 - 1);
        if ( v55 == *((_DWORD *)v54 - 2) )
        {
          v91 = (3 * v55 + 1) >> 1;
          v92 = 8 * v91 + 8;
          if ( 8 * v55 + 8 >= v92 || v55 >= v91 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v121, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v121);
            sub_233E40((__int64)v121);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v93 = (unsigned int *)sub_186B300(v54 - 1, v92);
          v94 = v93[1];
          v54 = v93 + 2;
          *(_QWORD *)(v43 + 8600) = v93 + 2;
          *v93 = v91;
          LODWORD(v93) = v94;
          v58 = &v54[v94];
          v57 = (_DWORD)v93 + 1;
        }
        else
        {
          v56 = v55;
          v57 = v55 + 1;
          v58 = &v54[v56];
        }
      }
      else
      {
        v108 = (_QWORD *)sub_186B270(0x18u);
        *v108 = 2;
        v57 = 1;
        v54 = v108 + 1;
        *(_QWORD *)(v43 + 8600) = v54;
        v58 = v54;
      }
      *v58 = v46;
      *((_DWORD *)v54 - 1) = v57;
    }
LABEL_53:
    v120 = v46 | 3;
    sub_8E8670(v43, &v120, -2);
    v59 = v129;
    *(_QWORD *)v122 = qword_1C6E7C8;
    if ( v129 )
    {
      v60 = *(unsigned int *)(v129 - 4);
      if ( (_DWORD)v60 )
      {
        v61 = v129 + 16 * v60;
        do
        {
          v62 = v59;
          v59 += 16;
          sub_15D0DF0(v62);
        }
        while ( v59 != v61 );
        v59 = v129;
      }
LABEL_58:
      sub_186B220((void *)(v59 - 8));
    }
    goto LABEL_59;
  }
  v112 = nullptr;
  v14 = 0;
  v15 = 0xFFFFFFFFLL;
  v16 = 0;
  v111 = nullptr;
  do
  {
    while ( 1 )
    {
      v17 = (unsigned int **)*v12;
      if ( !*v12 )
        goto LABEL_5;
      if ( (unsigned int)sub_8E81B0(*(_QWORD **)(a1 + 16), *v12) == 1 )
      {
        if ( v112 )
          sub_186B220(v112 - 1);
        result = (__int64)v111;
        if ( v111 )
          return sub_186B220(v111 - 2);
        return result;
      }
      if ( (unsigned int)sub_8E81B0(*(_QWORD **)(a1 + 16), v17) != -1 )
      {
LABEL_5:
        if ( !v16 )
          v15 = v14;
        ++v16;
        goto LABEL_8;
      }
      v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8832LL) + 4LL * **v17);
      v19 = 2 * v18 + 1;
      if ( v111 )
      {
        v20 = (unsigned int)*(v111 - 1);
        if ( (_DWORD)v20 == *(v111 - 2) )
        {
          v39 = (unsigned int)(3 * v20 + 1) >> 1;
          v40 = 4 * v39 + 8;
          if ( 4 * (int)v20 + 8 >= (unsigned int)v40 || (unsigned int)v20 >= v39 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v122, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v122);
            sub_233E40((__int64)v122);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v117 = (unsigned int)(3 * v20 + 1) >> 1;
          LODWORD(ptr) = v19;
          v41 = (unsigned int *)sub_186B300(v111 - 2, v40);
          v19 = (int)ptr;
          v111 = (int *)(v41 + 2);
          *v41 = v117;
          v21 = (int *)&v41[v41[1] + 2];
        }
        else
        {
          v21 = &v111[v20];
        }
      }
      else
      {
        LODWORD(ptr) = 2 * v18 + 1;
        v83 = (_QWORD *)sub_186B270(0x10u);
        *v83 = 2;
        v21 = (int *)(v83 + 1);
        v19 = (int)ptr;
        v111 = v21;
      }
      *v21 = v19;
      v22 = v17[14];
      ++*(v111 - 1);
      if ( (unsigned int *)v113.m128i_i64[0] != v22 )
        break;
LABEL_8:
      ++v12;
      v14 = (unsigned int)(v14 + 1);
      if ( v110 == v12 )
        goto LABEL_20;
    }
    v23 = v112;
    if ( v112 )
    {
      v24 = *((_DWORD *)v112 - 1);
      if ( v24 == *((_DWORD *)v112 - 2) )
      {
        v117 = (3 * v24 + 1) >> 1;
        v31 = 16 * v117 + 8;
        if ( 16 * v24 + 8 >= (unsigned int)v31 || v24 >= (3 * v24 + 1) >> 1 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v122, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v122);
          sub_233E40((__int64)v122);
          ptr = v112 - 1;
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ptr = v112 - 1;
        v32 = sub_186B270(v31);
        v33 = *((unsigned int *)v112 - 1);
        v34 = 0;
        *(_DWORD *)(v32 + 4) = v33;
        v35 = 16 * v33;
        if ( v35 )
        {
          do
          {
            *(__m128i *)(v32 + v34 + 8) = _mm_loadu_si128((const __m128i *)&v112[v34 / 8]);
            v34 += 16LL;
          }
          while ( v35 != v34 );
        }
        v119 = (char *)(v32 + 8);
        v118 = (_DWORD *)v32;
        ptr = v112 - 1;
        sub_186B220(v112 - 1);
        v36 = v119;
        v37 = (unsigned int)v118[1];
        *v118 = v117;
        v112 = v36;
        v23 = v36;
        v38 = v37;
        v27 = (__m128i *)&v36[16 * v37];
        v26 = v38 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = (__m128i *)&v112[2 * v25];
      }
    }
    else
    {
      v90 = (_QWORD *)sub_186B270(0x28u);
      *v90 = 2;
      v112 = v90 + 1;
      v27 = (__m128i *)(v90 + 1);
      v23 = v90 + 1;
      v26 = 1;
    }
    ++v12;
    v14 = (unsigned int)(v14 + 1);
    *v27 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v113), (__m128i)(unsigned __int64)v22);
    *((_DWORD *)v23 - 1) = v26;
  }
  while ( v110 != v12 );
LABEL_20:
  if ( !v16 )
  {
    v43 = *(_QWORD *)(a1 + 16);
    if ( v112 )
      v44 = *((unsigned int *)v112 - 1);
    else
      v44 = 0;
    if ( v111 )
      v16 = *(v111 - 1);
    goto LABEL_43;
  }
  if ( v16 != 1 )
  {
    v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 464LL);
    if ( !v28 || (v29 = *(_QWORD *)(v114 + 24)) != 0 && *(_DWORD *)(v29 + 24) != 2 && v28 == 1 )
      sub_B45840(a1, v116);
    goto LABEL_59;
  }
  v63 = *(unsigned int ***)(*(_QWORD *)v113.m128i_i64[1] + 8 * v15);
  if ( v63 )
  {
    v64 = *(_QWORD *)(a1 + 16);
    v113.m128i_i32[0] = 2 * *(_DWORD *)(*(_QWORD *)(v64 + 8832) + 4LL * **v63);
  }
  else
  {
    v95 = (_QWORD *)sub_15F6BE0(a1 + 56, v114);
    v96 = sub_15F0A30(a1 + 56, *(_QWORD *)(*v95 + 8 * v15));
    v97 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)v122 = *(_QWORD *)v113.m128i_i64[0];
    v100 = sub_15DC610(
             v97,
             v96,
             1,
             (int)v122,
             v98,
             v99,
             (int)v110,
             (int)v111,
             (int)v112,
             v113.m128i_i32[0],
             v113.m128i_i32[2],
             v114,
             (int)ptr,
             v116,
             (int)v118,
             v119);
    v101 = (unsigned int *)v100;
    if ( v100 )
      ++*(_DWORD *)(v100 + 8);
    sub_B6F780(*(_QWORD *)(a1 + 16));
    v64 = *(_QWORD *)(a1 + 16);
    v102 = 2 * *(_DWORD *)(*(_QWORD *)(v64 + 8832) + 4LL * *v101);
    v103 = v101[2]-- == 1;
    v113.m128i_i32[0] = v102;
    if ( v103 )
    {
      sub_15D7BC0(v97, v101);
      v64 = *(_QWORD *)(a1 + 16);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v64 + 7488) + 48LL))(
    *(_QWORD *)(v64 + 7488),
    *(_QWORD *)(*(_QWORD *)(v64 + 8840) + 8LL * ((unsigned __int32)v113.m128i_i32[0] >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v64 + 7488) + 64LL))(*(_QWORD *)(v64 + 7488));
  v65 = *(_QWORD *)(a1 + 16);
  if ( v112 )
    v66 = *((unsigned int *)v112 - 1);
  else
    v66 = 0;
  if ( v111 )
  {
    v67 = (unsigned int)*(v111 - 1);
    v68 = v111;
  }
  else
  {
    v67 = 0;
    v68 = nullptr;
  }
  v69 = *(_DWORD *)(a1 + 8);
  sub_B72D60(v122, *(_QWORD *)(a1 + 16), v67, v68, v66, v112);
  v128 = v69;
  v129 = 0;
  *(_QWORD *)v122 = &off_1C57938;
  v130 = v113.m128i_i32[0];
  sub_B733F0(v122, v65);
  v70 = sub_180C100(v65 + 8400, 64);
  *(_BYTE *)(v70 + 8) = v123 & 3 | *(_BYTE *)(v70 + 8) & 0xFC;
  *(_DWORD *)(v70 + 12) = v124;
  *(_QWORD *)(v70 + 16) = v125;
  *(_DWORD *)(v70 + 24) = v126;
  *(_QWORD *)(v70 + 32) = v127;
  *(_QWORD *)v70 = qword_1C6E7C8;
  v71 = v128;
  *(_QWORD *)(v70 + 48) = 0;
  *(_DWORD *)(v70 + 40) = v71;
  if ( v129 )
  {
    v72 = *(_DWORD *)(v129 - 4);
    v113.m128i_i32[2] = *(_DWORD *)(v129 - 8);
    v73 = (_QWORD *)sub_186B270(16LL * v113.m128i_u32[2] + 8);
    v74 = _mm_cvtsi32_si128(v113.m128i_u32[2]);
    v75 = v73 + 1;
    v113.m128i_i64[1] = (__int64)(v73 + 1);
    *v73 = _mm_unpacklo_epi32(v74, _mm_cvtsi32_si128(v72)).m128i_u64[0];
    *(_QWORD *)(v70 + 48) = v73 + 1;
    v76 = v129;
    if ( !v129 || (v77 = 16LL * *(unsigned int *)(v129 - 4), v78 = v129 + v77, v129 == v129 + v77) )
    {
      *(_QWORD *)v70 = &off_1C57938;
      *(_DWORD *)(v70 + 56) = v130;
LABEL_79:
      if ( *(_DWORD *)(v113.m128i_i64[1] - 4) )
      {
        v80 = *(_QWORD **)(v65 + 8600);
        if ( v80 )
        {
          v81 = *((_DWORD *)v80 - 1);
          if ( v81 == *((_DWORD *)v80 - 2) )
          {
            v104 = (3 * v81 + 1) >> 1;
            v105 = 8 * v104 + 8;
            if ( 8 * v81 + 8 >= v105 || v81 >= v104 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v121, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v121);
              sub_233E40((__int64)v121);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v106 = (unsigned int *)sub_186B300(v80 - 1, v105);
            v80 = v106 + 2;
            v107 = v106[1];
            *(_QWORD *)(v65 + 8600) = v106 + 2;
            *v106 = v104;
            LODWORD(v106) = v107;
            v82 = &v80[v107];
            v16 = (_DWORD)v106 + 1;
          }
          else
          {
            v16 = v81 + 1;
            v82 = &v80[v81];
          }
        }
        else
        {
          v109 = (_QWORD *)sub_186B270(0x18u);
          *v109 = 2;
          v80 = v109 + 1;
          *(_QWORD *)(v65 + 8600) = v80;
          v82 = v80;
        }
        *v82 = v70;
        *((_DWORD *)v80 - 1) = v16;
      }
    }
    else
    {
      do
      {
        sub_15D0E50(v75, v76);
        v76 += 16;
        v75 += 2;
      }
      while ( v78 != v76 );
      v113.m128i_i64[1] = *(_QWORD *)(v70 + 48);
      v79 = v113.m128i_i64[1];
      *(_QWORD *)v70 = &off_1C57938;
      *(_DWORD *)(v70 + 56) = v130;
      if ( v79 )
        goto LABEL_79;
    }
  }
  else
  {
    *(_QWORD *)v70 = &off_1C57938;
    *(_DWORD *)(v70 + 56) = v130;
  }
  v84 = *(_QWORD *)(v65 + 8848);
  v85 = v70 | 3;
  v121[0] = v85;
  v86 = *(_BYTE *)(v84 + v113.m128i_u32[0]);
  if ( v86 == -1 )
  {
    sub_8E8670(v65, v121, v113.m128i_i32[0] ^ 1);
  }
  else if ( !v86 )
  {
    sub_8F28B0(v65, v113.m128i_u32[0], v85, 0);
  }
  v59 = v129;
  *(_QWORD *)v122 = qword_1C6E7C8;
  if ( v129 )
  {
    v87 = *(unsigned int *)(v129 - 4);
    if ( (_DWORD)v87 )
    {
      v88 = v129 + 16 * v87;
      do
      {
        v89 = v59;
        v59 += 16;
        sub_15D0DF0(v89);
      }
      while ( v59 != v88 );
      v59 = v129;
    }
    goto LABEL_58;
  }
LABEL_59:
  if ( v112 )
    sub_186B220(v112 - 1);
  result = (__int64)v111;
  if ( v111 )
    return sub_186B220(v111 - 2);
  return result;
}

