__int64 __fastcall sub_D2B10(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 result; // rax
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
  __int64 v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // rax
  __m128i v29; // xmm1
  __m128i v30; // xmm1
  __int64 v31; // rax
  __int64 v32; // rax
  char v34; // al

  v2 = qword_251410;
  v3 = qword_251410 + 232 * xmmword_251418;
  v4 = 0x34F72C234F72C235LL * ((232 * (__int64)xmmword_251418) >> 3);
  result = v4 >> 2;
  if ( v4 >> 2 > 0 )
  {
    result = qword_251410 + 928 * result;
    while ( a1 != *(_DWORD *)v2 )
    {
      if ( a1 == *(_DWORD *)(v2 + 232) )
      {
        v2 += 232;
        goto LABEL_8;
      }
      if ( a1 == *(_DWORD *)(v2 + 464) )
      {
        v2 += 464;
        goto LABEL_8;
      }
      if ( a1 == *(_DWORD *)(v2 + 696) )
      {
        v2 += 696;
        goto LABEL_8;
      }
      v2 += 928;
      if ( v2 == result )
      {
        result = 0x34F72C234F72C235LL;
        v4 = 0x34F72C234F72C235LL * ((v3 - v2) >> 3);
        goto LABEL_41;
      }
    }
    goto LABEL_8;
  }
LABEL_41:
  if ( v4 == 2 )
    goto LABEL_54;
  if ( v4 == 3 )
  {
    if ( a1 == *(_DWORD *)v2 )
      goto LABEL_8;
    v2 += 232;
LABEL_54:
    if ( a1 == *(_DWORD *)v2 )
      goto LABEL_8;
    v2 += 232;
    goto LABEL_44;
  }
  if ( v4 != 1 )
    return result;
LABEL_44:
  if ( a1 != *(_DWORD *)v2 )
    return result;
LABEL_8:
  if ( v3 == v2 )
    return result;
  sub_C5200(v2, 0);
  sub_C0300();
  if ( !byte_2515A1 && (qword_251330 & 0xFFFFFFF) == 4 )
  {
    v34 = dword_24412C;
    if ( (dword_24412C & 4) != 0 )
    {
      sub_8F660((__int64)"Debugger: thread %d has exited (code %d)\n", HIDWORD(qword_251320), HIDWORD(qword_251330));
      v34 = dword_24412C;
    }
    if ( (v34 & 8) != 0 )
      sub_D2AA0();
    sub_C73B0();
    if ( !*(_QWORD *)(v2 + 176) )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v2 + 176) )
  {
LABEL_12:
    *(_QWORD *)(v2 + 184) = 0;
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
  v14 = xmmword_251418;
  v15 = 0x34F72C234F72C235LL * ((qword_251410 + 232 * (__int64)xmmword_251418 - v2) >> 3) - 2;
  if ( v15 >= 0 )
  {
    do
    {
      v16 = *(_DWORD *)(v2 + 232);
      v17 = _mm_loadu_si128((const __m128i *)(v2 + 248));
      *(_OWORD *)(v2 + 248) = 0;
      *(_DWORD *)v2 = v16;
      v18 = *(_QWORD *)(v2 + 240);
      *(__m128i *)(v2 + 16) = v17;
      v19 = _mm_loadu_si128((const __m128i *)(v2 + 280));
      *(_QWORD *)(v2 + 8) = v18;
      LOWORD(v18) = *(_WORD *)(v2 + 264);
      *(__m128i *)(v2 + 48) = v19;
      v20 = _mm_loadu_si128((const __m128i *)(v2 + 304));
      *(_WORD *)(v2 + 32) = v18;
      LOBYTE(v18) = *(_BYTE *)(v2 + 266);
      *(__m128i *)(v2 + 72) = v20;
      v21 = _mm_loadu_si128((const __m128i *)(v2 + 328));
      *(_BYTE *)(v2 + 34) = v18;
      LODWORD(v18) = *(_DWORD *)(v2 + 268);
      *(__m128i *)(v2 + 96) = v21;
      *(_DWORD *)(v2 + 36) = v18;
      v22 = *(_QWORD *)(v2 + 272);
      *(_QWORD *)(v2 + 240) = 0;
      *(_QWORD *)(v2 + 40) = v22;
      v23 = *(_QWORD *)(v2 + 296);
      *(_QWORD *)(v2 + 272) = 0;
      *(_QWORD *)(v2 + 64) = v23;
      v24 = *(_QWORD *)(v2 + 320);
      *(_QWORD *)(v2 + 296) = 0;
      *(_QWORD *)(v2 + 88) = v24;
      *(_QWORD *)(v2 + 320) = 0;
      *(_OWORD *)(v2 + 280) = 0;
      *(_OWORD *)(v2 + 304) = 0;
      *(_OWORD *)(v2 + 328) = 0;
      LOBYTE(v24) = *(_BYTE *)(v2 + 344);
      v25 = _mm_loadu_si128((const __m128i *)(v2 + 360));
      *(_OWORD *)(v2 + 360) = 0;
      *(_BYTE *)(v2 + 112) = v24;
      v26 = *(_QWORD *)(v2 + 352);
      *(__m128i *)(v2 + 128) = v25;
      v27 = _mm_loadu_si128((const __m128i *)(v2 + 392));
      *(_QWORD *)(v2 + 120) = v26;
      v28 = *(_QWORD *)(v2 + 376);
      *(__m128i *)(v2 + 160) = v27;
      v29 = _mm_loadu_si128((const __m128i *)(v2 + 416));
      *(_QWORD *)(v2 + 144) = v28;
      LOWORD(v28) = *(_WORD *)(v2 + 384);
      *(__m128i *)(v2 + 184) = v29;
      v30 = _mm_loadu_si128((const __m128i *)(v2 + 448));
      *(_WORD *)(v2 + 152) = v28;
      LOWORD(v28) = *(_WORD *)(v2 + 386);
      *(_QWORD *)(v2 + 352) = 0;
      *(_WORD *)(v2 + 154) = v28;
      LOBYTE(v28) = *(_BYTE *)(v2 + 388);
      *(_QWORD *)(v2 + 424) = 0;
      *(_BYTE *)(v2 + 156) = v28;
      v31 = *(_QWORD *)(v2 + 408);
      *(__m128i *)(v2 + 216) = v30;
      *(_QWORD *)(v2 + 176) = v31;
      v32 = *(_QWORD *)(v2 + 432);
      *(_QWORD *)(v2 + 408) = 0;
      *(_QWORD *)(v2 + 200) = v32;
      *(_BYTE *)(v2 + 208) = *(_BYTE *)(v2 + 440);
      v2 += 232;
    }
    while ( v15-- != 0 );
    v14 = xmmword_251418;
  }
  *(_QWORD *)&xmmword_251418 = v14 - 1;
  HIDWORD(qword_2511A0) = 0;
  result = mark_builtin_widgets();
  if ( a1 == dword_251408 )
    return sub_D2660(0, 0);
  return result;
}

