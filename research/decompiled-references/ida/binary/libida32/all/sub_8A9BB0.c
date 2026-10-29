__int64 __fastcall sub_8A9BB0(_QWORD *a1, __int64 *a2, _QWORD *a3, int a4)
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
  const char *v20; // rsi
  void *v21; // rdi
  char *v22; // r10
  __int64 v23; // rax
  __int64 (__fastcall *v24)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 (__fastcall *v25)(__int64); // rax
  _QWORD *v26; // rdi
  __int64 v27; // rdi
  __int64 (*v28)(); // rax
  __int64 (__fastcall *v29)(__int64); // rax
  _QWORD *v30; // rdi
  char *v31; // rdi
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // r15
  char *v35; // rbx
  void *v36; // rdi
  void *v37; // rdi
  __int64 (__fastcall *v39)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 (__fastcall *v40)(__int64); // rax
  _QWORD *v41; // rdi
  __int64 v42; // rdi
  __int64 (*v43)(); // rax
  __int64 (__fastcall *v44)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 v45; // rdi
  __int64 (*v46)(); // rcx
  char *v47; // r15
  void *v48; // rax
  __int64 v49; // r14
  const char *v50; // rcx
  bool v51; // zf
  const char *v52; // r8
  char v53; // al
  void *v54; // rdi
  void *v55; // rdx
  __int64 v56; // rax
  size_t v57; // r9
  __int64 v58; // rax
  size_t v59; // r11
  __m128i v60; // xmm2
  __int64 v61; // r8
  __m128i v62; // xmm1
  __int64 v63; // r10
  char *v64; // rsi
  __m128i v65; // xmm0
  char *v66; // rax
  void *v67; // rcx
  void *v68; // rax
  __m128i v69; // [rsp+8h] [rbp-160h] BYREF
  __m128i v70; // [rsp+18h] [rbp-150h] BYREF
  size_t v71; // [rsp+28h] [rbp-140h]
  __int64 v72; // [rsp+30h] [rbp-138h]
  __int64 v73; // [rsp+38h] [rbp-130h]
  size_t n; // [rsp+40h] [rbp-128h]
  void *v75; // [rsp+48h] [rbp-120h]
  void *ptr; // [rsp+50h] [rbp-118h]
  __m128i v77; // [rsp+58h] [rbp-110h] BYREF
  __m128i *v78; // [rsp+68h] [rbp-100h]
  __int64 v79; // [rsp+70h] [rbp-F8h]
  int v80; // [rsp+84h] [rbp-E4h] BYREF
  void *v81; // [rsp+88h] [rbp-E0h] BYREF
  __int128 v82; // [rsp+90h] [rbp-D8h]
  void *v83; // [rsp+A8h] [rbp-C0h] BYREF
  __int128 v84; // [rsp+B0h] [rbp-B8h]
  void *v85; // [rsp+C8h] [rbp-A0h] BYREF
  __m128i v86; // [rsp+D0h] [rbp-98h] BYREF
  void *src; // [rsp+E0h] [rbp-88h]
  __int128 v88; // [rsp+E8h] [rbp-80h]
  size_t v89; // [rsp+F8h] [rbp-70h]
  __m128i v90; // [rsp+100h] [rbp-68h] BYREF
  __int64 v91; // [rsp+110h] [rbp-58h]
  __m128i v92; // [rsp+118h] [rbp-50h] BYREF
  __int64 v93; // [rsp+128h] [rbp-40h]
  unsigned __int64 v94; // [rsp+130h] [rbp-38h]

  LODWORD(v78) = a4;
  v7 = (_QWORD *)a1[1];
  v94 = __readfsqword(0x28u);
  v80 = 0;
  v8 = sub_8A8A80(v7, nullptr, a2, 0, &v80, a3, 3);
  if ( v8 )
    return v8;
  v9 = a3[1];
  v81 = nullptr;
  v82 = 0;
  v77.m128i_i64[1] = v9;
  v10 = *a1;
  v11 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
  if ( v11 == sub_8A88C0 )
  {
    v12 = a1[3];
    if ( !v12 || (v13 = *(__int64 (**)())(*(_QWORD *)v12 + 8LL), v13 == sub_8A46A0) )
    {
      if ( !v77.m128i_i64[1] )
      {
        v79 = 0;
        goto LABEL_45;
      }
      goto LABEL_6;
    }
    ((void (__fastcall *)(__int64, __int64, __int64))v13)(v12, 5, v77.m128i_i64[1]);
  }
  else
  {
    v11(a1, 5u, v77.m128i_i64[1]);
  }
  v79 = a3[1];
  if ( !v79 )
  {
    v77.m128i_i64[1] = 0;
    goto LABEL_44;
  }
