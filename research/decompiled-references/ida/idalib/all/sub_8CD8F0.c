__int64 __fastcall sub_8CD8F0(_QWORD *a1, __int64 *a2, _QWORD *a3, int a4)
{
  _QWORD *v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 v12; // rdi
  __int64 (*v13)(); // rcx
  unsigned __int64 v14; // r15
  int v15; // r14d
  __int64 (__fastcall *v16)(_QWORD *, unsigned __int8, __int64); // rax
  __int64 v17; // rdi
  __int64 (*v18)(); // rax
  __int64 v19; // rcx
  void *v20; // rdi
  char *v21; // r10
  __int64 v22; // rax
  __int64 (__fastcall *v23)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 (__fastcall *v24)(__int64); // rax
  _QWORD *v25; // rdi
  __int64 v26; // rdi
  __int64 (*v27)(); // rax
  __int64 (__fastcall *v28)(__int64); // rax
  _QWORD *v29; // rdi
  char *v30; // rdi
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // r15
  char *v34; // rbx
  void *v35; // rdi
  void *v36; // rdi
  __int64 (__fastcall *v38)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 (__fastcall *v39)(__int64); // rax
  _QWORD *v40; // rdi
  __int64 v41; // rdi
  __int64 (*v42)(); // rax
  __int64 (__fastcall *v43)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 v44; // rdi
  __int64 (*v45)(); // rcx
  char *v46; // r15
  void *v47; // rax
  __int64 v48; // r14
  const char *v49; // rcx
  bool v50; // zf
  const char *v51; // r8
  char v52; // al
  void *v53; // rdi
  void *v54; // rdx
  __int64 v55; // rax
  size_t v56; // r9
  __int64 v57; // rax
  size_t v58; // r11
  __m128i v59; // xmm2
  __int64 v60; // r8
  __m128i v61; // xmm1
  __int64 v62; // r10
  char *v63; // rsi
  __m128i v64; // xmm0
  char *v65; // rax
  void *v66; // rcx
  __m128i v67; // [rsp+8h] [rbp-160h] BYREF
  __m128i v68; // [rsp+18h] [rbp-150h] BYREF
  size_t v69; // [rsp+28h] [rbp-140h]
  __int64 v70; // [rsp+30h] [rbp-138h]
  __int64 v71; // [rsp+38h] [rbp-130h]
  size_t n; // [rsp+40h] [rbp-128h]
  void *v73; // [rsp+48h] [rbp-120h]
  void *ptr; // [rsp+50h] [rbp-118h]
  __m128i v75; // [rsp+58h] [rbp-110h] BYREF
  __m128i *v76; // [rsp+68h] [rbp-100h]
  __int64 v77; // [rsp+70h] [rbp-F8h]
  int v78; // [rsp+84h] [rbp-E4h] BYREF
  void *v79; // [rsp+88h] [rbp-E0h] BYREF
  __int128 v80; // [rsp+90h] [rbp-D8h]
  void *v81; // [rsp+A8h] [rbp-C0h] BYREF
  __int128 v82; // [rsp+B0h] [rbp-B8h]
  void *v83; // [rsp+C8h] [rbp-A0h] BYREF
  __m128i v84; // [rsp+D0h] [rbp-98h] BYREF
  void *src; // [rsp+E0h] [rbp-88h]
  __int128 v86; // [rsp+E8h] [rbp-80h]
  size_t v87; // [rsp+F8h] [rbp-70h]
  __m128i v88; // [rsp+100h] [rbp-68h] BYREF
  __int64 v89; // [rsp+110h] [rbp-58h]
  __m128i v90; // [rsp+118h] [rbp-50h] BYREF
  __int64 v91; // [rsp+128h] [rbp-40h]
  unsigned __int64 v92; // [rsp+130h] [rbp-38h]

  LODWORD(v76) = a4;
  v7 = (_QWORD *)a1[1];
  v92 = __readfsqword(0x28u);
  v78 = 0;
  v8 = sub_8CC7C0(v7, nullptr, a2, 0, &v78, a3, 3);
  if ( v8 )
    return v8;
  v9 = a3[1];
  v79 = nullptr;
  v80 = 0;
  v75.m128i_i64[1] = v9;
  v10 = *a1;
  v11 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
  if ( v11 == sub_8CC600 )
  {
    v12 = a1[3];
    if ( !v12 || (v13 = *(__int64 (**)())(*(_QWORD *)v12 + 8LL), v13 == sub_8C83E0) )
    {
      if ( !v75.m128i_i64[1] )
      {
        v77 = 0;
        goto LABEL_45;
      }
      goto LABEL_6;
    }
    ((void (__fastcall *)(__int64, __int64, __int64))v13)(v12, 5, v75.m128i_i64[1]);
  }
  else
  {
    v11(a1, 5u, v75.m128i_i64[1]);
  }
  v77 = a3[1];
  if ( !v77 )
  {
    v75.m128i_i64[1] = 0;
    goto LABEL_44;
  }
LABEL_6:
  v14 = 0;
  v75.m128i_i64[1] = 0;
  v77 = 0;
  v15 = (unsigned __int8)v76 & 1;
  do
  {
    while ( 1 )
    {
      v19 = *a2 + 56 * v14;
      if ( v15 | *(_DWORD *)(v19 + 48) & 2 )
      {
        v87 = 0;
        v84 = 0;
        v86 = 0;
        v83 = nullptr;
        src = nullptr;
        v89 = 0;
        v91 = -1;
        v88 = 0;
        v90 = 0;
        if ( ((unsigned __int8)v76 & 2) != 0 )
        {
          v77 += *(_QWORD *)(v19 + 24);
        }
        else
        {
          v75.m128i_i64[0] = v19;
          if ( (unsigned int)sub_8CB490((__int64)a1, (__int64)&v83, *a3 + 48 * v14) )
          {
            v20 = src;
            v77 += *(_QWORD *)(v75.m128i_i64[0] + 24);
          }
          else
          {
            v91 = v14;
            v75.m128i_i64[1] += v89;
            v75.m128i_i64[0] = v84.m128i_i64[0];
            ptr = nullptr;
            if ( v84.m128i_i64[0] )
            {
              ptr = (void *)qalloc_or_throw(v84.m128i_i64[0]);
              memcpy(ptr, v83, v75.m128i_u64[0]);
            }
            v73 = nullptr;
            v56 = v86;
            if ( (_QWORD)v86 )
            {
              n = v86;
              v73 = (void *)qalloc_or_throw(v86);
              memcpy(v73, src, n);
              v56 = n;
            }
            v57 = v80;
            v58 = v87;
            v59 = _mm_loadu_si128(&v88);
            v60 = v89;
            v61 = _mm_load_si128(&v90);
            v62 = v91;
            v63 = (char *)v79;
            if ( *((_QWORD *)&v80 + 1) < (unsigned __int64)(v80 + 1) )
            {
              v69 = v56;
              v70 = v91;
              v71 = v89;
              n = v87;
              v67 = v59;
              v68 = v61;
              v79 = (void *)qvector_reserve(&v79, v79, v80 + 1, 104);
              v63 = (char *)v79;
              v59 = _mm_load_si128(&v67);
              v57 = v80;
              v61 = _mm_load_si128(&v68);
              v56 = v69;
              v62 = v70;
              v60 = v71;
              v58 = n;
            }
            v64 = _mm_loadl_epi64(&v75);
            v65 = &v63[104 * v57];
            *(_QWORD *)v65 = ptr;
            v66 = v73;
            *(__m128i *)(v65 + 8) = _mm_unpacklo_epi64(v64, v64);
            *((_QWORD *)v65 + 3) = v66;
            *((_QWORD *)v65 + 6) = v58;
            *((_QWORD *)v65 + 9) = v60;
            *((_QWORD *)v65 + 12) = v62;
            *((__m128i *)v65 + 2) = _mm_unpacklo_epi64((__m128i)v56, (__m128i)v56);
            *(__m128i *)(v65 + 56) = v59;
            *((__m128i *)v65 + 5) = v61;
            v20 = src;
            *(_QWORD *)&v80 = v80 + 1;
          }
          if ( v20 )
          {
            *(_QWORD *)&v86 = 0;
            qfree(v20);
          }
        }
        if ( v83 )
        {
          v84.m128i_i64[0] = 0;
          qfree(v83);
        }
      }
      v16 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
      if ( v16 == sub_8CC600 )
        break;
      v16(a1, 1u, 1);
      if ( ++v14 >= a3[1] )
        goto LABEL_44;
    }
    v17 = a1[3];
    if ( v17 )
    {
      v18 = *(__int64 (**)())(*(_QWORD *)v17 + 8LL);
      if ( v18 != sub_8C83E0 )
        ((void (__fastcall *)(__int64, __int64, __int64))v18)(v17, 1, 1);
    }
    ++v14;
  }
  while ( v14 < a3[1] );
LABEL_44:
  v10 = *a1;
  v38 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
  if ( v38 != sub_8CC600 )
  {
    v38(a1, 0, 0);
    goto LABEL_51;
  }
LABEL_45:
  v39 = *(__int64 (__fastcall **)(__int64))(v10 + 192);
  if ( v39 == sub_8CBEC0 )
  {
    v40 = (_QWORD *)a1[1];
    if ( v40 )
      sub_8CBD90(v40);
  }
  else
  {
    v39((__int64)a1);
  }
  v41 = a1[3];
  if ( v41 )
  {
    v42 = *(__int64 (**)())(*(_QWORD *)v41 + 8LL);
    if ( v42 != sub_8C83E0 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))v42)(v41, 0, 0);
  }
