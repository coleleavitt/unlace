__int64 __fastcall sub_8FA860(void **a1, __int64 a2, __int64 *a3, __int64 *a4, char a5, __int64 a6, __int64 *a7)
{
  const char *v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  const char *v13; // rdx
  char *v14; // rbx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  size_t v18; // rax
  size_t v19; // r14
  size_t v20; // r13
  const char *v21; // r13
  bool v22; // al
  __int64 **v23; // r15
  char *v24; // r14
  char v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdi
  void **p_ptr; // rsi
  __int64 v30; // r14
  __int64 v31; // r15
  const char *v32; // rdx
  void *v33; // rbx
  __m128i v34; // xmm0
  char *v35; // rdi
  unsigned int v36; // r12d
  __int64 i; // rbx
  void *v38; // r15
  void *v39; // rbx
  void *v40; // r14
  _QWORD *v41; // rax
  void *v42; // rdi
  char *v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // r14
  char *v46; // rax
  void *v47; // rdi
  __int64 *v49; // r15
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 (__fastcall *v52)(__int64 *, __int64, char *, int *, _QWORD, __int128 *, __int64); // r10
  void (__fastcall *v53)(__int128 *, __int64, __int64); // rax
  char v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdi
  size_t v58; // rax
  __int64 v59; // r14
  size_t v60; // r13
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rdi
  void *v64; // rdx
  void **v65; // rax
  size_t v66; // r15
  void *v67; // rax
  void *v68; // r13
  void *v69; // r15
  __int64 v70; // rax
  void *v71; // rbx
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  void **v74; // rax
  void *v75; // rdi
  __int64 v76; // rax
  __int64 *v77; // rbx
  __int64 v78; // rax
  __int64 *v79; // r14
  __int64 v80; // rax
  __int64 v81; // [rsp+0h] [rbp-1B0h]
  __int64 *v82; // [rsp+8h] [rbp-1A8h]
  __int64 v83; // [rsp+10h] [rbp-1A0h]
  __m128i v85; // [rsp+20h] [rbp-190h] BYREF
  void **v86; // [rsp+30h] [rbp-180h]
  int *v87; // [rsp+38h] [rbp-178h]
  void **v88; // [rsp+40h] [rbp-170h]
  __int64 v89; // [rsp+48h] [rbp-168h]
  __m128i v90; // [rsp+50h] [rbp-160h] BYREF
  __m128i v91; // [rsp+60h] [rbp-150h] BYREF
  char v92; // [rsp+7Fh] [rbp-131h] BYREF
  void *v93; // [rsp+80h] [rbp-130h] BYREF
  __int64 v94; // [rsp+88h] [rbp-128h]
  void *v95; // [rsp+A0h] [rbp-110h] BYREF
  __int128 v96; // [rsp+A8h] [rbp-108h]
  void *ptr; // [rsp+C0h] [rbp-F0h] BYREF
  __m128i v98; // [rsp+C8h] [rbp-E8h] BYREF
  int v99[6]; // [rsp+E0h] [rbp-D0h] BYREF
  void *v100; // [rsp+F8h] [rbp-B8h] BYREF
  __int64 v101; // [rsp+100h] [rbp-B0h]
  char v102; // [rsp+118h] [rbp-98h] BYREF
  void *v103; // [rsp+120h] [rbp-90h]
  __int64 v104; // [rsp+128h] [rbp-88h]
  __int128 v105; // [rsp+150h] [rbp-60h] BYREF
  __m128i v106; // [rsp+160h] [rbp-50h]
  unsigned __int64 v107; // [rsp+178h] [rbp-38h]

  v9 = haystack;
  v90.m128i_i64[1] = a2;
  v89 = a6;
  v82 = a7;
  BYTE6(v83) = a5;
  v107 = __readfsqword(0x28u);
  if ( a1[5] )
    v9 = (const char *)a1[4];
  v10 = (__int64)a1[7];
  v87 = v99;
  sub_8F4550((__int64)v99, v10, v9);
  v12 = *a4;
  v85.m128i_i64[1] = *a4 + 24 * a4[1];
  if ( v12 == v85.m128i_i64[1] )
  {
LABEL_33:
    p_ptr = &ptr;
    v85.m128i_i64[0] = (__int64)&ptr;
    v30 = *(_QWORD *)v90.m128i_i64[1];
    v31 = *(_QWORD *)v90.m128i_i64[1] + 24LL * *(_QWORD *)(v90.m128i_i64[1] + 8);
    if ( v31 != *(_QWORD *)v90.m128i_i64[1] )
    {
      do
      {
        v32 = haystack;
        if ( *(_QWORD *)(v30 + 8) )
          v32 = *(const char **)v30;
        p_ptr = a1;
        sub_8FEBC0(v85.m128i_i64[0], a1, v32, v11);
        v33 = ptr;
        v34 = _mm_loadu_si128(&v98);
        ptr = nullptr;
        v98 = 0;
        v35 = *(char **)v30;
        if ( *(_QWORD *)v30 )
        {
          *(_QWORD *)(v30 + 8) = 0;
          v91 = v34;
          qfree(v35);
          v34 = _mm_load_si128(&v91);
        }
        *(_QWORD *)v30 = v33;
        *(__m128i *)(v30 + 8) = v34;
        if ( ptr )
        {
          v98.m128i_i64[0] = 0;
          qfree(ptr);
        }
        v30 += 24;
      }
      while ( v31 != v30 );
    }
    if ( v82 )
    {
      p_ptr = (void **)v82;
      sub_8F4000((__int64 *)&v100, v82);
    }
    v36 = 1;
    goto LABEL_44;
  }
  v91.m128i_i64[0] = v12;
  v88 = &v93;
  v86 = &v100;
  HIBYTE(v83) = a3 != nullptr;
  while ( 1 )
  {
    v13 = haystack;
    if ( *(_QWORD *)(v91.m128i_i64[0] + 8) )
      v13 = *(const char **)v91.m128i_i64[0];
    sub_8FE5C0(v88, a1, v13);
    v14 = (char *)haystack;
    if ( v94 )
      v14 = (char *)v93;
    if ( !(unsigned __int8)sub_8FDA00(v14)
      && !(*(unsigned __int8 (__fastcall **)(void *, char *))(*(_QWORD *)a1[7] + 88LL))(a1[7], v14) )
    {
      break;
    }
    v49 = (__int64 *)a1[7];
    v50 = *(_QWORD *)(v90.m128i_i64[1] + 8);
    v51 = *v49;
    v106 = 0u;
    v52 = *(__int64 (__fastcall **)(__int64 *, __int64, char *, int *, _QWORD, __int128 *, __int64))(v51 + 80);
    v105 = 0;
    v53 = *(void (__fastcall **)(__int128 *, __int64, __int64))(v89 + 16);
    if ( v53 )
    {
      v90.m128i_i64[0] = (__int64)v52;
      v53(&v105, v89, 2);
      v52 = (__int64 (__fastcall *)(__int64 *, __int64, char *, int *, _QWORD, __int128 *, __int64))v90.m128i_i64[0];
      v106 = _mm_loadu_si128((const __m128i *)(v89 + 16));
    }
    p_ptr = (void **)v90.m128i_i64[1];
    v54 = v52(v49, v90.m128i_i64[1], v14, v87, 0, &v105, 32);
    if ( v106.m128i_i64[0] )
    {
      p_ptr = (void **)&v105;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v106.m128i_i64[0])(&v105, &v105, 3);
    }
    if ( !v54 )
      goto LABEL_87;
    if ( *(_QWORD *)(v90.m128i_i64[1] + 8) == v50 && HIBYTE(v83) )
    {
      v55 = a3[1];
      v56 = *a3;
      if ( a3[2] < (unsigned __int64)(v55 + 1) )
      {
        v70 = qvector_reserve(a3, v56, v55 + 1, 24);
        *a3 = v70;
        v55 = a3[1];
        v56 = v70;
      }
      v57 = v56 + 24 * v55;
      *(_QWORD *)v57 = 0;
      *(_OWORD *)(v57 + 8) = 0;
      ++a3[1];
      sub_35A790((char **)v57);
    }
LABEL_30:
    if ( v93 )
    {
      v94 = 0;
      qfree(v93);
    }
    v91.m128i_i64[0] += 24;
    if ( v85.m128i_i64[1] == v91.m128i_i64[0] )
      goto LABEL_33;
  }
  if ( *v14 == 47 && v14[1] == 47 )
  {
    sub_8FE080((unsigned int)&v95, (_DWORD)a1, (_DWORD)v14, v15, v16, v17, v81, (_DWORD)v82, v83);
  }
  else
  {
    v95 = nullptr;
    v96 = 0;
    if ( !v14 )
      goto LABEL_71;
    v18 = strlen(v14);
    v19 = v18 + 1;
    v20 = v18;
    v95 = (void *)qvector_reserve(&v95, 0, v18 + 1, 1);
    *(_QWORD *)&v96 = v19;
    memmove(v95, v14, v20);
    *((_BYTE *)v95 + v20) = 0;
  }
  if ( (_QWORD)v96 )
  {
    v21 = (const char *)v95;
    goto LABEL_17;
  }