LABEL_6:
  v14 = 0;
  v77.m128i_i64[1] = 0;
  v79 = 0;
  v15 = (unsigned __int8)v78 & 1;
  do
  {
    while ( 1 )
    {
      v19 = *a2 + 56 * v14;
      if ( v15 | *(_DWORD *)(v19 + 48) & 2 )
      {
        v89 = 0;
        v20 = (const char *)&v85;
        v86 = 0;
        v88 = 0;
        v85 = nullptr;
        src = nullptr;
        v91 = 0;
        v93 = -1;
        v90 = 0;
        v92 = 0;
        if ( ((unsigned __int8)v78 & 2) != 0 )
        {
          v79 += *(_QWORD *)(v19 + 24);
        }
        else
        {
          v77.m128i_i64[0] = v19;
          if ( (unsigned int)sub_8A7750((__int64)a1, (__int64)&v85, *a3 + 48 * v14) )
          {
            v21 = src;
            v79 += *(_QWORD *)(v77.m128i_i64[0] + 24);
          }
          else
          {
            v93 = v14;
            v77.m128i_i64[1] += v91;
            v77.m128i_i64[0] = v86.m128i_i64[0];
            ptr = nullptr;
            if ( v86.m128i_i64[0] )
            {
              v68 = (void *)qalloc_or_throw(v86.m128i_i64[0], (const char *)&v85);
              v20 = (const char *)v85;
              ptr = v68;
              memcpy(v68, v85, v77.m128i_u64[0]);
            }
            v75 = nullptr;
            v57 = v88;
            if ( (_QWORD)v88 )
            {
              n = v88;
              v75 = (void *)qalloc_or_throw(v88, v20);
              memcpy(v75, src, n);
              v57 = n;
            }
            v58 = v82;
            v59 = v89;
            v60 = _mm_loadu_si128(&v90);
            v61 = v91;
            v62 = _mm_load_si128(&v92);
            v63 = v93;
            v64 = (char *)v81;
            if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v82 + 1) )
            {
              v71 = v57;
              v72 = v93;
              v73 = v91;
              n = v89;
              v69 = v60;
              v70 = v62;
              v81 = (void *)qvector_reserve(&v81, v81, v82 + 1, 104);
              v64 = (char *)v81;
              v60 = _mm_load_si128(&v69);
              v58 = v82;
              v62 = _mm_load_si128(&v70);
              v57 = v71;
              v63 = v72;
              v61 = v73;
              v59 = n;
            }
            v65 = _mm_loadl_epi64(&v77);
            v66 = &v64[104 * v58];
            *(_QWORD *)v66 = ptr;
            v67 = v75;
            *(__m128i *)(v66 + 8) = _mm_unpacklo_epi64(v65, v65);
            *((_QWORD *)v66 + 3) = v67;
            *((_QWORD *)v66 + 6) = v59;
            *((_QWORD *)v66 + 9) = v61;
            *((_QWORD *)v66 + 12) = v63;
            *((__m128i *)v66 + 2) = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
            *(__m128i *)(v66 + 56) = v60;
            *((__m128i *)v66 + 5) = v62;
            v21 = src;
            *(_QWORD *)&v82 = v82 + 1;
          }
          if ( v21 )
          {
            *(_QWORD *)&v88 = 0;
            qfree(v21);
          }
        }
        if ( v85 )
        {
          v86.m128i_i64[0] = 0;
          qfree(v85);
        }
      }
      v16 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
      if ( v16 == sub_8A88C0 )
        break;
      v16(a1, 1u, 1);
      if ( ++v14 >= a3[1] )
        goto LABEL_44;
    }
    v17 = a1[3];
    if ( v17 )
    {
      v18 = *(__int64 (**)())(*(_QWORD *)v17 + 8LL);
      if ( v18 != sub_8A46A0 )
        ((void (__fastcall *)(__int64, __int64, __int64))v18)(v17, 1, 1);
    }
    ++v14;
  }
  while ( v14 < a3[1] );
LABEL_44:
  v10 = *a1;
  v39 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
  if ( v39 != sub_8A88C0 )
  {
    v39(a1, 0, 0);
    goto LABEL_51;
  }
LABEL_45:
  v40 = *(__int64 (__fastcall **)(__int64))(v10 + 192);
  if ( v40 == sub_8A8180 )
  {
    v41 = (_QWORD *)a1[1];
    if ( v41 )
      sub_8A8050(v41);
  }
  else
  {
    v40((__int64)a1);
  }
  v42 = a1[3];
  if ( v42 )
  {
    v43 = *(__int64 (**)())(*(_QWORD *)v42 + 8LL);
    if ( v43 != sub_8A46A0 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))v43)(v42, 0, 0);
  }
