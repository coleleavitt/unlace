/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438860
// Address: 0x0000000000438860

//----- (0000000000438860) ----------------------------------------------------
unsigned __int64 __fastcall sub_438860(_QWORD *a1)
{
  __int64 v2; // rdi
  __m128i si128; // xmm1
  _WORD *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  void *v7; // r12
  __int64 v8; // r12
  _WORD *v9; // rsi
  _WORD *v10; // rsi
  char *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  char *v15; // rbp
  __int64 v16; // r14
  char *v17; // r13
  __int128 v18; // xmm1
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  void *v23; // rdi
  _WORD *v25; // rax
  _WORD *v26; // rax

  v2 = (__int64)(a1 + 8);
  *(_WORD *)(v2 + 120) = 9052;
  si128 = _mm_load_si128((const __m128i *)&xmmword_48F580);
  *(_QWORD *)(v2 - 48) = 0;
  *(_QWORD *)(v2 - 56) = sub_43C950;
  *(_QWORD *)(v2 - 64) = &off_4C2C60;
  *(_QWORD *)(v2 - 24) = 0;
  *(_QWORD *)v2 = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 112) = 0x2727222200000000LL;
  *(_BYTE *)(v2 + 48) = 0;
  *(_OWORD *)(v2 - 40) = 0;
  *(_OWORD *)(v2 - 16) = 0;
  *(_OWORD *)(v2 + 8) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(__m128i *)(v2 + 52) = si128;
  *(_OWORD *)(v2 + 80) = 0;
  v4 = sub_481540(v2, nullptr, 3u, 1u);
  a1[8] = v4;
  a1[9] = 3;
  *v4 = 12079;
  *(_BYTE *)(a1[8] + 2LL) = 0;
  v5 = a1[12];
  v6 = a1[13];
  if ( v6 < v5 + 1 )
  {
    v12 = (char *)sub_481540((__int64)(a1 + 11), nullptr, v5 + 1, 0x30u);
    v13 = a1[12];
    v14 = a1[13];
    v7 = v12;
    a1[13] = v6;
    v15 = (char *)a1[11];
    v16 = v13 - 1;
    if ( v16 >= 0 )
    {
      v17 = v12;
      v18 = 0;
      do
      {
        v19 = *(_QWORD *)v15;
        v20 = _mm_loadu_si128((const __m128i *)(v15 + 8));
        *(_OWORD *)(v15 + 8) = v18;
        *(_QWORD *)v15 = 0;
        *(_QWORD *)v17 = v19;
        *(__m128i *)(v17 + 8) = v20;
        v21 = *((_QWORD *)v15 + 3);
        v22 = _mm_loadu_si128((const __m128i *)v15 + 2);
        *((_QWORD *)v15 + 3) = 0;
        *((_QWORD *)v17 + 3) = v21;
        *((__m128i *)v17 + 2) = v22;
        v23 = *(void **)v15;
        *((_QWORD *)v15 + 5) = 0;
        if ( v23 )
        {
          *((_QWORD *)v15 + 1) = 0;
          j__free(v23);
          v18 = 0;
        }
        v15 += 48;
        v17 += 48;
      }
      while ( v16-- != 0 );
      v15 = (char *)a1[11];
    }
    j__free(v15);
    a1[11] = v7;
    v5 = a1[12];
    a1[13] = v14;
  }
  else
  {
    v7 = (void *)a1[11];
  }
  v8 = (__int64)v7 + 48 * v5;
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_OWORD *)(v8 + 32) = 0;
  ++a1[12];
  v9 = *(_WORD **)v8;
  if ( *(_QWORD *)(v8 + 16) <= 2u )
  {
    v26 = sub_481540(v8, v9, 3u, 1u);
    *(_QWORD *)v8 = v26;
    v9 = v26;
  }
  *(_QWORD *)(v8 + 8) = 3;
  *v9 = 10799;
  *(_BYTE *)(*(_QWORD *)v8 + 2LL) = 0;
  v10 = *(_WORD **)(v8 + 24);
  if ( *(_QWORD *)(v8 + 40) <= 2u )
  {
    v25 = sub_481540(v8 + 24, v10, 3u, 1u);
    *(_QWORD *)(v8 + 24) = v25;
    v10 = v25;
  }
  *(_QWORD *)(v8 + 32) = 3;
  *v10 = 12074;
  *(_BYTE *)(*(_QWORD *)(v8 + 24) + 2LL) = 0;
  sub_437DE0(a1, "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw", 1);
  sub_437DE0(a1, "long|string|__int64|success|char|float|void", 2);
  return sub_437DE0(a1, "BADADDR|BADSEL|MAXADDR", 3);
}
// 48F580: using guessed type __int128 xmmword_48F580;
// 4C2C60: using guessed type __int64 (__fastcall *off_4C2C60)();
