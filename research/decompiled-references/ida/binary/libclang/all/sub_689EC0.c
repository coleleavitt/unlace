__int64 __fastcall sub_689EC0(__int64 a1, unsigned int *a2, unsigned int *a3, const void *a4, size_t a5)
{
  unsigned int *v6; // r9
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned int v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // r12d
  __int64 v20; // rsi
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  __m128i *v24; // rdi
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // rax
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  std::_V2 *v33; // rbp
  _QWORD *v34; // r13
  char *v35; // rax
  std::_V2 *v36; // rdi
  __m128i v37; // xmm0
  __m128i *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __m128i *v41; // r15
  __int64 v42; // r12
  __int64 v43; // rax
  bool v44; // cf
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // r12
  __int64 v47; // rax
  __m128i v48; // xmm0
  __int64 v49; // r14
  __m128i *v50; // rax
  signed __int64 v51; // rbx
  unsigned __int64 v52; // rdx
  __int64 v53; // rbx
  __m128i si128; // [rsp+18h] [rbp-D0h]
  __m128i v55; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int *v56; // [rsp+40h] [rbp-A8h]
  __int64 v57; // [rsp+48h] [rbp-A0h]
  __m128i v58; // [rsp+50h] [rbp-98h] BYREF
  __int64 v59; // [rsp+60h] [rbp-88h]
  __int64 v60; // [rsp+70h] [rbp-78h] BYREF
  __int128 v61; // [rsp+78h] [rbp-70h]
  __int64 v62; // [rsp+90h] [rbp-58h] BYREF
  __int128 v63; // [rsp+98h] [rbp-50h]

  v6 = a2;
  v10 = *(_QWORD **)(a1 + 24);
  v11 = v10[5];
  v10[15] += 24LL;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[6] >= v12 + 24 && v11 )
  {
    v10[5] = v12 + 24;
  }
  else
  {
    v56 = a2;
    v39 = sub_689820((__int64)(v10 + 5), 24, 3);
    v6 = a2;
    v12 = v39;
  }
  v13 = *(_QWORD **)(a1 + 24);
  v14 = v13[5];
  v13[15] += 24LL;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v13[6] >= v15 + 24 && v14 )
  {
    v13[5] = v15 + 24;
  }
  else
  {
    v56 = v6;
    v40 = sub_689820((__int64)(v13 + 5), 24, 3);
    v6 = v56;
    v15 = v40;
  }
  v16 = sub_689D90(a1, v6, v12, (__int64)a4, a5);
  if ( v16 )
    return v16;
  v20 = (__int64)a3;
  v16 = sub_689D90(a1, a3, v15, 0, v17);
  if ( v16 )
    return v16;
  v60 = v12 | 1;
  v24 = &v58;
  v61 = 0;
  v63 = 0;
  v62 = v15 | 1;
  si128 = _mm_load_si128((const __m128i *)&v62);
  v25 = _mm_load_si128((const __m128i *)&v60);
  clang_getRange(
    (int)&v58,
    (int)a3,
    v21,
    0,
    v22,
    v23,
    v25.m128i_i64[0],
    v25.m128i_i64[1],
    0,
    si128.m128i_i64[0],
    si128.m128i_i64[1],
    0);
  if ( a5 <= 0x10000 )
  {
    v32 = *(_QWORD **)(a1 + 24);
    v33 = (std::_V2 *)v32[5];
    v34 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
    v32[15] += a5 + 1;
    v35 = (char *)v33 + a5 + 1;
    if ( v32[6] >= (unsigned __int64)v35 && v33 )
      v32[5] = v35;
    else
      v33 = (std::_V2 *)sub_689820((__int64)(v32 + 5), a5 + 1, 0);
    v36 = v33;
    memcpy(v33, a4, a5);
    *((_BYTE *)v33 + a5) = 0;
    v37 = _mm_load_si128(&v58);
    v38 = (__m128i *)v34[14];
    if ( v38 != (__m128i *)v34[15] )
    {
      v38[1].m128i_i64[0] = v59;
      v38[1].m128i_i64[1] = (__int64)v33;
      *v38 = v37;
      v34[14] += 32LL;
LABEL_22:
      v18 = 0;
      std::_V2::system_category(v36);
      return v18;
    }
    v41 = (__m128i *)v34[13];
    v42 = ((char *)v38 - (char *)v41) >> 5;
    if ( v42 == 0x3FFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_append");
    v43 = 1;
    if ( v42 )
      v43 = ((char *)v38 - (char *)v41) >> 5;
    v44 = __CFADD__(v43, v42);
    v45 = v43 + v42;
    if ( v44 )
    {
      v46 = 0x7FFFFFFFFFFFFFE0LL;
    }
    else
    {
      if ( v45 > 0x3FFFFFFFFFFFFFFLL )
        v45 = 0x3FFFFFFFFFFFFFFLL;
      v46 = 32 * v45;
    }
    v36 = (std::_V2 *)v46;
    v57 = v59;
    v56 = (unsigned int *)((char *)v38 - (char *)v41);
    v55 = v37;
    v47 = operator new(v46);
    v48 = _mm_load_si128(&v55);
    v49 = v47;
    v50 = (__m128i *)(v47 + (char *)v38 - (char *)v41);
    v50[1].m128i_i64[0] = v57;
    v50[1].m128i_i64[1] = (__int64)v33;
    *v50 = v48;
    if ( v38 == v41 )
    {
      v53 = v49 + 32;
      if ( !v41 )
        goto LABEL_38;
    }
    else
    {
      v51 = (char *)v38 - (char *)v41;
      v52 = 0;
      do
      {
        *(__m128i *)(v49 + v52) = _mm_loadu_si128(&v41[v52 / 0x10]);
        *(__m128i *)(v49 + v52 + 16) = _mm_loadu_si128(&v41[v52 / 0x10 + 1]);
        v52 += 32LL;
      }
      while ( v51 != v52 );
      v53 = v49 + v51 + 32;
    }
    v36 = (std::_V2 *)v41;
    operator delete(v41, v34[15] - (_QWORD)v41);
LABEL_38:
    v34[13] = v49;
    v34[14] = v53;
    v34[15] = v46 + v49;
    goto LABEL_22;
  }
  v30 = *(_DWORD **)(a1 + 8);
  if ( v30 )
    *v30 = 3;
  v31 = *(_QWORD **)(a1 + 16);
  if ( v31 )
  {
    v24 = (__m128i *)"Out-of-bounds string in FIXIT";
    v20 = 29;
    *v31 = sub_6905C0("Out-of-bounds string in FIXIT", 0x1Du);
    v31[1] = v26;
  }
  v18 = 13;
  sub_10DF5B0(v24, v20, v26, v27, v28, v29);
  return v18;
}

