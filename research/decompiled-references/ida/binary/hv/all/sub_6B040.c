__int64 __fastcall sub_6B040(_QWORD *a1, __int64 *a2, __int64 *a3, unsigned __int64 a4, _DWORD *a5, _QWORD *a6, int a7)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r13
  size_t v16; // r15
  void *v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rax
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // r14
  unsigned __int64 i; // r13
  _QWORD *v25; // r15
  __int64 v26; // rax
  __int64 (__fastcall *v27)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 v28; // rdi
  __int64 (*v29)(); // r8
  unsigned __int64 v30; // r14
  unsigned int v31; // esi
  __int64 v32; // r12
  const char *v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rdi
  __int64 (*v36)(); // rcx
  const char *v37; // r13
  __int64 v38; // rbp
  __m128i *v39; // r12
  unsigned __int64 v40; // r13
  size_t v41; // r10
  __int64 v42; // rbp
  __m128i *v43; // r12
  unsigned __int64 v44; // r15
  size_t v45; // r8
  const void *v46; // r9
  void *v47; // rdi
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  int v50; // eax
  __int64 (__fastcall *v51)(__int64); // rax
  _QWORD *v52; // rdi
  __int64 v53; // rdi
  __int64 (*v54)(); // rax
  _QWORD *v55; // rdi
  __int64 (__fastcall *v56)(_QWORD *, unsigned __int8, __int64); // rax
  __int64 v57; // rax
  __int64 (*v58)(); // rcx
  __int64 v59; // r15
  __int64 v60; // r8
  __m128i *v61; // r13
  unsigned __int64 v62; // r10
  size_t v63; // r11
  char *v64; // rdx
  unsigned __int64 v65; // r13
  __int64 v66; // r9
  __int64 v67; // r14
  void **v68; // rsi
  int v69; // eax
  _QWORD *v70; // rbx
  __int64 (__fastcall *v71)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 (__fastcall *v72)(__int64); // rax
  _QWORD *v73; // rdi
  __int64 v74; // rdi
  __int64 (*v75)(); // rax
  unsigned __int64 v77; // r9
  size_t v78; // r10
  const char *v79; // rbp
  void *v80; // rdi
  __int64 v81; // rax
  _DWORD *v82; // rsi
  int v83; // ebp
  unsigned __int64 v84; // rdi
  void **v85; // r9
  void *v86; // rdi
  const char *v87; // rbp
  void *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // r12
  __int64 v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v104; // [rsp+10h] [rbp-160h]
  unsigned __int64 v106; // [rsp+18h] [rbp-158h]
  unsigned __int64 v107; // [rsp+18h] [rbp-158h]
  int v109; // [rsp+28h] [rbp-148h]
  __int64 v110; // [rsp+28h] [rbp-148h]
  __int64 v111; // [rsp+28h] [rbp-148h]
  const void *v112; // [rsp+28h] [rbp-148h]
  size_t v113; // [rsp+30h] [rbp-140h]
  __int64 v114; // [rsp+38h] [rbp-138h]
  void **v115; // [rsp+38h] [rbp-138h]
  __int64 v117; // [rsp+48h] [rbp-128h]
  unsigned __int64 v118; // [rsp+50h] [rbp-120h]
  unsigned __int64 v119; // [rsp+50h] [rbp-120h]
  size_t v120; // [rsp+58h] [rbp-118h]
  void *v121; // [rsp+68h] [rbp-108h] BYREF
  __int128 v122; // [rsp+70h] [rbp-100h]
  void *v123; // [rsp+88h] [rbp-E8h] BYREF
  __int128 v124; // [rsp+90h] [rbp-E0h]
  _BYTE v125[12]; // [rsp+A8h] [rbp-C8h] BYREF
  int v126; // [rsp+B4h] [rbp-BCh]
  __int64 v127; // [rsp+D0h] [rbp-A0h]
  __int64 v128; // [rsp+E8h] [rbp-88h]
  __m128i ptr[2]; // [rsp+F8h] [rbp-78h] BYREF
  __m128i v130; // [rsp+118h] [rbp-58h] BYREF
  __int64 v131; // [rsp+128h] [rbp-48h]
  unsigned __int64 v132; // [rsp+130h] [rbp-40h]

  v7 = a6[1];
  v132 = __readfsqword(0x28u);
  v122 = 0;
  v121 = nullptr;
  if ( a2 )
  {
    v9 = a2[1];
    v125[0] = 0;
    v10 = (v7 + 7) >> 3;
    if ( v10 >= v9 )
    {
      if ( v9 < v10 )
      {
        v48 = *a2;
        v49 = a2[2];
        if ( (unsigned __int64)v125 < *a2 || (unsigned __int64)v125 >= v48 + v49 )
        {
          if ( v49 >= v10 || (v98 = sub_96080(a2, v48, (v7 + 7) >> 3, 1), v9 = a2[1], *a2 = v98, v48 = v98, v9 < v10) )
          {
            while ( 1 )
            {
              *(_BYTE *)(v48 + v9++) = v125[0];
              if ( v10 == v9 )
                break;
              v48 = *a2;
            }
          }
        }
        else if ( v49 >= v10 || (v99 = sub_96080(a2, v48, (v7 + 7) >> 3, 1), v9 = a2[1], *a2 = v99, v48 = v99, v9 < v10) )
        {
          while ( 1 )
          {
            *(_BYTE *)(v48 + v9++) = 0;
            if ( v10 == v9 )
              break;
            v48 = *a2;
          }
        }
        a2[1] = v10;
        v7 = a6[1];
      }
    }
    else
    {
      a2[1] = v10;
      v7 = a6[1];
    }
  }
  if ( a3 )
  {
    v11 = a3[1];
    if ( v11 != v7 )
    {
      memset(ptr, 0, sizeof(ptr));
      v131 = 0;
      v130 = 0;
      if ( v7 < v11 )
      {
        v18 = v7;
        v19 = 56 * v7;
        do
        {
          v20 = v19 + *a3;
          v21 = *(void **)v20;
          if ( *(_QWORD *)v20 )
          {
            *(_QWORD *)(v20 + 8) = 0;
            j__free(v21);
          }
          ++v18;
          v19 += 56;
        }
        while ( v18 < v11 );
      }
      else
      {
        v12 = *a3;
        v13 = a3[2];
        if ( (unsigned __int64)ptr < *a3 || (unsigned __int64)ptr >= v12 + 56 * v13 )
        {
          if ( v13 < v7 )
          {
            *a3 = sub_96080(a3, v12, v7, 56);
            v11 = a3[1];
          }
          if ( v11 < v7 )
          {
            v14 = 56 * v11;
            do
            {
              v15 = v14 + *a3;
              *(_QWORD *)v15 = 0;
              *(_OWORD *)(v15 + 8) = 0;
              v16 = ptr[0].m128i_u64[1];
              if ( ptr[0].m128i_i64[1] )
              {
                v17 = (void *)sub_96030(ptr[0].m128i_i64[1]);
                *(_QWORD *)v15 = v17;
                *(_QWORD *)(v15 + 16) = v16;
                memcpy(v17, (const void *)ptr[0].m128i_i64[0], v16);
                *(_QWORD *)(v15 + 8) = v16;
              }
              ++v11;
              v14 += 56;
              *(_QWORD *)(v15 + 24) = ptr[1].m128i_i64[1];
              *(__m128i *)(v15 + 32) = _mm_load_si128(&v130);
              *(_DWORD *)(v15 + 48) = v131;
            }
            while ( v11 < v7 );
          }
        }
        else if ( v13 >= v7 || (v100 = sub_96080(a3, v12, v7, 56), v11 = a3[1], *a3 = v100, v12 = v100, v11 < v7) )
        {
          v91 = 7 * v11;
          v92 = v11 + 1;
          v93 = 8 * v91;
          v94 = v93 + v12;
          *(_OWORD *)(v94 + 8) = 0;
          *(_QWORD *)v94 = 0;
          *(_QWORD *)(v94 + 24) = 0;
          *(_DWORD *)(v94 + 48) = 0;
          *(_OWORD *)(v94 + 32) = 0;
          if ( v92 < v7 )
          {
            v95 = v93 + 56;
            do
            {
              ++v92;
              v96 = v95 + *a3;
              v95 += 56;
              *(_QWORD *)v96 = 0;
              *(_QWORD *)(v96 + 24) = 0;
              *(_DWORD *)(v96 + 48) = 0;
              *(_OWORD *)(v96 + 8) = 0;
              *(_OWORD *)(v96 + 32) = 0;
            }
            while ( v92 != v7 );
          }
        }
      }
      v22 = (void *)ptr[0].m128i_i64[0];
      a3[1] = v7;
      if ( v22 )
      {
        ptr[0].m128i_i64[1] = 0;
        j__free(v22);
      }
      v7 = a6[1];
    }
    v23 = 0;
    for ( i = 0; i < v7; v23 += 56 )
    {
      v42 = *a6 + 48 * i;
      v43 = (__m128i *)(v23 + *a3);
      if ( (__m128i *)v42 != v43 )
      {
        v44 = *(_QWORD *)(v42 + 8);
        if ( !v44 || (v45 = v44 - 1, v44 == 1) )
        {
          v43->m128i_i64[1] = 0;
        }
        else
        {
          v46 = *(const void **)v42;
          v47 = (void *)v43->m128i_i64[0];
          if ( v43[1].m128i_i64[0] < v44 )
          {
            v112 = *(const void **)v42;
            v97 = sub_96080(v23 + *a3, v43->m128i_i64[0], *(_QWORD *)(v42 + 8), 1);
            v43->m128i_i64[0] = v97;
            v46 = v112;
            v47 = (void *)v97;
            v45 = v44 - 1;
          }
          v43->m128i_i64[1] = v44;
          memmove(v47, v46, v45);
          *(_BYTE *)(v43->m128i_i64[0] + v44 - 1) = 0;
        }
      }
      v43[1].m128i_i64[1] = *(_QWORD *)(v42 + 24);
      if ( (__m128i *)(v42 + 32) != &v43[2] )
        v43[2] = _mm_loadu_si128((const __m128i *)(v42 + 32));
      v7 = a6[1];
      ++i;
    }
  }
  v25 = (_QWORD *)a1[1];
  v26 = *v25;
  v27 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v25 + 200LL);
  if ( v27 == sub_34880 )
  {
    v28 = v25[3];
    if ( !v28 || (v29 = *(__int64 (**)())(*(_QWORD *)v28 + 8LL), v29 == sub_34740) )
    {
      if ( !v7 )
      {
        v114 = 0;
        v117 = 0;
        v109 = 0;
        goto LABEL_82;
      }
      goto LABEL_27;
    }
    ((void (__fastcall *)(__int64, __int64, unsigned __int64))v29)(v28, 5, v7);
  }
  else
  {
    v27((_QWORD *)a1[1], 5u, v7);
  }
  v25 = (_QWORD *)a1[1];
  v26 = *v25;
  v27 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v25 + 200LL);
  if ( a6[1] )
  {
LABEL_27:
    v104 = 0;
    v30 = 0;
    v109 = 0;
    v114 = 0;
    v117 = 0;
    while ( 1 )
    {
      if ( v27 == sub_34880 )
      {
        v35 = v25[3];
        if ( !v35 )
          goto LABEL_43;
        v36 = *(__int64 (**)())(*(_QWORD *)v35 + 8LL);
        if ( v36 == sub_34740 )
          goto LABEL_43;
        v50 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v36)(v35, 1, 1);
      }
      else
      {
        v50 = v27(v25, 1u, 1);
      }
      LODWORD(v7) = v50;
      v25 = (_QWORD *)a1[1];
      v26 = *v25;
      if ( (_DWORD)v7 )
      {
        v27 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(v26 + 200);
        goto LABEL_81;
      }
LABEL_43:
      v37 = haystack;
      v38 = *a6 + 48 * v30;
      if ( *(_QWORD *)(v38 + 8) )
        v37 = *(const char **)v38;
      v31 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, const char *))(v26 + 96))(v25, v125, v37);
      if ( a4 | (unsigned __int64)a3 )
      {
        if ( !v31
          && ((v126 & 0xF000) == 0x8000 || (v31 = sub_65D40(0x21u, (__int64)"%s : not a regular file", v37)) == 0) )
        {
          v34 = v127;
          v114 += v127;
          if ( *(_QWORD *)(v38 + 24) != v127 )
          {
LABEL_48:
            if ( a7 != 1 || v34 )
              goto LABEL_50;
            goto LABEL_39;
          }
          goto LABEL_130;
        }
        v32 = *(_QWORD *)(a1[1] + 16LL);
        if ( v32 )
        {
          v123 = nullptr;
          v124 = 0;
          sub_65C40((__int64)&v123, v31, 0);
          v33 = haystack;
          if ( (_QWORD)v124 )
            v33 = (const char *)v123;
          sub_19480(v32, (__int64)"%s\n", v33);
          if ( v123 )
          {
            *(_QWORD *)&v124 = 0;
            j__free(v123);
          }
        }
        ++v109;
      }
      else if ( !v31 )
      {
        v34 = v127;
        if ( *(_QWORD *)(v38 + 24) != v127 )
          goto LABEL_48;
LABEL_130:
        ptr[0] = 0;
        if ( !(unsigned __int8)sub_691C0(a1, (__int64)ptr, (__int64)v37, (__int64)v125) )
        {
          v81 = v122;
          v82 = v121;
          LODWORD(v123) = v30;
          v83 = v30;
          v117 += v127;
          v84 = v122 + 1;
          if ( &v123 < v121 || &v123 >= (void **)((char *)v121 + 4 * *((_QWORD *)&v122 + 1)) )
          {
            if ( *((_QWORD *)&v122 + 1) < v84 )
            {
              v121 = (void *)sub_96080(&v121, v121, v122 + 1, 4);
              v82 = v121;
              v83 = (int)v123;
              v81 = v122;
            }
          }
          else if ( *((_QWORD *)&v122 + 1) < v84 )
          {
            v121 = (void *)sub_96080(&v121, v121, v122 + 1, 4);
            v82 = v121;
            v81 = v122;
          }
          v82[v81] = v83;
          *(_QWORD *)&v122 = v122 + 1;
          goto LABEL_39;
        }
        if ( *(_OWORD *)(v38 + 32) - *(_OWORD *)ptr != 0 )
        {
          v34 = v127;
          if ( a2 )
            *(_BYTE *)(*a2 + (v30 >> 3)) |= 1 << (v30 & 7);
          if ( a3 )
          {
            v39 = (__m128i *)(*a3 + v104);
            if ( (__m128i *)v38 != v39 )
            {
              v77 = *(_QWORD *)(v38 + 8);
              if ( v77 )
              {
                v78 = v77 - 1;
                if ( v77 != 1 )
                {
                  v79 = *(const char **)v38;
                  v80 = (void *)v39->m128i_i64[0];
                  if ( v39[1].m128i_i64[0] < v77 )
                  {
                    v120 = v77 - 1;
                    v119 = v77;
                    v101 = sub_96080(*a3 + v104, v39->m128i_i64[0], v77, 1);
                    v39->m128i_i64[0] = v101;
                    v80 = (void *)v101;
                    v78 = v120;
                    v77 = v119;
                  }
                  v39->m128i_i64[1] = v77;
                  v118 = v77;
                  memmove(v80, v79, v78);
                  *(_BYTE *)(v39->m128i_i64[0] + v118 - 1) = 0;
                  goto LABEL_57;
                }
              }
LABEL_56:
              v39->m128i_i64[1] = 0;
            }
LABEL_57:
            v39[1].m128i_i64[1] = v34;
            if ( ptr != &v39[2] )
              v39[2] = _mm_load_si128(ptr);
            v39[3].m128i_i32[0] |= 2u;
            goto LABEL_39;
          }
        }
        goto LABEL_39;
      }
      if ( *(_QWORD *)(v38 + 24) )
      {
        v34 = v127;
        if ( a7 != 1 )
        {
LABEL_50:
          ptr[0] = 0;
          if ( a2 )
            *(_BYTE *)(*a2 + (v30 >> 3)) |= 1 << (v30 & 7);
          if ( !a3 )
            goto LABEL_39;
          v39 = (__m128i *)(*a3 + v104);
          if ( (__m128i *)v38 == v39 )
            goto LABEL_57;
          v40 = *(_QWORD *)(v38 + 8);
          if ( !v40 )
            goto LABEL_56;
          v41 = v40 - 1;
          if ( v40 == 1 )
            goto LABEL_56;
          v87 = *(const char **)v38;
          v88 = (void *)v39->m128i_i64[0];
          if ( v39[1].m128i_i64[0] < v40 )
          {
            v90 = sub_96080(*a3 + v104, v39->m128i_i64[0], v40, 1);
            v39->m128i_i64[0] = v90;
            v88 = (void *)v90;
            v41 = v40 - 1;
          }
          v39->m128i_i64[1] = v40;
          memmove(v88, v87, v41);
          *(_BYTE *)(v39->m128i_i64[0] + v40 - 1) = 0;
          goto LABEL_57;
        }
      }
