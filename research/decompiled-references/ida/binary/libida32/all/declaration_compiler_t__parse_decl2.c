__int64 __fastcall declaration_compiler_t__parse_decl2(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  size_t v16; // rcx
  __int64 v17; // r13
  void **v18; // r8
  void **v19; // rax
  void **v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  size_t v23; // r10
  void *v24; // r13
  void *v25; // rax
  unsigned __int64 v26; // r9
  size_t v27; // r10
  const void *v28; // r13
  void *v29; // rax
  __int64 v30; // rdx
  void *v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  void *v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __int64 tinfo_property; // rax
  void **v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r13
  unsigned __int64 v45; // r14
  unsigned __int64 v46; // r14
  void *v47; // rax
  void *v48; // rax
  void *v49; // rax
  size_t nb; // [rsp+8h] [rbp-90h]
  size_t nd; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+8h] [rbp-90h]
  size_t na; // [rsp+8h] [rbp-90h]
  size_t nc; // [rsp+8h] [rbp-90h]
  void **srce; // [rsp+10h] [rbp-88h]
  void *src; // [rsp+10h] [rbp-88h]
  void *srca; // [rsp+10h] [rbp-88h]
  void *srcd; // [rsp+10h] [rbp-88h]
  void *srcf; // [rsp+10h] [rbp-88h]
  void *srcb; // [rsp+10h] [rbp-88h]
  void *srcc; // [rsp+10h] [rbp-88h]
  void **v62; // [rsp+18h] [rbp-80h]
  void **v63; // [rsp+18h] [rbp-80h]
  void **v64; // [rsp+18h] [rbp-80h]
  void *dest; // [rsp+20h] [rbp-78h] BYREF
  __m128i v66; // [rsp+28h] [rbp-70h] BYREF
  void *ptr; // [rsp+38h] [rbp-60h] BYREF
  __m128i v68; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v69[9]; // [rsp+50h] [rbp-48h] BYREF

  v10 = a1[4];
  v69[1] = __readfsqword(0x28u);
  sub_6E3C70(v10);
  v11 = a1[1];
  v12 = v11 + (a1[2] << 6);
  if ( v12 != v11 )
  {
    v13 = a1[1];
    do
    {
      if ( !*(_BYTE *)(v13 + 56) )
        goto LABEL_7;
      v13 += 64;
    }
    while ( v12 != v13 );
  }
  v16 = a1[4];
  v17 = *(_QWORD *)(v16 + 400);
  if ( (a7 & 0xC) != 0 )
  {
    v18 = *(void ***)(v16 + 392);
    dest = nullptr;
    ptr = nullptr;
    v69[0] = 0;
    v19 = v18;
    v66 = 0;
    v68 = 0;
    if ( (a7 & 4) == 0 )
      goto LABEL_11;
  }
  else
  {
    a7 |= 0xCu;
    v19 = *(void ***)(v16 + 392);
    dest = nullptr;
    ptr = nullptr;
    v69[0] = 0;
    v66 = 0;
    v68 = 0;
  }
  if ( !v17 )
  {
    v18 = v19;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v38 = &v19[8 * --v17];
    if ( !*((_DWORD *)v38 + 14) )
      break;
    if ( !v17 )
      goto LABEL_51;
LABEL_48:
    v19 = *(void ***)(v16 + 392);
  }
  n = v16;
  tinfo_property = get_tinfo_property(v38[6], 5);
  v16 = n;
  if ( tinfo_property )
  {
    if ( !v17 )
      goto LABEL_51;
    goto LABEL_48;
  }
  v43 = *(_QWORD *)(n + 392) + (v17 << 6);
  v44 = v43;
  if ( (void **)v43 != &dest )
  {
    v45 = *(_QWORD *)(v43 + 8);
    if ( v45 > 1 )
    {
      src = *(void **)v44;
      v47 = dest;
      if ( v66.m128i_i64[1] < v45 )
      {
        v47 = (void *)qvector_reserve(&dest, dest, v45, 1);
        dest = v47;
      }
      v66.m128i_i64[0] = v45;
      memmove(v47, src, v45 - 1);
      *((char *)dest + v45 - 1) = 0;
    }
    else
    {
      v66.m128i_i64[0] = 0;
    }
  }
  if ( &ptr != (void **)(v44 + 24) )
  {
    v46 = *(_QWORD *)(v44 + 32);
    if ( v46 > 1 )
    {
      srca = *(void **)(v44 + 24);
      v48 = ptr;
      if ( v68.m128i_i64[1] < v46 )
      {
        v48 = (void *)qvector_reserve(&ptr, ptr, v46, 1);
        ptr = v48;
      }
      v68.m128i_i64[0] = v46;
      memmove(v48, srca, v46 - 1);
      *((char *)ptr + v46 - 1) = 0;
    }
    else
    {
      v68.m128i_i64[0] = 0;
    }
  }
  copy_tinfo_t(v69);
