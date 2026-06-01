__int64 __fastcall sub_2266290(
        std::_V2 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  __int64 v19; // rbx
  unsigned __int64 v20; // r15
  int v21; // eax
  _QWORD *v22; // r15
  _QWORD *v23; // r13
  unsigned int v24; // edx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  size_t v28; // rdx
  int v29; // ecx
  __int64 v30; // rax
  unsigned __int8 *v33; // rsi
  bool v34; // zf
  size_t v35; // r13
  size_t v36; // r12
  size_t v37; // r10
  int v38; // eax
  size_t v39; // rax
  int v40; // edx
  int v41; // eax
  int v42; // [rsp+0h] [rbp-1A8h]
  std::_V2 *s1; // [rsp+8h] [rbp-1A0h]
  size_t v44; // [rsp+18h] [rbp-190h]
  size_t v45; // [rsp+18h] [rbp-190h]
  size_t n[2]; // [rsp+20h] [rbp-188h] BYREF
  __int64 v47; // [rsp+130h] [rbp-78h]
  __m128i v48[2]; // [rsp+138h] [rbp-70h] BYREF
  char v49; // [rsp+160h] [rbp-48h]

  v19 = (__int64)a1;
  v20 = *(_QWORD *)(a3 + 24);
  v42 = a2;
  if ( !v20 )
    goto LABEL_2;
  v33 = *(unsigned __int8 **)(a3 + 16);
  v34 = *(_BYTE *)(a2 + 112) == 0;
  *(__m128i *)n = _mm_loadu_si128((const __m128i *)&a9);
  if ( v34 )
  {
    v35 = n[1];
    s1 = (std::_V2 *)n[0];
    if ( v20 == n[1] )
    {
      if ( !(unsigned int)sub_22462B0((__int64)n, v33, v20) )
        goto LABEL_32;
      v35 = n[1];
      s1 = (std::_V2 *)n[0];
    }
LABEL_16:
    a1 = (std::_V2 *)"\\";
    v36 = j__strlen("/");
    v37 = j__strlen("\\");
    if ( v36 != v35 )
      goto LABEL_20;
    if ( !v35 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v35 = n[1];
  s1 = (std::_V2 *)n[0];
  if ( v20 != n[1] )
    goto LABEL_16;
  if ( !memcmp((const void *)n[0], v33, v20) )
    goto LABEL_32;
  a1 = (std::_V2 *)"\\";
  v36 = j__strlen("/");
  v39 = j__strlen("\\");
  v37 = v39;
  if ( v20 != v36 )
  {
    if ( v39 != v20 )
      goto LABEL_23;
LABEL_22:
    a1 = s1;
    if ( memcmp(s1, "\\", v35) )
      goto LABEL_23;
LABEL_30:
    if ( v36 == v20 )
    {
      a1 = (std::_V2 *)v33;
      if ( !memcmp(v33, "/", v36) )
        goto LABEL_32;
    }
LABEL_23:
    v27 = std::_V2::generic_category(a1);
LABEL_24:
    *(_BYTE *)(v19 + 320) |= 1u;
    *(_DWORD *)v19 = 2;
    *(_QWORD *)(v19 + 8) = v27;
    return v19;
  }
  v35 = v20;
LABEL_18:
  a1 = s1;
  v44 = v37;
  v38 = memcmp(s1, "/", v35);
  v37 = v44;
  if ( v38 )
  {
    v36 = v35;
    if ( v35 != v44 )
      goto LABEL_23;
    goto LABEL_22;
  }
LABEL_19:
  v36 = v35;
  if ( v20 != v37 || (a1 = (std::_V2 *)v33, v45 = v37, v41 = memcmp(v33, "\\", v20), v37 = v45, v41) )
  {
LABEL_20:
    if ( v35 != v37 )
      goto LABEL_23;
    if ( !v35 )
      goto LABEL_30;
    goto LABEL_22;
  }
LABEL_32:
  sub_2289340(&a7);
  a1 = (std::_V2 *)&a7;
  if ( (unsigned __int8)sub_22895C0(&a7, &a12) )
  {
LABEL_33:
    sub_22660E0((__int64)n, a3, a3, a4, a5, a6, a7, a8, a9, *((__int64 *)&a9 + 1), a10, a11, a12, a13, a14, a15, a16);
    v40 = n[1];
    *(_QWORD *)v19 = v19 + 16;
    *(_BYTE *)(v19 + 320) &= ~1u;
    *(_QWORD *)(v19 + 8) = 0x2000000000LL;
    if ( v40 )
      sub_2260740(v19, (char **)n);
    *(_QWORD *)(v19 + 272) = v47;
    sub_A20E90((__m128i *)(v19 + 280), v48);
    sub_225BE70((__int64)n);
    return v19;
  }
LABEL_2:
  v21 = *(_DWORD *)(a3 + 8);
  if ( v21 == 2 )
  {
    v30 = std::_V2::generic_category(a1);
    *(_BYTE *)(v19 + 320) |= 1u;
    *(_DWORD *)v19 = 20;
    *(_QWORD *)(v19 + 8) = v30;
    return v19;
  }
  if ( v21 == 1 )
    goto LABEL_33;
  v22 = *(_QWORD **)(a3 + 56);
  v23 = *(_QWORD **)(a3 + 48);
  if ( v23 == v22 )
    goto LABEL_23;
  v24 = *(_DWORD *)(a4 + 8);
  while ( 1 )
  {
    v25 = v24;
    v26 = v24 + 1LL;
    if ( v26 > *(unsigned int *)(a4 + 12) )
    {
      sub_2237220(a4, (const void *)(a4 + 16), v26, 8);
      v25 = *(unsigned int *)(a4 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a4 + 8 * v25) = a3;
    ++*(_DWORD *)(a4 + 8);
    sub_2266290((unsigned int)n, v42, *v23, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    if ( (v49 & 1) == 0 )
      break;
    v27 = std::_V2::generic_category((std::_V2 *)n);
    v28 = n[1];
    v29 = n[0];
    if ( n[1] != v27 || LODWORD(n[0]) != 2 )
    {
      *(_BYTE *)(v19 + 320) |= 1u;
      *(_DWORD *)v19 = v29;
      *(_QWORD *)(v19 + 8) = v28;
      return v19;
    }
    ++v23;
    v24 = *(_DWORD *)(a4 + 8) - 1;
    *(_DWORD *)(a4 + 8) = v24;
    if ( v22 == v23 )
      goto LABEL_24;
  }
  *(_BYTE *)(v19 + 320) &= ~1u;
  *(_QWORD *)v19 = v19 + 16;
  *(_QWORD *)(v19 + 8) = 0x2000000000LL;
  if ( LODWORD(n[1]) )
    sub_2260740(v19, (char **)n);
  *(_QWORD *)(v19 + 272) = v47;
  sub_A20E90((__m128i *)(v19 + 280), v48);
  if ( (v49 & 1) == 0 )
    sub_225BE70((__int64)n);
  return v19;
}
