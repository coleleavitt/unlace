_BOOL8 __fastcall sub_633E40(_QWORD *a1, int a2, int a3, int a4, int a5, int a6, __int128 a7, __int128 a8)
{
  __int128 v8; // xmm0
  unsigned int v11; // ebp
  __int64 v12; // r12
  _QWORD *v13; // r13
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int (__fastcall *v19)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // r13
  __int64 v20; // rdx
  __int64 v21; // rsi
  __m128i si128; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  _QWORD *v29; // r15
  __int8 v30; // dl
  __int64 *v31; // rdi
  __int64 v32; // rcx
  _DWORD *v33; // rax
  _DWORD *v34; // rcx
  __m128i v35; // [rsp+0h] [rbp-E8h]
  __m128i v36; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v37; // [rsp+40h] [rbp-A8h] BYREF
  char v38; // [rsp+48h] [rbp-A0h]
  char v39; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-88h]
  __m128i v41; // [rsp+70h] [rbp-78h] BYREF
  __int64 v42; // [rsp+80h] [rbp-68h]
  __m128i v43; // [rsp+90h] [rbp-58h] BYREF
  __m128i v44[4]; // [rsp+A0h] [rbp-48h] BYREF

  v43 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = (__int128)_mm_loadu_si128((const __m128i *)&a8);
  v44[0] = (__m128i)v8;
  if ( (_DWORD)a7 != 503 )
    return 1;
  v43.m128i_i32[0] = 503;
  clang_getCursorLocation((int)&v39, a2, a3, a4, a5, a6, (__int128)_mm_load_si128(&v43), v8);
  v11 = v40;
  v12 = *(_QWORD *)(*a1 + 80LL);
  v13 = *(_QWORD **)(v12 + 2152);
  v14 = sub_633200((__int64)v13, v40);
  v41.m128i_i8[0] = 0;
  if ( (unsigned int)(v14 + 1) <= 1 )
    goto LABEL_12;
  if ( v14 < 0 )
  {
    v27 = (unsigned int)(-2 - v14);
    v28 = *(_QWORD *)(v13[32] + 8LL * ((unsigned int)(-2 - v14) >> 6));
    if ( _bittest64(&v28, v27) )
    {
      v29 = (_QWORD *)(v13[26] + 8 * ((unsigned __int64)(int)v27 >> 5));
      if ( *v29 )
      {
        v15 = *v29 + 24 * (v27 & 0x1F);
        goto LABEL_6;
      }
      v31 = (__int64 *)(v13[28] & 0xFFFFFFFFFFFFFFF8LL);
      v32 = *v31;
      v31[10] += 768;
      v33 = (_DWORD *)((v32 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v31[1] >= (unsigned __int64)(v33 + 192) && v32 )
      {
        *v31 = (__int64)(v33 + 192);
        v30 = 0;
      }
      else
      {
        v33 = (_DWORD *)sub_632560((__int64)v31, 768, 3);
        v30 = v41.m128i_i8[0];
      }
      *v29 = v33;
      v34 = v33 + 192;
      do
      {
        *v33 = 0;
        v33 += 6;
        *((_OWORD *)v33 - 1) = 0;
      }
      while ( v33 != v34 );
      v15 = *v29 + 24 * (v27 & 0x1F);
    }
    else
    {
      v15 = sub_CA9380(v13, (unsigned int)v27, &v41);
      v30 = v41.m128i_i8[0];
    }
    if ( v30 || !v15 )
      goto LABEL_12;
  }
  else
  {
    v15 = v13[23] + 24LL * v14;
  }
LABEL_6:
  if ( *(char *)(v15 + 3) < 0
    || (v16 = *(_QWORD *)((*(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8)) == 0
    || (v17 = *(_QWORD *)(v16 + 8)) == 0 )
  {
LABEL_12:
    v18 = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v17 & 4) == 0 || !v18 )
      break;
    v17 = *(_QWORD *)(v18 + 8);
    if ( !v17 )
      goto LABEL_12;
  }
LABEL_13:
  if ( a1[1] != v18 )
    return 1;
  v19 = (unsigned int (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[3];
  v20 = *(_QWORD *)(v12 + 2160);
  v38 = 1;
  v21 = *(_QWORD *)(v12 + 2152);
  v37 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v11), 224).m128i_u64[0];
  sub_602210(&v41, v21, v20, (__int64)&v37);
  v36 = _mm_load_si128(&v41);
  v35 = _mm_load_si128(&v43);
  si128 = _mm_load_si128(v44);
  return v19(
           a1[2],
           v21,
           v23,
           v24,
           v25,
           v26,
           v35.m128i_i64[0],
           v35.m128i_i64[1],
           si128.m128i_i64[0],
           si128.m128i_i64[1],
           v36.m128i_i64[0],
           v36.m128i_i64[1],
           v42) != 0;
}

