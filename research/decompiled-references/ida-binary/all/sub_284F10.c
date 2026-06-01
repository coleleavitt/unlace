__int64 __fastcall sub_284F10(
        __int64 a1,
        __m128i *a2,
        int *a3,
        QT::QAbstractSlider *a4,
        QT::QAbstractSlider *a5,
        char a6,
        double a7)
{
  __int64 v11; // rsi
  int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r12d
  int v18; // eax
  __m128i v19; // xmm2
  signed int v20; // r13d
  signed int v21; // eax
  __m128i v22; // xmm1
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int32 v26; // eax
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // r15
  __int64 (__fastcall *v31)(__int64, __int64, QT::QAbstractSlider *); // [rsp+8h] [rbp-110h]
  char v32[64]; // [rsp+10h] [rbp-108h] BYREF
  char v33[16]; // [rsp+50h] [rbp-C8h] BYREF
  char v34[24]; // [rsp+60h] [rbp-B8h] BYREF
  double v35; // [rsp+78h] [rbp-A0h]
  __int64 v36; // [rsp+B0h] [rbp-68h]
  __int64 v37; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v38; // [rsp+D8h] [rbp-40h]

  v11 = a1;
  v38 = __readfsqword(0x28u);
  sub_283F90((__int64)v32, a1);
  v13 = v37;
  a3[2] = v37;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 704LL);
  a3[1] = 1;
  v15 = v14 - v13;
  if ( v15 < 0 )
    v15 = 0;
  *a3 = v15;
  v17 = QT::QAbstractSlider::value(a4);
  if ( a6 )
  {
    v11 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1) )
    {
      v18 = QT::QAbstractSlider::minimum(a5);
    }
    else
    {
      v11 = 2;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2) )
      {
        v18 = QT::QAbstractSlider::maximum(a5);
      }
      else if ( (unsigned __int8)sub_3310F0(*(_QWORD *)(a1 + 16)) )
      {
        v11 = 0;
        v29 = (_QWORD *)sub_284860(a1, 0);
        if ( v29 && *v29 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 728LL);
          v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v29 + 8LL))(*v29, v11);
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
        v30 = *(_QWORD *)(a1 + 16);
        v31 = *(__int64 (__fastcall **)(__int64, __int64, QT::QAbstractSlider *))(*(_QWORD *)v30 + 624LL);
        v11 = *(_QWORD *)(sub_1EA680(v30 + 384, 2, v28, (__int64)v31, a7) + 40);
        v18 = v31(v30, v11, a5);
      }
    }
  }
  else
  {
    v18 = -1;
  }
  a3[3] = v18;
  v19 = _mm_cvtsi32_si128(v17);
  v20 = v36;
  v21 = *(_DWORD *)(a1 + 176) - v36;
  v22 = _mm_cvtsi32_si128(v36);
  if ( v21 < 0 )
    v21 = 0;
  v23 = (unsigned int)(int)v35;
  v24 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v23)),
          _mm_unpacklo_epi32(v22, v19));
  *a2 = v24;
  v25 = sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, v11, v23, v16, *(double *)v24.m128i_i64);
  v26 = sub_284990(a1, *(__int16 *)(v25 + 28), *(__int16 *)(v25 + 30));
  if ( (int)(v26 - v17) >= 0 )
  {
    if ( v20 > (int)(v26 - v17) )
    {
      v26 = a2->m128i_i32[3];
      goto LABEL_12;
    }
    v26 = a2->m128i_i32[1] + v26 - v20;
  }
  a2->m128i_i32[3] = v26;
LABEL_12:
  if ( a2->m128i_i32[0] < v26 )
    a2->m128i_i32[0] = v26;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v34);
  QT::QFont::~QFont((QT::QFont *)v33);
  return 1;
}
