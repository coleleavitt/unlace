__int64 __fastcall sub_633980(__int64 a1, int a2, int a3, int a4, int a5, int a6, __m128i a7, __m128i a8)
{
  __m128i v9; // xmm0
  __int32 v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  char *v20; // rdi
  __int64 v21; // rax
  int v22; // esi
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  unsigned int v29; // ebp
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  int v34; // ebp
  __m128i v35; // xmm0
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  unsigned __int64 v40; // rax
  char v41; // r13
  __int64 v42; // r12
  __int64 v43; // rdi
  __int64 result; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  _OWORD *v47; // r10
  __int64 *v48; // rdx
  char *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 (__fastcall *v52)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD); // r13
  __m128i v53; // xmm0
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // eax
  __m128i v59; // xmm0
  __m128i v60; // [rsp+0h] [rbp-138h]
  __m128i v61; // [rsp+20h] [rbp-118h]
  __m128i si128; // [rsp+20h] [rbp-118h]
  __int64 v63; // [rsp+48h] [rbp-F0h]
  __m128i v64; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v65; // [rsp+60h] [rbp-D8h] BYREF
  unsigned __int64 v66; // [rsp+70h] [rbp-C8h] BYREF
  char v67; // [rsp+78h] [rbp-C0h]
  __int64 v68[2]; // [rsp+80h] [rbp-B8h] BYREF
  int v69; // [rsp+90h] [rbp-A8h]
  __m128i v70; // [rsp+A0h] [rbp-98h] BYREF
  void *ptr[2]; // [rsp+C0h] [rbp-78h] BYREF
  _OWORD v72[6]; // [rsp+D0h] [rbp-68h] BYREF

  v9 = _mm_loadu_si128(&a8);
  clang_getCursorReferenced(
    (int)&v70,
    a2,
    a3,
    a4,
    a5,
    a6,
    (__int128)_mm_loadu_si128(&a7),
    v9.m128i_i32[0],
    v9.m128i_i64[1]);
  v10 = v70.m128i_i32[0];
  if ( !(unsigned int)clang_isDeclaration(v70.m128i_u32[0]) )
    return 2;
  v61 = _mm_load_si128(&v70);
  v15 = sub_63A250(v10, a2, v11, v12, v13, v14, v61.m128i_i32[0], v61.m128i_i64[1]);
  if ( !v15 )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
      LODWORD(v19) = *(_BYTE *)(v17 + 28) & 0x7F;
      if ( (unsigned int)(v19 - 19) > 1 )
        break;
      v15 = *(_QWORD *)(v17 + 88);
      if ( !v15 )
      {
        if ( *(_QWORD *)(a1 + 16) == v17 )
          goto LABEL_8;
LABEL_6:
        if ( (unsigned int)(unsigned __int8)v19 - 33 > 3 )
          return 2;
        goto LABEL_7;
      }
    }
    if ( (_BYTE)v19 != 36 )
      break;
    v45 = *(_QWORD *)(sub_79A2E0(v17 + 72) + 16);
    v17 = v45 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v45 & 4) != 0 )
      v17 = *(_QWORD *)v17;
    if ( !v17 )
      break;
    v15 = v17 - 64;
  }
  if ( *(_QWORD *)(a1 + 16) == v17 )
    goto LABEL_8;
  LOBYTE(v19) = *(_BYTE *)(v17 + 28) & 0x7F;
  if ( (_BYTE)v19 != 16 )
    goto LABEL_6;
LABEL_7:
  v20 = *(char **)(a1 + 48);
  v21 = *(unsigned int *)(a1 + 56);
  v68[0] = v17;
  if ( &v20[8 * v21] == sub_6324A0(v20, &v20[8 * v21], v68) )
  {
    v46 = *(_QWORD *)a1;
    ptr[1] = (void *)0x800000000LL;
    ptr[0] = v72;
    sub_632340(v46, (_BYTE *)v17, (__int64)ptr, v16, v17, v18);
    v47 = ptr[0];
    if ( ptr[0] == (char *)ptr[0] + 8 * LODWORD(ptr[1]) )
    {
LABEL_42:
      if ( v47 != v72 )
        free(v47);
      return 2;
    }
    v17 = *(_QWORD *)(a1 + 48);
    v48 = (__int64 *)ptr[0];
    v49 = (char *)(v17 + 8LL * *(unsigned int *)(a1 + 56));
    while ( v49 == sub_6324A0((char *)v17, v49, v48) )
    {
      v48 = (__int64 *)(v19 + 8);
      if ( (__int64 *)v18 == v48 )
        goto LABEL_42;
    }
    if ( v47 != v72 )
      free(v47);
  }