LABEL_51:
  v21 = v69[0];
  if ( LOBYTE(v69[0]) )
    goto LABEL_31;
  v39 = a1[4];
  v17 = *(_QWORD *)(v39 + 400);
  v18 = *(void ***)(v39 + 392);
  if ( v17 == 1 && *((_DWORD *)v18 + 14) == 2 )
  {
    if ( v18 != &dest )
    {
      v40 = (unsigned __int64)v18[1];
      if ( v40 > 1 )
      {
        srcb = *v18;
        if ( v66.m128i_i64[1] < v40 )
        {
          v64 = *(void ***)(v39 + 392);
          v49 = (void *)qvector_reserve(&dest, dest, v40, 1);
          v18 = v64;
          dest = v49;
        }
        v63 = v18;
        v66.m128i_i64[0] = v40;
        memmove(dest, srcb, v40 - 1);
        v18 = v63;
        *((char *)dest + v40 - 1) = 0;
      }
      else
      {
        v66.m128i_i64[0] = 0;
      }
    }
    if ( &ptr != v18 + 3 )
    {
      v41 = (unsigned __int64)v18[4];
      if ( v41 > 1 )
      {
        srcc = v18[3];
        if ( v68.m128i_i64[1] < v41 )
          ptr = (void *)qvector_reserve(&ptr, ptr, v41, 1);
        v68.m128i_i64[0] = v41;
        memmove(ptr, srcc, v41 - 1);
        *((char *)ptr + v41 - 1) = 0;
      }
      else
      {
        v68.m128i_i64[0] = 0;
      }
    }
    copy_tinfo_t(v69);
    v21 = v69[0];
    if ( !LOBYTE(v69[0]) )
    {
      v42 = a1[4];
      v18 = *(void ***)(v42 + 392);
      v17 = *(_QWORD *)(v42 + 400);
      goto LABEL_11;
    }
LABEL_31:
    if ( a2 )
    {
      v30 = *a2;
      *a2 = v21;
      v69[0] = v30;
    }
    if ( a3 )
    {
      v31 = *(void **)a3;
      v32 = _mm_loadu_si128((const __m128i *)(a3 + 8));
      v33 = _mm_loadu_si128(&v66);
      *(_QWORD *)a3 = dest;
      dest = v31;
      *(__m128i *)(a3 + 8) = v33;
      v66 = v32;
    }
    if ( a4 )
    {
      v34 = *(void **)a4;
      v35 = _mm_loadu_si128((const __m128i *)(a4 + 8));
      v36 = _mm_load_si128(&v68);
      *(_QWORD *)a4 = ptr;
      ptr = v34;
      *(__m128i *)(a4 + 8) = v36;
      v68 = v35;
    }
    clear_tinfo_t(v69);
    if ( ptr )
    {
      v68.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( dest )
    {
      v66.m128i_i64[0] = 0;
      qfree(dest);
    }
    v11 = a1[1];
    v12 = v11 + (a1[2] << 6);
    if ( v11 == v12 )
    {
      return 1;
    }
    else
    {
LABEL_7:
      while ( 1 )
      {
        v14 = *(unsigned __int8 *)(v11 + 56);
        if ( !(_BYTE)v14 )
          break;
        v11 += 64;
        if ( v12 == v11 )
          return 1;
      }
    }
  }
  else
  {
LABEL_11:
    v20 = &v18[8 * v17];
    if ( v20 == v18 )
    {
      v21 = v69[0];
    }
    else
    {
      while ( *((_DWORD *)v18 + 14) != 1 )
      {
        v18 += 8;
        if ( v20 == v18 )
          goto LABEL_28;
      }
      if ( v18 != &dest )
      {
        v22 = (unsigned __int64)v18[1];
        if ( !v22 || (v23 = v22 - 1, v22 == 1) )
        {
          v66.m128i_i64[0] = 0;
        }
        else
        {
          v24 = *v18;
          v25 = dest;
          if ( v66.m128i_i64[1] < v22 )
          {
            v62 = v18;
            srcd = (void *)(v22 - 1);
            na = (size_t)v18[1];
            v25 = (void *)qvector_reserve(&dest, dest, na, 1);
            v18 = v62;
            v23 = (size_t)srcd;
            dest = v25;
            v22 = na;
          }
          srce = v18;
          v66.m128i_i64[0] = v22;
          nb = v22;
          memmove(v25, v24, v23);
          v18 = srce;
          *((char *)dest + nb - 1) = 0;
        }
      }
      if ( &ptr != v18 + 3 )
      {
        v26 = (unsigned __int64)v18[4];
        if ( !v26 || (v27 = v26 - 1, v26 == 1) )
        {
          v68.m128i_i64[0] = 0;
        }
        else
        {
          v28 = v18[3];
          v29 = ptr;
          if ( v68.m128i_i64[1] < v26 )
          {
            srcf = (void *)(v26 - 1);
            nc = (size_t)v18[4];
            v29 = (void *)qvector_reserve(&ptr, ptr, nc, 1);
            v27 = (size_t)srcf;
            ptr = v29;
            v26 = nc;
          }
          v68.m128i_i64[0] = v26;
          nd = v26;
          memmove(v29, v28, v27);
          *((char *)ptr + nd - 1) = 0;
        }
      }
      copy_tinfo_t(v69);
LABEL_28:
      v21 = v69[0];
      if ( LOBYTE(v69[0]) )
        goto LABEL_31;
    }
    if ( (a7 & 0x2000) == 0 )
    {
      if ( (a7 & 1) == 0 )
        sub_375400();
      goto LABEL_31;
    }
    v14 = 0;
    clear_tinfo_t(v69);
    if ( ptr )
    {
      v68.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( dest )
    {
      v66.m128i_i64[0] = 0;
      qfree(dest);
    }
  }
  return v14;
}

