__int64 __fastcall sub_22C98D0(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        char a4,
        _BYTE *a5,
        __int64 a6,
        char a7,
        void *src,
        size_t a9,
        unsigned __int8 a10,
        void **a11,
        _DWORD *a12,
        __int64 a13)
{
  __int64 result; // rax
  size_t *v16; // rdi
  void *v17; // rdx
  size_t *v18; // rdi
  size_t v19; // rdx
  size_t *v20; // r14
  size_t *v21; // r15
  unsigned __int64 v22; // r12
  size_t *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rbp
  size_t *v26; // rdi
  size_t v27; // rdx
  size_t v28; // rdx
  size_t v29; // rdx
  char *v30; // rdi
  size_t v31; // rdx
  char *v32; // rdi
  size_t v33; // rdx
  void **v34; // [rsp+8h] [rbp-1E0h] BYREF
  _BYTE *v35; // [rsp+10h] [rbp-1D8h]
  void **v36; // [rsp+18h] [rbp-1D0h]
  __int128 v37; // [rsp+20h] [rbp-1C8h] BYREF
  void *v38[2]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-1A8h] BYREF
  _QWORD v40[4]; // [rsp+50h] [rbp-198h] BYREF
  __int16 v41; // [rsp+70h] [rbp-178h]
  _BYTE v42[32]; // [rsp+80h] [rbp-168h] BYREF
  __int16 v43; // [rsp+A0h] [rbp-148h]
  _BYTE v44[32]; // [rsp+B0h] [rbp-138h] BYREF
  __int16 v45; // [rsp+D0h] [rbp-118h]
  void *v46; // [rsp+E0h] [rbp-108h] BYREF
  size_t v47; // [rsp+E8h] [rbp-100h]
  _QWORD v48[2]; // [rsp+F0h] [rbp-F8h] BYREF
  __int16 v49; // [rsp+100h] [rbp-E8h]
  void *ptr; // [rsp+110h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+118h] [rbp-D0h] BYREF
  _BYTE v52[192]; // [rsp+128h] [rbp-C0h] BYREF

  if ( a4 )
  {
    v37 = 0;
    if ( !a7 )
      goto LABEL_18;
  }
  else
  {
    result = a10;
    if ( !a10 )
      return result;
    v37 = 0;
    if ( !a7 )
    {
LABEL_4:
      ptr = v52;
      *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( a9 > 0x80 )
      {
        sub_2236E10((__int64)&ptr, v52, a9, 1);
        v30 = (char *)ptr + n[0];
      }
      else
      {
        if ( !a9 )
          goto LABEL_6;
        v30 = v52;
      }
      memcpy(v30, src, a9);
      a9 += n[0];
LABEL_6:
      v43 = 257;
      n[0] = a9;
      v49 = 257;
      v45 = 257;
      v41 = 259;
      v40[0] = "Windows Kits";
      v35 = v44;
      v34 = (void **)v42;
      sub_228A3B0(&ptr, v40, v42, v44, &v46);
      if ( (unsigned int)v37 | HIDWORD(v37) & 0x7FFFFFFF | (DWORD2(v37) | DWORD1(v37)) & 0x7FFFFFFF )
      {
        LODWORD(v40[0]) = v37;
        v49 = 257;
        v45 = 257;
        v43 = 257;
        v41 = 265;
        sub_228A3B0(&ptr, v40, v34, v35, &v46);
      }
      else
      {
        v36 = v34;
        v49 = 257;
        v45 = 257;
        v43 = 257;
        v34 = v38;
        sub_22C93D0((__int64)v38, a1, ptr, (void *)n[0]);
        v41 = 260;
        v40[0] = v38;
        sub_228A3B0(&ptr, v40, v36, v35, &v46);
        if ( v38[0] != &v39 )
          operator delete(v38[0]);
      }
      v46 = v48;
      sub_22C9310(&v46, ptr, (__int64)ptr + n[0]);
      v16 = (size_t *)*a11;
      if ( v46 == v48 )
      {
        v31 = v47;
        if ( v47 )
        {
          if ( v47 == 1 )
            *(_BYTE *)v16 = v48[0];
          else
            memcpy(v16, v46, v47);
          v31 = v47;
          v16 = (size_t *)*a11;
        }
        a11[1] = (void *)v31;
        *((_BYTE *)v16 + v31) = 0;
        v16 = (size_t *)v46;
        goto LABEL_13;
      }
      if ( v16 == (size_t *)(a11 + 2) )
      {
        v34 = (void **)v48[0];
        *a11 = v46;
        *(__m128 *)(a11 + 1) = _mm_loadh_ps((const double *)&v34);
      }
      else
      {
        v34 = (void **)v48[0];
        v17 = a11[2];
        *a11 = v46;
        *(__m128 *)(a11 + 1) = _mm_loadh_ps((const double *)&v34);
        if ( v16 )
        {
          v46 = v16;
          v48[0] = v17;
LABEL_13:
          v47 = 0;
          *(_BYTE *)v16 = 0;
          if ( v46 != v48 )
            operator delete(v46);
          if ( ptr != v52 )
            free(ptr);
          goto LABEL_26;
        }
      }
      v16 = v48;
      v46 = v48;
      goto LABEL_13;
    }
  }
  sub_22578D0((__int64)&v37, a5, a6);
