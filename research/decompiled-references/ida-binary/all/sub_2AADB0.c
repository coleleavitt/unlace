__int64 __fastcall sub_2AADB0(__int64 a1, __int64 *a2, __m128 *a3, unsigned int *a4, __int64 a5, int a6)
{
  unsigned int v9; // edi
  unsigned int v11; // r8d
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  int v17; // r14d
  __m128i v18; // xmm0
  char *v19; // r15
  __m128i v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  unsigned int v23; // r12d
  __int64 v24; // rbx
  char v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  const char *v29; // rcx
  double v30; // xmm0_8
  const char *v31; // rdx
  size_t v32; // rax
  size_t v33; // rax
  double v34; // xmm0_8
  __int64 v35; // [rsp+0h] [rbp-C8h]
  unsigned int v36; // [rsp+8h] [rbp-C0h]
  unsigned int v37; // [rsp+Ch] [rbp-BCh]
  QT::QSvgRenderer *v38; // [rsp+10h] [rbp-B8h]
  QT::QString *v39; // [rsp+18h] [rbp-B0h]
  void *v40[4]; // [rsp+30h] [rbp-98h] BYREF
  void *v41[4]; // [rsp+50h] [rbp-78h] BYREF
  void *ptr[11]; // [rsp+70h] [rbp-58h] BYREF

  v9 = a4[1];
  ptr[3] = (void *)__readfsqword(0x28u);
  v11 = a4[3];
  v12 = v11 - v9 - 16;
  v13 = v12 >> 1;
  if ( v12 <= 1 )
    v13 = 1;
  v14 = *a4;
  v15 = a4[2];
  v36 = v13 + v9;
  if ( (int)(v13 + v14) >= (int)(v15 - v13) || (int)(v13 + v9) >= (int)(v11 - v13) )
    return 0;
  v17 = 0;
  v18 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v13), 0);
  v19 = (char *)&unk_8BA600;
  v35 = 4LL * a6;
  v20 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(v9)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v11)));
  v21 = (__m128)_mm_sub_epi32(v20, v18);
  v22 = (__m128)_mm_add_epi32(v20, v18);
  v23 = _mm_cvtsi128_si32((__m128i)v22);
  *a3 = _mm_shuffle_ps(v22, v21, 228);
  v37 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)v22, 85)) + 16;
  do
  {
    v26 = a2[1];
    v27 = *a2;
    if ( a2[2] < (unsigned __int64)(v26 + 1) )
    {
      v28 = qvector_reserve(a2, v27, v26 + 1, 32);
      v26 = a2[1];
      *a2 = v28;
      v27 = v28;
    }
    v24 = v27 + 32 * v26;
    *(_OWORD *)v24 = 0;
    ++a2[1];
    *(__m128i *)v24 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v36)),
                        _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23 + 16), _mm_cvtsi32_si128(v37)));
    if ( !*((_QWORD *)v19 + 4) )
    {
      v38 = (QT::QSvgRenderer *)operator new(0x10u);
      v30 = QT::QString::fromUtf8(v40, 28, ":/IDAG/resources/menu/%1.svg", v29);
      v31 = *((const char **)v19 + 2);
      v32 = 0;
      if ( v31 && *v31 )
      {
        v39 = *((QT::QString **)v19 + 2);
        v33 = strlen(v31 + 1);
        v31 = (const char *)v39;
        v32 = v33 + 1;
      }
      v34 = QT::QString::fromUtf8(v41, v32, v31, v30);
      QT::QString::arg(ptr, v40, v41, 0, 32, v34);
      QT::QSvgRenderer::QSvgRenderer(v38, (const QT::QString *)ptr, nullptr);
      *((_QWORD *)v19 + 4) = v38;
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v41[0] && !_InterlockedSub((volatile signed __int32 *)v41[0], 1u) )
        free(v41[0]);
      if ( v40[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v40[0], 1u) )
          free(v40[0]);
      }
    }
    *(_QWORD *)(v24 + 16) = v19;
    v25 = v17++;
    v19 += 40;
    v23 += 20;
    *(_BYTE *)(v24 + 24) = *(int *)(*(_QWORD *)(a5 + 112) + v35) >> v25;
    *(_BYTE *)(v24 + 24) &= 1u;
  }
  while ( v17 != 7 );
  return 1;
}
