__int64 __fastcall sub_22CAE30(
        __int64 a1,
        void **a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        _BYTE *a7,
        __int64 a8,
        char a9,
        _BYTE *a10,
        __int64 a11,
        char a12,
        void *a13,
        size_t a14,
        unsigned __int8 a15)
{
  __int64 result; // rax
  size_t *v19; // rdi
  size_t v20; // rdx
  size_t v21; // rbp
  __int8 *v22; // rdi
  void *v23; // rsi
  unsigned __int64 v24; // rax
  size_t *v25; // rdi
  void *v26; // rdx
  size_t v27; // rdx
  size_t v28; // rdx
  char *v29; // rdi
  size_t v30; // rdx
  _QWORD *v31; // [rsp+0h] [rbp-1D8h] BYREF
  _QWORD *v32; // [rsp+8h] [rbp-1D0h]
  _QWORD *v33; // [rsp+10h] [rbp-1C8h]
  __int8 *v34; // [rsp+18h] [rbp-1C0h] BYREF
  void *dest; // [rsp+20h] [rbp-1B8h] BYREF
  __m128 v36; // [rsp+28h] [rbp-1B0h] BYREF
  _QWORD v37[4]; // [rsp+40h] [rbp-198h] BYREF
  __int16 v38; // [rsp+60h] [rbp-178h]
  _QWORD v39[4]; // [rsp+70h] [rbp-168h] BYREF
  __int16 v40; // [rsp+90h] [rbp-148h]
  _QWORD v41[4]; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v42; // [rsp+C0h] [rbp-118h]
  void *src; // [rsp+D0h] [rbp-108h] BYREF
  size_t n; // [rsp+D8h] [rbp-100h]
  _QWORD v45[2]; // [rsp+E0h] [rbp-F8h] BYREF
  __int16 v46; // [rsp+F0h] [rbp-E8h]
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  size_t v48[2]; // [rsp+108h] [rbp-D0h] BYREF
  _BYTE v49[192]; // [rsp+118h] [rbp-C0h] BYREF

  result = a15;
  if ( a9 )
  {
    if ( a15 )
    {
LABEL_12:
      v21 = a14;
      ptr = v49;
      *(__m128i *)v48 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( a14 > 0x80 )
      {
        sub_2236E10((__int64)&ptr, v49, a14, 1);
        v29 = (char *)ptr + v48[0];
      }
      else
      {
        if ( !a14 )
          goto LABEL_14;
        v29 = v49;
      }
      memcpy(v29, a13, a14);
      v21 = v48[0] + a14;
LABEL_14:
      v48[0] = v21;
      v41[0] = "MSVC";
      v39[0] = "Tools";
      v46 = 257;
      v37[0] = "VC";
      v42 = 259;
      v33 = v37;
      v40 = 259;
      v38 = 259;
      v32 = v41;
      v31 = v39;
      sub_228A3B0(&ptr, v37, v39, v41, &src);
      v36.m128_i8[8] = 0;
      dest = &v36.m128_u16[4];
      v36.m128_u64[0] = 0;
      if ( a12 )
      {
        if ( !a10 )
        {
          LOBYTE(v45[0]) = 0;
          v22 = &v36.m128_i8[8];
          src = v45;
          v28 = 0;
LABEL_45:
          v36.m128_u64[0] = v28;
          v22[v28] = 0;
          v22 = (__int8 *)src;
          goto LABEL_20;
        }
        v34 = &v36.m128_i8[8];
        src = v45;
        sub_22C9310(&src, a10, (__int64)&a10[a11]);
        v22 = (__int8 *)dest;
        v23 = src;
        if ( src != v45 )
        {
LABEL_17:
          if ( v22 == (__int8 *)&v36.m128_u16[4] )
          {
            v34 = (__int8 *)v45[0];
            dest = v23;
            v36 = _mm_loadh_ps((const double *)&v34);
          }
          else
          {
            v34 = (__int8 *)v45[0];
            v24 = v36.m128_u64[1];
            dest = v23;
            v36 = _mm_loadh_ps((const double *)&v34);
            if ( v22 )
            {
              src = v22;
              v45[0] = v24;
              goto LABEL_20;
            }
          }
          v22 = (__int8 *)v45;
          src = v45;
LABEL_20:
          n = 0;
          *v22 = 0;
          if ( src != v45 )
            operator delete(src);
          v37[0] = &dest;
          v42 = 257;
          v40 = 257;
          v38 = 260;
          v46 = 257;
          sub_228A3B0(&ptr, v33, v31, v32, &src);
          src = v45;
          sub_22C9310(&src, ptr, (__int64)ptr + v48[0]);
          v25 = (size_t *)*a2;
          if ( src == v45 )
          {
            v30 = n;
            if ( n )
            {
              if ( n == 1 )
                *(_BYTE *)v25 = v45[0];
              else
                memcpy(v25, src, n);
              v30 = n;
              v25 = (size_t *)*a2;
            }
            a2[1] = (void *)v30;
            *((_BYTE *)v25 + v30) = 0;
            v25 = (size_t *)src;
            goto LABEL_26;
          }
          if ( v25 == (size_t *)(a2 + 2) )
          {
            v31 = (_QWORD *)v45[0];
            *a2 = src;
            *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v31);
          }
          else
          {
            v31 = (_QWORD *)v45[0];
            v26 = a2[2];
            *a2 = src;
            *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v31);
            if ( v25 )
            {
              src = v25;
              v45[0] = v26;
LABEL_26:
              n = 0;
              *(_BYTE *)v25 = 0;
              if ( src != v45 )
                operator delete(src);
              if ( dest != &v36.m128_u16[4] )
                operator delete(dest);
              if ( ptr != v49 )
                free(ptr);
LABEL_32:
              *a3 = 1;
              return 1;
            }
          }
          v25 = v45;
          src = v45;
          goto LABEL_26;
        }
      }
      else
      {
        v34 = &v36.m128_i8[8];
        sub_22C93D0((__int64)&src, a1, ptr, (void *)v48[0]);
        v22 = (__int8 *)dest;
        v23 = src;
        if ( src != v45 )
          goto LABEL_17;
      }
      v28 = n;
      if ( n )
      {
        if ( n == 1 )
          *v22 = v45[0];
        else
          memcpy(v22, v23, n);
        v28 = n;
        v22 = (__int8 *)dest;
      }
      goto LABEL_45;
    }
    if ( a7 )
    {
      ptr = &v48[1];
      sub_22C9310(&ptr, a7, (__int64)&a7[a8]);
      v19 = (size_t *)*a2;
      if ( ptr != &v48[1] )
      {
        if ( v19 == (size_t *)(a2 + 2) )
        {
          v31 = (_QWORD *)v48[1];
          *a2 = ptr;
          *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v31);
        }
        else
        {
          v31 = (_QWORD *)v48[1];
          v20 = (size_t)a2[2];
          *a2 = ptr;
          *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v31);
          if ( v19 )
          {
            ptr = v19;
            v48[1] = v20;
            goto LABEL_10;
          }
        }
        v19 = &v48[1];
        ptr = &v48[1];
LABEL_10:
        v48[0] = 0;
        *(_BYTE *)v19 = 0;
        if ( ptr != &v48[1] )
          operator delete(ptr);
        goto LABEL_32;
      }
      v27 = v48[0];
      if ( v48[0] )
      {
        if ( v48[0] == 1 )
          *(_BYTE *)v19 = v48[1];
        else
          memcpy(v19, ptr, v48[0]);
        v27 = v48[0];
        v19 = (size_t *)*a2;
      }
    }
    else
    {
      LOBYTE(v48[1]) = 0;
      v19 = (size_t *)*a2;
      v27 = 0;
      ptr = &v48[1];
    }
    a2[1] = (void *)v27;
    *((_BYTE *)v19 + v27) = 0;
    v19 = (size_t *)ptr;
    goto LABEL_10;
  }
  if ( a15 )
    goto LABEL_12;
  return result;
}
