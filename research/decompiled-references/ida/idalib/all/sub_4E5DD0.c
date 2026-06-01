void __fastcall __noreturn sub_4E5DD0(unsigned int a1, double *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // ecx
  __m128 v7; // xmm0
  double v8; // rax
  double v9; // r12
  __m128i v10; // xmm0
  double v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  double v14; // rax
  __m128i v15; // xmm0
  const void *v16; // r13
  double v17[29]; // [rsp+0h] [rbp-E8h] BYREF

  *(_QWORD *)&v17[23] = __readfsqword(0x28u);
  memset(v17, 0, 0xB8u);
  v6 = 0;
  if ( !a2 )
  {
    if ( !a3 )
    {
      if ( !under_debugger )
        interr(1826);
      BUG();
    }
    v7 = (__m128)_mm_loadu_si128((const __m128i *)(a3 + 8));
    v8 = *(double *)(a3 + 48);
    v9 = *(double *)(a3 + 168);
    *(__m128 *)&v17[1] = v7;
    _mm_storeh_ps(&v17[3], v7);
    LODWORD(v17[4]) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_insert_epi16((__m128i)v7, *(unsigned __int16 *)(a3 + 32), 0), 0));
    v10 = _mm_loadu_si128((const __m128i *)(a3 + 56));
    v17[6] = v8;
    v11 = *(double *)(a3 + 136);
    *(__m128i *)&v17[7] = v10;
    v12 = _mm_loadu_si128((const __m128i *)(a3 + 72));
    v17[17] = v11;
    LODWORD(v11) = *(_DWORD *)(a3 + 144);
    *(__m128i *)&v17[9] = v12;
    v13 = _mm_loadu_si128((const __m128i *)(a3 + 88));
    LODWORD(v17[18]) = LODWORD(v11);
    v14 = *(double *)(a3 + 152);
    *(__m128i *)&v17[11] = v13;
    v15 = _mm_loadu_si128((const __m128i *)(a3 + 104));
    v17[19] = v14;
    *(__m128i *)&v17[13] = v15;
    *(__m128i *)&v17[15] = _mm_loadu_si128((const __m128i *)(a3 + 120));
    if ( *(_QWORD *)&v9 > 1u )
    {
      v16 = *(const void **)(a3 + 160);
      *(_QWORD *)&v17[20] = qvector_reserve(&v17[20], 0, *(_QWORD *)&v9, 1);
      v17[21] = v9;
      memmove(*(void **)&v17[20], v16, *(_QWORD *)&v9 - 1LL);
      *(_BYTE *)(*(_QWORD *)&v17[20] + *(_QWORD *)&v9 - 1LL) = 0;
    }
    a2 = v17;
  }
  callui(a1, (int)a2, (int)&callui, v6, a5, a6);
}
