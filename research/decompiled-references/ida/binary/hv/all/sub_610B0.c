__int64 __fastcall sub_610B0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4, char a5, __int64 a6, __int64 *a7)
{
  const char *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  const char *v12; // rdx
  char *v13; // rbx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // r13
  const char *v20; // r13
  bool v21; // al
  __int64 **v22; // r15
  char *v23; // r14
  char v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // r15
  const char *v30; // rdx
  void *v31; // rbx
  __m128i v32; // xmm0
  char *v33; // rdi
  unsigned int v34; // r12d
  __int64 i; // rbx
  void *v36; // r15
  void *v37; // rbx
  void *v38; // r14
  _QWORD *v39; // rax
  void *v40; // rdi
  char *v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // r14
  char *v44; // rax
  void *v45; // rdi
  __int64 *v47; // r15
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 (__fastcall *v50)(__int64 *, __int64, char *, int *, _QWORD, __int128 *, __int64); // r10
  void (__fastcall *v51)(__int128 *, __int64, __int64); // rax
  char v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdi
  size_t v56; // rax
  __int64 v57; // r14
  size_t v58; // r13
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdi
  void *v63; // rdx
  __int64 v64; // rax
  size_t v65; // r15
  void *v66; // r13
  void *v67; // r15
  __int64 v68; // rax
  void *v69; // rbx
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  __int64 v72; // rax
  void *v73; // rdi
  __int64 v74; // rax
  __int64 *v75; // rbx
  __int64 v76; // rax
  __int64 *v77; // r14
  __int64 v78; // rax
  __int64 v79; // [rsp+0h] [rbp-1B0h]
  __int64 *v80; // [rsp+8h] [rbp-1A8h]
  __int64 v81; // [rsp+10h] [rbp-1A0h]
  __m128i v83; // [rsp+20h] [rbp-190h] BYREF
  void **v84; // [rsp+30h] [rbp-180h]
  int *v85; // [rsp+38h] [rbp-178h]
  void **v86; // [rsp+40h] [rbp-170h]
  __int64 v87; // [rsp+48h] [rbp-168h]
  __m128i v88; // [rsp+50h] [rbp-160h] BYREF
  __m128i v89; // [rsp+60h] [rbp-150h] BYREF
  char v90; // [rsp+7Fh] [rbp-131h] BYREF
  void *v91; // [rsp+80h] [rbp-130h] BYREF
  __int64 v92; // [rsp+88h] [rbp-128h]
  void *v93; // [rsp+A0h] [rbp-110h] BYREF
  __int128 v94; // [rsp+A8h] [rbp-108h]
  void *ptr; // [rsp+C0h] [rbp-F0h] BYREF
  __m128i v96; // [rsp+C8h] [rbp-E8h] BYREF
  int v97[6]; // [rsp+E0h] [rbp-D0h] BYREF
  void *v98; // [rsp+F8h] [rbp-B8h] BYREF
  __int64 v99; // [rsp+100h] [rbp-B0h]
  char v100; // [rsp+118h] [rbp-98h] BYREF
  void *v101; // [rsp+120h] [rbp-90h]
  __int64 v102; // [rsp+128h] [rbp-88h]
  __int128 v103; // [rsp+150h] [rbp-60h] BYREF
  __m128i v104; // [rsp+160h] [rbp-50h]
  unsigned __int64 v105; // [rsp+178h] [rbp-38h]

  v9 = haystack;
  v88.m128i_i64[1] = a2;
  v87 = a6;
  v80 = a7;
  BYTE6(v81) = a5;
  v105 = __readfsqword(0x28u);
  if ( a1[5] )
    v9 = (const char *)a1[4];
  v10 = a1[7];
  v85 = v97;
  sub_5AA90((__int64)v97, v10, v9);
  v11 = *a4;
  v83.m128i_i64[1] = *a4 + 24 * a4[1];
  if ( v11 == v83.m128i_i64[1] )
  {
LABEL_33:
    v83.m128i_i64[0] = (__int64)&ptr;
    v28 = *(_QWORD *)v88.m128i_i64[1];
    v29 = *(_QWORD *)v88.m128i_i64[1] + 24LL * *(_QWORD *)(v88.m128i_i64[1] + 8);
    if ( v29 != *(_QWORD *)v88.m128i_i64[1] )
    {
      do
      {
        v30 = haystack;
        if ( *(_QWORD *)(v28 + 8) )
          v30 = *(const char **)v28;
        sub_652F0(v83.m128i_i64[0], a1, v30);
        v31 = ptr;
        v32 = _mm_loadu_si128(&v96);
        ptr = nullptr;
        v96 = 0;
        v33 = *(char **)v28;
        if ( *(_QWORD *)v28 )
        {
          *(_QWORD *)(v28 + 8) = 0;
          v89 = v32;
          j__free(v33);
          v32 = _mm_load_si128(&v89);
        }
        *(_QWORD *)v28 = v31;
        *(__m128i *)(v28 + 8) = v32;
        if ( ptr )
        {
          v96.m128i_i64[0] = 0;
          j__free(ptr);
        }
        v28 += 24;
      }
      while ( v29 != v28 );
    }
    if ( v80 )
      sub_5A540((__int64 *)&v98, v80);
    v34 = 1;
    goto LABEL_44;
  }
  v89.m128i_i64[0] = v11;
  v86 = &v91;
  v84 = &v98;
  HIBYTE(v81) = a3 != nullptr;
  while ( 1 )
  {
    v12 = haystack;
    if ( *(_QWORD *)(v89.m128i_i64[0] + 8) )
      v12 = *(const char **)v89.m128i_i64[0];
    sub_64CF0(v86, a1, v12);
    v13 = (char *)haystack;
    if ( v92 )
      v13 = (char *)v91;
    if ( !(unsigned __int8)sub_64130(v13)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD, char *))(*(_QWORD *)a1[7] + 88LL))(a1[7], v13) )
    {
      break;
    }
    v47 = (__int64 *)a1[7];
    v48 = *(_QWORD *)(v88.m128i_i64[1] + 8);
    v49 = *v47;
    v104 = 0u;
    v50 = *(__int64 (__fastcall **)(__int64 *, __int64, char *, int *, _QWORD, __int128 *, __int64))(v49 + 80);
    v103 = 0;
    v51 = *(void (__fastcall **)(__int128 *, __int64, __int64))(v87 + 16);
    if ( v51 )
    {
      v88.m128i_i64[0] = (__int64)v50;
      v51(&v103, v87, 2);
      v50 = (__int64 (__fastcall *)(__int64 *, __int64, char *, int *, _QWORD, __int128 *, __int64))v88.m128i_i64[0];
      v104 = _mm_loadu_si128((const __m128i *)(v87 + 16));
    }
    v52 = v50(v47, v88.m128i_i64[1], v13, v85, 0, &v103, 32);
    if ( v104.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v104.m128i_i64[0])(&v103, &v103, 3);
    if ( !v52 )
      goto LABEL_87;
    if ( *(_QWORD *)(v88.m128i_i64[1] + 8) == v48 && HIBYTE(v81) )
    {
      v53 = a3[1];
      v54 = *a3;
      if ( a3[2] < (unsigned __int64)(v53 + 1) )
      {
        v68 = sub_96080(a3, v54, v53 + 1, 24);
        *a3 = v68;
        v53 = a3[1];
        v54 = v68;
      }
      v55 = v54 + 24 * v53;
      *(_QWORD *)v55 = 0;
      *(_OWORD *)(v55 + 8) = 0;
      ++a3[1];
      sub_17D80((char **)v55);
    }
