__int64 __fastcall sub_4CDCD0(QT::QTabBar *this)
{
  int v2; // eax
  __int64 v3; // rax
  unsigned int v4; // r14d
  int v5; // rdx^4
  int v6; // r12d
  unsigned int v7; // r13d
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rdi
  int v12; // eax
  unsigned int v13; // rax^4
  unsigned int v14; // edx
  int v15; // rdx^4
  int v16; // eax
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v2 = QT::QTabBar::tabAt();
  if ( v2 == -1 )
  {
    *((_DWORD *)this + 17) = QT::QTabBar::count(this);
    v12 = QT::QTabBar::count(this);
    v13 = QT::QTabBar::tabRect(this, v12 - 1) >> 32;
    v4 = v14;
    v7 = v13;
    v6 = v15;
    v8 = *((_DWORD *)this + 16) + v14 - 1;
    v16 = *(_DWORD *)(*((_QWORD *)this + 4) + 28LL) + 1 - *(_DWORD *)(*((_QWORD *)this + 4) + 20LL);
    if ( v8 > v16 )
    {
      v8 = *(_DWORD *)(*((_QWORD *)this + 4) + 28LL) + 1 - *(_DWORD *)(*((_QWORD *)this + 4) + 20LL);
      v4 = 1 - *((_DWORD *)this + 16) + v16;
    }
    goto LABEL_4;
  }
  *((_DWORD *)this + 17) = v2;
  if ( v2 != *((_DWORD *)this + 10) )
  {
    v3 = QT::QTabBar::tabRect(this, v2);
    v4 = v3;
    v6 = v5;
    v7 = HIDWORD(v3);
    v8 = *((_DWORD *)this + 16) + v3 - 1;
LABEL_4:
    v9 = *((_QWORD *)this + 7);
    v17 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(v7)),
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(v4 + *(_DWORD *)(*(_QWORD *)(v9 + 32) + 28LL) - *(_DWORD *)(*(_QWORD *)(v9 + 32) + 20LL)),
              _mm_cvtsi32_si128(v7 + *(_DWORD *)(*(_QWORD *)(v9 + 32) + 32LL) - *(_DWORD *)(*(_QWORD *)(v9 + 32) + 24LL))));
    QT::QRubberBand::setGeometry(v9, &v17);
    v10 = *((_QWORD *)this + 7);
    v17 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v10 + 32) + 20LL)),
              _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v10 + 32) + 24LL))),
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v10 + 32) + 20LL) + v8 - v4),
              _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v10 + 32) + 24LL) + v6 - v7)));
    QT::QRubberBand::setGeometry(v10, &v17);
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7), 1);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7), 0);
}
