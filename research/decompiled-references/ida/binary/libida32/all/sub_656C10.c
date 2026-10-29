unsigned __int64 __fastcall sub_656C10(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r14
  int v5; // esi
  __int64 v6; // rax
  int v7; // r13d
  void *v8; // r12
  __int64 v9; // rsi
  int v10; // r14d
  unsigned int v11; // r15d
  const char *v12; // r15
  __int64 v13; // rax
  char *v14; // rsi
  char *v15; // rsi
  __m128i v16; // xmm2
  __m128i si128; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm0
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-F8h]
  __int64 v25; // [rsp+8h] [rbp-F0h]
  __m128i *v26; // [rsp+10h] [rbp-E8h]
  __int64 v27; // [rsp+10h] [rbp-E8h]
  int v28; // [rsp+18h] [rbp-E0h]
  unsigned int v29; // [rsp+1Ch] [rbp-DCh]
  __m128i v30; // [rsp+20h] [rbp-D8h] BYREF
  void *v31; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+38h] [rbp-C0h]
  int v33; // [rsp+48h] [rbp-B0h]
  void *ptr; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+58h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-88h] BYREF
  char *s2[2]; // [rsp+78h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-70h]
  __m128i v39; // [rsp+90h] [rbp-68h]
  __m128i v40; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v41; // [rsp+B8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( !a2 )
    return v41 - __readfsqword(0x28u);
  v25 = *(_QWORD *)(a2 + 8) & 0x8000LL;
  if ( (*(_QWORD *)(a2 + 8) & 0x8000) != 0 )
    return v41 - __readfsqword(0x28u);
  v28 = *(_DWORD *)(a2 + 56);
  if ( !v28 )
    return v41 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 )
    return v41 - __readfsqword(0x28u);
  *(_DWORD *)(a2 + 56) = 0;
  v5 = *(_DWORD *)a2;
  v31 = nullptr;
  v32 = 0;
  LODWORD(v36) = sub_3B90A0(a1, v5);
  v26 = (__m128i *)&v36;
  v6 = sub_79BAE0(&v36, *a1, &v31, 1, 0x4000, 83);
  v7 = *(_DWORD *)a2;
  if ( v6 <= 0 )
    sub_365330();
  v8 = v31;
  v9 = v32;
  ptr = nullptr;
  *(_DWORD *)(a2 + 56) = 0;
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)((unsigned __int64)v8 + v9));
  v35 = 0;
  if ( v28 <= 0 )
    goto LABEL_30;
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    v36 = 0;
    v38 = 0;
    *(_OWORD *)s2 = 0;
    v7 += unpack_dd(&v30);
    LODWORD(v36) = v7;
    if ( (void *)v30.m128i_i64[0] == v8 )
      break;
    HIDWORD(v36) = v7 + unpack_dd(&v30);
    s2[0] = (char *)unpack_ds(&v30, v30.m128i_i64[1], 0);
    s2[1] = (char *)unpack_ds(&v30, v30.m128i_i64[1], 0);
    v21 = unpack_ds(&v30, v30.m128i_i64[1], 1);
    v22 = v36;
    v38 = v21;
    if ( (unsigned int)v36 < v11 )
    {
      sub_82BC50(
        "%a: incorrect order of register variables: %a < %a\n",
        v24,
        v25,
        (int)v26,
        v28,
        v30.m128i_i32[0],
        v30.m128i_i32[2],
        (int)v31,
        v32,
        SDWORD2(v32),
        v33,
        (__int64)ptr);
      v22 = v11;
LABEL_22:
      v11 = v22;
      free_regvar(v26);
      goto LABEL_17;
    }
    v12 = s2[1];
    v29 = HIDWORD(v36);
    if ( !s2[1]
      || !s2[0]
      || !*s2[0]
      || (unsigned int)v36 >= HIDWORD(v36)
      || strcmp(s2[0], s2[1])
      && (!(unsigned __int8)is_uname(v12)
       || (unsigned __int8)is_name_defined_locally(a2, v12, 0, v22, v29)
       || strchr(v12, 32)) )
    {
      sub_82BC50(
        "%a: bad register variable '%s' (%a): %s\n",
        v24,
        v25,
        (int)v26,
        v28,
        v30.m128i_i32[0],
        v30.m128i_i32[2],
        (int)v31,
        v32,
        SDWORD2(v32),
        v33,
        (__int64)ptr);
      goto LABEL_22;
    }
    v13 = v35;
    v14 = (char *)ptr;
    if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v35 + 1, 32);
      v14 = (char *)ptr;
      v13 = v35;
    }
    v11 = v22;
    v15 = &v14[32 * v13];
    *(_OWORD *)(v15 + 8) = 0;
    *(_QWORD *)v15 = 0;
    *(_QWORD *)&v35 = v35 + 1;
    v16 = _mm_loadu_si128((const __m128i *)v15);
    *((_QWORD *)v15 + 3) = 0;
    si128 = _mm_load_si128(v26);
    *v26 = v16;
    v18 = _mm_loadu_si128((const __m128i *)v15 + 1);
    v19 = _mm_load_si128(v26 + 1);
    v39 = si128;
    v26[1] = v18;
    *(__m128i *)v15 = si128;
    v20 = v35;
    *((__m128i *)v15 + 1) = v19;
    *(_DWORD *)(a2 + 56) = v20;
    v40 = v19;
    *(_QWORD *)(a2 + 64) = ptr;
    free_regvar(v26);
LABEL_17:
    if ( v28 == ++v10 )
      goto LABEL_28;
    v8 = (void *)v30.m128i_i64[0];
  }
  sub_82BC50(
    "%a: incorrect number of register variables (%d)\n",
    v24,
    v25,
    (int)v26,
    v28,
    v30.m128i_i32[0],
    v30.m128i_i32[2],
    (int)v31,
    v32,
    SDWORD2(v32),
    v33,
    (__int64)ptr);
  free_regvar(v27);
LABEL_28:
  v3 = (__int64)ptr;
  if ( (unsigned __int64)v35 < *((_QWORD *)&v35 + 1) && ptr && (_QWORD)v35 )
  {
    v23 = qrealloc(ptr);
    v8 = v31;
    v3 = v23;
    if ( !v23 )
      v3 = (__int64)ptr;
  }
  else
  {
    v8 = v31;
  }
LABEL_30:
  *(_QWORD *)(a2 + 64) = v3;
  if ( v8 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v8);
  }
  return v41 - __readfsqword(0x28u);
}

