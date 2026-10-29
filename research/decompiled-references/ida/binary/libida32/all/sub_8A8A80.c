__int64 __fastcall sub_8A8A80(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  const char *v12; // rsi
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
  unsigned int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // r12
  const char *v34; // rdx
  __int64 v35; // r15
  __int64 v36; // rdi
  __int64 (*v37)(); // rcx
  const char *v38; // r13
  __int64 v39; // rbp
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __m128i *v43; // r12
  unsigned __int64 v44; // r13
  size_t v45; // r10
  __int64 v46; // rbp
  __m128i *v47; // r12
  unsigned __int64 v48; // r15
  size_t v49; // r8
  const void *v50; // r9
  void *v51; // rdi
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  int v54; // eax
  __int64 (__fastcall *v55)(__int64); // rax
  _QWORD *v56; // rdi
  __int64 v57; // rdi
  __int64 (*v58)(); // rax
  _QWORD *v59; // rdi
  __int64 (__fastcall *v60)(_QWORD *, unsigned __int8, __int64); // rax
  __int64 v61; // rax
  __int64 (*v62)(); // rcx
  __int64 v63; // r15
  __int64 v64; // r8
  __m128i *v65; // r13
  unsigned __int64 v66; // r10
  size_t v67; // r11
  char *v68; // rdx
  unsigned __int64 v69; // r13
  __int64 v70; // r9
  __int64 v71; // r14
  void **v72; // rsi
  int v73; // eax
  _QWORD *v74; // rbx
  __int64 (__fastcall *v75)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 (__fastcall *v76)(__int64); // rax
  _QWORD *v77; // rdi
  __int64 v78; // rdi
  __int64 (*v79)(); // rax
  unsigned __int64 v81; // r9
  size_t v82; // r10
  const char *v83; // rbp
  void *v84; // rdi
  __int64 v85; // rax
  _DWORD *v86; // rsi
  int v87; // ebp
  unsigned __int64 v88; // rdi
  void **v89; // r9
  void *v90; // rdi
  const char *v91; // rbp
  void *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // r12
  __int64 v97; // rdx
  const char *v98; // rsi
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v108; // [rsp+10h] [rbp-160h]
  unsigned __int64 v110; // [rsp+18h] [rbp-158h]
  unsigned __int64 v111; // [rsp+18h] [rbp-158h]
  int v113; // [rsp+28h] [rbp-148h]
  __int64 v114; // [rsp+28h] [rbp-148h]
  __int64 v115; // [rsp+28h] [rbp-148h]
  const void *v116; // [rsp+28h] [rbp-148h]
  size_t v117; // [rsp+30h] [rbp-140h]
  __int64 v118; // [rsp+38h] [rbp-138h]
  void **v119; // [rsp+38h] [rbp-138h]
  __int64 v121; // [rsp+48h] [rbp-128h]
  unsigned __int64 v122; // [rsp+50h] [rbp-120h]
  unsigned __int64 v123; // [rsp+50h] [rbp-120h]
  size_t v124; // [rsp+58h] [rbp-118h]
  void *ptr; // [rsp+68h] [rbp-108h] BYREF
  __int128 v126; // [rsp+70h] [rbp-100h]
  void *v127; // [rsp+88h] [rbp-E8h] BYREF
  __int128 v128; // [rsp+90h] [rbp-E0h]
  _BYTE v129[12]; // [rsp+A8h] [rbp-C8h] BYREF
  int v130; // [rsp+B4h] [rbp-BCh]
  __int64 v131; // [rsp+D0h] [rbp-A0h]
  __int64 v132; // [rsp+E8h] [rbp-88h]
  __m128i src[2]; // [rsp+F8h] [rbp-78h] BYREF
  __m128i v134; // [rsp+118h] [rbp-58h] BYREF
  __int64 v135; // [rsp+128h] [rbp-48h]
  unsigned __int64 v136; // [rsp+130h] [rbp-40h]

  v7 = a6[1];
  v136 = __readfsqword(0x28u);
  v126 = 0;
  ptr = nullptr;
  if ( a2 )
  {
    v9 = a2[1];
    v129[0] = 0;
    v10 = (v7 + 7) >> 3;
    if ( v10 >= v9 )
    {
      if ( v9 < v10 )
      {
        v52 = *a2;
        v53 = a2[2];
        if ( (unsigned __int64)v129 < *a2 || (unsigned __int64)v129 >= v52 + v53 )
        {
          if ( v53 >= v10
            || (v102 = qvector_reserve(a2, v52, (v7 + 7) >> 3, 1), v9 = a2[1], *a2 = v102, v52 = v102, v9 < v10) )
          {
            while ( 1 )
            {
              *(_BYTE *)(v52 + v9++) = v129[0];
              if ( v10 == v9 )
                break;
              v52 = *a2;
            }
          }
        }
        else if ( v53 >= v10
               || (v103 = qvector_reserve(a2, v52, (v7 + 7) >> 3, 1), v9 = a2[1], *a2 = v103, v52 = v103, v9 < v10) )
        {
          while ( 1 )
          {
            *(_BYTE *)(v52 + v9++) = 0;
            if ( v10 == v9 )
              break;
            v52 = *a2;
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
      memset(src, 0, sizeof(src));
      v135 = 0;
      v134 = 0;
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
            qfree(v21);
          }
          ++v18;
          v19 += 56;
        }
        while ( v18 < v11 );
      }
      else
      {
        v12 = (const char *)*a3;
        v13 = a3[2];
        if ( (unsigned __int64)src < *a3 || src >= (__m128i *)&v12[56 * v13] )
        {
          if ( v13 < v7 )
          {
            *a3 = qvector_reserve(a3, v12, v7, 56);
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
              v16 = src[0].m128i_u64[1];
              if ( src[0].m128i_i64[1] )
              {
                v17 = (void *)qalloc_or_throw(src[0].m128i_i64[1], v12);
                *(_QWORD *)v15 = v17;
                *(_QWORD *)(v15 + 16) = v16;
                v12 = (const char *)src[0].m128i_i64[0];
                memcpy(v17, (const void *)src[0].m128i_i64[0], v16);
                *(_QWORD *)(v15 + 8) = v16;
              }
              ++v11;
              v14 += 56;
              *(_QWORD *)(v15 + 24) = src[1].m128i_i64[1];
              *(__m128i *)(v15 + 32) = _mm_load_si128(&v134);
              *(_DWORD *)(v15 + 48) = v135;
            }
            while ( v11 < v7 );
          }
        }
        else if ( v13 >= v7
               || (v104 = qvector_reserve(a3, v12, v7, 56), v11 = a3[1], *a3 = v104, v12 = (const char *)v104, v11 < v7) )
        {
          v95 = 7 * v11;
          v96 = v11 + 1;
          v97 = 8 * v95;
          v98 = &v12[v97];
          *(_OWORD *)(v98 + 8) = 0;
          *(_QWORD *)v98 = 0;
          *((_QWORD *)v98 + 3) = 0;
          *((_DWORD *)v98 + 12) = 0;
          *((_OWORD *)v98 + 2) = 0;
          if ( v96 < v7 )
          {
            v99 = v97 + 56;
            do
            {
              ++v96;
              v100 = v99 + *a3;
              v99 += 56;
              *(_QWORD *)v100 = 0;
              *(_QWORD *)(v100 + 24) = 0;
              *(_DWORD *)(v100 + 48) = 0;
              *(_OWORD *)(v100 + 8) = 0;
              *(_OWORD *)(v100 + 32) = 0;
            }
            while ( v96 != v7 );
          }
        }
      }
      v22 = (void *)src[0].m128i_i64[0];
      a3[1] = v7;
      if ( v22 )
      {
        src[0].m128i_i64[1] = 0;
        qfree(v22);
      }
      v7 = a6[1];
    }
    v23 = 0;
    for ( i = 0; i < v7; v23 += 56 )
    {
      v46 = *a6 + 48 * i;
      v47 = (__m128i *)(v23 + *a3);
      if ( (__m128i *)v46 != v47 )
      {
        v48 = *(_QWORD *)(v46 + 8);
        if ( !v48 || (v49 = v48 - 1, v48 == 1) )
        {
          v47->m128i_i64[1] = 0;
        }
        else
        {
          v50 = *(const void **)v46;
          v51 = (void *)v47->m128i_i64[0];
          if ( v47[1].m128i_i64[0] < v48 )
          {
            v116 = *(const void **)v46;
            v101 = qvector_reserve(v23 + *a3, v47->m128i_i64[0], *(_QWORD *)(v46 + 8), 1);
            v47->m128i_i64[0] = v101;
            v50 = v116;
            v51 = (void *)v101;
            v49 = v48 - 1;
          }
          v47->m128i_i64[1] = v48;
          memmove(v51, v50, v49);
          *(_BYTE *)(v47->m128i_i64[0] + v48 - 1) = 0;
        }
      }
      v47[1].m128i_i64[1] = *(_QWORD *)(v46 + 24);
      if ( (__m128i *)(v46 + 32) != &v47[2] )
        v47[2] = _mm_loadu_si128((const __m128i *)(v46 + 32));
      v7 = a6[1];
      ++i;
    }
  }
  v25 = (_QWORD *)a1[1];
  v26 = *v25;
  v27 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v25 + 200LL);
  if ( v27 == sub_8A88C0 )
  {
    v28 = v25[3];
    if ( !v28 || (v29 = *(__int64 (**)())(*(_QWORD *)v28 + 8LL), v29 == sub_8A46A0) )
    {
      if ( !v7 )
      {
        v118 = 0;
        v121 = 0;
        v113 = 0;
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
    v108 = 0;
    v30 = 0;
    v113 = 0;
    v118 = 0;
    v121 = 0;
    while ( 1 )
    {
      if ( v27 == sub_8A88C0 )
      {
        v36 = v25[3];
        if ( !v36 )
          goto LABEL_43;
        v37 = *(__int64 (**)())(*(_QWORD *)v36 + 8LL);
        if ( v37 == sub_8A46A0 )
          goto LABEL_43;
        v54 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v37)(v36, 1, 1);
      }
      else
      {
        v54 = v27(v25, 1u, 1);
      }
      LODWORD(v7) = v54;
      v25 = (_QWORD *)a1[1];
      v26 = *v25;
      if ( (_DWORD)v7 )
      {
        v27 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(v26 + 200);
        goto LABEL_81;
      }
LABEL_43:
      v38 = haystack;
      v39 = *a6 + 48 * v30;
      if ( *(_QWORD *)(v39 + 8) )
        v38 = *(const char **)v39;
      v32 = (*(unsigned int (__fastcall **)(_QWORD *, _BYTE *, const char *))(v26 + 96))(v25, v129, v38);
      if ( a4 | (unsigned __int64)a3 )
      {
        if ( !(_DWORD)v32 )
        {
          if ( (v130 & 0xF000) == 0x8000
            || (v31 = sub_8DB5A0(33, (unsigned int)"%s : not a regular file", (_DWORD)v38, v40, v41, v42),
                (v32 = v31) == 0) )
          {
            v35 = v131;
            v118 += v131;
            if ( *(_QWORD *)(v39 + 24) != v131 )
            {
LABEL_48:
              if ( a7 != 1 || v35 )
                goto LABEL_50;
              goto LABEL_39;
            }
            goto LABEL_130;
          }
        }
        v33 = *(_QWORD *)(a1[1] + 16LL);
        if ( v33 )
        {
          v127 = nullptr;
          v128 = 0;
          vault_errstr(&v127, v32, 0);
          v34 = haystack;
          if ( (_QWORD)v128 )
            v34 = (const char *)v127;
          sub_8A4EC0(v33, (__int64)"%s\n", v34);
          if ( v127 )
          {
            *(_QWORD *)&v128 = 0;
            qfree(v127);
          }
        }
        ++v113;
      }
      else if ( !(_DWORD)v32 )
      {
        v35 = v131;
        if ( *(_QWORD *)(v39 + 24) != v131 )
          goto LABEL_48;
LABEL_130:
        src[0] = 0;
        if ( !(unsigned __int8)sub_8A6B70(a1, src, (__int64)v38, (__int64)v129) )
        {
          v85 = v126;
          v86 = ptr;
          LODWORD(v127) = v30;
          v87 = v30;
          v121 += v131;
          v88 = v126 + 1;
          if ( &v127 < ptr || &v127 >= (void **)((char *)ptr + 4 * *((_QWORD *)&v126 + 1)) )
          {
            if ( *((_QWORD *)&v126 + 1) < v88 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v126 + 1, 4);
              v86 = ptr;
              v87 = (int)v127;
              v85 = v126;
            }
          }
          else if ( *((_QWORD *)&v126 + 1) < v88 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v126 + 1, 4);
            v86 = ptr;
            v85 = v126;
          }
          v86[v85] = v87;
          *(_QWORD *)&v126 = v126 + 1;
          goto LABEL_39;
        }
        if ( *(_OWORD *)(v39 + 32) - *(_OWORD *)src != 0 )
        {
          v35 = v131;
          if ( a2 )
            *(_BYTE *)(*a2 + (v30 >> 3)) |= 1 << (v30 & 7);
          if ( a3 )
          {
            v43 = (__m128i *)(*a3 + v108);
            if ( (__m128i *)v39 != v43 )
            {
              v81 = *(_QWORD *)(v39 + 8);
              if ( v81 )
              {
                v82 = v81 - 1;
                if ( v81 != 1 )
                {
                  v83 = *(const char **)v39;
                  v84 = (void *)v43->m128i_i64[0];
                  if ( v43[1].m128i_i64[0] < v81 )
                  {
                    v124 = v81 - 1;
                    v123 = v81;
                    v105 = qvector_reserve(*a3 + v108, v43->m128i_i64[0], v81, 1);
                    v43->m128i_i64[0] = v105;
                    v84 = (void *)v105;
                    v82 = v124;
                    v81 = v123;
                  }
                  v43->m128i_i64[1] = v81;
                  v122 = v81;
                  memmove(v84, v83, v82);
                  *(_BYTE *)(v43->m128i_i64[0] + v122 - 1) = 0;
                  goto LABEL_57;
                }
              }
LABEL_56:
              v43->m128i_i64[1] = 0;
            }
LABEL_57:
            v43[1].m128i_i64[1] = v35;
            if ( src != &v43[2] )
              v43[2] = _mm_load_si128(src);
            v43[3].m128i_i32[0] |= 2u;
            goto LABEL_39;
          }
        }
        goto LABEL_39;
      }
      if ( *(_QWORD *)(v39 + 24) )
      {
        v35 = v131;
        if ( a7 != 1 )
        {
LABEL_50:
          src[0] = 0;
          if ( a2 )
            *(_BYTE *)(*a2 + (v30 >> 3)) |= 1 << (v30 & 7);
          if ( !a3 )
            goto LABEL_39;
          v43 = (__m128i *)(*a3 + v108);
          if ( (__m128i *)v39 == v43 )
            goto LABEL_57;
          v44 = *(_QWORD *)(v39 + 8);
          if ( !v44 )
            goto LABEL_56;
          v45 = v44 - 1;
          if ( v44 == 1 )
            goto LABEL_56;
          v91 = *(const char **)v39;
          v92 = (void *)v43->m128i_i64[0];
          if ( v43[1].m128i_i64[0] < v44 )
          {
            v94 = qvector_reserve(*a3 + v108, v43->m128i_i64[0], v44, 1);
            v43->m128i_i64[0] = v94;
            v92 = (void *)v94;
            v45 = v44 - 1;
          }
          v43->m128i_i64[1] = v44;
          memmove(v92, v91, v45);
          *(_BYTE *)(v43->m128i_i64[0] + v44 - 1) = 0;
          goto LABEL_57;
        }
      }
LABEL_39:
      v108 += 56;
      ++v30;
      v25 = (_QWORD *)a1[1];
      v26 = *v25;
      v27 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v25 + 200LL);
      if ( v30 >= a6[1] )
      {
        LODWORD(v7) = 0;
        if ( v27 != sub_8A88C0 )
          goto LABEL_143;
LABEL_82:
        v55 = *(__int64 (__fastcall **)(__int64))(v26 + 192);
        if ( v55 == sub_8A8180 )
        {
          v56 = (_QWORD *)v25[1];
          if ( v56 )
            sub_8A8050(v56);
        }
        else
        {
          v55((__int64)v25);
        }
        v57 = v25[3];
        if ( v57 )
        {
          v58 = *(__int64 (**)())(*(_QWORD *)v57 + 8LL);
          if ( v58 != sub_8A46A0 )
            ((void (__fastcall *)(__int64, _QWORD, _QWORD))v58)(v57, 0, 0);
        }
        goto LABEL_88;
      }
    }
  }
  v113 = 0;
  LODWORD(v7) = 0;
  v118 = 0;
  v121 = 0;
