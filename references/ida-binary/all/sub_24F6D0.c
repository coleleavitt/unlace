__int64 __fastcall sub_24F6D0(
        int a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 i; // r12
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 j; // r12
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r12
  int v38; // eax
  __m128i v39; // xmm1
  __int64 v40; // rax
  __m128i v41; // xmm1
  __m128i v42; // xmm1
  __m128i v43; // xmm1
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __m128i v47; // xmm1
  __int64 v48; // rax
  __m128i v49; // xmm1
  __int64 v50; // rax
  __m128i v51; // xmm1
  __int64 v52; // rax
  __int64 v54; // rdx
  char *v55; // rcx
  double v56; // xmm4_8
  double v57; // xmm5_8
  char v58; // al
  char v59; // [rsp+0h] [rbp-28h]

  v10 = qword_8CC430;
  v11 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  result = (__int64)((_QWORD)xmmword_8CC438 << 8) >> 10;
  v13 = (__int64)((_QWORD)xmmword_8CC438 << 8) >> 8;
  if ( result > 0 )
  {
    result = qword_8CC430 + (result << 10);
    while ( a1 != *(_DWORD *)v10 )
    {
      if ( a1 == *(_DWORD *)(v10 + 256) )
      {
        v10 += 256;
        goto LABEL_8;
      }
      if ( a1 == *(_DWORD *)(v10 + 512) )
      {
        v10 += 512;
        goto LABEL_8;
      }
      if ( a1 == *(_DWORD *)(v10 + 768) )
      {
        v10 += 768;
        goto LABEL_8;
      }
      v10 += 1024;
      if ( result == v10 )
      {
        v13 = (v11 - v10) >> 8;
        goto LABEL_42;
      }
    }
    goto LABEL_8;
  }
LABEL_42:
  if ( v13 == 2 )
    goto LABEL_55;
  if ( v13 == 3 )
  {
    if ( a1 == *(_DWORD *)v10 )
      goto LABEL_8;
    v10 += 256;
LABEL_55:
    if ( a1 == *(_DWORD *)v10 )
      goto LABEL_8;
    v10 += 256;
    goto LABEL_45;
  }
  if ( v13 != 1 )
    return result;
LABEL_45:
  if ( a1 != *(_DWORD *)v10 )
    return result;
LABEL_8:
  if ( v11 == v10 )
    return result;
  sub_235140(v10, 0, v11, *(double *)a2.m128_u64);
  v14 = v10;
  v15 = byte_9;
  sub_22FC60(9u, v10);
  if ( !byte_8CC5ED && (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 4 )
  {
    v58 = dword_8BA5B0;
    if ( (dword_8BA5B0 & 4) != 0 )
    {
      v14 = HIDWORD(qword_8CC340);
      v15 = "Debugger: thread %d has exited (code %d)\n";
      sub_169700(
        (int)"Debugger: thread %d has exited (code %d)\n",
        HIDWORD(qword_8CC340),
        (unsigned int)xmmword_8CC358,
        (__int64)v17,
        v18,
        v19,
        a2,
        a3,
        a4,
        a5,
        v20,
        v21,
        a8,
        a9,
        v59);
      v58 = dword_8BA5B0;
    }
    if ( (v58 & 8) != 0 )
      sub_24F660(
        *(double *)a2.m128_u64,
        a3,
        a4,
        a5,
        *(double *)v20.m128_u64,
        *(double *)v21.m128_u64,
        a8,
        a9,
        (__int64)v15,
        v14,
        v16,
        v17);
    v14 = (__int64)&qword_8CC340;
    sub_236E30(6u, &qword_8CC340);
    v22 = *(_QWORD *)(v10 + 192);
    if ( !v22 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v22 = *(_QWORD *)(v10 + 192);
  if ( v22 )
  {
LABEL_12:
    *(_QWORD *)(v10 + 200) = 0;
    *(double *)a2.m128_u64 = qfree(v22, (const char *)v14);
  }
LABEL_13:
  v23 = *(_QWORD *)(v10 + 120);
  if ( v23 )
  {
    *(_QWORD *)(v10 + 128) = 0;
    *(double *)a2.m128_u64 = qfree(v23, (const char *)v14, *(double *)a2.m128_u64);
  }
  v24 = *(_QWORD *)(v10 + 88);
  if ( v24 )
  {
    *(_QWORD *)(v10 + 96) = 0;
    *(double *)a2.m128_u64 = qfree(v24, (const char *)v14, *(double *)a2.m128_u64);
  }
  v25 = *(_QWORD *)(v10 + 64);
  if ( v25 )
  {
    v26 = *(_QWORD *)(v10 + 72);
    if ( v26 )
    {
      for ( i = 0; i != v26; ++i )
      {
        v28 = v25 + 32 * i;
        if ( *(int *)v28 >= -1 )
        {
          v29 = *(_QWORD *)(v28 + 8);
          if ( v29 )
          {
            *(_QWORD *)(v28 + 16) = 0;
            *(double *)a2.m128_u64 = qfree(v29, (const char *)v14, *(double *)a2.m128_u64);
            v25 = *(_QWORD *)(v10 + 64);
          }
        }
      }
    }
    *(_QWORD *)(v10 + 72) = 0;
    *(double *)a2.m128_u64 = qfree(v25, (const char *)v14, *(double *)a2.m128_u64);
  }
  v30 = *(_QWORD *)(v10 + 40);
  if ( v30 )
  {
    v31 = *(_QWORD *)(v10 + 48);
    if ( v31 )
    {
      for ( j = 0; j != v31; ++j )
      {
        v33 = v30 + 32 * j;
        if ( *(int *)v33 >= -1 )
        {
          v34 = *(_QWORD *)(v33 + 8);
          if ( v34 )
          {
            *(_QWORD *)(v33 + 16) = 0;
            *(double *)a2.m128_u64 = qfree(v34, (const char *)v14, *(double *)a2.m128_u64);
            v30 = *(_QWORD *)(v10 + 40);
          }
        }
      }
    }
    *(_QWORD *)(v10 + 48) = 0;
    *(double *)a2.m128_u64 = qfree(v30, (const char *)v14, *(double *)a2.m128_u64);
  }
  v35 = *(_QWORD *)(v10 + 8);
  if ( v35 )
  {
    *(_QWORD *)(v10 + 16) = 0;
    *(double *)a2.m128_u64 = qfree(v35, (const char *)v14, *(double *)a2.m128_u64);
  }
  v36 = xmmword_8CC438;
  v37 = ((qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8) - v10) >> 8) - 2;
  if ( v37 >= 0 )
  {
    a2.m128_u64[0] = 0;
    do
    {
      v38 = *(_DWORD *)(v10 + 256);
      v39 = _mm_loadu_si128((const __m128i *)(v10 + 272));
      *(_OWORD *)(v10 + 272) = 0;
      *(_DWORD *)v10 = v38;
      v40 = *(_QWORD *)(v10 + 264);
      *(__m128i *)(v10 + 16) = v39;
      v41 = _mm_loadu_si128((const __m128i *)(v10 + 304));
      *(_QWORD *)(v10 + 8) = v40;
      LOWORD(v40) = *(_WORD *)(v10 + 288);
      *(__m128i *)(v10 + 48) = v41;
      v42 = _mm_loadu_si128((const __m128i *)(v10 + 328));
      *(_WORD *)(v10 + 32) = v40;
      LOBYTE(v40) = *(_BYTE *)(v10 + 290);
      *(__m128i *)(v10 + 72) = v42;
      v43 = _mm_loadu_si128((const __m128i *)(v10 + 352));
      *(_BYTE *)(v10 + 34) = v40;
      LODWORD(v40) = *(_DWORD *)(v10 + 292);
      *(__m128i *)(v10 + 96) = v43;
      *(_DWORD *)(v10 + 36) = v40;
      v44 = *(_QWORD *)(v10 + 296);
      *(_QWORD *)(v10 + 264) = 0;
      *(_QWORD *)(v10 + 40) = v44;
      v45 = *(_QWORD *)(v10 + 320);
      *(_QWORD *)(v10 + 296) = 0;
      *(_QWORD *)(v10 + 64) = v45;
      v46 = *(_QWORD *)(v10 + 344);
      *(_QWORD *)(v10 + 320) = 0;
      *(_QWORD *)(v10 + 88) = v46;
      *(_QWORD *)(v10 + 344) = 0;
      *(_OWORD *)(v10 + 304) = 0;
      *(_OWORD *)(v10 + 328) = 0;
      *(_OWORD *)(v10 + 352) = 0;
      LOBYTE(v46) = *(_BYTE *)(v10 + 368);
      v47 = _mm_loadu_si128((const __m128i *)(v10 + 384));
      a4 = (__m128)_mm_loadu_si128((const __m128i *)(v10 + 416));
      *(_OWORD *)(v10 + 384) = 0;
      *(_BYTE *)(v10 + 112) = v46;
      v48 = *(_QWORD *)(v10 + 376);
      *(__m128i *)(v10 + 128) = v47;
      v49 = _mm_loadu_si128((const __m128i *)(v10 + 432));
      *(_QWORD *)(v10 + 120) = v48;
      v50 = *(_QWORD *)(v10 + 400);
      *(__m128i *)(v10 + 176) = v49;
      v51 = _mm_loadu_si128((const __m128i *)(v10 + 456));
      *(_QWORD *)(v10 + 144) = v50;
      LOWORD(v50) = *(_WORD *)(v10 + 408);
      *(_QWORD *)(v10 + 376) = 0;
      *(_WORD *)(v10 + 152) = v50;
      LOWORD(v50) = *(_WORD *)(v10 + 410);
      *(_QWORD *)(v10 + 464) = 0;
      *(_WORD *)(v10 + 154) = v50;
      LOBYTE(v50) = *(_BYTE *)(v10 + 412);
      *(__m128 *)(v10 + 160) = a4;
      *(_BYTE *)(v10 + 156) = v50;
      v52 = *(_QWORD *)(v10 + 448);
      *(__m128i *)(v10 + 200) = v51;
      *(_QWORD *)(v10 + 192) = v52;
      LODWORD(v52) = *(_DWORD *)(v10 + 472);
      *(_QWORD *)(v10 + 448) = 0;
      *(_DWORD *)(v10 + 216) = v52;
      *(_QWORD *)(v10 + 224) = *(_QWORD *)(v10 + 480);
      *(_BYTE *)(v10 + 232) = *(_BYTE *)(v10 + 488);
      a3 = (__m128)_mm_loadu_si128((const __m128i *)(v10 + 496));
      *(__m128 *)(v10 + 240) = a3;
      v10 += 256;
    }
    while ( v37-- != 0 );
    v36 = xmmword_8CC438;
  }
  *(_QWORD *)&xmmword_8CC438 = v36 - 1;
  HIDWORD(qword_8CC120) = 0;
  result = mark_builtin_widgets(0x4000, 0, 1);
  if ( a1 == (_DWORD)dword_8CC428 )
    return sub_24F380(0, 0, *(double *)a2.m128_u64, a3, a4, a5, v56, v57, a8, a9, v54, v55);
  return result;
}
