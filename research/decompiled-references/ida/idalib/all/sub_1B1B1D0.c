unsigned __int64 __fastcall sub_1B1B1D0(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        int a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        int a14)
{
  __int64 v19; // rax
  unsigned __int64 result; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm7
  int v23; // edx
  __m128i v24; // xmm6
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  _BYTE *v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 *v30; // r15
  __int64 v31; // r12
  __int64 v32; // rbp
  unsigned int *v33; // rax
  _BYTE *v34; // rdi
  unsigned __int64 v35; // rdx
  size_t v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  size_t v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // r8d
  unsigned int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  _QWORD *v49; // r14
  size_t v50; // rax
  __int64 v51; // r14
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rbp
  __int64 v58; // [rsp+0h] [rbp-138h] BYREF
  __m128i *v59; // [rsp+8h] [rbp-130h]
  void **p_src; // [rsp+10h] [rbp-128h]
  unsigned int v61; // [rsp+1Ch] [rbp-11Ch]
  int v62; // [rsp+2Ch] [rbp-10Ch] BYREF
  void *dest; // [rsp+30h] [rbp-108h] BYREF
  __m128 v64; // [rsp+38h] [rbp-100h] BYREF
  void *v65; // [rsp+50h] [rbp-E8h] BYREF
  char v66; // [rsp+5Ch] [rbp-DCh]
  char v67; // [rsp+60h] [rbp-D8h]
  void *src; // [rsp+70h] [rbp-C8h] BYREF
  size_t n; // [rsp+78h] [rbp-C0h]
  _QWORD v70[2]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned __int8 *v71; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v72[160]; // [rsp+98h] [rbp-A0h] BYREF

  if ( (unsigned __int8)sub_1B09E00(*a1, a2, a3, a10) || (unsigned __int8)sub_1B09E00(*a1, a3, a2, a11) )
    return 0;
  if ( (a2 != a3 || a2 == 5) && (a2 != 6 || a3 != 7) && (a3 != 6 || a2 != 7) )
  {
    if ( a4 != 5 )
    {
      LOBYTE(v59) = a2 == 7;
      LOBYTE(v58) = a3 == 7;
      if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x31u && ((_BYTE)v58 || (_BYTE)v59) && a4 - 1 > 1 )
      {
        v33 = &a10;
        if ( a2 != 7 )
          v33 = &a11;
        sub_168B9F0((__int64)&src, a1, *v33, 0x11FBu, 0);
        sub_15F7200(&src);
        return 0;
      }
      v58 = 0;
      if ( !a5 || (*a5 & 0x3C000) != 0 )
      {
LABEL_13:
        LODWORD(v59) = a10;
        LODWORD(p_src) = a11;
        v19 = sub_168B6C0((__int64)a1);
        result = sub_1AF83B0((__int64 *)(v19 + 2352), 72, 3u);
        v21 = v58;
        LODWORD(v58) = a4;
        v22 = _mm_cvtsi32_si128((unsigned int)p_src);
        *(_DWORD *)result = a6;
        v23 = a14;
        *(_QWORD *)(result + 64) = a5;
        *(_DWORD *)(result + 8) = 90;
        v24 = _mm_cvtsi32_si128(a13);
        *(_DWORD *)(result + 4) = v23;
        *(_DWORD *)(result + 24) = 103;
        v25 = _mm_cvtsi32_si128((unsigned int)v59);
        *(_QWORD *)(result + 16) = v21;
        v26 = _mm_cvtsi32_si128(a12);
        *(__m128i *)(result + 28) = _mm_unpacklo_epi64(
                                      _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(a4)),
                                      _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)));
        *(__m128i *)(result + 44) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v25, v22), _mm_unpacklo_epi32(v26, v24));
        return result;
      }
      p_src = (void **)a5;
      v61 = sub_EEB7E0((unsigned __int64)a5, a3, *(double *)a7.m128_u64);
      v37 = sub_1AF55B0(a1, v61, (__int64)a5);
      if ( v37 != 1 )
      {
        a5 = (_DWORD *)(v37 & 0xFFFFFFFFFFFFFFFELL);
        v38 = sub_168B6C0((__int64)a1);
        v59 = (__m128i *)&v65;
        sub_C3EB00((__int64)&v65, (unsigned __int64)a5, v38, nullptr, v39, v40);
        if ( !v67 )
        {
          sub_168B6E0((__int64)a1);
          v42 = sub_1AE5FF0(a1[1]);
          if ( v42 )
            v44 = *(_DWORD *)(v42 + 976);
          else
            v44 = 103;
          v58 = 0;
          if ( (unsigned int)sub_1AE8290(v44, 90, v43, 0x67u) != 103
            && !(unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
          {
            v48 = sub_1AF29B0(*a1, (unsigned __int64)a5, a7, a8, v45, v46, v47);
            src = nullptr;
            n = 0;
            v49 = (_QWORD *)v48;
            p_src = &src;
            LODWORD(v70[0]) = 0;
            v70[1] = v72;
            v71 = nullptr;
            v50 = j__strlen(".capture_expr.");
            v51 = sub_1B00390((_QWORD *)*a1, v49, (__int64)&src, ".capture_expr.", v50, a7, a8);
            v52 = (_QWORD *)sub_168B6C0((__int64)a1);
            a5 = (_DWORD *)(v51 & 0xFFFFFFFFFFFFFFFELL);
            v58 = sub_1AEDEF0(v52, (__int64)&src, v53, v54, v55, v56);
            sub_1AF4310((__int64)&src);
          }
          goto LABEL_51;
        }
        if ( v66 || (unsigned __int8)sub_1AF0130(v59->m128i_i64) )
        {
LABEL_51:
          sub_98E4B0((__int64)v59);
          goto LABEL_13;
        }
        sub_168B9F0((__int64)&src, a1, v61, 0x11CAu, 0);
        if ( v72[80] )
        {
          sub_AE9DF0(&v71, (__int64)"schedule", 1u);
        }
        else if ( v72[92] )
        {
          sub_1B132F0((__int64)&src, (__int64)"schedule");
        }
        v62 = 1;
        v57 = sub_1587D10((__int64)&src, &v62);
        dest = (void *)sub_EEC8C0((unsigned __int64)p_src, (__int64)&v62, *(double *)a7.m128_u64);
        sub_1587DB0(v57, (__int64 *)&dest);
        sub_15F7200(&src);
        sub_98E4B0((__int64)v59);
      }
      return 0;
    }
    v64.m128_i8[8] = 0;
    v64.m128_u64[0] = 0;
    dest = &v64.m128_u16[4];
    if ( a11 | a10 )
    {
      sub_1AEE640(&src, 90, 0, 5u, nullptr, 0);
      v27 = dest;
      if ( src == v70 )
      {
        v36 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)dest = v70[0];
          else
            memcpy(dest, src, n);
          v36 = n;
          v27 = dest;
        }
        v64.m128_u64[0] = v36;
        v27[v36] = 0;
        v27 = src;
        goto LABEL_19;
      }
      if ( dest == &v64.m128_u16[4] )
      {
        v58 = v70[0];
        dest = src;
        v64 = _mm_loadh_ps((const double *)&v58);
      }
      else
      {
        v58 = v70[0];
        v28 = v64.m128_u64[1];
        dest = src;
        v64 = _mm_loadh_ps((const double *)&v58);
        if ( v27 )
        {
          src = v27;
          v70[0] = v28;
LABEL_19:
          n = 0;
          *v27 = 0;
          if ( src != v70 )
            operator delete(src);
          v59 = (__m128i *)&v65;
LABEL_22:
          sub_168B9F0((__int64)&src, a1, a12, 0x1217u, 0);
          v29 = sub_1682A40((__int64)&src, (__int64)&dest);
          v30 = (__int64 *)v59;
          v31 = v29;
          sub_1AF81E0(v59, 0x5Au);
          sub_1682AF0(v31, (__int64)v30);
          if ( v65 != v30 + 2 )
            operator delete(v65);
          sub_15F7200(&src);
          if ( dest != &v64.m128_u16[4] )
            operator delete(dest);
          return 0;
        }
      }
      v27 = v70;
      src = v70;
      goto LABEL_19;
    }
    v59 = (__m128i *)&v65;
    LODWORD(v65) = 5;
    sub_1AEE640(&src, 90, 0, 9u, &v65, 1);
    v34 = dest;
    if ( src == v70 )
    {
      v41 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v70[0];
        else
          memcpy(dest, src, n);
        v41 = n;
        v34 = dest;
      }
      v64.m128_u64[0] = v41;
      v34[v41] = 0;
      v34 = src;
      goto LABEL_38;
    }
    if ( dest == &v64.m128_u16[4] )
    {
      v58 = v70[0];
      dest = src;
      v64 = _mm_loadh_ps((const double *)&v58);
    }
    else
    {
      v58 = v70[0];
      v35 = v64.m128_u64[1];
      dest = src;
      v64 = _mm_loadh_ps((const double *)&v58);
      if ( v34 )
      {
        src = v34;
        v70[0] = v35;
        goto LABEL_38;
      }
    }
    v34 = v70;
    src = v70;
LABEL_38:
    n = 0;
    *v34 = 0;
    if ( src != v70 )
      operator delete(src);
    goto LABEL_22;
  }
  sub_168B9F0((__int64)&src, a1, a11, 0x1218u, 0);
  dest = sub_FFDD70(90, a3);
  v32 = sub_15AFC70((__int64)&src, &dest);
  v65 = sub_FFDD70(90, a2);
  sub_15AFC70(v32, &v65);
  sub_15F7200(&src);
  return 0;
}