LABEL_39:
      v104 += 56;
      ++v30;
      v25 = (_QWORD *)a1[1];
      v26 = *v25;
      v27 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v25 + 200LL);
      if ( v30 >= a6[1] )
      {
        LODWORD(v7) = 0;
        if ( v27 != sub_34880 )
          goto LABEL_143;
LABEL_82:
        v51 = *(__int64 (__fastcall **)(__int64))(v26 + 192);
        if ( v51 == sub_6A7E0 )
        {
          v52 = (_QWORD *)v25[1];
          if ( v52 )
            sub_6A6B0(v52);
        }
        else
        {
          v51((__int64)v25);
        }
        v53 = v25[3];
        if ( v53 )
        {
          v54 = *(__int64 (**)())(*(_QWORD *)v53 + 8LL);
          if ( v54 != sub_34740 )
            ((void (__fastcall *)(__int64, _QWORD, _QWORD))v54)(v53, 0, 0);
        }
        goto LABEL_88;
      }
    }
  }
  v109 = 0;
  LODWORD(v7) = 0;
  v114 = 0;
  v117 = 0;
LABEL_81:
  if ( v27 == sub_34880 )
    goto LABEL_82;
LABEL_143:
  v27(v25, 0, 0);
LABEL_88:
  if ( !(_DWORD)v7 )
  {
    if ( a4 )
      *(_QWORD *)a4 = v114;
    if ( a5 )
      *a5 = v109;
    if ( (_QWORD)v122 )
    {
      v55 = (_QWORD *)a1[1];
      v56 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v55 + 200LL);
      if ( v56 == sub_34880 )
      {
        v57 = v55[3];
        if ( !v57 )
          goto LABEL_97;
        v58 = *(__int64 (**)())(*(_QWORD *)v57 + 8LL);
        if ( v58 == sub_34740 )
          goto LABEL_97;
        v68 = (void **)&byte_4;
        ((void (__fastcall *)(_QWORD, __int64, __int64))v58)(v55[3], 4, v117);
      }
      else
      {
        v68 = (void **)&byte_4;
        v56(v55, 4u, v117);
      }
      if ( (_QWORD)v122 )
      {
        v55 = (_QWORD *)a1[1];
LABEL_97:
        v59 = 0;
        while ( 1 )
        {
          v64 = (char *)haystack;
          v65 = *((int *)v121 + v59);
          ptr[1] = 0;
          v66 = *a6 + 48 * v65;
          v67 = v66;
          if ( *(_QWORD *)(v66 + 8) )
            v64 = *(char **)v66;
          v123 = v64;
          v68 = (void **)v125;
          if ( (*(unsigned int (__fastcall **)(_QWORD *, _BYTE *))(*v55 + 96LL))(v55, v125) )
            goto LABEL_98;
          v68 = (void **)&ptr[1];
          v69 = sub_64910((_QWORD *)a1[1], (__int64)ptr[1].m128i_i64, (__int64)v123, nullptr, 1, 0.0);
          LODWORD(v7) = v69;
          if ( v69 == 1 )
            break;
          if ( v69
            || (v68 = &v123,
                ptr[0].m128i_i64[0] = v128,
                ptr[0].m128i_i64[1] = v127,
                sub_67B30((__int64)(a1 + 8), (const char **)&v123, ptr),
                *(_OWORD *)(v67 + 32) - *(_OWORD *)&ptr[1] != 0) )
          {
LABEL_98:
            v60 = v127;
            if ( a2 )
              *(_BYTE *)(*a2 + (v65 >> 3)) |= 1 << (v65 & 7);
            if ( a3 )
            {
              v61 = (__m128i *)(*a3 + 56 * v65);
              if ( (__m128i *)v67 != v61 )
              {
                v62 = *(_QWORD *)(v67 + 8);
                if ( v62 && (v63 = v62 - 1, v62 != 1) )
                {
                  v85 = *(void ***)v67;
                  v86 = (void *)v61->m128i_i64[0];
                  if ( v61[1].m128i_i64[0] < v62 )
                  {
                    v115 = *(void ***)v67;
                    v113 = v62 - 1;
                    v111 = v60;
                    v107 = *(_QWORD *)(v67 + 8);
                    v89 = sub_96080(v61, v61->m128i_i64[0], v107, 1);
                    v61->m128i_i64[0] = v89;
                    v85 = v115;
                    v86 = (void *)v89;
                    v63 = v113;
                    v60 = v111;
                    v62 = v107;
                  }
                  v61->m128i_i64[1] = v62;
                  v68 = v85;
                  v110 = v60;
                  v106 = v62;
                  memmove(v86, v85, v63);
                  v60 = v110;
                  *(_BYTE *)(v61->m128i_i64[0] + v106 - 1) = 0;
                }
                else
                {
                  v61->m128i_i64[1] = 0;
                }
              }
              v61[1].m128i_i64[1] = v60;
              if ( &ptr[1] != &v61[2] )
                v61[2] = _mm_load_si128(&ptr[1]);
              v61[3].m128i_i32[0] |= 2u;
            }
            if ( ++v59 >= (unsigned __int64)v122 )
              break;
          }
          else if ( ++v59 >= (unsigned __int64)v122 )
          {
            break;
          }
          v55 = (_QWORD *)a1[1];
        }
      }
      v70 = (_QWORD *)a1[1];
      v71 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v70 + 200LL);
      if ( v71 == sub_34880 )
      {
        v72 = *(__int64 (__fastcall **)(__int64))(*v70 + 192LL);
        if ( v72 == sub_6A7E0 )
        {
          v73 = (_QWORD *)v70[1];
          if ( v73 )
            sub_6A6B0(v73);
        }
        else
        {
          ((void (__fastcall *)(_QWORD, void **, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(_QWORD *, unsigned __int8, __int64), __int64))v72)(
            a1[1],
            v68,
            sub_6A7E0,
            v71,
            v60);
        }
        v74 = v70[3];
        if ( v74 )
        {
          v75 = *(__int64 (**)())(*(_QWORD *)v74 + 8LL);
          if ( v75 != sub_34740 )
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64 (__fastcall *)(_QWORD *, unsigned __int8, __int64), __int64))v75)(
              v74,
              0,
              0,
              v71,
              v60);
        }
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 (__fastcall *)(_QWORD *, unsigned __int8, __int64), __int64))v71)(
          a1[1],
          0,
          0,
          v71,
          v60);
      }
      if ( a1[13] )
        sub_6A6B0(a1);
    }
  }
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    j__free(v121);
  }
  return (unsigned int)v7;
}

