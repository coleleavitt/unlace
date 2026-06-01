unsigned __int64 __fastcall sub_674A10(char **a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  void *v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  const char *v18; // r15
  __int64 v19; // r14
  __int64 v20; // rdx
  __m128i *v21; // rax
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __m128i si128; // xmm0
  __m128i v25; // xmm2
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-F8h]
  __int64 v32; // [rsp+8h] [rbp-F0h]
  __m128i v33; // [rsp+10h] [rbp-E8h] BYREF
  void *v34; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v35; // [rsp+28h] [rbp-D0h]
  int v36; // [rsp+38h] [rbp-C0h]
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+48h] [rbp-B0h]
  __m128i v39; // [rsp+60h] [rbp-98h] BYREF
  char *s2[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v41; // [rsp+80h] [rbp-78h]
  __m128i v42; // [rsp+90h] [rbp-68h]
  __m128i v43; // [rsp+A0h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( !a2 )
    return v45 - __readfsqword(0x28u);
  v32 = *(_QWORD *)(a2 + 16) & 0x8000LL;
  if ( (*(_QWORD *)(a2 + 16) & 0x8000) != 0 )
    return v45 - __readfsqword(0x28u);
  HIDWORD(v31) = *(_DWORD *)(a2 + 80);
  if ( !HIDWORD(v31) )
    return v45 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 88);
  if ( v3 )
    return v45 - __readfsqword(0x28u);
  *(_DWORD *)(a2 + 80) = 0;
  v5 = *(_QWORD *)a2;
  v34 = nullptr;
  v35 = 0;
  v6 = sub_3BDD60(a1, v5);
  v7 = *a1;
  v39.m128i_i64[0] = v6;
  v8 = sub_7BEED0(&v39, v7, &v34, 1, 0x4000, 83);
  v10 = *(_QWORD *)a2;
  if ( v8 <= 0 )
    sub_368890();
  v11 = v34;
  v12 = v35;
  ptr = nullptr;
  *(_DWORD *)(a2 + 80) = 0;
  v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)((unsigned __int64)v11 + v12));
  v38 = 0;
  if ( SHIDWORD(v31) <= 0 )
    goto LABEL_40;
  LODWORD(v31) = 0;
  v13 = 0;
  while ( 1 )
  {
    v41 = 0;
    v39 = 0;
    *(_OWORD *)s2 = 0;
    v28 = is_cvt64(&v39, v7, v9);
    v29 = v33.m128i_i64[1];
    if ( v28 )
    {
      v10 = (unsigned int)unpack_dd(&v33) + (unsigned int)v10;
      if ( (unsigned int)v10 == 0xFFFFFFFFLL )
        v10 = -1;
    }
    else
    {
      v10 += unpack_dq(&v33);
    }
    v39.m128i_i64[0] = v10;
    if ( (void *)v33.m128i_i64[0] == v11 )
      break;
    if ( (unsigned __int8)is_cvt64(&v33, v29, v14) )
    {
      v15 = (unsigned int)v10 + (unsigned int)unpack_dd(&v33);
      if ( v15 == 0xFFFFFFFFLL )
        v15 = -1;
    }
    else
    {
      v15 = v10 + unpack_dq(&v33);
    }
    v39.m128i_i64[1] = v15;
    s2[0] = (char *)unpack_ds(&v33, v33.m128i_i64[1], 0);
    s2[1] = (char *)unpack_ds(&v33, v33.m128i_i64[1], 0);
    v16 = unpack_ds(&v33, v33.m128i_i64[1], 1);
    v17 = v39.m128i_i64[0];
    v41 = v16;
    if ( v39.m128i_i64[0] < v13 )
    {
      v7 = *(char **)a2;
      sub_84F5B0(
        "%a: incorrect order of register variables: %a < %a\n",
        v31,
        v32,
        v33.m128i_i32[0],
        v33.m128i_i32[2],
        (int)v34,
        v35,
        SDWORD2(v35),
        v36,
        (int)ptr,
        v38,
        *((__int64 *)&v38 + 1));
      v17 = v13;
LABEL_32:
      v13 = v17;
      free_regvar(&v39);
      goto LABEL_22;
    }
    v18 = s2[1];
    v19 = v39.m128i_i64[1];
    if ( !s2[1]
      || !s2[0]
      || !*s2[0]
      || v39.m128i_i64[0] >= (unsigned __int64)v39.m128i_i64[1]
      || strcmp(s2[0], s2[1])
      && (!(unsigned __int8)is_uname(v18) || is_name_defined_locally(a2, (__int64)v18, 0, v17, v19) || strchr(v18, 32)) )
    {
      v7 = *(char **)a2;
      sub_84F5B0(
        "%a: bad register variable '%s' (%a): %s\n",
        v31,
        v32,
        v33.m128i_i32[0],
        v33.m128i_i32[2],
        (int)v34,
        v35,
        SDWORD2(v35),
        v36,
        (int)ptr,
        v38,
        *((__int64 *)&v38 + 1));
      goto LABEL_32;
    }
    v20 = v38;
    v7 = (char *)ptr;
    if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v38 + 1, 40);
      v20 = v38;
      v7 = (char *)ptr;
    }
    v13 = v17;
    v21 = (__m128i *)&v7[40 * v20];
    *v21 = 0;
    *(_QWORD *)&v38 = v38 + 1;
    v22 = _mm_loadu_si128(v21);
    v21[2].m128i_i64[0] = 0;
    v21[1] = 0;
    v23 = _mm_load_si128(&v39);
    si128 = _mm_load_si128((const __m128i *)s2);
    v39 = v22;
    v25 = _mm_loadu_si128(v21 + 1);
    v26 = v41;
    v42 = v23;
    *(__m128i *)s2 = v25;
    v27 = v21[2].m128i_i64[0];
    v44 = v41;
    v41 = v27;
    *v21 = v23;
    v21[2].m128i_i64[0] = v26;
    v21[1] = si128;
    v43 = si128;
    *(_DWORD *)(a2 + 80) = v38;
    *(_QWORD *)(a2 + 88) = ptr;
    free_regvar(&v39);
LABEL_22:
    LODWORD(v31) = v31 + 1;
    if ( HIDWORD(v31) == (_DWORD)v31 )
      goto LABEL_38;
    v11 = (void *)v33.m128i_i64[0];
  }
  sub_84F5B0(
    "%a: incorrect number of register variables (%d)\n",
    v31,
    v32,
    v33.m128i_i32[0],
    v33.m128i_i32[2],
    (int)v34,
    v35,
    SDWORD2(v35),
    v36,
    (int)ptr,
    v38,
    *((__int64 *)&v38 + 1));
  free_regvar(&v39);
LABEL_38:
  v3 = (__int64)ptr;
  if ( (unsigned __int64)v38 < *((_QWORD *)&v38 + 1) && (_QWORD)v38 && ptr )
  {
    v30 = qrealloc(ptr);
    v11 = v34;
    v3 = v30;
    if ( !v30 )
      v3 = (__int64)ptr;
  }
  else
  {
    v11 = v34;
  }
LABEL_40:
  *(_QWORD *)(a2 + 88) = v3;
  if ( v11 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v11);
  }
  return v45 - __readfsqword(0x28u);
}
