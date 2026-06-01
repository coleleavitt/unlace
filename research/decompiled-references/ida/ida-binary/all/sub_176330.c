__int64 __fastcall sub_176330(__int64 a1, __int64 a2, __m128i a3, __m128d a4)
{
  int v5; // eax
  __m128d v6; // xmm2
  __m128i v7; // xmm0
  unsigned int v8; // r12d
  void (__fastcall *v9)(__int64, _QWORD, _QWORD, _QWORD); // r13
  __int64 result; // rax
  __int64 (__fastcall *v11)(_QWORD, _QWORD, __int64); // r12
  __int64 v12; // r13
  unsigned int v13; // eax
  int v14; // eax
  char *v15; // rdi
  __int64 v16; // rax

  v5 = *(_DWORD *)(a2 + 64);
  if ( ((v5 - 8) & 0xFFFFFFF7) != 0 )
  {
    if ( v5 == 1 )
    {
      QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
      v6 = (__m128d)_mm_unpacklo_epi64(a3, (__m128i)a4);
      a4 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v6);
      v7 = _mm_cvttpd_epi32(
             _mm_add_pd(
               _mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), a4),
               v6));
      *(__m128i *)(a1 + 72) = _mm_unpacklo_epi64(v7, v7);
      if ( *(_DWORD *)(a2 + 64) == 1 )
        goto LABEL_4;
    }
    if ( (unsigned __int8)sub_1EAD70(*(_QWORD *)(a1 + 16) + 216LL) )
    {
LABEL_6:
      result = *(_QWORD *)(a1 + 16);
      v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(result + 296);
      if ( v11 )
      {
        v12 = *(_QWORD *)(result + 376);
        v13 = sub_47B6A0(QT::QCoreApplication::self, a2);
        return v11(*(_QWORD *)(a1 + 16), v13, v12);
      }
      return result;
    }
    v14 = *(_DWORD *)(a2 + 64);
    if ( v14 == 1 )
LABEL_4:
      v8 = 2;
    else
      v8 = 3 * (v14 == 2);
    v9 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL);
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v9(
      a1,
      (unsigned int)(int)(COERCE_DOUBLE(*(_QWORD *)&a4.m128d_f64[0] & 0x8000000000000000LL | 0x3FE0000000000000LL)
                        + COERCE_DOUBLE(*(_QWORD *)&a4.m128d_f64[0] & 0x8000000000000000LL | 0x3FE0000000000000LL)),
      (unsigned int)(int)(a4.m128d_f64[0]
                        + COERCE_DOUBLE(*(_QWORD *)&a4.m128d_f64[0] & 0x8000000000000000LL | 0x3FE0000000000000LL)),
      v8);
    goto LABEL_6;
  }
  v15 = "UndoReturn";
  if ( v5 == 8 )
    v15 = "Return";
  v16 = sub_534430(v15);
  if ( v16 )
    sub_5314B0(v16);
  result = sub_1EB5B0(*(_QWORD *)(a1 + 16));
  if ( a1 == result )
    goto LABEL_6;
  return result;
}
