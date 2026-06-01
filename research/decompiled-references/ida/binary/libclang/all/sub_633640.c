_BOOL8 __fastcall sub_633640(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        const __m128i a8)
{
  __m128i v10; // xmm0
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  char v16; // r12
  unsigned int v17; // r13d
  __int64 v18; // rbp
  _QWORD *v19; // r15
  int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned int (__fastcall *v27)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // r12
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rcx
  __int64 *v36; // rdi
  __int64 v37; // rsi
  _DWORD *v38; // rax
  _DWORD *v39; // rdx
  __m128i v40; // [rsp+0h] [rbp-D8h]
  __m128i v41; // [rsp+20h] [rbp-B8h]
  __m128i si128; // [rsp+20h] [rbp-B8h]
  _QWORD *v43; // [rsp+48h] [rbp-90h]
  unsigned __int64 v44; // [rsp+50h] [rbp-88h] BYREF
  char v45; // [rsp+58h] [rbp-80h]
  char v46; // [rsp+60h] [rbp-78h] BYREF
  signed int v47; // [rsp+70h] [rbp-68h]
  unsigned __int64 v48; // [rsp+80h] [rbp-58h] BYREF
  __m128i v49; // [rsp+88h] [rbp-50h]
  __int64 v50; // [rsp+98h] [rbp-40h]

  if ( (_DWORD)a7 == 501 )
  {
    v41 = _mm_loadu_si128((const __m128i *)&a7);
    v11 = *(_QWORD *)(sub_639FD0((_DWORD)a1, a2, a3, a4, a5, a6, v41.m128i_i32[0], v41.m128i_i64[1]) + 16);
  }
  else
  {
    if ( (_DWORD)a7 != 502 )
      return 1;
    v10 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
    v48 = __PAIR64__(DWORD1(a7), 502);
    v49 = v10;
    v50 = a8.m128i_i64[1];
    v11 = sub_63A030(&v48, a2, a3, a4, a5, a6);
  }
  if ( !v11 || a1[2] != v11 )
    return 1;
  v16 = 0;
  clang_getCursorLocation(
    (int)&v46,
    a2,
    v12,
    v13,
    v14,
    v15,
    (__int128)_mm_loadu_si128((const __m128i *)&a7),
    (__int128)_mm_loadu_si128(&a8));
  v17 = v47;
  v18 = *(_QWORD *)(*a1 + 80LL);
  v19 = *(_QWORD **)(v18 + 2152);
  if ( v47 < 0 )
  {
    v17 = sub_632B00(*(_QWORD *)(v18 + 2152), v47, &v48);
    v16 = v48 ^ 1;
  }
  v20 = sub_633200((__int64)v19, v17);
  LOBYTE(v48) = 0;
  if ( (unsigned int)(v20 + 1) > 1 )
  {
    if ( v20 >= 0 )
    {
      v21 = v19[23] + 24LL * v20;
LABEL_12:
      if ( *(char *)(v21 + 3) >= 0 )
      {
        v22 = *(_QWORD *)((*(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( v22 )
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)(v22 + 8);
            if ( !v23 )
              break;
            v22 = v23 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v23 & 4) == 0 || !v22 )
              goto LABEL_23;
          }
        }
      }
      goto LABEL_22;
    }
    v33 = (unsigned int)(-2 - v20);
    v34 = *(_QWORD *)(v19[32] + 8LL * ((unsigned int)(-2 - v20) >> 6));
    if ( _bittest64(&v34, v33) )
    {
      v35 = (_QWORD *)(v19[26] + 8 * ((unsigned __int64)(int)v33 >> 5));
      if ( *v35 )
      {
        v21 = *v35 + 24 * (v33 & 0x1F);
        goto LABEL_12;
      }
      v36 = (__int64 *)(v19[28] & 0xFFFFFFFFFFFFFFF8LL);
      v37 = *v36;
      v36[10] += 768;
      v38 = (_DWORD *)((v37 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v36[1] >= (unsigned __int64)(v38 + 192) && v37 )
      {
        *v36 = (__int64)(v38 + 192);
      }
      else
      {
        v43 = v35;
        v38 = (_DWORD *)sub_632560((__int64)v36, 768, 3);
        v35 = v43;
      }
      *v35 = v38;
      v39 = v38 + 192;
      do
      {
        *v38 = 0;
        v38 += 6;
        *((_OWORD *)v38 - 1) = 0;
      }
      while ( v39 != v38 );
      v24 = v48;
      v21 = *v35 + 24 * (v33 & 0x1F);
    }
    else
    {
      v21 = sub_CA9380(v19, (unsigned int)v33, &v48);
      v24 = v48;
    }
    if ( v24 || !v21 )
      goto LABEL_22;
    goto LABEL_12;
  }
LABEL_22:
  v22 = 0;
LABEL_23:
  if ( a1[1] != v22 || v16 )
    return 1;
  v25 = *(_QWORD *)(v18 + 2160);
  v26 = *(_QWORD *)(v18 + 2152);
  v45 = 1;
  v27 = (unsigned int (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[4];
  v44 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v17), 224).m128i_u64[0];
  sub_602210(&v48, v26, v25, (__int64)&v44);
  si128 = _mm_load_si128((const __m128i *)&v48);
  v40 = _mm_loadu_si128((const __m128i *)&a7);
  v28 = _mm_loadu_si128(&a8);
  return v27(
           a1[3],
           v26,
           v29,
           v30,
           v31,
           v32,
           v40.m128i_i64[0],
           v40.m128i_i64[1],
           v28.m128i_i64[0],
           v28.m128i_i64[1],
           si128.m128i_i64[0],
           si128.m128i_i64[1],
           v49.m128i_i64[1]) != 0;
}