LABEL_71:
  v21 = haystack;
LABEL_17:
  v85.m128i_i64[0] = (__int64)&ptr;
  ptr = nullptr;
  v98 = 0;
  v22 = sub_8F9E40((__int64)v87, (__int64 *)&ptr, v21);
  v23 = (__int64 **)ptr;
  if ( v22 )
  {
    v92 = 0;
    v24 = (char *)ptr + 8 * v98.m128i_i64[0];
    if ( v24 == ptr )
    {
      if ( v24 )
      {
        v98.m128i_i64[0] = 0;
        qfree(v24);
      }
    }
    else
    {
      v90.m128i_i64[0] = (__int64)&v92;
      do
      {
        sub_8F72E0((char *)v90.m128i_i64[0], (__int64)v21, *v23, (*v23)[9]);
        ++v23;
      }
      while ( v24 != (char *)v23 );
      v25 = v92;
      if ( ptr )
      {
        v98.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v25 )
      {
        v11 = (unsigned __int64)a3;
        if ( a3 )
        {
          v26 = a3[1];
          v27 = *a3;
          if ( a3[2] < (unsigned __int64)(v26 + 1) )
          {
            v76 = qvector_reserve(a3, v27, v26 + 1, 24);
            *a3 = v76;
            v26 = a3[1];
            v27 = v76;
          }
          v28 = v27 + 24 * v26;
          *(_QWORD *)v28 = 0;
          *(_OWORD *)(v28 + 8) = 0;
          ++a3[1];
          sub_35A790((char **)v28);
        }
LABEL_28:
        if ( v95 )
        {
          *(_QWORD *)&v96 = 0;
          qfree(v95);
        }
        goto LABEL_30;
      }
    }
  }
  else if ( ptr )
  {
    v98.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( !BYTE6(v83)
    || (p_ptr = nullptr,
        !(*(unsigned int (__fastcall **)(void *, _QWORD, char *))(*(_QWORD *)a1[7] + 96LL))(a1[7], 0, v14)) )
  {
    ptr = nullptr;
    v98 = 0;
    if ( v14 )
    {
      v58 = strlen(v14);
      v59 = v58 + 1;
      v60 = v58;
      ptr = (void *)qvector_reserve(v85.m128i_i64[0], 0, v58 + 1, 1);
      v98.m128i_i64[0] = v59;
      memmove(ptr, v14, v60);
      *((_BYTE *)ptr + v60) = 0;
    }
    p_ptr = *(void ***)v90.m128i_i64[1];
    v61 = *(_QWORD *)(v90.m128i_i64[1] + 16);
    v62 = *(_QWORD *)(v90.m128i_i64[1] + 8);
    v63 = v62 + 1;
    if ( v85.m128i_i64[0] >= *(_QWORD *)v90.m128i_i64[1]
      && (v11 = (unsigned __int64)&p_ptr[3 * v61], v85.m128i_i64[0] < v11) )
    {
      v71 = ptr;
      v72 = _mm_loadl_epi64(&v98);
      ptr = nullptr;
      v73 = _mm_loadl_epi64((const __m128i *)&v98.m128i_u64[1]);
      v98 = 0;
      if ( v61 < v63 )
      {
        v79 = (__int64 *)v90.m128i_i64[1];
        v85.m128i_i64[0] = v73.m128i_i64[0];
        v90.m128i_i64[0] = v72.m128i_i64[0];
        v80 = qvector_reserve(v90.m128i_i64[1], p_ptr, v62 + 1, 24);
        v73 = _mm_loadl_epi64(&v85);
        *v79 = v80;
        p_ptr = (void **)v80;
        v72 = _mm_loadl_epi64(&v90);
        v62 = v79[1];
      }
      v74 = &p_ptr[3 * v62];
      *(__m128i *)(v74 + 1) = _mm_unpacklo_epi64(v72, v73);
      *v74 = v71;
      v75 = ptr;
      ++*(_QWORD *)(v90.m128i_i64[1] + 8);
      if ( v75 )
      {
        v98.m128i_i64[0] = 0;
        qfree(v75);
      }
    }
    else
    {
      if ( v61 < v63 )
      {
        v77 = (__int64 *)v90.m128i_i64[1];
        v78 = qvector_reserve(v90.m128i_i64[1], p_ptr, v62 + 1, 24);
        *v77 = v78;
        p_ptr = (void **)v78;
        v62 = v77[1];
      }
      v64 = ptr;
      v65 = &p_ptr[3 * v62];
      *(__m128i *)(v65 + 1) = _mm_loadu_si128(&v98);
      *v65 = v64;
      ++*(_QWORD *)(v90.m128i_i64[1] + 8);
    }
  }
  if ( !*(_QWORD *)(v89 + 16) || !(*(unsigned __int8 (__fastcall **)(__int64))(v89 + 24))(v89) )
    goto LABEL_28;
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    qfree(v95);
  }
