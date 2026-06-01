__int64 __fastcall sub_D4040(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 i; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 j; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // eax
  __m128i v17; // xmm1
  __int64 v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rax
  __m128i v28; // xmm1
  __int64 v29; // rax
  __m128i v30; // xmm1
  __int64 v31; // rax
  char v33; // al

  v2 = qword_252590;
  v3 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  result = (__int64)((_QWORD)xmmword_252598 << 8) >> 10;
  v5 = (__int64)((_QWORD)xmmword_252598 << 8) >> 8;
  if ( result > 0 )
  {
    result = qword_252590 + (result << 10);
    while ( a1 != *(_DWORD *)v2 )
    {
      if ( a1 == *(_DWORD *)(v2 + 256) )
      {
        v2 += 256;
        goto LABEL_8;
      }
      if ( a1 == *(_DWORD *)(v2 + 512) )
      {
        v2 += 512;
        goto LABEL_8;
      }
      if ( a1 == *(_DWORD *)(v2 + 768) )
      {
        v2 += 768;
        goto LABEL_8;
      }
      v2 += 1024;
      if ( result == v2 )
      {
        v5 = (v3 - v2) >> 8;
        goto LABEL_41;
      }
    }
    goto LABEL_8;
  }
LABEL_41:
  if ( v5 == 2 )
    goto LABEL_54;
  if ( v5 == 3 )
  {
    if ( a1 == *(_DWORD *)v2 )
      goto LABEL_8;
    v2 += 256;
LABEL_54:
    if ( a1 == *(_DWORD *)v2 )
      goto LABEL_8;
    v2 += 256;
    goto LABEL_44;
  }
  if ( v5 != 1 )
    return result;
LABEL_44:
  if ( a1 != *(_DWORD *)v2 )
    return result;
LABEL_8:
  if ( v3 == v2 )
    return result;
  sub_C6660(v2, 0);
  sub_C14A0();
  if ( !byte_252749 && (HIDWORD(qword_2524B0) & 0xFFFFFFF) == 4 )
  {
    v33 = dword_245190;
    if ( (dword_245190 & 4) != 0 )
    {
      sub_8F740((__int64)"Debugger: thread %d has exited (code %d)\n", HIDWORD(qword_2524A0), (_DWORD)xmmword_2524B8);
      v33 = dword_245190;
    }
    if ( (v33 & 8) != 0 )
      sub_D3FD0();
    sub_C8830();
    if ( !*(_QWORD *)(v2 + 192) )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v2 + 192) )
  {
LABEL_12:
    *(_QWORD *)(v2 + 200) = 0;
    qfree();
  }
