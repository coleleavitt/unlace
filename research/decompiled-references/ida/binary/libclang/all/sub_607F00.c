__int64 __fastcall sub_607F00(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, __int128 a7, __int128 a8)
{
  __int64 v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __int64 v12; // rdx
  __int32 v13; // ebx
  const __m128i *v14; // r12
  __int32 v15; // eax
  __int64 v16; // rdx
  __int32 v17; // ecx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  unsigned __int32 v24; // r15d
  const __m128i *v25; // rax
  unsigned int v26; // r13d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  unsigned __int32 v31; // eax
  __int64 v32; // r8
  unsigned __int32 v33; // r15d
  __int64 v34; // r11
  unsigned __int32 v35; // ebx
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  unsigned int v39; // r12d
  unsigned int v40; // r13d
  int v41; // r13d
  __m128i *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  void *v45; // rdi
  __m128i v46; // [rsp+0h] [rbp-118h]
  __m128i v47; // [rsp+20h] [rbp-F8h]
  __m128i v48; // [rsp+20h] [rbp-F8h]
  __m128i si128; // [rsp+30h] [rbp-E8h]
  __int32 v50; // [rsp+4Ch] [rbp-CCh]
  __int64 v51; // [rsp+50h] [rbp-C8h]
  const __m128i *v52; // [rsp+60h] [rbp-B8h]
  const __m128i *v53; // [rsp+68h] [rbp-B0h]
  const __m128i *v54; // [rsp+70h] [rbp-A8h]
  unsigned int v55; // [rsp+78h] [rbp-A0h]
  __int32 v56; // [rsp+7Ch] [rbp-9Ch]
  __m128i v57; // [rsp+80h] [rbp-98h] BYREF
  __m128i v58; // [rsp+90h] [rbp-88h] BYREF
  __m128i v59; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v60; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v61; // [rsp+C0h] [rbp-58h] BYREF
  __m128i v62[4]; // [rsp+D0h] [rbp-48h] BYREF

  v8 = *(unsigned int *)(a1 + 296);
  v9 = _mm_loadu_si128((const __m128i *)&a7);
  v10 = _mm_loadu_si128((const __m128i *)&a8);
  v57 = v9;
  v58 = v10;
  if ( !(_DWORD)v8 )
    return 0;
  v12 = *(_QWORD *)(a1 + 288);
  v13 = a7;
  v61 = v9;
  v14 = (const __m128i *)(v12 + (v8 << 6) - 64);
  v62[0] = v10;
  v15 = v14->m128i_i32[0];
  v16 = v14[1].m128i_i64[0];
  v59 = _mm_loadu_si128(v14);
  v17 = v15 - 1;
  v60 = _mm_loadu_si128(v14 + 1);
  if ( (unsigned int)(v15 - 1) <= 0x26 || (unsigned int)(v15 - 600) <= 4 )
    v16 = 0;
  v18 = (unsigned int)(a7 - 1) <= 0x26 || (unsigned int)(a7 - 600) <= 4 ? 0LL : v58.m128i_i64[0];
  v60.m128i_i64[0] = v16;
  v62[0].m128i_i64[0] = v18;
  v47 = _mm_load_si128(&v61);
  si128 = _mm_load_si128(v62);
  v46 = _mm_load_si128(&v59);
  v19 = _mm_load_si128(&v60);
  if ( !(unsigned __int8)sub_63A900(
                           a1,
                           a2,
                           v16,
                           v17,
                           a5,
                           a6,
                           v46.m128i_i32[0],
                           v46.m128i_i64[1],
                           v19.m128i_i64[0],
                           v19.m128i_i64[1],
                           v47.m128i_i32[0],
                           v47.m128i_i64[1],
                           si128.m128i_i64[0],
                           si128.m128i_i64[1]) )
    return 0;
  v23 = v14[3].m128i_i64[0];
  v24 = v14[2].m128i_u32[3];
  if ( v23 == v23 + 40LL * v14[3].m128i_u32[2] )
    goto LABEL_30;
  v54 = v14;
  v25 = (const __m128i *)v14[3].m128i_i64[0];
  v56 = v13;
  v52 = (const __m128i *)(v23 + 40LL * v14[3].m128i_u32[2]);
  do
  {
    while ( 1 )
    {
      if ( v25[2].m128i_i32[0] == 2 )
      {
        v61 = _mm_loadu_si128(v25);
        v62[0] = _mm_loadu_si128(v25 + 1);
        if ( v24 < *(_DWORD *)(a1 + 16) )
          break;
      }
      v25 = (const __m128i *)((char *)v25 + 40);
      if ( v52 == v25 )
        goto LABEL_29;
    }
    v53 = v25;
    v26 = 0;
    do
    {
      clang_getCursorReferenceNameRange(
        &v59,
        (void **)((char *)&dword_0 + 1),
        v26,
        v20,
        v21,
        v22,
        (__int128)_mm_load_si128(&v61),
        (__int128)_mm_load_si128(v62));
      v48 = _mm_load_si128(&v59);
      if ( (unsigned int)clang_Range_isNull(
                           (int)&v59,
                           1,
                           v27,
                           v28,
                           v29,
                           v30,
                           v48.m128i_i64[0],
                           v48.m128i_i64[1],
                           v60.m128i_i64[0]) )
        break;
      v31 = *(_DWORD *)(a1 + 16);
      if ( v24 >= v31 )
        break;
      v32 = v24;
      v50 = v60.m128i_i32[0];
      v33 = v24 + 1;
      v34 = 3 * v32;
      v21 = 32 * v32;
      v55 = v26;
      v35 = v60.m128i_i32[1] - 1;
      v36 = 8 * v34;
      v37 = v21;
      while ( 1 )
      {
        v39 = *(_DWORD *)(*(_QWORD *)a1 + v36 + 4);
        if ( !v39 )
          break;
        if ( v50 == v39 || v39 == v35 )
          goto LABEL_18;
        v51 = *(_QWORD *)(a1 + 272);
        if ( !(unsigned __int8)sub_CB1620(v51, v39) )
        {
          if ( (unsigned __int8)sub_CB1620(v51, v35) )
          {
            v40 = v55;
            v31 = *(_DWORD *)(a1 + 16);
            goto LABEL_27;
          }
LABEL_18:
          v38 = *(_QWORD *)(a1 + 8);
          *(__m128i *)(v38 + v37) = _mm_load_si128(&v61);
          *(__m128i *)(v38 + v37 + 16) = _mm_load_si128(v62);
        }
        v31 = *(_DWORD *)(a1 + 16);
        --v35;
        v36 += 24;
        v37 += 32;
        if ( v33 >= v31 )
          goto LABEL_28;
        ++v33;
      }
      v40 = v55;
LABEL_27:
      v24 = v33 - 1;
      v26 = v40 + 1;
    }
    while ( v24 < v31 );
LABEL_28:
    v20 = (__int64)v54;
    v25 = (const __m128i *)((char *)v53 + 40);
    v24 = v54[2].m128i_u32[3];
  }
  while ( v52 != (const __m128i *)&v53[2].m128i_u64[1] );
LABEL_29:
  v14 = v54;
  v13 = v56;
LABEL_30:
  v41 = *(_DWORD *)(a1 + 20);
  sub_5F9090(a1, 0, v14[2].m128i_i64[0], v20, v21, v22, (__int128)_mm_load_si128(&v57), _mm_load_si128(&v58));
  for ( ; v41 != v24; v42[1] = _mm_load_si128(&v58) )
  {
    v42 = (__m128i *)(*(_QWORD *)(a1 + 8) + 32LL * v24);
    if ( (unsigned int)(v42->m128i_i32[0] - 70) > 3 )
      break;
    v57.m128i_i32[0] = v13;
    ++v24;
    *v42 = _mm_load_si128(&v57);
  }
  if ( (unsigned int)(v13 - 400) <= 0x29 )
    *(_DWORD *)(a1 + 20) = v14[2].m128i_i32[2];
  v43 = (unsigned int)(*(_DWORD *)(a1 + 296) - 1);
  *(_DWORD *)(a1 + 296) = v43;
  v44 = *(_QWORD *)(a1 + 288) + (v43 << 6);
  v45 = *(void **)(v44 + 48);
  if ( v45 != (void *)(v44 + 64) )
    free(v45);
  return 0;
}