LABEL_87:
  if ( v93 )
  {
    v94 = 0;
    qfree(v93);
  }
  v36 = 0;
LABEL_44:
  for ( i = v104; (char *)i != &v102; i = std::_Rb_tree_increment(i, (const char *)p_ptr) )
  {
    if ( *(_QWORD *)(i + 40) )
    {
      v66 = *(_QWORD *)(i + 40);
      v67 = (void *)qalloc_or_throw(v66);
      p_ptr = *(void ***)(i + 32);
      v68 = v67;
      memcpy(v67, p_ptr, v66);
      v69 = *(void **)(i + 56);
      if ( v69 )
      {
        sub_8F33B0(*(char ***)(i + 56), (char *)p_ptr);
        p_ptr = (void **)&qword_50;
        operator delete(v69, 0x50u);
      }
      if ( v68 )
        qfree(v68);
    }
    else
    {
      v38 = *(void **)(i + 56);
      if ( v38 )
      {
        sub_8F33B0(*(char ***)(i + 56), (char *)p_ptr);
        p_ptr = (void **)&qword_50;
        operator delete(v38, 0x50u);
      }
    }
  }
  v39 = v103;
  while ( v39 )
  {
    v40 = v39;
    sub_8F0A30(*((_QWORD **)v39 + 3));
    v41 = v39;
    v39 = *((void **)v39 + 2);
    v42 = (void *)v41[4];
    if ( v42 )
    {
      v41[5] = 0;
      qfree(v42);
    }
    operator delete(v40, 0x40u);
  }
  v43 = (char *)v100;
  if ( v100 )
  {
    if ( v101 )
    {
      v44 = 0;
      v45 = v101;
      do
      {
        v46 = &v43[24 * v44];
        v47 = *(void **)v46;
        if ( *(_QWORD *)v46 )
        {
          *((_QWORD *)v46 + 1) = 0;
          qfree(v47);
          v43 = (char *)v100;
        }
        ++v44;
      }
      while ( v45 != v44 );
    }
    v101 = 0;
    qfree(v43);
  }
  return v36;
}
