unsigned __int64 __fastcall sub_2D2560(QT::QCursor *this, const __m128i *a2, int *a3)
{
  QT::QScreen *v6; // rdi
  int v7; // r13d
  __int64 v8; // rax
  int v9; // edx
  int v10; // rdx^4
  int v11; // ecx
  int v12; // r10d
  __int64 v13; // rsi
  int v14; // r14d
  __int32 v15; // eax
  int v16; // edi
  unsigned int v17; // esi
  int v18; // r8d
  int v19; // eax
  int v21; // eax
  __int64 v22; // [rsp+8h] [rbp-50h] BYREF
  __m128i v23; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a2->m128i_i64[1] )
    v22 = a2->m128i_i64[1];
  else
    v22 = QT::QCursor::pos(this);
  v6 = (QT::QScreen *)QT::QGuiApplication::screenAt(&v22);
  if ( !v6 )
    return v24 - __readfsqword(0x28u);
  *(__m128i *)((char *)this + 1000) = _mm_loadu_si128(a2);
  *((_QWORD *)this + 127) = a2[1].m128i_i64[0];
  v7 = a2[1].m128i_i32[1] & 1;
  v8 = QT::QScreen::geometry(v6);
  v11 = v8;
  v12 = a3[1];
  v13 = v8 >> 32;
  v14 = v22 - v8;
  v15 = a2[1].m128i_i32[0];
  v16 = HIDWORD(v22) - v13;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v16 = v16 - 24 - v12;
      if ( v16 < 0 )
        v16 = 0;
      v17 = v16 + v13;
    }
    else
    {
      v17 = HIDWORD(v22);
    }
LABEL_8:
    v18 = *a3;
    if ( v7 )
      goto LABEL_9;
    goto LABEL_18;
  }
  v21 = v10 + 1 - v13;
  if ( v16 + v12 <= v21 )
  {
    v16 += 24;
    v17 = v16 + v13;
    goto LABEL_8;
  }
  v18 = *a3;
  v16 = v21 - v12;
  v17 = v10 + 1 - v12;
  if ( v7 )
  {
LABEL_9:
    v19 = dword_8CCE78;
    if ( dword_8CCE78 > 0 )
      goto LABEL_10;
  }
LABEL_18:
  if ( v14 + v18 <= v9 + 1 - v11 || v14 <= v18 || (a2[1].m128i_i8[4] & 2) != 0 )
    v19 = v14 + 20;
  else
    v19 = v14 - 20 - v18;
LABEL_10:
  if ( v19 < v14 && v19 + v18 > v14 && v16 - 24 < SHIDWORD(v22) )
    v19 = v22 - 20 - v18;
  dword_8CCE78 = v19;
  v23 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11 + v19), _mm_cvtsi32_si128(v17)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11 + v19 + v18 - 1), _mm_cvtsi32_si128(v17 + v12 - 1)));
  QT::QWidget::setGeometry(this, &v23);
  return v24 - __readfsqword(0x28u);
}
