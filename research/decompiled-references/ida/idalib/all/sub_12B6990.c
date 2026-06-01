void __fastcall sub_12B6990(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        double a7,
        __m128i a8)
{
  bool v10; // zf
  __int64 v11; // rsi
  __int64 *v12; // rbx
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // r15
  _QWORD *v20; // r12
  __m128 v21; // xmm0
  __int64 v22; // rbx
  char *v23; // rax
  __int64 v24; // rdx
  const char *v25; // rsi
  void *v26; // r12
  void *v27; // rax
  void *v28; // rax
  char *v29; // rdx
  __int64 v30; // r13
  __int64 v31; // r10
  void *v32; // r15
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rsi
  _QWORD *v39; // rbx
  void (__fastcall *v40)(_QWORD *); // rax
  __int64 v41; // r14
  __int64 v42; // r13
  void *v43; // rdi
  _QWORD *v44; // rdi
  _QWORD *v45; // rdi
  void **v46; // r14
  void **v47; // r13
  void *v48; // rdi
  _QWORD *v49; // rdi
  __int64 v50; // rax
  _QWORD *v51; // r15
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  void *v54; // rsi
  __m128i *v55; // rbx
  size_t v56; // r15
  unsigned __int64 v57; // r9
  __int64 v58; // rax
  void *v59; // rax
  __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rdi
  __m128i *v64; // rax
  _BYTE *v65; // r10
  void *v66; // rsi
  void *v67; // rdi
  unsigned __int64 v68; // r13
  __int64 v69; // rdi
  __int64 v70; // [rsp+0h] [rbp-168h]
  __int64 v71; // [rsp+0h] [rbp-168h]
  const __m128i *v74; // [rsp+20h] [rbp-148h]
  __int64 v75; // [rsp+28h] [rbp-140h]
  void *src; // [rsp+30h] [rbp-138h] BYREF
  __int64 v77; // [rsp+38h] [rbp-130h]
  __int64 v78; // [rsp+40h] [rbp-128h]
  void *v79; // [rsp+48h] [rbp-120h]
  void *v80; // [rsp+50h] [rbp-118h]
  __int64 v81; // [rsp+58h] [rbp-110h]
  void *v82; // [rsp+60h] [rbp-108h] BYREF
  void *v83; // [rsp+68h] [rbp-100h]
  __m128i v84; // [rsp+70h] [rbp-F8h] BYREF
  void *v85[2]; // [rsp+80h] [rbp-E8h] BYREF
  __m128 v86; // [rsp+90h] [rbp-D8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-C0h]
  _BYTE v89[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v10 = *(_DWORD *)(a4 + 8) == 1;
  v88 = 0x1000000000LL;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = (__int64 *)v85;
  v13 = v89;
  v78 = a1;
  v77 = a4;
  ptr = v89;
  v70 = v11;
  if ( v10 )
  {
    v54 = *(void **)a4;
    strcpy(v84.m128i_i8, "-out:");
    v55 = &v84;
    v82 = &v84;
    src = v54;
    v83 = &byte_5;
    v56 = strlen((const char *)v54);
    if ( v56 > 0x7FFFFFFFFFFFFFFALL )
      std::__throw_length_error("basic_string::append");
    v57 = v56 + 5;
    if ( v56 + 5 > 0xF )
    {
      if ( v57 > 0x1D )
      {
        v63 = v56 + 6;
        v81 = v56 + 5;
      }
      else
      {
        v81 = 30;
        v63 = 31;
      }
      v80 = (void *)(v56 + 5);
      v79 = src;
      v64 = (__m128i *)operator new(v63);
      v65 = v82;
      v66 = src;
      v55 = v64;
      LODWORD(v64) = *(_DWORD *)v82;
      src = v82;
      v55->m128i_i32[0] = (int)v64;
      v55->m128i_i8[4] = v65[4];
      memcpy(&v55->m128i_u8[5], v66, v56);
      v57 = (unsigned __int64)v80;
      if ( src != &v84 )
      {
        v67 = src;
        src = v80;
        operator delete(v67);
        v57 = (unsigned __int64)v80;
      }
      v82 = v55;
      v84.m128i_i64[0] = v81;
    }
    else if ( v56 )
    {
      if ( v56 == 1 )
      {
        v84.m128i_i8[5] = *(_BYTE *)src;
      }
      else
      {
        src = (void *)(v56 + 5);
        memcpy(&v84.m128i_u8[5], v54, v56);
        v57 = v56 + 5;
      }
    }
    v83 = (void *)v57;
    v55->m128i_i8[v56 + 5] = 0;
    v12 = (__int64 *)v85;
    v85[0] = &v86;
    if ( v82 == &v84 )
    {
      a8 = _mm_load_si128(&v84);
      v86 = (__m128)a8;
    }
    else
    {
      v85[0] = v82;
      v86.m128_u64[0] = v84.m128i_i64[0];
    }
    v84.m128i_i8[0] = 0;
    v82 = &v84;
    v58 = *a6;
    v85[1] = v83;
    v83 = nullptr;
    v59 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(v58 + 16))(a6);
    v60 = (unsigned int)v88;
    v61 = (unsigned int)v88 + 1LL;
    if ( v61 > HIDWORD(v88) )
    {
      src = v59;
      sub_2237220(&ptr, v89, v61, 8);
      v60 = (unsigned int)v88;
      v59 = src;
    }
    *((_QWORD *)ptr + v60) = v59;
    LODWORD(v88) = v88 + 1;
    if ( v85[0] != &v86 )
      operator delete(v85[0]);
    if ( v82 != &v84 )
      operator delete(v82);
    v62 = (unsigned int)v88 + 1LL;
    if ( v62 > HIDWORD(v88) )
      sub_2237220(&ptr, v89, v62, 8);
    v13 = (char *)ptr + 8 * (unsigned int)v88;
  }
  *(_QWORD *)v13 = "-nologo";
  LODWORD(v88) = v88 + 1;
  v14 = (unsigned int)v88;
  if ( (unsigned __int64)(unsigned int)v88 + 1 > HIDWORD(v88) )
  {
    sub_2237220(&ptr, v89, (unsigned int)v88 + 1LL, 8);
    v14 = (unsigned int)v88;
  }
  *((_QWORD *)ptr + v14) = "-subsystem:efi_application";
  LODWORD(v88) = v88 + 1;
  v15 = (unsigned int)v88;
  if ( (unsigned __int64)(unsigned int)v88 + 1 > HIDWORD(v88) )
  {
    sub_2237220(&ptr, v89, (unsigned int)v88 + 1LL, 8);
    v15 = (unsigned int)v88;
  }
  *((_QWORD *)ptr + v15) = "-entry:EfiMain";
  LODWORD(v88) = v88 + 1;
  v16 = (unsigned int)v88;
  if ( (unsigned __int64)(unsigned int)v88 + 1 > HIDWORD(v88) )
  {
    sub_2237220(&ptr, v89, (unsigned int)v88 + 1LL, 8);
    v16 = (unsigned int)v88;
  }
  *((_QWORD *)ptr + v16) = "-tsaware:no";
  v85[0] = (void *)0xDC000000024LL;
  LODWORD(v88) = v88 + 1;
  v17 = sub_21B6DA0(a6, v85, 2);
  v18 = a6[1];
  v86.m128_u64[0] = 0xDC000000024LL;
  v19 = (_QWORD *)(v18 + 8LL * (unsigned int)v17);
  v20 = (_QWORD *)(v18 + 8 * HIDWORD(v17));
  src = v20;
  v21 = _mm_loadh_ps((const double *)&src);
  *(__m128 *)v85 = v21;
  if ( v19 != v20 )
  {
    src = v85;
    while ( 1 )
    {
      v22 = *v19;
      if ( *v19 )
      {
        if ( (unsigned __int8)sub_21B9810(*v19, 36) || (unsigned __int8)sub_21B9810(v22, 3520) )
          break;
      }
      v85[0] = ++v19;
      if ( v20 == v19 )
      {
        v12 = (__int64 *)src;
        goto LABEL_15;
      }
    }
    v12 = (__int64 *)src;
    src = v20;
    v86.m128_u64[0] = 0xDC000000024LL;
    v21 = _mm_loadh_ps((const double *)&src);
    *(__m128 *)v85 = v21;
    if ( v20 != v19 )
    {
      do
      {
        v50 = *v19;
        if ( *(_QWORD *)(*v19 + 16LL) )
          v50 = *(_QWORD *)(*v19 + 16LL);
        v51 = v19 + 1;
        *(_BYTE *)(v50 + 44) |= 1u;
        v85[0] = v51;
        if ( v51 == v20 )
          break;
        while ( 1 )
        {
          if ( *v51 )
          {
            src = (void *)*v51;
            if ( (unsigned __int8)sub_21B9810(src, 36) || (unsigned __int8)sub_21B9810(src, 3520) )
              break;
          }
          v85[0] = ++v51;
          if ( v20 == v51 )
            goto LABEL_65;
        }
        v19 = v85[0];
      }
      while ( v85[0] != v20 );
LABEL_65:
      v52 = (unsigned int)v88;
      v53 = (unsigned int)v88 + 1LL;
      if ( v53 > HIDWORD(v88) )
      {
        sub_2237220(&ptr, v89, v53, 8);
        v52 = (unsigned int)v88;
      }
      *((_QWORD *)ptr + v52) = "-debug";
      LODWORD(v88) = v88 + 1;
    }
  }
LABEL_15:
  sub_21B6F20(a6, &ptr, 2199, 0, 0);
  sub_11C3660(v70, a5, (__int64)a6, (__int64)&ptr, a3);
  v23 = (char *)sub_21B7BC0(a6, 1916, &byte_22F0C30, 0);
  v25 = v23;
  v26 = (void *)v24;
  if ( !v24 )
  {
LABEL_16:
    v27 = v12 + 2;
    v25 = "lld-link";
    v26 = byte_8;
    v85[0] = v12 + 2;
    goto LABEL_17;
  }
  if ( v24 == 3 )
  {
    if ( *(_WORD *)v23 != 27756 || v23[2] != 100 )
    {
      v27 = v12 + 2;
      v85[0] = v12 + 2;
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  if ( v23 )
  {
    v85[0] = v12 + 2;
    if ( (unsigned __int64)v24 <= 0xF )
    {
      if ( v24 == 1 )
      {
        v86.m128_i8[0] = *v23;
        v28 = v12 + 2;
        goto LABEL_18;
      }
      v27 = v12 + 2;
    }
    else
    {
      src = v23;
      if ( v24 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v27 = (void *)operator new(v24 + 1);
      v86.m128_u64[0] = (unsigned __int64)v26;
      v25 = (const char *)src;
      v85[0] = v27;
    }
LABEL_17:
    memcpy(v27, v25, (size_t)v26);
    v28 = v85[0];
LABEL_18:
    v85[1] = v26;
    *((_BYTE *)v26 + (_QWORD)v28) = 0;
    v29 = (char *)v85[0];
    goto LABEL_19;
  }
  v29 = (char *)(v12 + 2);
  v86.m128_i8[0] = 0;
  v85[0] = v12 + 2;
  v85[1] = nullptr;
LABEL_19:
  sub_112D530(&v82, v70, v29);
  if ( v85[0] != v12 + 2 )
    operator delete(v85[0]);
  v30 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v82, v83);
  v71 = v77;
  v31 = *(unsigned int *)(a5 + 8);
  v74 = *(const __m128i **)a5;
  v75 = v31;
  v32 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v32, a3, v78, 0x200000000LL, (__int64)"@", v30, (__int64)&ptr, v74, v75, v71, 1, 0);
  v33 = *(unsigned int *)(a2 + 160);
  v34 = *(unsigned int *)(a2 + 164);
  v85[0] = v32;
  v35 = v33 + 1;
  v36 = v33;
  if ( v33 + 1 > v34 )
  {
    v68 = *(_QWORD *)(a2 + 152);
    v69 = a2 + 152;
    if ( v68 > (unsigned __int64)v12 || (unsigned __int64)v12 >= v68 + 8 * v33 )
    {
      sub_11673D0(v69, v35, v21, *(double *)a8.m128i_i64);
      v33 = *(unsigned int *)(a2 + 160);
      v37 = *(_QWORD *)(a2 + 152);
      v36 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v69, v35, v21, *(double *)a8.m128i_i64);
      v37 = *(_QWORD *)(a2 + 152);
      v33 = *(unsigned int *)(a2 + 160);
      v12 = (__int64 *)((char *)v12 + v37 - v68);
      v36 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v37 = *(_QWORD *)(a2 + 152);
  }
  v38 = *v12;
  *v12 = 0;
  *(_QWORD *)(v37 + 8 * v33) = v38;
  v39 = v85[0];
  *(_DWORD *)(a2 + 160) = v36 + 1;
  if ( v39 )
  {
    v40 = *(void (__fastcall **)(_QWORD *))(*v39 + 8LL);
    if ( v40 == sub_10D4290 )
    {
      v41 = v39[58];
      v42 = v39[57];
      *v39 = &off_2BA8F30;
      if ( v41 != v42 )
      {
        do
        {
          if ( *(_BYTE *)(v42 + 32) && *(_QWORD *)v42 != v42 + 16 )
            operator delete(*(void **)v42);
          v42 += 40;
        }
        while ( v41 != v42 );
        v42 = v39[57];
      }
      if ( v42 )
        operator delete((void *)v42);
      v43 = (void *)v39[54];
      if ( v43 )
        operator delete(v43);
      v44 = (_QWORD *)v39[50];
      if ( v44 != v39 + 52 )
        operator delete(v44);
      v45 = (_QWORD *)v39[32];
      if ( v45 != v39 + 34 )
        free(v45);
      v46 = (void **)v39[29];
      v47 = (void **)v39[28];
      if ( v46 != v47 )
      {
        do
        {
          while ( *v47 != v47 + 2 )
          {
            operator delete(*v47);
            v47 += 4;
            if ( v46 == v47 )
            {
              v47 = (void **)v39[28];
              goto LABEL_43;
            }
          }
          v47 += 4;
        }
        while ( v46 != v47 );
        v47 = (void **)v39[28];
      }
LABEL_43:
      if ( v47 )
        operator delete(v47);
      v48 = (void *)v39[25];
      if ( v48 )
        operator delete(v48);
      v49 = (_QWORD *)v39[7];
      if ( v49 != v39 + 9 )
        free(v49);
      operator delete(v39, 0x208u);
    }
    else
    {
      v40(v39);
    }
  }
  if ( v82 != &v84 )
    operator delete(v82);
  if ( ptr != v89 )
    free(ptr);
}
