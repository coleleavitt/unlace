__int64 __fastcall sub_6F8E80(const __m128i *a1, char a2, __int64 *a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int **v9; // r13
  unsigned int **v10; // rbx
  __int64 v11; // r12
  unsigned int *v12; // rbp
  unsigned int v13; // ecx
  unsigned __int32 v14; // ecx
  __int64 *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rsi
  bool v18; // zf
  unsigned __int64 v19; // rbp
  __int64 *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rbp
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r12
  unsigned __int64 v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 result; // rax
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 *v35; // r9
  __int64 *v36; // r13
  __int64 *v37; // r14
  char v38; // r12
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r13
  unsigned int *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdi
  char v50; // al
  __int64 v51; // rax
  char v52; // al
  int v53; // r8d
  int v54; // r9d
  __int64 *v55; // rdi
  unsigned int v56; // r13d
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // r13
  __int64 **v60; // r12
  __m128i v61; // xmm0
  __int128 v62; // kr00_16
  _QWORD *v63; // rax
  unsigned int v64; // edx
  __int64 v65; // rbx
  __m128i *v66; // rdx
  int v67; // ecx
  _QWORD *v68; // rax
  _QWORD *v69; // rbx
  unsigned int v70; // ebp
  unsigned int v71; // eax
  unsigned int *v72; // rbp
  _QWORD *v73; // rdx
  _QWORD *v74; // rbx
  __int64 v75; // rsi
  _QWORD *v76; // rsi
  _QWORD *v77; // rcx
  _DWORD *v78; // rdi
  __int64 v79; // r8
  __int64 v80; // r8
  __int64 v81; // r8
  __int64 v82; // rcx
  unsigned int *v83; // r12
  _DWORD *v84; // rbp
  __int64 v85; // rsi
  __int64 v86; // rdi
  _QWORD *v87; // rax
  unsigned int v88; // edi
  char **exception; // rbp
  __int64 v94; // [rsp+20h] [rbp-168h]
  __m128i v95; // [rsp+30h] [rbp-158h] BYREF
  int *v96; // [rsp+40h] [rbp-148h]
  char v97; // [rsp+4Bh] [rbp-13Dh]
  unsigned int v98; // [rsp+4Ch] [rbp-13Ch]
  _QWORD *v99; // [rsp+50h] [rbp-138h]
  __int64 **v100; // [rsp+58h] [rbp-130h]
  int v101[2]; // [rsp+70h] [rbp-118h] BYREF
  int v102[2]; // [rsp+78h] [rbp-110h]
  int v103[2]; // [rsp+80h] [rbp-108h] BYREF
  void *v104; // [rsp+88h] [rbp-100h]
  __int64 v105; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v106; // [rsp+98h] [rbp-F0h] BYREF
  _OWORD v107[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v108[2]; // [rsp+C0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-B8h]
  __int64 v110; // [rsp+D8h] [rbp-B0h]
  __int64 v111; // [rsp+E0h] [rbp-A8h]
  __int64 v112; // [rsp+E8h] [rbp-A0h]
  __int64 v113; // [rsp+F0h] [rbp-98h]
  __int64 v114; // [rsp+F8h] [rbp-90h]
  __int64 v115; // [rsp+100h] [rbp-88h]
  __int64 v116; // [rsp+108h] [rbp-80h]
  __int64 *v117; // [rsp+110h] [rbp-78h]
  __int64 v118; // [rsp+118h] [rbp-70h]
  __int64 v119; // [rsp+120h] [rbp-68h]
  __int64 v120; // [rsp+128h] [rbp-60h]
  int v121; // [rsp+130h] [rbp-58h]
  __int64 v122; // [rsp+138h] [rbp-50h]
  __int64 v123; // [rsp+140h] [rbp-48h] BYREF

  v7 = a1->m128i_i64[0];
  v97 = a2;
  v94 = v7;
  *(_QWORD *)v101 = 0;
  *(_QWORD *)v102 = v7;
  *(_QWORD *)v103 = v7;
  v104 = nullptr;
  if ( !a6 )
    sub_6F80C0(a1, a4, a3, (double *)a5, a5, 0);
  v108[1] = 0;
  ptr = nullptr;
  sub_EBCB00((int)v108);
  v8 = a3[1];
  if ( !v8 )
    goto LABEL_22;
  v9 = (unsigned int **)(v8 + 8LL * *(unsigned int *)(v8 - 4));
  if ( (unsigned int **)v8 == v9 )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    v10 = (unsigned int **)a3[1];
    v11 = 0;
    do
    {
      v12 = *v10;
      v13 = **v10;
      if ( v13 < LODWORD(v108[1]) && (*((_DWORD *)ptr + (v13 >> 5)) & (1 << v13)) != 0 )
      {
        v14 = v11 + 1;
        v15 = (__int64 *)(v8 + 8 * v11);
        v16 = *a3;
        ++v12[2];
        v17 = *v15;
        if ( *v15 )
        {
          v18 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v18 )
          {
            v95.m128i_i32[0] = v14;
            sub_15D7BC0(v16, v17);
            v8 = a3[1];
            v14 = v95.m128i_i32[0];
          }
        }
        *v15 = (__int64)v12;
        v11 = v14;
      }
      ++v10;
    }
    while ( v9 != v10 );
    if ( !v8 )
      goto LABEL_22;
    v19 = v8 + 8LL * *(unsigned int *)(v8 - 4);
    v20 = (__int64 *)(v8 + 8LL * (unsigned int)v11);
    if ( (unsigned __int64)v20 < v19 )
    {
      do
      {
        while ( 1 )
        {
          v21 = *v20;
          if ( *v20 )
          {
            v22 = *a3;
            v18 = (*(_DWORD *)(v21 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v20 >= v19 )
            goto LABEL_20;
        }
        sub_15D7BC0(v22, v21);
        ++v20;
      }
      while ( (unsigned __int64)v20 < v19 );
LABEL_20:
      v9 = (unsigned int **)a3[1];
      if ( !v9 )
        goto LABEL_22;
    }
    else
    {
      v9 = (unsigned int **)v8;
    }
  }
  *((_DWORD *)v9 - 1) = v11;
LABEL_22:
  if ( ptr )
    sub_186B220(ptr);
  sub_6F2E80(a1, a4, a3, (__int64 *)a5);
  v23 = 0;
  v24 = 0;
  do
  {
LABEL_25:
    v25 = (_QWORD *)a3[1];
    v26 = *(_QWORD *)(a5 + 8);
    if ( !v25 )
    {
      if ( v26 )
        goto LABEL_28;
      goto LABEL_39;
    }
    if ( !*((_DWORD *)v25 - 1) )
    {
      if ( v26 )
        goto LABEL_28;
      v27 = (_QWORD *)a3[1];
LABEL_31:
      v28 = (unsigned __int64)&v25[*((unsigned int *)v25 - 1)];
      if ( (unsigned __int64)v25 >= v28 )
        goto LABEL_38;
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v30 = *a3;
            v18 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v27 >= v28 )
            goto LABEL_37;
        }
        sub_15D7BC0(v30, v29);
        ++v27;
      }
      while ( (unsigned __int64)v27 < v28 );
LABEL_37:
      v27 = (_QWORD *)a3[1];
      if ( v27 )
LABEL_38:
        *((_DWORD *)v27 - 1) = 0;
      goto LABEL_39;
    }
    if ( !v26 )
    {
LABEL_30:
      v27 = v25;
      if ( !v25 )
        goto LABEL_39;
      goto LABEL_31;
    }
    if ( !*(_DWORD *)(v26 - 4) )
      goto LABEL_28;
    if ( !(unsigned __int8)sub_18290A0(a1->m128i_i64[0]) )
      break;
    v34 = a1->m128i_i64[0];
    v35 = (__int64 *)a1[2].m128i_i64[0];
    v105 = a1->m128i_i64[0];
    if ( !v35 || (v36 = &v35[*((unsigned int *)v35 - 1)], v35 == v36) )
    {
      v40 = a3[1];
      if ( v40 )
      {
        v38 = 0;
        goto LABEL_64;
      }
LABEL_115:
      if ( (unsigned __int8)sub_18290A0(v34) )
      {
        v106 = 0;
        sub_2B4F40(&v105);
        break;
      }
LABEL_124:
      v41 = 0;
LABEL_125:
      v95.m128i_i64[1] = (__int64)&v105;
      goto LABEL_89;
    }
    v37 = v35;
    v95.m128i_i8[8] = a6 != nullptr;
    v38 = 0;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          if ( v95.m128i_i8[8] )
          {
            if ( *a6 )
              v95.m128i_i32[0] = *(_DWORD *)(*a6 - 4LL);
            else
              v95.m128i_i32[0] = 0;
            (*(void (__fastcall **)(__int64, __int64, __int64 *, __int64, _QWORD *))(*(_QWORD *)v39 + 48LL))(
              v39,
              a4,
              a3,
              a5,
              a6);
            if ( *a6 )
              v38 |= v95.m128i_i32[0] < *(_DWORD *)(*a6 - 4LL);
            goto LABEL_58;
          }
          if ( v39 )
            break;
        }
