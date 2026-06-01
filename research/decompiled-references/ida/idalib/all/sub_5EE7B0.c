__int64 __fastcall sub_5EE7B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 (*a12)(),
        __int64 a13)
{
  __int64 (*v14)(); // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // r12
  char *v20; // r15
  __int64 v21; // rbp
  __int64 v22; // r13
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __m128i v26; // xmm0
  void *v27; // rdi
  void *v28; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  char *v32; // rax
  bool v33; // zf
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  v14 = a12;
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)a1 = a5;
  *(_QWORD *)(a1 + 8) = a6;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 248) = a7;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 256) = a10;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 264) = a11;
  if ( !a12 )
    v14 = sub_5E14E0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_BYTE *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 272) = v14;
  *(_DWORD *)(a1 + 228) = 0;
  *(_QWORD *)(a1 + 280) = a13;
  *(_QWORD *)(a1 + 312) = a1 + 296;
  *(_QWORD *)(a1 + 320) = a1 + 296;
  *(_QWORD *)(a1 + 360) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 344;
  v15 = a1 + 704;
  *(_OWORD *)(v15 - 528) = 0;
  *(_OWORD *)(v15 - 504) = 0;
  *(_QWORD *)(v15 - 472) = 0;
  *(_DWORD *)(v15 - 408) = 0;
  *(_QWORD *)(v15 - 400) = 0;
  *(_QWORD *)(v15 - 376) = 0;
  *(_DWORD *)(v15 - 360) = 0;
  *(_QWORD *)(v15 - 352) = 0;
  *(_QWORD *)(v15 - 328) = 0;
  *(_OWORD *)(v15 - 320) = 0;
  *(_OWORD *)(v15 - 304) = 0;
  *(_QWORD *)(v15 - 288) = 0;
  *(_OWORD *)(v15 - 280) = 0;
  *(_QWORD *)(v15 - 264) = 0;
  *(_QWORD *)(v15 - 240) = 0;
  *(_QWORD *)(v15 - 192) = 0;
  *(_QWORD *)(v15 - 168) = 0;
  *(_QWORD *)(v15 - 144) = 0;
  *(_QWORD *)(v15 - 120) = 0;
  *(_QWORD *)(v15 - 96) = 0;
  *(_QWORD *)(v15 - 72) = 0;
  *(_QWORD *)(v15 - 32) = 0;
  *(_DWORD *)(v15 - 8) = 0;
  *(_QWORD *)v15 = 0;
  *(_BYTE *)(v15 + 24) = 0;
  *(_OWORD *)(v15 - 256) = 0;
  *(_OWORD *)(v15 - 232) = 0;
  *(_OWORD *)(v15 - 208) = 0;
  *(_OWORD *)(v15 - 184) = 0;
  *(_OWORD *)(v15 - 160) = 0;
  *(_OWORD *)(v15 - 136) = 0;
  *(_OWORD *)(v15 - 112) = 0;
  *(_OWORD *)(v15 - 88) = 0;
  *(_OWORD *)(v15 - 64) = 0;
  *(_OWORD *)(v15 - 48) = 0;
  *(_OWORD *)(v15 - 24) = 0;
  *(_OWORD *)(v15 + 8) = 0;
  v16 = qvector_reserve(v15, 0, 1, 56);
  v17 = *(_QWORD *)(a1 + 712);
  v18 = *(_QWORD *)(a1 + 720);
  v19 = v16;
  *(_QWORD *)(a1 + 720) = 0;
  v20 = *(char **)(a1 + 704);
  v21 = v17 - 1;
  if ( v21 >= 0 )
  {
    v22 = v16;
    do
    {
      v23 = *(_QWORD *)v20;
      v24 = _mm_loadu_si128((const __m128i *)(v20 + 8));
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      *(_QWORD *)v22 = v23;
      *(__m128i *)(v22 + 8) = v24;
      v25 = *((_QWORD *)v20 + 3);
      v26 = _mm_loadu_si128((const __m128i *)v20 + 2);
      *((_QWORD *)v20 + 3) = 0;
      *(_QWORD *)(v22 + 24) = v25;
      *(__m128i *)(v22 + 32) = v26;
      LODWORD(v25) = *((_DWORD *)v20 + 12);
      *((_QWORD *)v20 + 5) = 0;
      *(_DWORD *)(v22 + 48) = v25;
      *(_DWORD *)(v22 + 52) = *((_DWORD *)v20 + 13);
      v27 = *((void **)v20 + 3);
      if ( v27 )
      {
        *((_QWORD *)v20 + 4) = 0;
        qfree(v27);
      }
      v28 = *(void **)v20;
      if ( *(_QWORD *)v20 )
      {
        *((_QWORD *)v20 + 1) = 0;
        qfree(v28);
      }
      v20 += 56;
      v22 += 56;
    }
    while ( v21-- != 0 );
    v20 = *(char **)(a1 + 704);
  }
  qfree(v20);
  v30 = *(_QWORD *)(a1 + 712);
  *(_QWORD *)(a1 + 704) = v19;
  *(_QWORD *)(a1 + 720) = v18;
  v31 = v19 + 56 * v30;
  *(_QWORD *)v31 = 0;
  *(_QWORD *)(v31 + 24) = 0;
  *(_QWORD *)(v31 + 48) = 0;
  *(_OWORD *)(v31 + 8) = 0;
  *(_OWORD *)(v31 + 32) = 0;
  ++*(_QWORD *)(a1 + 712);
  *(_DWORD *)(a1 + 744) = a9;
  v32 = &byte_2CCB1E1;
  *(_BYTE *)(a1 + 753) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  v33 = *(_QWORD *)(a1 + 616) == 0;
  *(_DWORD *)(a1 + 748) = 0;
  *(_BYTE *)(a1 + 752) = (a9 >> 12) & 7;
  *(_DWORD *)(a1 + 754) = (_DWORD)&stru_10000;
  if ( !v33 )
    v32 = *(char **)(a1 + 608);
  *v32 = 0;
  if ( a8 )
  {
    *(_QWORD *)(a1 + 240) = a8;
    return sub_7A0530(a8, a1);
  }
  else
  {
    result = create_lexer(0, 0, a1, 0);
    *(_QWORD *)(a1 + 240) = result;
  }
  return result;
}
