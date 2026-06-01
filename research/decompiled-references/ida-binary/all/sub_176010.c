unsigned __int64 __fastcall sub_176010(__int64 *a1, QT::QPainter *a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64 *, unsigned __int64 *, __int64); // rax
  __m128i v8; // xmm0
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  __m128i v14; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v15[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a4 && *(_BYTE *)(a3 + 280) && *(_BYTE *)(a3 + 284) )
  {
    v6 = *a1;
    v12 = 0;
    v13 = 0;
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned __int64 *, __int64))(v6 + 584);
    if ( v7 == sub_172FD0 )
    {
      v8 = _mm_loadl_epi64((const __m128i *)(a3 + 264));
      v9 = *(_DWORD *)(a3 + 276);
      v12 = v8.m128i_i64[0];
      v13 = _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)(a3 + 264)),
              _mm_cvtsi32_si128(v9 + _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229)) - 1)).m128i_u64[0];
    }
    else
    {
      v7((__int64)a1, &v12, &v13, a3);
    }
    QT::QPainter::save(a2);
    QT::QPainter::setTransform(a2, (const QT::QTransform *)(a3 + 168), 0);
    QT::QPainter::setClipping(a2, 0);
    v10 = sub_524FA0(a1[2] + 40, 2165564017LL, 0);
    v15[1] = v11;
    v15[0] = v10;
    QT::QBrush::QBrush(&v14, v15, 1);
    QT::QPainter::setBrush(a2, (const QT::QBrush *)&v14);
    QT::QBrush::~QBrush((QT::QBrush *)&v14);
    sub_1C7B60((QT::QPen *)&v14, a2);
    QT::QPen::~QPen((QT::QPen *)&v14);
    v14 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(HIDWORD(v12))),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(HIDWORD(v13))));
    QT::QPainter::drawLines(a2, &v14, 1);
    QT::QPainter::restore(a2);
  }
  return v16 - __readfsqword(0x28u);
}
