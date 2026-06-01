void __fastcall sub_12B3D50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        __m128 a7,
        double a8)
{
  char *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  void **p_src; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // r15
  __int64 *v22; // rcx
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // r15
  __int64 v26; // r10
  void *v27; // r12
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rcx
  void *v33; // rsi
  _QWORD *v34; // rbx
  void (__fastcall *v35)(_QWORD *); // rax
  __int64 v36; // r13
  __int64 v37; // r12
  void *v38; // rdi
  _QWORD *v39; // rdi
  _QWORD *v40; // rdi
  void **v41; // r13
  void **v42; // r12
  void *v43; // rdi
  _QWORD *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdi
  char v47; // al
  _BYTE *v48; // rdi
  unsigned __int64 v49; // rdx
  size_t v50; // rdx
  unsigned __int64 v51; // r12
  __int64 v52; // rdi
  const __m128i *v56; // [rsp+20h] [rbp-128h]
  __int64 v57; // [rsp+28h] [rbp-120h]
  __int64 *v58; // [rsp+30h] [rbp-118h] BYREF
  __int64 v59; // [rsp+38h] [rbp-110h]
  void *dest; // [rsp+40h] [rbp-108h] BYREF
  __m128 v61; // [rsp+48h] [rbp-100h] BYREF
  void *src; // [rsp+60h] [rbp-E8h] BYREF
  size_t n; // [rsp+68h] [rbp-E0h]
  _QWORD v64[2]; // [rsp+70h] [rbp-D8h] BYREF
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+88h] [rbp-C0h]
  _BYTE v67[184]; // [rsp+90h] [rbp-B8h] BYREF

  v12 = *(char **)(a1 + 16);
  v59 = *(_QWORD *)(a1 + 24);
  sub_112D530(&dest, v59, v12);
  v13 = *(_QWORD *)(a1 + 24);
  ptr = v67;
  v66 = 0x1000000000LL;
  sub_11C3660(v13, a5, (__int64)a6, (__int64)&ptr, a3);
  v14 = (unsigned int)v66;
  v15 = (unsigned int)v66 + 1LL;
  if ( v15 > HIDWORD(v66) )
  {
    sub_2237220(&ptr, v67, v15, 8);
    v14 = (unsigned int)v66;
  }
  *((_QWORD *)ptr + v14) = "-o";
  v16 = *a4;
  LODWORD(v66) = v66 + 1;
  v17 = (unsigned int)v66;
  if ( (unsigned __int64)(unsigned int)v66 + 1 > HIDWORD(v66) )
  {
    sub_2237220(&ptr, v67, (unsigned int)v66 + 1LL, 8);
    v17 = (unsigned int)v66;
  }
  *((_QWORD *)ptr + v17) = v16;
  p_src = &src;
  LODWORD(v66) = v66 + 1;
  LODWORD(src) = 3312;
  v19 = sub_21B6DA0(a6, &src, 1);
  v20 = a6[1];
  v21 = (__int64 *)(v20 + 8LL * (unsigned int)v19);
  v22 = (__int64 *)(v20 + 8 * HIDWORD(v19));
  if ( v21 != v22 )
  {
    while ( 1 )
    {
      v23 = *v21;
      if ( *v21 )
      {
        v58 = v22;
        v24 = sub_21B9810(v23, 3312);
        v22 = v58;
        if ( v24 )
          break;
      }
      if ( v22 == ++v21 )
        goto LABEL_9;
    }
    if ( v58 != v21 )
    {
      do
      {
        v45 = *v21;
        if ( *(_QWORD *)(*v21 + 16) )
          v45 = *(_QWORD *)(*v21 + 16);
        ++v21;
        *(_BYTE *)(v45 + 44) |= 1u;
        if ( v21 == v22 )
          break;
        while ( 1 )
        {
          v46 = *v21;
          if ( *v21 )
          {
            v58 = v22;
            v47 = sub_21B9810(v46, 3312);
            v22 = v58;
            if ( v47 )
              break;
          }
          if ( v22 == ++v21 )
            goto LABEL_52;
        }
      }
      while ( v58 != v21 );
LABEL_52:
      sub_112D530(&src, v59, "clang-sycl-linker");
      v48 = dest;
      if ( src == v64 )
      {
        v50 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)dest = v64[0];
          else
            memcpy(dest, src, n);
          v50 = n;
          v48 = dest;
        }
        v61.m128_u64[0] = v50;
        v48[v50] = 0;
        v48 = src;
        goto LABEL_56;
      }
      if ( dest == &v61.m128_u16[4] )
      {
        v58 = (__int64 *)v64[0];
        dest = src;
        a7 = _mm_loadh_ps((const double *)&v58);
        v61 = a7;
      }
      else
      {
        v58 = (__int64 *)v64[0];
        v49 = v61.m128_u64[1];
        dest = src;
        a7 = _mm_loadh_ps((const double *)&v58);
        v61 = a7;
        if ( v48 )
        {
          src = v48;
          v64[0] = v49;
          goto LABEL_56;
        }
      }
      v48 = v64;
      src = v64;
