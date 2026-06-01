void __fastcall sub_228B320(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9)
{
  unsigned __int64 v11; // rbp
  char *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  char v15; // r9
  char v16; // al
  unsigned __int64 v17; // rax
  bool v18; // dl
  bool v19; // si
  unsigned __int64 v20; // rcx
  char *v21; // rdi
  _BYTE *v22; // rdi
  __int64 v23; // rdx
  _BYTE *v24; // rdi
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  unsigned __int64 v27; // rdi
  size_t v28; // rdx
  size_t v29; // rax
  double v30; // [rsp+0h] [rbp-178h] BYREF
  char v31; // [rsp+Fh] [rbp-169h]
  _BYTE v32[32]; // [rsp+10h] [rbp-168h] BYREF
  __int16 v33; // [rsp+30h] [rbp-148h]
  _BYTE v34[32]; // [rsp+40h] [rbp-138h] BYREF
  __int16 v35; // [rsp+60h] [rbp-118h]
  void *src; // [rsp+70h] [rbp-108h] BYREF
  size_t n; // [rsp+78h] [rbp-100h]
  _QWORD v38[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int16 v39; // [rsp+90h] [rbp-E8h]
  void *ptr; // [rsp+A0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-D0h]
  _BYTE v42[192]; // [rsp+B8h] [rbp-C0h] BYREF

  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(char **)a1;
  v30 = a2;
  v13 = sub_2288500(v12, v11, 0);
  v14 = v13;
  if ( v11 )
  {
    v15 = v12[v13];
    ptr = v12;
    si128.m128i_i64[0] = v11;
    v16 = *v12;
    if ( v11 > 3 && v16 == 47 && v12[1] == 47 && (v16 = v12[2], v16 != 47) )
    {
      v31 = v15;
      v29 = j__strlen("/");
      v17 = sub_2246EC0((__int64 *)&ptr, (unsigned __int8 *)"/", v29, 2u);
      v15 = v31;
    }
    else
    {
      v17 = -(__int64)(v16 != 47);
    }
    v18 = v15 != 47;
    if ( !v14 )
      goto LABEL_42;
    v19 = v17 == -1;
    if ( v14 <= v17 && v17 != -1 )
      goto LABEL_9;
    v20 = v14 - 1;
    if ( v12[v14 - 1] != 47 )
      goto LABEL_9;
LABEL_29:
    if ( v20 )
    {
      if ( v20 <= v17 && !v19 || (v27 = v14 - 2, v12[v14 - 2] != 47) )
      {
LABEL_33:
        if ( v17 != v20 || !v18 )
        {
          if ( v11 > v20 )
            v11 = v20;
          goto LABEL_15;
        }
        goto LABEL_11;
      }
      while ( v27 )
      {
        if ( v27 <= v17 && !v19 || v12[v27 - 1] != 47 )
        {
          v20 = v27;
          goto LABEL_33;
        }
        --v27;
      }
    }
LABEL_42:
    if ( v17 != 0 || !v18 )
      goto LABEL_43;
    goto LABEL_11;
  }
  if ( !v13 )
    goto LABEL_43;
  v18 = 1;
  v17 = -1;
  v19 = 1;
  v20 = v14 - 1;
  if ( v12[v14 - 1] == 47 )
    goto LABEL_29;
LABEL_9:
  if ( v14 == v17 && v18 )
LABEL_11:
    v14 = v17 + 1;
  if ( v14 == -1 )
  {
LABEL_43:
    v11 = 0;
    ptr = v42;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    goto LABEL_18;
  }
  if ( v11 > v14 )
    v11 = v14;
LABEL_15:
  ptr = v42;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v11 > 0x80 )
  {
    sub_2236E10((__int64)&ptr, v42, v11, 1);
    v21 = (char *)ptr + si128.m128i_i64[0];
LABEL_17:
    memcpy(v21, v12, v11);
    v11 += si128.m128i_i64[0];
    goto LABEL_18;
  }
  if ( v11 )
  {
    v21 = v42;
    goto LABEL_17;
  }
LABEL_18:
  si128.m128i_i64[0] = v11;
  v35 = 257;
  v33 = 257;
  v39 = 257;
  sub_2288C30(&ptr, v30, (__int64)v32, (__int64)v34, (__int64)&src);
  src = v38;
  sub_2288020(&src, ptr, (__int64)ptr + si128.m128i_i64[0]);
  v22 = *(_BYTE **)a1;
  if ( src == v38 )
  {
    v28 = n;
    if ( n )
    {
      if ( n == 1 )
        *v22 = v38[0];
      else
        memcpy(v22, src, n);
      v28 = n;
      v22 = *(_BYTE **)a1;
    }
    *(_QWORD *)(a1 + 8) = v28;
    v22[v28] = 0;
    v22 = src;
  }
  else
  {
    if ( v22 == (_BYTE *)(a1 + 16) )
    {
      v30 = v38[0];
      *(_QWORD *)a1 = src;
      *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v30);
    }
    else
    {
      v30 = v38[0];
      v23 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)a1 = src;
      *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v30);
      if ( v22 )
      {
        src = v22;
        v38[0] = v23;
        goto LABEL_22;
      }
    }
    v22 = v38;
    src = v38;
  }
LABEL_22:
  n = 0;
  *v22 = 0;
  if ( src != v38 )
    operator delete(src);
  v24 = ptr;
  *(_DWORD *)(a1 + 32) = a3;
  v25 = _mm_loadu_si128((const __m128i *)&a8);
  v26 = _mm_loadu_si128((const __m128i *)&a9);
  *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)&a7);
  *(__m128i *)(a1 + 56) = v25;
  *(__m128i *)(a1 + 72) = v26;
  if ( v24 != v42 )
    free(v24);
}