LABEL_30:
    if ( v91 )
    {
      v92 = 0;
      j__free(v91);
    }
    v89.m128i_i64[0] += 24;
    if ( v83.m128i_i64[1] == v89.m128i_i64[0] )
      goto LABEL_33;
  }
  if ( *v13 == 47 && v13[1] == 47 )
  {
    sub_647B0((unsigned int)&v93, (_DWORD)a1, (_DWORD)v13, v14, v15, v16, v79, (_DWORD)v80, v81);
  }
  else
  {
    v93 = nullptr;
    v94 = 0;
    if ( !v13 )
      goto LABEL_71;
    v17 = strlen(v13);
    v18 = v17 + 1;
    v19 = v17;
    v93 = (void *)sub_96080(&v93, 0, v17 + 1, 1);
    *(_QWORD *)&v94 = v18;
    memmove(v93, v13, v19);
    *((_BYTE *)v93 + v19) = 0;
  }
  if ( (_QWORD)v94 )
  {
    v20 = (const char *)v93;
    goto LABEL_17;
  }
LABEL_71:
  v20 = haystack;
LABEL_17:
  v83.m128i_i64[0] = (__int64)&ptr;
  ptr = nullptr;
  v96 = 0;
  v21 = sub_60690((__int64)v85, (__int64 *)&ptr, v20);
  v22 = (__int64 **)ptr;
  if ( v21 )
  {
    v90 = 0;
    v23 = (char *)ptr + 8 * v96.m128i_i64[0];
    if ( v23 == ptr )
    {
      if ( v23 )
      {
        v96.m128i_i64[0] = 0;
        j__free(v23);
      }
    }
    else
    {
      v88.m128i_i64[0] = (__int64)&v90;
      do
      {
        sub_5D820((char *)v88.m128i_i64[0], (__int64)v20, *v22, (*v22)[9]);
        ++v22;
      }
      while ( v23 != (char *)v22 );
      v24 = v90;
      if ( ptr )
      {
        v96.m128i_i64[0] = 0;
        j__free(ptr);
      }
      if ( v24 )
      {
        if ( a3 )
        {
          v25 = a3[1];
          v26 = *a3;
          if ( a3[2] < (unsigned __int64)(v25 + 1) )
          {
            v74 = sub_96080(a3, v26, v25 + 1, 24);
            *a3 = v74;
            v25 = a3[1];
            v26 = v74;
          }
          v27 = v26 + 24 * v25;
          *(_QWORD *)v27 = 0;
          *(_OWORD *)(v27 + 8) = 0;
          ++a3[1];
          sub_17D80((char **)v27);
        }
LABEL_28:
        if ( v93 )
        {
          *(_QWORD *)&v94 = 0;
          j__free(v93);
        }
        goto LABEL_30;
      }
    }
  }
  else if ( ptr )
  {
    v96.m128i_i64[0] = 0;
    j__free(ptr);
  }
  if ( !BYTE6(v81) || !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)a1[7] + 96LL))(a1[7], 0, v13) )
  {
    ptr = nullptr;
    v96 = 0;
    if ( v13 )
    {
      v56 = strlen(v13);
      v57 = v56 + 1;
      v58 = v56;
      ptr = (void *)sub_96080(v83.m128i_i64[0], 0, v56 + 1, 1);
      v96.m128i_i64[0] = v57;
      memmove(ptr, v13, v58);
      *((_BYTE *)ptr + v58) = 0;
    }
    v59 = *(_QWORD *)v88.m128i_i64[1];
    v60 = *(_QWORD *)(v88.m128i_i64[1] + 16);
    v61 = *(_QWORD *)(v88.m128i_i64[1] + 8);
    v62 = v61 + 1;
    if ( v83.m128i_i64[0] >= *(_QWORD *)v88.m128i_i64[1] && v83.m128i_i64[0] < v59 + 24 * v60 )
    {
      v69 = ptr;
      v70 = _mm_loadl_epi64(&v96);
      ptr = nullptr;
      v71 = _mm_loadl_epi64((const __m128i *)&v96.m128i_u64[1]);
      v96 = 0;
      if ( v60 < v62 )
      {
        v77 = (__int64 *)v88.m128i_i64[1];
        v83.m128i_i64[0] = v71.m128i_i64[0];
        v88.m128i_i64[0] = v70.m128i_i64[0];
        v78 = sub_96080(v88.m128i_i64[1], v59, v61 + 1, 24);
        v71 = _mm_loadl_epi64(&v83);
        *v77 = v78;
        v59 = v78;
        v70 = _mm_loadl_epi64(&v88);
        v61 = v77[1];
      }
      v72 = v59 + 24 * v61;
      *(__m128i *)(v72 + 8) = _mm_unpacklo_epi64(v70, v71);
      *(_QWORD *)v72 = v69;
      v73 = ptr;
      ++*(_QWORD *)(v88.m128i_i64[1] + 8);
      if ( v73 )
      {
        v96.m128i_i64[0] = 0;
        j__free(v73);
      }
    }
    else
    {
      if ( v60 < v62 )
      {
        v75 = (__int64 *)v88.m128i_i64[1];
        v76 = sub_96080(v88.m128i_i64[1], v59, v61 + 1, 24);
        *v75 = v76;
        v59 = v76;
        v61 = v75[1];
      }
      v63 = ptr;
      v64 = v59 + 24 * v61;
      *(__m128i *)(v64 + 8) = _mm_loadu_si128(&v96);
      *(_QWORD *)v64 = v63;
      ++*(_QWORD *)(v88.m128i_i64[1] + 8);
    }
  }
  if ( !*(_QWORD *)(v87 + 16) || !(*(unsigned __int8 (__fastcall **)(__int64))(v87 + 24))(v87) )
    goto LABEL_28;
  if ( v93 )
  {
    *(_QWORD *)&v94 = 0;
    j__free(v93);
  }
