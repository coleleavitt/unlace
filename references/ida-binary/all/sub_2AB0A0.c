unsigned __int64 __fastcall sub_2AB0A0(__int64 a1, QT::QPainter *a2, __int64 a3, int *a4, unsigned int *a5)
{
  bool v5; // zf
  __int64 v10; // r8
  int v11; // r9d
  const char *v12; // rsi
  unsigned int v13; // ebp
  unsigned int v14; // r13d
  __int32 v15; // r12d
  __int32 v16; // r14d
  __int64 v17; // rbp
  __int64 v18; // r12
  __m128i v19; // xmm1
  __int64 v20; // rdi
  __m128i v21; // xmm0
  __m128 v22; // [rsp+0h] [rbp-88h] BYREF
  __int64 v23; // [rsp+10h] [rbp-78h] BYREF
  __int128 v24; // [rsp+18h] [rbp-70h]
  _OWORD v25[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v5 = *(_BYTE *)(a3 + 437) == 0;
  v26 = __readfsqword(0x28u);
  if ( !v5 && (int)a5[2] > (int)*a5 && (int)a5[1] < (int)a5[3] )
  {
    v10 = *(_QWORD *)(a3 + 408);
    v11 = *a4;
    v24 = 0;
    v12 = (const char *)&v23;
    v23 = 0;
    v22 = 0;
    if ( (unsigned __int8)sub_2AADB0(a1, &v23, &v22, a5, v10, v11) )
    {
      v13 = v22.m128_i32[0];
      v14 = v22.m128_u32[1];
      v15 = v22.m128_i32[2];
      v16 = v22.m128_i32[3];
      QT::QPainter::save(a2);
      QT::QPainter::setClipping(a2, 1);
      v12 = (const char *)v25;
      v25[0] = _mm_unpacklo_epi64(
                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v14)),
                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15 - 1), _mm_cvtsi32_si128(v16 - 1)));
      QT::QPainter::setClipRect(a2, v25, 1);
      v17 = v23;
      v18 = v23 + 32 * v24;
      if ( v18 != v23 )
      {
        do
        {
          if ( *(_BYTE *)(v17 + 24) )
          {
            v12 = (const char *)a2;
            v19 = _mm_loadl_epi64((const __m128i *)v17);
            v20 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 32LL);
            v21 = _mm_sub_epi32(
                    _mm_add_epi32(
                      _mm_loadl_epi64((const __m128i *)(v17 + 8)),
                      _mm_loadl_epi64((const __m128i *)(&xmmword_5DC310 + 2))),
                    v19);
            v25[0] = _mm_cvtepi32_pd(v19);
            v25[1] = _mm_cvtepi32_pd(v21);
            QT::QSvgRenderer::render(v20, a2, v25);
          }
          v17 += 32;
        }
        while ( v18 != v17 );
      }
      QT::QPainter::restore(a2);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23, v12);
    }
  }
  return v26 - __readfsqword(0x28u);
}