LABEL_13:
  if ( *(_QWORD *)(v2 + 120) )
  {
    *(_QWORD *)(v2 + 128) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v2 + 88) )
  {
    *(_QWORD *)(v2 + 96) = 0;
    qfree();
  }
  v6 = *(_QWORD *)(v2 + 64);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v2 + 72);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = v6 + 32 * i;
        if ( *(int *)v9 >= -1 && *(_QWORD *)(v9 + 8) )
        {
          *(_QWORD *)(v9 + 16) = 0;
          qfree();
          v6 = *(_QWORD *)(v2 + 64);
        }
      }
    }
    *(_QWORD *)(v2 + 72) = 0;
    qfree();
  }
  v10 = *(_QWORD *)(v2 + 40);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v2 + 48);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = v10 + 32 * j;
        if ( *(int *)v13 >= -1 && *(_QWORD *)(v13 + 8) )
        {
          *(_QWORD *)(v13 + 16) = 0;
          qfree();
          v10 = *(_QWORD *)(v2 + 40);
        }
      }
    }
    *(_QWORD *)(v2 + 48) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v2 + 8) )
  {
    *(_QWORD *)(v2 + 16) = 0;
    qfree();
  }
  v14 = xmmword_252598;
  v15 = ((qword_252590 + ((_QWORD)xmmword_252598 << 8) - v2) >> 8) - 2;
  if ( v15 >= 0 )
  {
    do
    {
      v16 = *(_DWORD *)(v2 + 256);
      v17 = _mm_loadu_si128((const __m128i *)(v2 + 272));
      *(_OWORD *)(v2 + 272) = 0;
      *(_DWORD *)v2 = v16;
      v18 = *(_QWORD *)(v2 + 264);
      *(__m128i *)(v2 + 16) = v17;
      v19 = _mm_loadu_si128((const __m128i *)(v2 + 304));
      *(_QWORD *)(v2 + 8) = v18;
      LOWORD(v18) = *(_WORD *)(v2 + 288);
      *(__m128i *)(v2 + 48) = v19;
      v20 = _mm_loadu_si128((const __m128i *)(v2 + 328));
      *(_WORD *)(v2 + 32) = v18;
      LOBYTE(v18) = *(_BYTE *)(v2 + 290);
      *(__m128i *)(v2 + 72) = v20;
      v21 = _mm_loadu_si128((const __m128i *)(v2 + 352));
      *(_BYTE *)(v2 + 34) = v18;
      LODWORD(v18) = *(_DWORD *)(v2 + 292);
      *(__m128i *)(v2 + 96) = v21;
      *(_DWORD *)(v2 + 36) = v18;
      v22 = *(_QWORD *)(v2 + 296);
      *(_QWORD *)(v2 + 264) = 0;
      *(_QWORD *)(v2 + 40) = v22;
      v23 = *(_QWORD *)(v2 + 320);
      *(_QWORD *)(v2 + 296) = 0;
      *(_QWORD *)(v2 + 64) = v23;
      v24 = *(_QWORD *)(v2 + 344);
      *(_QWORD *)(v2 + 320) = 0;
      *(_QWORD *)(v2 + 88) = v24;
      *(_QWORD *)(v2 + 344) = 0;
      *(_OWORD *)(v2 + 304) = 0;
      *(_OWORD *)(v2 + 328) = 0;
      *(_OWORD *)(v2 + 352) = 0;
      LOBYTE(v24) = *(_BYTE *)(v2 + 368);
      v25 = _mm_loadu_si128((const __m128i *)(v2 + 384));
      v26 = _mm_loadu_si128((const __m128i *)(v2 + 416));
      *(_OWORD *)(v2 + 384) = 0;
      *(_BYTE *)(v2 + 112) = v24;
      v27 = *(_QWORD *)(v2 + 376);
      *(__m128i *)(v2 + 128) = v25;
      v28 = _mm_loadu_si128((const __m128i *)(v2 + 432));
      *(_QWORD *)(v2 + 120) = v27;
      v29 = *(_QWORD *)(v2 + 400);
      *(__m128i *)(v2 + 176) = v28;
      v30 = _mm_loadu_si128((const __m128i *)(v2 + 456));
      *(_QWORD *)(v2 + 144) = v29;
      LOWORD(v29) = *(_WORD *)(v2 + 408);
      *(_QWORD *)(v2 + 376) = 0;
      *(_WORD *)(v2 + 152) = v29;
      LOWORD(v29) = *(_WORD *)(v2 + 410);
      *(_QWORD *)(v2 + 464) = 0;
      *(_WORD *)(v2 + 154) = v29;
      LOBYTE(v29) = *(_BYTE *)(v2 + 412);
      *(__m128i *)(v2 + 160) = v26;
      *(_BYTE *)(v2 + 156) = v29;
      v31 = *(_QWORD *)(v2 + 448);
      *(__m128i *)(v2 + 200) = v30;
      *(_QWORD *)(v2 + 192) = v31;
      LODWORD(v31) = *(_DWORD *)(v2 + 472);
      *(_QWORD *)(v2 + 448) = 0;
      *(_DWORD *)(v2 + 216) = v31;
      *(_QWORD *)(v2 + 224) = *(_QWORD *)(v2 + 480);
      *(_BYTE *)(v2 + 232) = *(_BYTE *)(v2 + 488);
      *(__m128i *)(v2 + 240) = _mm_loadu_si128((const __m128i *)(v2 + 496));
      v2 += 256;
    }
    while ( v15-- != 0 );
    v14 = xmmword_252598;
  }
  *(_QWORD *)&xmmword_252598 = v14 - 1;
  HIDWORD(qword_252280) = 0;
  result = mark_builtin_widgets();
  if ( a1 == dword_252588 )
    return sub_D3B40(0, 0);
  return result;
}