LABEL_56:
      n = 0;
      *v48 = 0;
      if ( src != v64 )
        operator delete(src);
    }
  }
LABEL_9:
  v25 = (*(__int64 (__fastcall **)(_QWORD *, void *, unsigned __int64))(*a6 + 16LL))(a6, dest, v61.m128_u64[0]);
  v26 = *(unsigned int *)(a5 + 8);
  v56 = *(const __m128i **)a5;
  v57 = v26;
  v27 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v27, a3, a1, 2, 0, v25, (__int64)&ptr, v56, v57, (__int64)a4, 1, 0);
  v28 = *(unsigned int *)(a2 + 160);
  v29 = *(unsigned int *)(a2 + 164);
  src = v27;
  v30 = v28 + 1;
  v31 = v28;
  if ( v28 + 1 > v29 )
  {
    v51 = *(_QWORD *)(a2 + 152);
    v52 = a2 + 152;
    if ( v51 > (unsigned __int64)&src || (unsigned __int64)&src >= v51 + 8 * v28 )
    {
      sub_11673D0(v52, v30, a7, a8);
      v28 = *(unsigned int *)(a2 + 160);
      v32 = *(_QWORD *)(a2 + 152);
      v31 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v52, v30, a7, a8);
      v32 = *(_QWORD *)(a2 + 152);
      v28 = *(unsigned int *)(a2 + 160);
      p_src = (void **)((char *)&src + v32 - v51);
      v31 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v32 = *(_QWORD *)(a2 + 152);
  }
  v33 = *p_src;
  *p_src = nullptr;
  *(_QWORD *)(v32 + 8 * v28) = v33;
  v34 = src;
  *(_DWORD *)(a2 + 160) = v31 + 1;
  if ( v34 )
  {
    v35 = *(void (__fastcall **)(_QWORD *))(*v34 + 8LL);
    if ( v35 == sub_10D4290 )
    {
      v36 = v34[58];
      v37 = v34[57];
      *v34 = &off_2BA8F30;
      if ( v36 != v37 )
      {
        do
        {
          if ( *(_BYTE *)(v37 + 32) && *(_QWORD *)v37 != v37 + 16 )
            operator delete(*(void **)v37);
          v37 += 40;
        }
        while ( v36 != v37 );
        v37 = v34[57];
      }
      if ( v37 )
        operator delete((void *)v37);
      v38 = (void *)v34[54];
      if ( v38 )
        operator delete(v38);
      v39 = (_QWORD *)v34[50];
      if ( v39 != v34 + 52 )
        operator delete(v39);
      v40 = (_QWORD *)v34[32];
      if ( v40 != v34 + 34 )
        free(v40);
      v41 = (void **)v34[29];
      v42 = (void **)v34[28];
      if ( v41 != v42 )
      {
        do
        {
          while ( *v42 != v42 + 2 )
          {
            operator delete(*v42);
            v42 += 4;
            if ( v41 == v42 )
            {
              v42 = (void **)v34[28];
              goto LABEL_31;
            }
          }
          v42 += 4;
        }
        while ( v41 != v42 );
        v42 = (void **)v34[28];
      }
LABEL_31:
      if ( v42 )
        operator delete(v42);
      v43 = (void *)v34[25];
      if ( v43 )
        operator delete(v43);
      v44 = (_QWORD *)v34[7];
      if ( v44 != v34 + 9 )
        free(v44);
      operator delete(v34, 0x208u);
    }
    else
    {
      v35(v34);
    }
  }
  if ( ptr != v67 )
    free(ptr);
  if ( dest != &v61.m128_u16[4] )
    operator delete(dest);
}
