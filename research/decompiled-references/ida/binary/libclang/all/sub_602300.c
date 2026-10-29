__int64 __fastcall sub_602300(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  unsigned int v10; // ecx
  char v11; // al
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // r14d
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __m128i *v22; // rdi
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rbp
  int v27; // eax
  const __m128i *v28; // rdx
  __m128i v29; // xmm0
  unsigned int v30; // eax
  unsigned int v31; // r15d
  char v32; // al
  __int64 v33; // rax
  int v34; // edx
  unsigned int v35; // ebx
  __int64 v36; // rbp
  char v37; // al
  int v38; // eax
  const __m128i *v39; // rax
  __m128i si128; // [rsp+0h] [rbp-98h]
  __m128i v41; // [rsp+0h] [rbp-98h]
  unsigned int v43; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v44; // [rsp+2Ch] [rbp-6Ch]
  __m128i v45; // [rsp+30h] [rbp-68h] BYREF
  __int128 v46; // [rsp+40h] [rbp-58h] BYREF
  __m128i v47[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( !*(_DWORD *)(a1 + 84) )
    return 257;
  if ( !*(_DWORD *)(a1 + 88) )
    goto LABEL_4;
  v12 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
  v13 = (__int128)_mm_loadu_si128((const __m128i *)&a8);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  v46 = v12;
  v15 = (unsigned int)(a7 - 1);
  v47[0] = (__m128i)v13;
  if ( (unsigned int)v15 <= 0x26 || (unsigned int)(a7 - 600) <= 4 )
  {
    si128 = _mm_load_si128((const __m128i *)&v46);
    v19 = sub_63A250(a1, a2, v15, a4, a5, a6, si128.m128i_i32[0], si128.m128i_i64[1]);
    v10 = a4;
    v21 = v19;
    if ( !v19 )
      goto LABEL_12;
    LODWORD(v22) = v19;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v19 + 16LL))(v19, a2, v20, a4);
    v10 = a4;
    v26 = v23;
    v17 = v23;
    v27 = *(_BYTE *)(v21 + 28) & 0x7F;
    LODWORD(a2) = v27;
    if ( (unsigned int)(v27 - 32) > 0x11 )
    {
      if ( (_BYTE)v27 != 62 )
        goto LABEL_24;
      v39 = (const __m128i *)(*(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v21 + 80) & 4) != 0 )
        v39 = (const __m128i *)v39->m128i_i64[0];
      if ( !v39 )
        goto LABEL_24;
      v29 = _mm_unpacklo_epi64(_mm_loadl_epi64(v39), (__m128i)(unsigned __int64)&v39->m128i_u64[1]);
    }
    else
    {
      v28 = (const __m128i *)(*(_QWORD *)(v21 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      a2 = *(_QWORD *)(v21 + 56) & 4LL;
      if ( (*(_QWORD *)(v21 + 56) & 4) != 0 )
        v28 = (const __m128i *)v28[2].m128i_i64[0];
      if ( !v28 )
        goto LABEL_33;
      v29 = _mm_unpacklo_epi64(_mm_loadl_epi64(v28), (__m128i)(unsigned __int64)&v28->m128i_u64[1]);
    }
    v22 = &v45;
    v45 = v29;
    v30 = sub_B1E2D0(&v45);
    v10 = a4;
    v31 = v30;
    if ( v30 )
    {
      if ( !(_DWORD)v26 )
      {
        if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 38 <= 6 )
          goto LABEL_22;
LABEL_12:
        v11 = 0;
        goto LABEL_6;
      }
      LODWORD(a2) = v30;
      LODWORD(v22) = v14;
      v38 = sub_CB1620(v14, v30);
      v10 = a4;
      LODWORD(v28) = v38;
      v27 = *(_BYTE *)(v21 + 28) & 0x7F;
      if ( (_BYTE)v28 )
        v17 = v31;
    }
    else
    {
      v27 = *(_BYTE *)(v21 + 28) & 0x7F;
    }
LABEL_33:
    if ( (unsigned int)(v27 - 38) > 6 )
    {
LABEL_24:
      v18 = HIDWORD(v26);
      goto LABEL_10;
    }
LABEL_22:
    v43 = v10;
    v41 = _mm_load_si128((const __m128i *)&v46);
    v32 = sub_63A940(
            (_DWORD)v22,
            a2,
            (_DWORD)v28,
            v10,
            v24,
            v25,
            v41.m128i_i32[0],
            v41.m128i_i32[2],
            _mm_load_si128(v47).m128i_i64[0]);
    v10 = v43;
    if ( !v32 )
      v17 = *(_DWORD *)(v21 + 24);
    goto LABEL_24;
  }
  v16 = sub_5FD3D0(a1, a2, v15, a4, a5, a6, v12, v13);
  v10 = a4;
  v17 = v16;
  v18 = HIDWORD(v16);
LABEL_10:
  if ( !v17 )
    goto LABEL_12;
  if ( !(_DWORD)v18 )
    goto LABEL_12;
  v33 = *(_QWORD *)(a1 + 8);
  v34 = *(_DWORD *)(a1 + 84);
  v35 = *(_DWORD *)(a1 + 88);
  v36 = *(_QWORD *)(v33 + 32);
  if ( (_DWORD)v18 != v34 )
  {
    v44 = v10;
    v37 = sub_CB1620(*(_QWORD *)(v33 + 32), v18);
    v10 = v44;
    if ( v37 )
      goto LABEL_12;
  }
  if ( v35 != v17 && (unsigned __int8)sub_CB1620(v36, v35) )
  {
    v10 = 0;
    goto LABEL_5;
  }
LABEL_4:
  v10 = 1;
LABEL_5:
  v11 = 1;
LABEL_6:
  BYTE1(v10) = v11;
  return v10;
}