LABEL_87:
  if ( v91 )
  {
    v92 = 0;
    j__free(v91);
  }
  v34 = 0;
LABEL_44:
  for ( i = v102; (char *)i != &v100; i = std::_Rb_tree_increment() )
  {
    if ( *(_QWORD *)(i + 40) )
    {
      v65 = *(_QWORD *)(i + 40);
      v66 = (void *)sub_96030(v65);
      memcpy(v66, *(const void **)(i + 32), v65);
      v67 = *(void **)(i + 56);
      if ( v67 )
      {
        sub_59920(*(char ***)(i + 56));
        operator delete(v67, 0x50u);
      }
      if ( v66 )
        j__free(v66);
    }
    else
    {
      v36 = *(void **)(i + 56);
      if ( v36 )
      {
        sub_59920(*(char ***)(i + 56));
        operator delete(v36, 0x50u);
      }
    }
  }
  v37 = v101;
  while ( v37 )
  {
    v38 = v37;
    sub_56ED0(*((_QWORD **)v37 + 3));
    v39 = v37;
    v37 = *((void **)v37 + 2);
    v40 = (void *)v39[4];
    if ( v40 )
    {
      v39[5] = 0;
      j__free(v40);
    }
    operator delete(v38, 0x40u);
  }
  v41 = (char *)v98;
  if ( v98 )
  {
    if ( v99 )
    {
      v42 = 0;
      v43 = v99;
      do
      {
        v44 = &v41[24 * v42];
        v45 = *(void **)v44;
        if ( *(_QWORD *)v44 )
        {
          *((_QWORD *)v44 + 1) = 0;
          j__free(v45);
          v41 = (char *)v98;
        }
        ++v42;
      }
      while ( v43 != v42 );
    }
    v99 = 0;
    j__free(v41);
  }
  return v34;
}