LABEL_58:
        if ( v36 == ++v37 )
          goto LABEL_63;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)v39 + 40LL))(v39, a4, a3, a5);
      ++v37;
    }
    while ( v36 != v37 );
LABEL_63:
    v40 = a3[1];
    v34 = a1->m128i_i64[0];
    if ( !v40 )
    {
      if ( !v38 )
        goto LABEL_115;
      if ( !(unsigned __int8)sub_18290A0(v34) )
        goto LABEL_124;
      v41 = 0;
      v95.m128i_i64[1] = (__int64)&v105;
      if ( !a6 )
        goto LABEL_105;
      v106 = 0;
      sub_2B4F40(&v105);
      goto LABEL_25;
    }
LABEL_64:
    v41 = 0;
    do
    {
      if ( !*(_DWORD *)(v40 - 4) )
        break;
      v42 = *(_QWORD *)(a5 + 8);
      if ( !v42 || !*(_DWORD *)(v42 - 4) || a6 )
        break;
      v95.m128i_i64[1] = (__int64)&v105;
      if ( !(unsigned __int8)sub_18290A0(v34) )
      {
        v34 = a1->m128i_i64[0];
        break;
      }
      v43 = 0x7FFFFFFF8LL;
      v44 = a3[1];
      if ( v44 )
        v43 = 8LL * (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
      v45 = *(_QWORD *)(v44 + v43);
      if ( v45 )
        ++*(_DWORD *)(v45 + 8);
      v95.m128i_i64[1] = (__int64)&v105;
      sub_6EF3E0(v23, v94);
      sub_3A8160(a3);
      v46 = *(unsigned int **)(sub_15D1F10(v45) + 24);
      if ( v46
        && (v47 = *v46, (v48 = a1[2].m128i_i64[0]) != 0)
        && (unsigned int)v47 < *(_DWORD *)(v48 - 4)
        && (v49 = *(_QWORD *)(v48 + 8 * v47)) != 0
        && (v50 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64))(*(_QWORD *)v49 + 16LL))(
                    v49,
                    a4,
                    v45,
                    a3,
                    a5)) != 0 )
      {
        v38 = v50;
      }
      else
      {
        *(_QWORD *)&v107[0] = v45;
        if ( v45 )
          ++*(_DWORD *)(v45 + 8);
        v106 = v41;
        sub_6EF800(&v106, v107);
        v41 = v106;
      }
      v40 = a3[1];
      v23 = v45;
      v34 = a1->m128i_i64[0];
    }
    while ( v40 );
    if ( v38 )
    {
      v95.m128i_i64[1] = (__int64)&v105;
      v38 = sub_18290A0(v34);
      if ( v38 )
      {
        v95.m128i_i64[1] = (__int64)&v105;
        if ( v41 )
          goto LABEL_98;
        goto LABEL_103;
      }
      goto LABEL_125;
    }
    if ( !v41 )
      goto LABEL_115;
    if ( !*(_DWORD *)(v41 - 4) || (v51 = *(_QWORD *)(a5 + 8)) == 0 || !*(_DWORD *)(v51 - 4) || !v97 )
    {
      v95.m128i_i64[1] = (__int64)&v105;
      v52 = sub_18290A0(v34);
      goto LABEL_88;
    }
    v95.m128i_i64[1] = (__int64)&v105;
    if ( (unsigned __int8)sub_18290A0(v34) )
    {
      v59 = *(_QWORD *)(v41 + 8LL * (unsigned int)(*(_DWORD *)(v41 - 4) - 1));
      if ( v59 )
        ++*(_DWORD *)(v59 + 8);
      v95.m128i_i64[1] = (__int64)&v105;
      sub_6EF3E0(v23, v94);
      v106 = v41;
      v95.m128i_i64[1] = (__int64)&v105;
      sub_3A8160(&v105);
      v60 = (__int64 **)v107;
      ptr = nullptr;
      v61 = _mm_loadl_epi64(a1);
      v111 = 0;
      v112 = 0;
      v113 = 0;
      v117 = &v123;
      v114 = 0;
      v116 = 0;
      v118 = 1;
      v119 = 0;
      v120 = 0;
      v121 = 1065353216;
      v122 = 0;
      v123 = 0;
      *(__m128i *)v108 = _mm_unpacklo_epi64(v61, v61);
      v110 = v61.m128i_i64[0];
      v115 = v61.m128i_i64[0];
      sub_1374250(v107, a4, v59);
      v62 = v107[0];
      *(_QWORD *)&v107[0] = v24;
      v95.m128i_i64[0] = v62;
      sub_6EF400(v24, *((__int64 *)&v62 + 1));
      sub_14EA0D0(v108, v59, v62);
      if ( a6 )
      {
        v96 = (int *)a1->m128i_i64[0];
        if ( v59 )
          ++*(_DWORD *)(v59 + 8);
        if ( v95.m128i_i64[0] )
          ++*(_DWORD *)(v95.m128i_i64[0] + 8);
        v63 = (_QWORD *)*a6;
        if ( *a6 )
        {
          v64 = *((_DWORD *)v63 - 2);
          if ( *((_DWORD *)v63 - 1) == v64 )
          {
            v98 = (3 * v64 + 1) >> 1;
            v71 = 32 * v98 + 8;
            if ( 32 * v64 + 8 >= v71 || v64 >= (3 * v64 + 1) >> 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v107, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v107);
              sub_233E40((__int64)v107);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v72 = (unsigned int *)sub_186B270(v71);
            v73 = (_QWORD *)*a6;
            v63 = v72 + 2;
            v74 = (_QWORD *)*a6;
            if ( *a6 )
            {
              v75 = *((unsigned int *)v73 - 1);
              v72[1] = v75;
              v76 = &v73[4 * v75];
              if ( v73 != v76 )
              {
                v77 = v73;
                v78 = v72 + 2;
                do
                {
                  v79 = v77[1];
                  v77 += 4;
                  v78 += 8;
                  *((_QWORD *)v78 - 3) = v79;
                  v80 = *(v77 - 4);
                  *(v77 - 4) = 0;
                  *((_QWORD *)v78 - 4) = v80;
                  *((_QWORD *)v78 - 1) = *(v77 - 1);
                  v81 = *(v77 - 2);
                  *(v77 - 2) = 0;
                  *((_QWORD *)v78 - 2) = v81;
                }
                while ( v77 != v76 );
              }
              v82 = *((unsigned int *)v73 - 1);
              if ( (_DWORD)v82 )
              {
                v100 = (__int64 **)v107;
                v83 = v72;
                v84 = v72 + 2;
                v99 = &v73[4 * v82];
                do
                {
                  v85 = v74[3];
                  v86 = v74[2];
                  v74 += 4;
                  sub_6EF400(v86, v85);
                  sub_6EF400(*(v74 - 4), *(v74 - 3));
                }
                while ( v74 != v99 );
                v63 = v84;
                v72 = v83;
                v60 = v100;
                v73 = (_QWORD *)*a6;
              }
              v99 = v63;
              sub_186B220(v73 - 1);
              v63 = v99;
            }
            else
            {
              v72[1] = 0;
            }
            v88 = v98;
            *a6 = v63;
            *v72 = v88;
          }
        }
        else
        {
          v87 = (_QWORD *)sub_186B270(0x48u);
          *v87 = 2;
          v63 = v87 + 1;
          *a6 = v63;
        }
        v65 = (__int64)v96;
        v66 = (__m128i *)&v63[4 * *((unsigned int *)v63 - 1)];
        v67 = *((_DWORD *)v63 - 1) + 1;
        *v66 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v59, (__m128i)(unsigned __int64)v96);
        v66[1] = _mm_unpacklo_epi64(_mm_loadl_epi64(&v95), (__m128i)(unsigned __int64)v94);
        *((_DWORD *)v63 - 1) = v67;
        sub_6EF400(0, v94);
        sub_6EF400(0, v65);
      }
      v68 = *(_QWORD **)(a5 + 8);
      if ( !v68 || (v99 = &v68[*((unsigned int *)v68 - 1)], v99 == v68) )
      {
        v70 = 0;
      }
      else
      {
        v69 = v68;
        v70 = 0;
        v96 = v101;
        v100 = (__int64 **)&a1[1];
        do
        {
          sub_14EA2A0(v108, *v69, v96);
          sub_14B9B80(v100, v96);
          if ( *(_QWORD *)(a1->m128i_i64[0] + 856) != *(_QWORD *)v101 )
          {
            v98 = v70 + 1;
            v107[0] = _mm_loadh_ps((const double *)a5);
            sub_6EF420(v60, *(__int64 *)v101);
            v70 = v98;
          }
          ++v69;
        }
        while ( v99 != v69 );
      }
      sub_39BEE0((__int64 *)a5, v70);
      sub_268600((__int64)v108);
      v38 = sub_18290A0(a1->m128i_i64[0]);
      if ( v38 )
      {
        v24 = v95.m128i_i64[0];
        v23 = v59;
        goto LABEL_98;
      }
      v55 = (__int64 *)v95.m128i_i64[1];
      v24 = v95.m128i_i64[0];
      v23 = v59;
