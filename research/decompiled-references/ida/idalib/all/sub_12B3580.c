void __fastcall sub_12B3580(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const __m128i *a5,
        __int64 a6,
        __m128 a7,
        __m128i a8)
{
  int v10; // ecx
  char *v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  void **p_src; // rbx
  __int8 *v18; // r9
  size_t v19; // r10
  size_t v20; // r11
  __m128i *p_dest; // rax
  __m128i *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rax
  const __m128i *v25; // r9
  void *v26; // r14
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  void *v32; // rsi
  _QWORD *v33; // rbx
  void (__fastcall *v34)(_QWORD *); // rax
  __int64 v35; // r14
  __int64 v36; // r13
  void *v37; // rdi
  _QWORD *v38; // rdi
  _QWORD *v39; // rdi
  void **v40; // r14
  void **v41; // r13
  void *v42; // rdi
  _QWORD *v43; // rdi
  _BYTE *v44; // rdi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r14
  __int64 v48; // rdi
  size_t v49; // rdx
  __int64 v51; // [rsp+0h] [rbp-178h]
  size_t v53; // [rsp+20h] [rbp-158h] BYREF
  void **v54; // [rsp+28h] [rbp-150h]
  const __m128i *v55; // [rsp+30h] [rbp-148h]
  __int64 v56; // [rsp+38h] [rbp-140h]
  void *v57[2]; // [rsp+40h] [rbp-138h] BYREF
  __m128 v58; // [rsp+50h] [rbp-128h] BYREF
  void *dest; // [rsp+60h] [rbp-118h] BYREF
  __m128 v60; // [rsp+68h] [rbp-110h] BYREF
  char v61[8]; // [rsp+78h] [rbp-100h] BYREF
  void *src; // [rsp+80h] [rbp-F8h] BYREF
  size_t n; // [rsp+88h] [rbp-F0h]
  _QWORD v64[2]; // [rsp+90h] [rbp-E8h] BYREF
  __int16 v65; // [rsp+A0h] [rbp-D8h]
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-C0h]
  _BYTE v68[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v10 = *(_DWORD *)(a6 + 8);
  v11 = v68;
  ptr = v68;
  v67 = 0x1000000000LL;
  if ( v10 )
  {
    sub_10DED70(&ptr, (char **)a6);
    v12 = a5->m128i_i64[0];
    v46 = (unsigned int)v67 + 1LL;
    if ( v46 > HIDWORD(v67) )
      sub_2237220(&ptr, v68, v46, 8);
    v11 = (char *)ptr + 8 * (unsigned int)v67;
  }
  else
  {
    v12 = a5->m128i_i64[0];
  }
  *(_QWORD *)v11 = v12;
  v13 = (unsigned int)(v67 + 1);
  v14 = *(_DWORD *)(a4 + 24) == 38;
  LODWORD(v67) = v67 + 1;
  if ( v14 )
  {
    if ( v13 + 1 > (unsigned __int64)HIDWORD(v67) )
    {
      sub_2237220(&ptr, v68, v13 + 1, 8);
      v13 = (unsigned int)v67;
    }
    *((_QWORD *)ptr + v13) = "--spirv-tools-dis";
    v13 = (unsigned int)(v67 + 1);
    LODWORD(v67) = v67 + 1;
  }
  v15 = *(_QWORD *)a4;
  if ( v13 + 2 > (unsigned __int64)HIDWORD(v67) )
  {
    sub_2237220(&ptr, v68, v13 + 2, 8);
    v13 = (unsigned int)v67;
  }
  v16 = ptr;
  *((_QWORD *)ptr + v13) = "-o";
  v16[v13 + 1] = v15;
  p_src = &src;
  LODWORD(v67) = v67 + 2;
  sub_D8B070(
    &src,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%d",
    21);
  v18 = &v60.m128_i8[8];
  v19 = n;
  dest = &v60.m128_u16[4];
  v20 = n + 11;
  v60.m128_u64[1] = 0x6970732D6D766C6CLL;
  strcpy(v61, "rv-");
  v60.m128_u64[0] = 11;
  if ( n + 11 <= 0xF )
  {
    if ( n )
    {
      if ( n == 1 )
      {
        v61[3] = *(_BYTE *)src;
      }
      else
      {
        v55 = (const __m128i *)&v60.m128_u16[4];
        v54 = (void **)(n + 11);
        v53 = n;
        memcpy(&v61[3], src, n);
        v18 = &v60.m128_i8[8];
        v20 = (size_t)v54;
        v19 = v53;
      }
    }
    goto LABEL_10;
  }
  if ( src == v64 || v20 > v64[0] )
  {
    v54 = (void **)(n + 11);
    v53 = n;
    sub_998B30((__int64)&dest, 0xBu, 0, src, n);
    v18 = (__int8 *)dest;
    v19 = v53;
    v20 = (size_t)v54;
LABEL_10:
    v60.m128_u64[0] = v20;
    p_dest = (__m128i *)&dest;
    v18[v19 + 11] = 0;
    goto LABEL_11;
  }
  p_dest = (__m128i *)sub_99BDC0(&src, 0, 0, &v60.m128_i8[8], 0xBu);
LABEL_11:
  v57[0] = &v58;
  v22 = (__m128i *)p_dest->m128i_i64[0];
  v54 = v57;
  if ( v22 == &p_dest[1] )
  {
    a8 = _mm_loadu_si128(p_dest + 1);
    v58 = (__m128)a8;
  }
  else
  {
    v57[0] = v22;
    v58.m128_u64[0] = p_dest[1].m128i_u64[0];
  }
  v23 = (void *)p_dest->m128i_i64[1];
  p_dest[1].m128i_i8[0] = 0;
  v57[1] = v23;
  p_dest->m128i_i64[0] = (__int64)p_dest[1].m128i_i64;
  p_dest->m128i_i64[1] = 0;
  if ( dest != &v60.m128_u16[4] )
    operator delete(dest);
  if ( src != v64 )
    operator delete(src);
  sub_112D530(&dest, *(_QWORD *)(a2 + 24), (char *)v57[0]);
  src = &dest;
  v65 = 260;
  if ( !(unsigned __int8)sub_228C2C0(&src) )
  {
    sub_112D530(&src, *(_QWORD *)(a2 + 24), "llvm-spirv");
    v44 = dest;
    if ( src == v64 )
    {
      v49 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v64[0];
        else
          memcpy(dest, src, n);
        v49 = n;
        v44 = dest;
      }
      v60.m128_u64[0] = v49;
      v44[v49] = 0;
      v44 = src;
      goto LABEL_64;
    }
    if ( dest == &v60.m128_u16[4] )
    {
      v53 = v64[0];
      dest = src;
      a7 = _mm_loadh_ps((const double *)&v53);
      v60 = a7;
    }
    else
    {
      v53 = v64[0];
      v45 = v60.m128_u64[1];
      dest = src;
      a7 = _mm_loadh_ps((const double *)&v53);
      v60 = a7;
      if ( v44 )
      {
        src = v44;
        v64[0] = v45;
        goto LABEL_64;
      }
    }
    v44 = v64;
    src = v64;
LABEL_64:
    n = 0;
    *v44 = 0;
    if ( src != v64 )
      operator delete(src);
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, void *, unsigned __int64))(**(_QWORD **)(a1 + 80) + 16LL))(
          *(_QWORD *)(a1 + 80),
          dest,
          v60.m128_u64[0]);
  v25 = a5;
  v51 = a4;
  v56 = 1;
  v55 = v25;
  v53 = v24;
  v26 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v26, a3, a2, 2, 0, v53, (__int64)&ptr, v55, v56, v51, 1, 0);
  v27 = *(unsigned int *)(a1 + 160);
  v28 = *(unsigned int *)(a1 + 164);
  src = v26;
  v29 = v27 + 1;
  v30 = v27;
  if ( v27 + 1 > v28 )
  {
    v47 = *(_QWORD *)(a1 + 152);
    v48 = a1 + 152;
    if ( v47 > (unsigned __int64)&src || (unsigned __int64)&src >= v47 + 8 * v27 )
    {
      sub_11673D0(v48, v29, a7, *(double *)a8.m128i_i64);
      v27 = *(unsigned int *)(a1 + 160);
      v31 = *(_QWORD *)(a1 + 152);
      v30 = *(_DWORD *)(a1 + 160);
    }
    else
    {
      sub_11673D0(v48, v29, a7, *(double *)a8.m128i_i64);
      v31 = *(_QWORD *)(a1 + 152);
      v27 = *(unsigned int *)(a1 + 160);
      p_src = (void **)((char *)&src + v31 - v47);
      v30 = *(_DWORD *)(a1 + 160);
    }
  }
  else
  {
    v31 = *(_QWORD *)(a1 + 152);
  }
  v32 = *p_src;
  *p_src = nullptr;
  *(_QWORD *)(v31 + 8 * v27) = v32;
  v33 = src;
  *(_DWORD *)(a1 + 160) = v30 + 1;
  if ( v33 )
  {
    v34 = *(void (__fastcall **)(_QWORD *))(*v33 + 8LL);
    if ( v34 == sub_10D4290 )
    {
      v35 = v33[58];
      v36 = v33[57];
      *v33 = &off_2BA8F30;
      if ( v35 != v36 )
      {
        do
        {
          if ( *(_BYTE *)(v36 + 32) && *(_QWORD *)v36 != v36 + 16 )
            operator delete(*(void **)v36);
          v36 += 40;
        }
        while ( v35 != v36 );
        v36 = v33[57];
      }
      if ( v36 )
        operator delete((void *)v36);
      v37 = (void *)v33[54];
      if ( v37 )
        operator delete(v37);
      v38 = (_QWORD *)v33[50];
      if ( v38 != v33 + 52 )
        operator delete(v38);
      v39 = (_QWORD *)v33[32];
      if ( v39 != v33 + 34 )
        free(v39);
      v40 = (void **)v33[29];
      v41 = (void **)v33[28];
      if ( v40 != v41 )
      {
        do
        {
          while ( *v41 != v41 + 2 )
          {
            operator delete(*v41);
            v41 += 4;
            if ( v40 == v41 )
            {
              v41 = (void **)v33[28];
              goto LABEL_40;
            }
          }
          v41 += 4;
        }
        while ( v40 != v41 );
        v41 = (void **)v33[28];
      }
LABEL_40:
      if ( v41 )
        operator delete(v41);
      v42 = (void *)v33[25];
      if ( v42 )
        operator delete(v42);
      v43 = (_QWORD *)v33[7];
      if ( v43 != v33 + 9 )
        free(v43);
      operator delete(v33, 0x208u);
    }
    else
    {
      v34(v33);
    }
  }
  if ( dest != &v60.m128_u16[4] )
    operator delete(dest);
  if ( v57[0] != v54 + 2 )
    operator delete(v57[0]);
  if ( ptr != v68 )
    free(ptr);
}
