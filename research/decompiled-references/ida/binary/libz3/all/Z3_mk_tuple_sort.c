__int64 __fastcall Z3_mk_tuple_sort(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  char **exception; // r14
  char **v8; // r12
  char v11; // al
  int v12; // ebx
  __int64 v13; // r13
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  size_t v19; // r12
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  __m128i **v22; // rax
  __int64 v23; // r15
  __m128i *v24; // rax
  __m128i v25; // xmm0
  __m128i *v26; // r12
  unsigned int v27; // r10d
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int v30; // r15d
  unsigned int *v31; // rax
  __int64 v32; // r10
  __int64 v33; // r14
  __int64 v34; // r13
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned int v37; // edx
  __int64 *v38; // r15
  _DWORD *v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // r12d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  __int64 v47; // r13
  __int64 *v48; // rbx
  __int64 *v49; // r14
  __int64 v50; // rsi
  _QWORD *v53; // rax
  __int64 v54; // r14
  __int64 v55; // rax
  unsigned int i; // r14d
  __int64 v57; // r15
  __int64 j; // r14
  _BYTE *v59; // rdi
  unsigned __int64 v60; // rdi
  _BYTE *v61; // rax
  size_t v62; // rdx
  void *v63; // rcx
  _BYTE *v64; // r8
  _BYTE *v65; // rdi
  int v66; // [rsp+0h] [rbp-120h]
  _BYTE *v67; // [rsp+0h] [rbp-120h]
  void *v68; // [rsp+8h] [rbp-118h]
  size_t v69; // [rsp+8h] [rbp-118h]
  int v70; // [rsp+10h] [rbp-110h]
  _QWORD *v71; // [rsp+10h] [rbp-110h]
  _QWORD *v73; // [rsp+18h] [rbp-108h]
  int v74; // [rsp+20h] [rbp-100h]
  char **v75; // [rsp+28h] [rbp-F8h]
  int v76; // [rsp+30h] [rbp-F0h]
  __int64 v77; // [rsp+30h] [rbp-F0h]
  __int64 v78; // [rsp+38h] [rbp-E8h]
  int v79; // [rsp+40h] [rbp-E0h]
  int v80; // [rsp+40h] [rbp-E0h]
  char v81; // [rsp+47h] [rbp-D9h]
  void *v82; // [rsp+48h] [rbp-D8h]
  void *v83; // [rsp+50h] [rbp-D0h]
  __int64 v84; // [rsp+58h] [rbp-C8h]
  int v85; // [rsp+60h] [rbp-C0h]
  _BYTE *v86; // [rsp+60h] [rbp-C0h]
  void *v87; // [rsp+60h] [rbp-C0h]
  void *v88; // [rsp+60h] [rbp-C0h]
  int v89; // [rsp+68h] [rbp-B8h]
  __int64 *v90; // [rsp+68h] [rbp-B8h]
  __int64 v91; // [rsp+68h] [rbp-B8h]
  __m128i v92; // [rsp+70h] [rbp-B0h] BYREF
  int v93; // [rsp+80h] [rbp-A0h]
  __int64 v94; // [rsp+88h] [rbp-98h] BYREF
  __int64 v95; // [rsp+90h] [rbp-90h] BYREF
  int v96[2]; // [rsp+98h] [rbp-88h] BYREF
  __int64 v97; // [rsp+A0h] [rbp-80h] BYREF
  __int64 *v98; // [rsp+A8h] [rbp-78h]
  void *v99; // [rsp+B0h] [rbp-70h]
  __int64 v100; // [rsp+B8h] [rbp-68h]
  _QWORD v101[2]; // [rsp+C0h] [rbp-60h] BYREF
  void *src; // [rsp+D0h] [rbp-50h] BYREF
  size_t n; // [rsp+D8h] [rbp-48h]
  __int64 v104; // [rsp+E0h] [rbp-40h] BYREF

  v92.m128i_i64[0] = a4;
  v11 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v11 )
  {
    v12 = a6;
    sub_295350(a1);
    v79 = a3;
    v76 = a7;
    v70 = v12;
  }
  else
  {
    v76 = 0;
    v79 = 0;
    v70 = 0;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  sub_24FC40(a1);
  v13 = *(_QWORD *)(a1 + 232);
  v14 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  LODWORD(v101[0]) = 6255465;
  sub_180CE20(
    (int)&src,
    (int)v96,
    v15,
    v16,
    v17,
    v18,
    v66,
    v68,
    v70,
    a6,
    (int)v96,
    (int)&src,
    v76,
    v14,
    v79,
    (int)v101,
    a2,
    a1,
    v85,
    v89,
    v92.m128i_i32[0],
    v92.m128i_i32[2],
    v93,
    v94,
    v95,
    a2,
    v13,
    nullptr,
    (int)v101,
    3);
  v19 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - v100 < n )
    std::__throw_length_error("basic_string::append");
  v20 = n + v100;
  v92.m128i_i64[1] = (__int64)v99;
  if ( v99 != v82 )
  {
    if ( v101[0] >= (unsigned __int64)v20 )
      goto LABEL_6;
    if ( v20 >= 0 )
    {
      v91 = 2LL * v101[0];
      if ( v20 < (unsigned __int64)(2LL * v101[0]) )
      {
        v60 = 2LL * v101[0] + 1;
        if ( (v101[0] & 0x4000000000000000LL) == 0 )
          goto LABEL_67;
        goto LABEL_78;
      }
LABEL_66:
      v91 = n + v100;
      v60 = v20 + 1;
      if ( v20 + 1 >= 0 )
      {
LABEL_67:
        v69 = v100;
        v86 = src;
        v61 = (_BYTE *)operator new(v60);
        v62 = v69;
        v92.m128i_i64[1] = (__int64)v61;
        v63 = v99;
        v64 = v86;
        if ( v69 )
        {
          if ( v69 == 1 )
          {
            *v61 = *(_BYTE *)v99;
          }
          else
          {
            v67 = v86;
            v87 = v99;
            memcpy(v61, v99, v69);
            v64 = v67;
            v62 = v69;
            v63 = v87;
          }
        }
        if ( v64 && v19 )
        {
          v65 = (_BYTE *)(v92.m128i_i64[1] + v62);
          if ( v19 == 1 )
          {
            *v65 = *v64;
          }
          else
          {
            v88 = v63;
            memcpy(v65, v64, v19);
            v63 = v88;
          }
        }
        if ( v63 != v82 )
          operator delete(v63, v101[0] + 1LL);
        v99 = (void *)v92.m128i_i64[1];
        v101[0] = v91;
        goto LABEL_7;
      }
LABEL_78:
      std::__throw_bad_alloc();
    }
    goto LABEL_89;
  }
  if ( (unsigned __int64)v20 > 0xF )
  {
    if ( v20 >= 0 )
    {
      if ( (unsigned __int64)v20 <= 0x1D )
      {
        v91 = 30;
        v60 = 31;
        goto LABEL_67;
      }
      goto LABEL_66;
    }
LABEL_89:
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_6:
  if ( n )
  {
    v59 = (_BYTE *)(v100 + v92.m128i_i64[1]);
    if ( n == 1 )
      *v59 = *(_BYTE *)src;
    else
      memcpy(v59, src, n);
    v92.m128i_i64[1] = (__int64)v99;
  }
LABEL_7:
  v100 = v20;
  *(_BYTE *)(v92.m128i_i64[1] + v20) = 0;
  if ( src != &v104 )
    operator delete(src, v104 + 1);
  sub_180C5A0(&v94, v99);
  if ( a3 )
  {
    v21 = nullptr;
    v92.m128i_i64[1] = v92.m128i_i64[0];
    v90 = &a5[a3];
    do
    {
      v23 = *a5;
      v92.m128i_i64[0] = *(_QWORD *)v92.m128i_i64[1];
      v24 = (__m128i *)sub_186B270(0x28u);
      v25 = _mm_loadl_epi64(&v92);
      v26 = v24;
      v24[1].m128i_i64[0] = v13;
      *v24 = _mm_unpacklo_epi64(v25, (__m128i)(v23 & 0xFFFFFFFFFFFFFFF8LL));
      if ( (v23 | 1uLL) > 7 )
        ++*(_DWORD *)((v23 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      v24[1].m128i_i32[2] = -1;
      v24[2].m128i_i64[0] = 0;
      if ( v21 )
      {
        v27 = *((_DWORD *)v21 - 1);
        if ( v27 == *((_DWORD *)v21 - 2) )
        {
          v28 = (3 * v27 + 1) >> 1;
          v29 = 8 * v28 + 8;
          v30 = v28;
          if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_A64A2(v75);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v75);
            sub_233E40((__int64)v75);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = (unsigned int *)sub_186B300(v21 - 1, v29);
          *v31 = v30;
          v21 = v31 + 2;
          v32 = v31[1];
          v22 = (__m128i **)&v31[2 * v32 + 2];
          a3 = v32 + 1;
        }
        else
        {
          a3 = v27 + 1;
          v22 = (__m128i **)&v21[v27];
        }
      }
      else
      {
        v53 = (_QWORD *)sub_186B270(0x18u);
        v21 = v53 + 1;
        *v53 = 2;
        a3 = 1;
        v22 = (__m128i **)(v53 + 1);
      }
      *v22 = v26;
      ++a5;
      v92.m128i_i64[1] += 8;
      *((_DWORD *)v21 - 1) = a3;
    }
    while ( v90 != a5 );
  }
  else
  {
    v21 = nullptr;
  }
  v33 = sub_186B270(0x20u);
  *(_OWORD *)(v33 + 16) = 0;
  *(_QWORD *)v33 = v83;
  *(_QWORD *)(v33 + 8) = v94;
  if ( a3 )
  {
    v34 = *v21;
    v35 = (_QWORD *)sub_186B270(0x18u);
    *v35 = 2;
    v36 = v35 + 1;
    v37 = 1;
    v92.m128i_i64[1] = (__int64)v21;
    v38 = &v21[a3];
    v39 = v36;
    *(_QWORD *)(v33 + 16) = v36;
    while ( 1 )
    {
      *v36 = v34;
      v92.m128i_i64[1] += 8;
      v40 = (__int64 *)v92.m128i_i64[1];
      *(v39 - 1) = v37;
      *(_QWORD *)(v34 + 32) = v33;
      if ( v38 == v40 )
        break;
      v34 = *v40;
      if ( *(v39 - 2) == v37 )
      {
        v42 = (3 * v37 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v37 + 8 >= (unsigned int)v43 || v37 >= v42 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_A64A2(v75);
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v75);
          sub_233E40((__int64)v75);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v39 - 2, v43);
        v39 = v44 + 2;
        *v44 = v42;
        v45 = v44[1];
        *(_QWORD *)(v33 + 16) = v39;
        v46 = v45;
        v36 = &v39[2 * v45];
        v37 = v46 + 1;
      }
      else
      {
        v41 = v37++;
        v36 = &v39[2 * v41];
      }
    }
  }
  v95 = v33;
  src = v83;
  *(_QWORD *)v96 = sub_15F3050(v78, v75, 0, 0, 1, &v95);
  if ( (unsigned __int8)sub_15FA930(*(_QWORD *)(v84 + 1480), 1, v74, 0, 0, (unsigned int)&v97, (_DWORD)v67, v69) )
  {
    v47 = *v98;
    sub_251EF0(v84, *v98);
    v54 = **(_QWORD **)sub_15F6BE0(v78, v47);
    sub_251EF0(v84, v54);
    *v73 = v54;
    v92.m128i_i64[1] = sub_15FB1F0(v78, v54);
    v55 = *(_QWORD *)v92.m128i_i64[1];
    for ( i = 0; v55; *(_QWORD *)(a7 + 8 * v57) = *(_QWORD *)(*(_QWORD *)v92.m128i_i64[1] + 8 * v57) )
    {
      if ( i >= *(_DWORD *)(v55 - 4) )
        break;
      v57 = i;
      sub_251EF0(v84, *(_QWORD *)(v55 + 8LL * i++));
      v55 = *(_QWORD *)v92.m128i_i64[1];
    }
    if ( v81 )
    {
      sub_2BB620(v47);
      if ( v71 )
        v71 = (_QWORD *)*v71;
      sub_2BB6A0(v71, 5);
      if ( v80 )
      {
        for ( j = 0; j != v80; ++j )
          sub_2BB770(*(_QWORD *)(v77 + 8 * j), 6, (unsigned int)j);
      }
    }
  }
  else
  {
    sub_24EA30(v84, 3, 0);
    if ( v81 )
      sub_2BB620(0);
    v47 = 0;
  }
  if ( v21 )
    sub_186B220(v21 - 1);
  if ( v99 != v82 )
    operator delete(v99, v101[0] + 1LL);
  v48 = v98;
  if ( v98 )
  {
    if ( v98 >= &v98[*((unsigned int *)v98 - 1)] )
      goto LABEL_45;
    v49 = &v98[*((unsigned int *)v98 - 1)];
    do
    {
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 )
        {
          if ( (*(_DWORD *)(v50 + 8))-- == 1 )
            break;
        }
        if ( ++v48 >= v49 )
          goto LABEL_44;
      }
      sub_15D7BC0(v97, v50);
      ++v48;
    }
    while ( v48 < v49 );
LABEL_44:
    v48 = v98;
    if ( v98 )
LABEL_45:
      sub_186B220(v48 - 1);
  }
  if ( v81 )
    byte_1C7EBA0 = 1;
  return v47;
}