LABEL_81:
  if ( v27 == sub_8A88C0 )
    goto LABEL_82;
LABEL_143:
  v27(v25, 0, 0);
LABEL_88:
  if ( !(_DWORD)v7 )
  {
    if ( a4 )
      *(_QWORD *)a4 = v118;
    if ( a5 )
      *a5 = v113;
    if ( (_QWORD)v126 )
    {
      v59 = (_QWORD *)a1[1];
      v60 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v59 + 200LL);
      if ( v60 == sub_8A88C0 )
      {
        v61 = v59[3];
        if ( !v61 )
          goto LABEL_97;
        v62 = *(__int64 (**)())(*(_QWORD *)v61 + 8LL);
        if ( v62 == sub_8A46A0 )
          goto LABEL_97;
        v72 = (void **)&byte_4;
        ((void (__fastcall *)(_QWORD, __int64, __int64))v62)(v59[3], 4, v121);
      }
      else
      {
        v72 = (void **)&byte_4;
        v60(v59, 4u, v121);
      }
      if ( (_QWORD)v126 )
      {
        v59 = (_QWORD *)a1[1];
LABEL_97:
        v63 = 0;
        while ( 1 )
        {
          v68 = (char *)haystack;
          v69 = *((int *)ptr + v63);
          src[1] = 0;
          v70 = *a6 + 48 * v69;
          v71 = v70;
          if ( *(_QWORD *)(v70 + 8) )
            v68 = *(char **)v70;
          v127 = v68;
          v72 = (void **)v129;
          if ( (*(unsigned int (__fastcall **)(_QWORD *, _BYTE *))(*v59 + 96LL))(v59, v129) )
            goto LABEL_98;
          v72 = (void **)&src[1];
          v73 = sub_8DA4A0(a1[1], &src[1], v127, 0, 1);
          LODWORD(v7) = v73;
          if ( v73 == 1 )
            break;
          if ( v73
            || (v72 = &v127,
                src[0].m128i_i64[0] = v132,
                src[0].m128i_i64[1] = v131,
                sub_8A54E0((__int64)(a1 + 8), (const char **)&v127, src),
                *(_OWORD *)(v71 + 32) - *(_OWORD *)&src[1] != 0) )
          {
LABEL_98:
            v64 = v131;
            if ( a2 )
              *(_BYTE *)(*a2 + (v69 >> 3)) |= 1 << (v69 & 7);
            if ( a3 )
            {
              v65 = (__m128i *)(*a3 + 56 * v69);
              if ( (__m128i *)v71 != v65 )
              {
                v66 = *(_QWORD *)(v71 + 8);
                if ( v66 && (v67 = v66 - 1, v66 != 1) )
                {
                  v89 = *(void ***)v71;
                  v90 = (void *)v65->m128i_i64[0];
                  if ( v65[1].m128i_i64[0] < v66 )
                  {
                    v119 = *(void ***)v71;
                    v117 = v66 - 1;
                    v115 = v64;
                    v111 = *(_QWORD *)(v71 + 8);
                    v93 = qvector_reserve(v65, v65->m128i_i64[0], v111, 1);
                    v65->m128i_i64[0] = v93;
                    v89 = v119;
                    v90 = (void *)v93;
                    v67 = v117;
                    v64 = v115;
                    v66 = v111;
                  }
                  v65->m128i_i64[1] = v66;
                  v72 = v89;
                  v114 = v64;
                  v110 = v66;
                  memmove(v90, v89, v67);
                  v64 = v114;
                  *(_BYTE *)(v65->m128i_i64[0] + v110 - 1) = 0;
                }
                else
                {
                  v65->m128i_i64[1] = 0;
                }
              }
              v65[1].m128i_i64[1] = v64;
              if ( &src[1] != &v65[2] )
                v65[2] = _mm_load_si128(&src[1]);
              v65[3].m128i_i32[0] |= 2u;
            }
            if ( ++v63 >= (unsigned __int64)v126 )
              break;
          }
          else if ( ++v63 >= (unsigned __int64)v126 )
          {
            break;
          }
          v59 = (_QWORD *)a1[1];
        }
      }
      v74 = (_QWORD *)a1[1];
      v75 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v74 + 200LL);
      if ( v75 == sub_8A88C0 )
      {
        v76 = *(__int64 (__fastcall **)(__int64))(*v74 + 192LL);
        if ( v76 == sub_8A8180 )
        {
          v77 = (_QWORD *)v74[1];
          if ( v77 )
            sub_8A8050(v77);
        }
        else
        {
          ((void (__fastcall *)(_QWORD, void **, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(_QWORD *, unsigned __int8, __int64), __int64))v76)(
            a1[1],
            v72,
            sub_8A8180,
            v75,
            v64);
        }
        v78 = v74[3];
        if ( v78 )
        {
          v79 = *(__int64 (**)())(*(_QWORD *)v78 + 8LL);
          if ( v79 != sub_8A46A0 )
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64 (__fastcall *)(_QWORD *, unsigned __int8, __int64), __int64))v79)(
              v78,
              0,
              0,
              v75,
              v64);
        }
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 (__fastcall *)(_QWORD *, unsigned __int8, __int64), __int64))v75)(
          a1[1],
          0,
          0,
          v75,
          v64);
      }
      if ( a1[13] )
        sub_8A8050(a1);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v126 = 0;
    qfree(ptr);
  }
  return (unsigned int)v7;
}