LABEL_51:
  if ( !(_QWORD)v80 )
    goto LABEL_30;
  v22 = *a1;
  v43 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
  if ( v43 == sub_8CC600 )
  {
    v44 = a1[3];
    if ( !v44 || (v45 = *(__int64 (**)())(*(_QWORD *)v44 + 8LL), v45 == sub_8C83E0) )
    {
      v21 = (char *)v79;
      v75.m128i_i64[1] = (__int64)v79 + 104 * v80;
      if ( (void *)v75.m128i_i64[1] == v79 )
        goto LABEL_24;
      goto LABEL_56;
    }
    ((void (__fastcall *)(__int64, __int64, __int64))v45)(v44, 7, v75.m128i_i64[1]);
  }
  else
  {
    v43(a1, 7u, v75.m128i_i64[1]);
  }
  v21 = (char *)v79;
  v75.m128i_i64[1] = (__int64)v79 + 104 * v80;
  if ( (void *)v75.m128i_i64[1] != v79 )
  {
LABEL_56:
    v46 = v21;
    do
    {
      v48 = *a2 + 56LL * *((_QWORD *)v46 + 12);
      sub_8F6560(a1, v46 + 24, v46 + 80);
      v49 = haystack;
      v81 = nullptr;
      v82 = 0;
      v83 = nullptr;
      v84 = 0;
      v50 = *((_QWORD *)v46 + 1) == 0;
      v76 = &v84;
      if ( !v50 )
        v49 = *(const char **)v46;
      v51 = haystack;
      if ( *((_QWORD *)v46 + 4) )
        v51 = *((const char **)v46 + 3);
      v52 = sub_8F6300(
              (_DWORD)a1,
              (unsigned int)&v81,
              (unsigned int)&v83,
              (_DWORD)v49,
              (_DWORD)v51,
              (int)v46 + 48,
              (__int64)(v46 + 72));
      v53 = v81;
      if ( v52 )
      {
        v54 = *(void **)v48;
        v55 = *(_QWORD *)(v48 + 16);
        *(_QWORD *)v48 = v81;
        v81 = v54;
        *(_OWORD *)(v48 + 8) = v82;
        *((_QWORD *)&v82 + 1) = v55;
        v47 = v83;
        *(_QWORD *)(v48 + 24) = v83;
        if ( v76 != (__m128i *)(v48 + 32) )
          *(__m128i *)(v48 + 32) = _mm_loadu_si128(&v84);
        *(_DWORD *)(v48 + 48) |= 1u;
        v53 = v54;
      }
      else
      {
        v47 = *(void **)(v48 + 24);
      }
      v77 += (__int64)v47;
      if ( v53 )
      {
        *(_QWORD *)&v82 = 0;
        qfree(v53);
      }
      v46 += 104;
    }
    while ( (char *)v75.m128i_i64[1] != v46 );
  }
  v22 = *a1;
  v23 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
  if ( v23 == sub_8CC600 )
  {
LABEL_24:
    v24 = *(__int64 (__fastcall **)(__int64))(v22 + 192);
    if ( v24 == sub_8CBEC0 )
    {
      v25 = (_QWORD *)a1[1];
      if ( v25 )
        sub_8CBD90(v25);
    }
    else
    {
      v24((__int64)a1);
    }
    v26 = a1[3];
    if ( v26 )
    {
      v27 = *(__int64 (**)())(*(_QWORD *)v26 + 8LL);
      if ( v27 != sub_8C83E0 )
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v27)(v26, 0, 0);
    }
    goto LABEL_30;
  }
  v23(a1, 0, 0);
LABEL_30:
  v8 = sub_8CC680(a1, v77, v78);
  v28 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
  if ( v28 == sub_8CBEC0 )
  {
    v29 = (_QWORD *)a1[1];
    if ( v29 )
      sub_8CBD90(v29);
  }
  else
  {
    v28((__int64)a1);
  }
  v30 = (char *)v79;
  if ( v79 )
  {
    v31 = v80;
    if ( (_QWORD)v80 )
    {
      v32 = 0;
      v33 = 0;
      do
      {
        v34 = &v30[v32];
        v35 = *(void **)&v30[v32 + 24];
        if ( v35 )
        {
          *((_QWORD *)v34 + 4) = 0;
          qfree(v35);
        }
        v36 = *(void **)v34;
        if ( *(_QWORD *)v34 )
        {
          *((_QWORD *)v34 + 1) = 0;
          qfree(v36);
        }
        v30 = (char *)v79;
        v32 += 104;
        ++v33;
      }
      while ( v31 != v33 );
    }
    *(_QWORD *)&v80 = 0;
    qfree(v30);
  }
  return v8;
}