LABEL_18:
  if ( a10 )
    goto LABEL_4;
  ptr = &n[1];
  if ( !a2 )
  {
    LOBYTE(n[1]) = 0;
    v18 = (size_t *)*a11;
    v28 = 0;
LABEL_50:
    a11[1] = (void *)v28;
    *((_BYTE *)v18 + v28) = 0;
    v18 = (size_t *)ptr;
    goto LABEL_24;
  }
  v34 = (void **)&n[1];
  sub_22C9310(&ptr, a2, (__int64)&a2[a3]);
  v18 = (size_t *)*a11;
  if ( ptr == &n[1] )
  {
    v28 = n[0];
    if ( n[0] )
    {
      if ( n[0] == 1 )
        *(_BYTE *)v18 = n[1];
      else
        memcpy(v18, ptr, n[0]);
      v28 = n[0];
      v18 = (size_t *)*a11;
    }
    goto LABEL_50;
  }
  if ( v18 == (size_t *)(a11 + 2) )
  {
    v34 = (void **)n[1];
    *a11 = ptr;
    *(__m128 *)(a11 + 1) = _mm_loadh_ps((const double *)&v34);
  }
  else
  {
    v34 = (void **)n[1];
    v19 = (size_t)a11[2];
    *a11 = ptr;
    *(__m128 *)(a11 + 1) = _mm_loadh_ps((const double *)&v34);
    if ( v18 )
    {
      ptr = v18;
      n[1] = v19;
      goto LABEL_24;
    }
  }
  v18 = &n[1];
  ptr = &n[1];
LABEL_24:
  n[0] = 0;
  *(_BYTE *)v18 = 0;
  if ( ptr != &n[1] )
    operator delete(ptr);
LABEL_26:
  v20 = (size_t *)(a13 + 16);
  if ( (unsigned int)v37 | HIDWORD(v37) & 0x7FFFFFFF | (DWORD2(v37) | DWORD1(v37)) & 0x7FFFFFFF )
  {
    *a12 = v37;
    sub_2257830((__int64)&ptr, (char *)&v37);
    v26 = *(size_t **)a13;
    if ( ptr == &n[1] )
    {
      v29 = n[0];
      if ( n[0] )
      {
        if ( n[0] == 1 )
          *(_BYTE *)v26 = n[1];
        else
          memcpy(v26, ptr, n[0]);
        v29 = n[0];
        v26 = *(size_t **)a13;
      }
      *(_QWORD *)(a13 + 8) = v29;
      *((_BYTE *)v26 + v29) = 0;
      v26 = (size_t *)ptr;
      goto LABEL_46;
    }
    if ( v26 == v20 )
    {
      v34 = (void **)n[1];
      *(_QWORD *)a13 = ptr;
      *(__m128 *)(a13 + 8) = _mm_loadh_ps((const double *)&v34);
    }
    else
    {
      v34 = (void **)n[1];
      v27 = *(_QWORD *)(a13 + 16);
      *(_QWORD *)a13 = ptr;
      *(__m128 *)(a13 + 8) = _mm_loadh_ps((const double *)&v34);
      if ( v26 )
      {
        ptr = v26;
        n[1] = v27;
        goto LABEL_46;
      }
    }
    v26 = &n[1];
    ptr = &n[1];
LABEL_46:
    n[0] = 0;
    *(_BYTE *)v26 = 0;
    if ( ptr != &n[1] )
      operator delete(ptr);
    return 1;
  }
  v21 = (size_t *)*a11;
  v22 = (unsigned __int64)a11[1];
  ptr = v52;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v22 > 0x80 )
  {
    sub_2236E10((__int64)&ptr, v52, v22, 1);
    v32 = (char *)ptr + n[0];
  }
  else
  {
    if ( !v22 )
      goto LABEL_29;
    v32 = v52;
  }
  memcpy(v32, v21, v22);
  v22 += n[0];
LABEL_29:
  v49 = 257;
  v45 = 257;
  v43 = 257;
  v41 = 259;
  v40[0] = "Include";
  n[0] = v22;
  sub_228A3B0(&ptr, v40, v42, v44, &v46);
  sub_22C93D0((__int64)&v46, a1, ptr, (void *)n[0]);
  v23 = *(size_t **)a13;
  if ( v46 == v48 )
  {
    v33 = v47;
    if ( v47 )
    {
      if ( v47 == 1 )
        *(_BYTE *)v23 = v48[0];
      else
        memcpy(v23, v46, v47);
      v33 = v47;
      v23 = *(size_t **)a13;
    }
    *(_QWORD *)(a13 + 8) = v33;
    *((_BYTE *)v23 + v33) = 0;
    v23 = (size_t *)v46;
    goto LABEL_33;
  }
  if ( v23 == v20 )
  {
    v34 = (void **)v48[0];
    *(_QWORD *)a13 = v46;
    *(__m128 *)(a13 + 8) = _mm_loadh_ps((const double *)&v34);
    goto LABEL_79;
  }
  v34 = (void **)v48[0];
  v24 = *(_QWORD *)(a13 + 16);
  *(_QWORD *)a13 = v46;
  *(__m128 *)(a13 + 8) = _mm_loadh_ps((const double *)&v34);
  if ( !v23 )
  {
LABEL_79:
    v23 = v48;
    v46 = v48;
    goto LABEL_33;
  }
  v46 = v23;
  v48[0] = v24;
LABEL_33:
  v47 = 0;
  *(_BYTE *)v23 = 0;
  if ( v46 != v48 )
    operator delete(v46);
  v25 = *(_QWORD *)(a13 + 8);
  if ( ptr != v52 )
    free(ptr);
  if ( v25 )
    *a12 = 10;
  return 1;
}