LABEL_51:
  if ( !(_QWORD)v82 )
    goto LABEL_30;
  v23 = *a1;
  v44 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
  if ( v44 == sub_8A88C0 )
  {
    v45 = a1[3];
    if ( !v45 || (v46 = *(__int64 (**)())(*(_QWORD *)v45 + 8LL), v46 == sub_8A46A0) )
    {
      v22 = (char *)v81;
      v77.m128i_i64[1] = (__int64)v81 + 104 * v82;
      if ( (void *)v77.m128i_i64[1] == v81 )
        goto LABEL_24;
      goto LABEL_56;
    }
    ((void (__fastcall *)(__int64, __int64, __int64))v46)(v45, 7, v77.m128i_i64[1]);
  }
  else
  {
    v44(a1, 7u, v77.m128i_i64[1]);
  }
  v22 = (char *)v81;
  v77.m128i_i64[1] = (__int64)v81 + 104 * v82;
  if ( (void *)v77.m128i_i64[1] != v81 )
  {
LABEL_56:
    v47 = v22;
    do
    {
      v49 = *a2 + 56LL * *((_QWORD *)v47 + 12);
      sub_8D2820(a1, v47 + 24, v47 + 80);
      v50 = haystack;
      v83 = nullptr;
      v84 = 0;
      v85 = nullptr;
      v86 = 0;
      v51 = *((_QWORD *)v47 + 1) == 0;
      v78 = &v86;
      if ( !v51 )
        v50 = *(const char **)v47;
      v52 = haystack;
      if ( *((_QWORD *)v47 + 4) )
        v52 = *((const char **)v47 + 3);
      v53 = sub_8D25C0(
              (_DWORD)a1,
              (unsigned int)&v83,
              (unsigned int)&v85,
              (_DWORD)v50,
              (_DWORD)v52,
              (int)v47 + 48,
              (__int64)(v47 + 72));
      v54 = v83;
      if ( v53 )
      {
        v55 = *(void **)v49;
        v56 = *(_QWORD *)(v49 + 16);
        *(_QWORD *)v49 = v83;
        v83 = v55;
        *(_OWORD *)(v49 + 8) = v84;
        *((_QWORD *)&v84 + 1) = v56;
        v48 = v85;
        *(_QWORD *)(v49 + 24) = v85;
        if ( v78 != (__m128i *)(v49 + 32) )
          *(__m128i *)(v49 + 32) = _mm_loadu_si128(&v86);
        *(_DWORD *)(v49 + 48) |= 1u;
        v54 = v55;
      }
      else
      {
        v48 = *(void **)(v49 + 24);
      }
      v79 += (__int64)v48;
      if ( v54 )
      {
        *(_QWORD *)&v84 = 0;
        qfree(v54);
      }
      v47 += 104;
    }
    while ( (char *)v77.m128i_i64[1] != v47 );
  }
  v23 = *a1;
  v24 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
  if ( v24 == sub_8A88C0 )
  {
LABEL_24:
    v25 = *(__int64 (__fastcall **)(__int64))(v23 + 192);
    if ( v25 == sub_8A8180 )
    {
      v26 = (_QWORD *)a1[1];
      if ( v26 )
        sub_8A8050(v26);
    }
    else
    {
      v25((__int64)a1);
    }
    v27 = a1[3];
    if ( v27 )
    {
      v28 = *(__int64 (**)())(*(_QWORD *)v27 + 8LL);
      if ( v28 != sub_8A46A0 )
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v28)(v27, 0, 0);
    }
    goto LABEL_30;
  }
  v24(a1, 0, 0);
LABEL_30:
  v8 = sub_8A8940(a1, v79, v80);
  v29 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
  if ( v29 == sub_8A8180 )
  {
    v30 = (_QWORD *)a1[1];
    if ( v30 )
      sub_8A8050(v30);
  }
  else
  {
    v29((__int64)a1);
  }
  v31 = (char *)v81;
  if ( v81 )
  {
    v32 = v82;
    if ( (_QWORD)v82 )
    {
      v33 = 0;
      v34 = 0;
      do
      {
        v35 = &v31[v33];
        v36 = *(void **)&v31[v33 + 24];
        if ( v36 )
        {
          *((_QWORD *)v35 + 4) = 0;
          qfree(v36);
        }
        v37 = *(void **)v35;
        if ( *(_QWORD *)v35 )
        {
          *((_QWORD *)v35 + 1) = 0;
          qfree(v37);
        }
        v31 = (char *)v81;
        v33 += 104;
        ++v34;
      }
      while ( v32 != v34 );
    }
    *(_QWORD *)&v82 = 0;
    qfree(v31);
  }
  return v8;
}

