unsigned __int64 __fastcall sub_1DD460(QT::QWidget *a1, __int64 a2)
{
  __int64 v3; // rbp
  QT::QDockWidget *v4; // rdi
  int v5; // r15d
  int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  int v9; // edx
  __m128i v10; // xmm0
  __m128i v12; // rax
  __m128i v13; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v14[8]; // [rsp+10h] [rbp-98h] BYREF
  int v15; // [rsp+18h] [rbp-90h]
  unsigned int v16; // [rsp+1Ch] [rbp-8Ch]
  __m128i v17; // [rsp+20h] [rbp-88h] BYREF
  __int64 v18; // [rsp+50h] [rbp-58h]
  int v19; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+5Ch] [rbp-4Ch]
  __int64 v21; // [rsp+60h] [rbp-48h]
  unsigned __int64 v22; // [rsp+68h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v3 = QT::QWidget::style(a1);
  QT::QStyleOptionToolBar::QStyleOptionToolBar((QT::QStyleOptionToolBar *)v14);
  QT::QStyleOption::initFrom((QT::QStyleOption *)v14, a1);
  v4 = *((QT::QDockWidget **)a1 + 5);
  v20 |= 1u;
  v5 = QT::QDockWidget::features(v4) & 8;
  if ( v5 )
    v15 |= 0x80u;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, QT::QWidget *))(*(_QWORD *)v3 + 224LL))(v3, 55, v14, a1);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, QT::QWidget *))(*(_QWORD *)v3 + 224LL))(v3, 52, v14, a1)
     + v6;
  v8 = v7
     + (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, QT::QWidget *))(*(_QWORD *)v3 + 224LL))(v3, 53, v14, a1)
     - 1;
  v9 = -2 * v7;
  v10 = _mm_cvtsi32_si128(v7);
  if ( v5 )
  {
    v13 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(v10, v10),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(v9 + v17.m128i_i32[3] + v7 - v17.m128i_i32[1])));
    v12.m128i_i64[0] = QT::QStyle::visualRect(v16, &v17, &v13);
    v13 = v12;
  }
  else
  {
    v13 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(v10, v10),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9 + v17.m128i_i32[2] + v7 - v17.m128i_i32[0]), _mm_cvtsi32_si128(v8)));
  }
  v17 = _mm_load_si128(&v13);
  QT::QStyleOption::operator=(a2, v14);
  *(_QWORD *)(a2 + 64) = v18;
  *(_DWORD *)(a2 + 72) = v19;
  *(_DWORD *)(a2 + 76) = v20;
  *(_QWORD *)(a2 + 80) = v21;
  QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v14);
  return v22 - __readfsqword(0x28u);
}