LABEL_8:
  v22 = *(_DWORD *)(a1 + 24);
  sub_63A5D0(
    (unsigned int)&v64,
    v22,
    v19,
    v16,
    v17,
    v18,
    (__int128)_mm_loadu_si128(&a7),
    (__int128)_mm_loadu_si128(&a8));
  v27 = _mm_loadu_si128(&v64);
  v28 = _mm_loadu_si128(&v65);
  v29 = _mm_cvtsi128_si32(v27);
  a7 = v27;
  a8 = v28;
  if ( v29 - 16 <= 1 )
  {
    *(__m128i *)ptr = v27;
    v72[0] = v28;
    if ( (unsigned int)sub_63A4A0(
                         (unsigned int)&v64,
                         v22,
                         v23,
                         v24,
                         v25,
                         v26,
                         v27.m128i_i64[0],
                         v27.m128i_i64[1],
                         v28.m128i_i64[0]) == -1
      || (unsigned int)clang_isExpression(v29) )
    {
      return 2;
    }
  }
  else if ( (unsigned int)clang_isExpression(v29) )
  {
    if ( v29 - 101 > 1 )
    {
      if ( v29 != 104 )
        return 2;
      a7.m128i_i32[0] = 104;
      v59 = _mm_loadu_si128(&a8);
      *(__m128i *)ptr = _mm_loadu_si128(&a7);
      v72[0] = v59;
      if ( (unsigned int)sub_63A4A0(104, v22, v30, v31, v32, v33, (__int64)ptr[0], (__int64)ptr[1], v59.m128i_i64[0]) == -1 )
        return 2;
    }
  }
  a7.m128i_i32[0] = v29;
  clang_getCursorLocation(
    (int)v68,
    v22,
    v30,
    v31,
    v32,
    v33,
    (__int128)_mm_loadu_si128(&a7),
    (__int128)_mm_loadu_si128(&a8));
  v34 = v69;
  v35 = _mm_loadu_si128(&a8);
  *(__m128i *)ptr = _mm_loadu_si128(&a7);
  v72[0] = v35;
  v40 = (unsigned __int64)sub_63A4A0(
                            (unsigned int)v68,
                            v22,
                            v36,
                            v37,
                            v38,
                            v39,
                            (__int64)ptr[0],
                            (__int64)ptr[1],
                            v35.m128i_i64[0]) >> 32;
  if ( v40 )
    v34 = v40;
  if ( !*(_QWORD *)a1 )
    BUG();
  v41 = 0;
  v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 80LL);
  v43 = *(_QWORD *)(v42 + 2152);
  if ( v34 < 0 )
  {
    v63 = *(_QWORD *)(v42 + 2152);
    v58 = sub_632B00(v43, v34, ptr);
    v43 = v63;
    v34 = v58;
    v41 = LOBYTE(ptr[0]) ^ 1;
  }
  if ( *(_DWORD *)(a1 + 8) != (unsigned int)sub_633200(v43, v34) )
    return 2;
  if ( v41 )
    return 2;
  v50 = *(_QWORD *)(v42 + 2160);
  v51 = *(_QWORD *)(v42 + 2152);
  v67 = 1;
  v52 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD))(a1 + 40);
  v66 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v34), 224).m128i_u64[0];
  sub_602210(ptr, v51, v50, (__int64)&v66);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v60 = _mm_loadu_si128(&a7);
  v53 = _mm_loadu_si128(&a8);
  result = v52(
             *(_QWORD *)(a1 + 32),
             v51,
             v54,
             v55,
             v56,
             v57,
             v60.m128i_i64[0],
             v60.m128i_i64[1],
             v53.m128i_i64[0],
             v53.m128i_i64[1],
             si128.m128i_i64[0],
             si128.m128i_i64[1],
             *(_QWORD *)&v72[0]);
  if ( (_DWORD)result )
    return 2;
  return result;
}

