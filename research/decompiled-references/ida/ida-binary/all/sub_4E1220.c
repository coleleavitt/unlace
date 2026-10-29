unsigned __int64 __fastcall sub_4E1220(__int64 a1, __int64 a2, __int64 a3, QT::QPainter *a4, __int64 a5, double a6)
{
  __int64 v9; // r14
  __int64 v10; // rax
  int **v11; // r13
  __m128i *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  QT::QFontMetrics *v20; // [rsp+0h] [rbp-D8h]
  QT::QString *v21; // [rsp+8h] [rbp-D0h]
  int v22; // [rsp+14h] [rbp-C4h]
  unsigned __int16 *v23; // [rsp+18h] [rbp-C0h]
  __int64 v25; // [rsp+30h] [rbp-A8h]
  __int64 v26; // [rsp+40h] [rbp-98h] BYREF
  __int64 v27; // [rsp+48h] [rbp-90h]
  __m128i v28; // [rsp+50h] [rbp-88h] BYREF
  __int64 v29; // [rsp+60h] [rbp-78h] BYREF
  __int128 v30; // [rsp+68h] [rbp-70h]
  _QWORD v31[3]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+98h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v9 = sub_4E1190(a6, a1, a5, (_QWORD *)a3, (__int64)a4);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 168LL))(v9, a5, a3 + 128);
  if ( v10 )
  {
    v11 = (int **)v10;
    QT::QPainter::save(a4);
    v12 = (__m128i *)&v29;
    v29 = 0;
    v30 = 0;
    if ( sub_4D9150(v11, &v29) )
    {
      v25 = v30;
      if ( (_QWORD)v30 )
      {
        v13 = 0;
        v20 = (QT::QFontMetrics *)(a3 + 32);
        v21 = (QT::QString *)(a3 + 168);
        do
        {
          v23 = (unsigned __int16 *)(v29 + 4 * v13);
          v22 = QT::QFontMetrics::horizontalAdvance(v20, v21, *v23);
          LODWORD(v23) = QT::QFontMetrics::horizontalAdvance(v20, v21, v23[1]);
          v26 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 192LL))(a1, 46, a2, a5);
          v14 = *(_QWORD *)a1;
          v27 = v15;
          v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(v14 + 224))(a1, 65, 0, a5);
          v28 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v26 + v22 + v16 + 1), _mm_cvtsi32_si128(HIDWORD(v26))),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v23 + (int)v26 + v16), _mm_cvtsi32_si128(HIDWORD(v27))));
          QT::QPainter::setClipRect(a4, &v26, 1);
          QT::QPainter::setClipping(a4, 1);
          v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 176LL))(
                  v9,
                  a5,
                  a3 + 128,
                  *(_BYTE *)(a3 + 9) >> 7);
          v31[1] = v18;
          v12 = &v28;
          v31[0] = v17;
          QT::QPainter::fillRect(a4, &v28, v31);
          ++v13;
        }
        while ( v25 != v13 );
      }
    }
    QT::QPainter::restore(a4);
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29, v12->m128i_i8);
    }
  }
  return v32 - __readfsqword(0x28u);
}
