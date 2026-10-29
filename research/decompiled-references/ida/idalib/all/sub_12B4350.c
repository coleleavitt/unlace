void __fastcall sub_12B4350(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        const __m128i *a5,
        __int64 a6,
        __m128 a7,
        __m128i a8)
{
  int v10; // edx
  char *v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  void **p_src; // rbx
  size_t v17; // r10
  __int8 *v18; // r9
  size_t v19; // r11
  __m128i *p_dest; // rax
  __m128i *v21; // rcx
  void *v22; // rcx
  __int64 v23; // rax
  void *v24; // r15
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rcx
  void *v30; // rsi
  _QWORD *v31; // rbx
  void (__fastcall *v32)(_QWORD *); // rax
  __int64 v33; // r14
  __int64 v34; // r13
  void *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  void **v38; // r14
  void **v39; // r13
  void *v40; // rdi
  _QWORD *v41; // rdi
  _BYTE *v42; // rdi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r14
  __int64 v46; // rdi
  size_t v47; // rdx
  size_t v50; // [rsp+20h] [rbp-158h] BYREF
  void **v51; // [rsp+28h] [rbp-150h]
  const __m128i *v52; // [rsp+30h] [rbp-148h]
  __int64 v53; // [rsp+38h] [rbp-140h]
  void *v54[2]; // [rsp+40h] [rbp-138h] BYREF
  __m128 v55; // [rsp+50h] [rbp-128h] BYREF
  void *dest; // [rsp+60h] [rbp-118h] BYREF
  __m128 v57; // [rsp+68h] [rbp-110h] BYREF
  char v58; // [rsp+78h] [rbp-100h]
  char v59[7]; // [rsp+79h] [rbp-FFh] BYREF
  void *src; // [rsp+80h] [rbp-F8h] BYREF
  size_t n; // [rsp+88h] [rbp-F0h]
  _QWORD v62[2]; // [rsp+90h] [rbp-E8h] BYREF
  __int16 v63; // [rsp+A0h] [rbp-D8h]
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-C0h]
  _BYTE v66[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v10 = *(_DWORD *)(a6 + 8);
  v11 = v66;
  ptr = v66;
  v65 = 0x1000000000LL;
  if ( v10 )
  {
    sub_10DED70(&ptr, (char **)a6);
    v12 = a5->m128i_i64[0];
    v44 = (unsigned int)v65 + 1LL;
    if ( v44 > HIDWORD(v65) )
      sub_2237220(&ptr, v66, v44, 8);
    v11 = (char *)ptr + 8 * (unsigned int)v65;
  }
  else
  {
    v12 = a5->m128i_i64[0];
  }
  *(_QWORD *)v11 = v12;
  v13 = *a4;
  LODWORD(v65) = v65 + 1;
  v14 = (unsigned int)v65;
  if ( (unsigned __int64)(unsigned int)v65 + 2 > HIDWORD(v65) )
  {
    sub_2237220(&ptr, v66, (unsigned int)v65 + 2LL, 8);
    v14 = (unsigned int)v65;
  }
  v15 = ptr;
  *((_QWORD *)ptr + v14) = "-o";
  v15[v14 + 1] = v13;
  p_src = &src;
  LODWORD(v65) = v65 + 2;
  sub_D8B070(
    &src,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%d",
    21);
  v17 = n;
  v18 = &v57.m128_i8[8];
  dest = &v57.m128_u16[4];
  v19 = n + 9;
  v57.m128_u64[1] = 0x73612D7672697073LL;
  v58 = 45;
  v57.m128_u64[0] = 9;
  v59[0] = 0;
  if ( n + 9 <= 0xF )
  {
    if ( n )
    {
      if ( n == 1 )
      {
        v59[0] = *(_BYTE *)src;
      }
      else
      {
        v52 = (const __m128i *)&v57.m128_u16[4];
        v51 = (void **)(n + 9);
        v50 = n;
        memcpy(v59, src, n);
        v18 = &v57.m128_i8[8];
        v19 = (size_t)v51;
        v17 = v50;
      }
    }
    goto LABEL_9;
  }
  if ( src == v62 || v19 > v62[0] )
  {
    v51 = (void **)(n + 9);
    v50 = n;
    sub_998B30((__int64)&dest, 9u, 0, src, n);
    v18 = (__int8 *)dest;
    v17 = v50;
    v19 = (size_t)v51;
LABEL_9:
    v57.m128_u64[0] = v19;
    p_dest = (__m128i *)&dest;
    v18[v17 + 9] = 0;
    goto LABEL_10;
  }
  p_dest = (__m128i *)sub_99BDC0(&src, 0, 0, &v57.m128_i8[8], 9u);
LABEL_10:
  v54[0] = &v55;
  v21 = (__m128i *)p_dest->m128i_i64[0];
  v51 = v54;
  if ( v21 == &p_dest[1] )
  {
    a8 = _mm_loadu_si128(p_dest + 1);
    v55 = (__m128)a8;
  }
  else
  {
    v54[0] = v21;
    v55.m128_u64[0] = p_dest[1].m128i_u64[0];
  }
  v22 = (void *)p_dest->m128i_i64[1];
  p_dest[1].m128i_i8[0] = 0;
  v54[1] = v22;
  p_dest->m128i_i64[0] = (__int64)p_dest[1].m128i_i64;
  p_dest->m128i_i64[1] = 0;
  if ( dest != &v57.m128_u16[4] )
    operator delete(dest);
  if ( src != v62 )
    operator delete(src);
  sub_112D530(&dest, *(_QWORD *)(a2 + 24), (char *)v54[0]);
  src = &dest;
  v63 = 260;
  if ( !(unsigned __int8)sub_228C2C0(&src) )
  {
    sub_112D530(&src, *(_QWORD *)(a2 + 24), "spirv-as");
    v42 = dest;
    if ( src == v62 )
    {
      v47 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v62[0];
        else
          memcpy(dest, src, n);
        v47 = n;
        v42 = dest;
      }
      v57.m128_u64[0] = v47;
      v42[v47] = 0;
      v42 = src;
      goto LABEL_63;
    }
    if ( dest == &v57.m128_u16[4] )
    {
      v50 = v62[0];
      dest = src;
      a7 = _mm_loadh_ps((const double *)&v50);
      v57 = a7;
    }
    else
    {
      v50 = v62[0];
      v43 = v57.m128_u64[1];
      dest = src;
      a7 = _mm_loadh_ps((const double *)&v50);
      v57 = a7;
      if ( v42 )
      {
        src = v42;
        v62[0] = v43;
        goto LABEL_63;
      }
    }
    v42 = v62;
    src = v62;
LABEL_63:
    n = 0;
    *v42 = 0;
    if ( src != v62 )
      operator delete(src);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, void *, unsigned __int64))(**(_QWORD **)(a1 + 80) + 16LL))(
          *(_QWORD *)(a1 + 80),
          dest,
          v57.m128_u64[0]);
  v52 = a5;
  v53 = 1;
  v50 = v23;
  v24 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v24, a3, a2, 2, 0, v50, (__int64)&ptr, v52, v53, (__int64)a4, 1, 0);
  v25 = *(unsigned int *)(a1 + 160);
  v26 = *(unsigned int *)(a1 + 164);
  src = v24;
  v27 = v25 + 1;
  v28 = v25;
  if ( v25 + 1 > v26 )
  {
    v45 = *(_QWORD *)(a1 + 152);
    v46 = a1 + 152;
    if ( v45 > (unsigned __int64)&src || (unsigned __int64)&src >= v45 + 8 * v25 )
    {
      sub_11673D0(v46, v27, a7, *(double *)a8.m128i_i64);
      v25 = *(unsigned int *)(a1 + 160);
      v29 = *(_QWORD *)(a1 + 152);
      v28 = *(_DWORD *)(a1 + 160);
    }
    else
    {
      sub_11673D0(v46, v27, a7, *(double *)a8.m128i_i64);
      v29 = *(_QWORD *)(a1 + 152);
      v25 = *(unsigned int *)(a1 + 160);
      p_src = (void **)((char *)&src + v29 - v45);
      v28 = *(_DWORD *)(a1 + 160);
    }
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 152);
  }
  v30 = *p_src;
  *p_src = nullptr;
  *(_QWORD *)(v29 + 8 * v25) = v30;
  v31 = src;
  *(_DWORD *)(a1 + 160) = v28 + 1;
  if ( v31 )
  {
    v32 = *(void (__fastcall **)(_QWORD *))(*v31 + 8LL);
    if ( v32 == sub_10D4290 )
    {
      v33 = v31[58];
      v34 = v31[57];
      *v31 = &off_2BA8F30;
      if ( v33 != v34 )
      {
        do
        {
          if ( *(_BYTE *)(v34 + 32) && *(_QWORD *)v34 != v34 + 16 )
            operator delete(*(void **)v34);
          v34 += 40;
        }
        while ( v33 != v34 );
        v34 = v31[57];
      }
      if ( v34 )
        operator delete((void *)v34);
      v35 = (void *)v31[54];
      if ( v35 )
        operator delete(v35);
      v36 = (_QWORD *)v31[50];
      if ( v36 != v31 + 52 )
        operator delete(v36);
      v37 = (_QWORD *)v31[32];
      if ( v37 != v31 + 34 )
        free(v37);
      v38 = (void **)v31[29];
      v39 = (void **)v31[28];
      if ( v38 != v39 )
      {
        do
        {
          while ( *v39 != v39 + 2 )
          {
            operator delete(*v39);
            v39 += 4;
            if ( v38 == v39 )
            {
              v39 = (void **)v31[28];
              goto LABEL_39;
            }
          }
          v39 += 4;
        }
        while ( v38 != v39 );
        v39 = (void **)v31[28];
      }
LABEL_39:
      if ( v39 )
        operator delete(v39);
      v40 = (void *)v31[25];
      if ( v40 )
        operator delete(v40);
      v41 = (_QWORD *)v31[7];
      if ( v41 != v31 + 9 )
        free(v41);
      operator delete(v31, 0x208u);
    }
    else
    {
      v32(v31);
    }
  }
  if ( dest != &v57.m128_u16[4] )
    operator delete(dest);
  if ( v54[0] != v51 + 2 )
    operator delete(v54[0]);
  if ( ptr != v66 )
    free(ptr);
}