LABEL_90:
      v106 = v41;
      sub_2B4F40(v55);
      sub_2334C0((__int64 *)v103);
      sub_6EF3E0(v23, v94);
      sub_6EF400(*(__int64 *)v101, *(__int64 *)v102);
      return sub_6EF400(v24, v94);
    }
    v58 = a1->m128i_i64[0];
    v95.m128i_i64[1] = (__int64)&v105;
    v52 = sub_18290A0(v58);
LABEL_88:
    v95.m128i_i64[1] = (__int64)&v105;
    if ( !v52 )
    {
LABEL_89:
      v55 = &v105;
      goto LABEL_90;
    }
LABEL_98:
    v56 = 0;
    v95.m128i_i64[0] = (__int64)(a3 + 1);
    while ( v56 < *(_DWORD *)(v41 - 4) )
    {
      v57 = *(_QWORD *)(v41 + 8LL * v56);
      v108[0] = v57;
      if ( v57 )
        ++*(_DWORD *)(v57 + 8);
      sub_6EF800(v95.m128i_i64[0], v108);
      ++v56;
    }
LABEL_103:
    if ( !a6 && v38 )
    {
LABEL_105:
      sub_6F80C0(a1, a4, a3, (double *)a5, v53, v54);
      v106 = v41;
      sub_2B4F40((__int64 *)v95.m128i_i64[1]);
      goto LABEL_25;
    }
    v106 = v41;
    sub_2B4F40((__int64 *)v95.m128i_i64[1]);
  }
  while ( v38 );
  v26 = *(_QWORD *)(a5 + 8);
  if ( !v26 )
  {
LABEL_29:
    v25 = (_QWORD *)a3[1];
    goto LABEL_30;
  }
LABEL_28:
  if ( !*(_DWORD *)(v26 - 4) )
    goto LABEL_29;
LABEL_39:
  result = sub_2334C0((__int64 *)v103);
  if ( v23 )
  {
    v18 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v18 )
      result = sub_15D7BC0(v94, v23);
  }
  v32 = *(_QWORD *)v101;
  if ( *(_QWORD *)v101 )
  {
    v33 = *(_QWORD *)v102;
    v18 = (*(_DWORD *)(*(_QWORD *)v101 + 8LL))-- == 1;
    if ( v18 )
      result = sub_15D7BC0(v33, v32);
  }
  if ( v24 )
  {
    v18 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v18 )
      return sub_15D7BC0(v94, v24);
  }
  return result;
}

