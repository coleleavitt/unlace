QT::QWidget *__fastcall sub_4CAF60(QT::QWidget *this, __int64 a2, __int64 a3, char a4)
{
  int *v7; // rsi
  QT::QWidget *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rbp
  __int64 v11; // rbp
  int v12; // eax
  QT::QScreen *v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rsi
  void *v17; // rdi
  int v18; // rdx^4
  bool v19; // sf
  int v20; // edx
  int v21; // eax
  __m128i v22; // xmm0
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  unsigned int v25; // eax
  __int64 v26; // rax
  void *ptr[4]; // [rsp+0h] [rbp-78h] BYREF
  int v28[4]; // [rsp+20h] [rbp-58h] BYREF
  void *v29[2]; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+40h] [rbp-38h]
  unsigned __int64 v31; // [rsp+48h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  ++dword_8D1D3C;
  *(__m128i *)v28 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  v30 = 0;
  *(_OWORD *)v29 = 0;
  if ( !a3 || (v7 = (int *)a3, !*(_QWORD *)(a3 + 32)) && (*(int *)(a3 + 8) < 0 || *(int *)(a3 + 12) < 0) )
  {
    v14 = (QT::QScreen *)QT::QWidget::screen(this);
    v15 = QT::QScreen::geometry(v14);
    v16 = *(_DWORD **)(a2 + 32);
    v17 = v29[0];
    v15 >>= 32;
    v19 = v18 + 1 - (int)v15 < 0;
    v20 = v18 + 1 - v15;
    v21 = v20 + 3;
    v22 = _mm_cvtsi32_si128(0);
    if ( !v19 )
      v21 = v20;
    v23 = _mm_cvtsi32_si128(v16[8] + 1 - v16[6]);
    v24 = _mm_cvtsi32_si128(v21 >> 2);
    v25 = v16[7] + 1 - v16[5];
    v30 = 0;
    *(__m128i *)v28 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v22, v24), _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), v23));
    *(_OWORD *)v29 = 0;
    if ( v17 && !_InterlockedSub((volatile signed __int32 *)v17, 1u) )
    {
      free(v17);
      v7 = v28;
    }
    else
    {
      v7 = v28;
    }
  }
  v8 = sub_4C7380(this, (__int64)v7);
  v9 = sub_4CAC80(v8, a2, 4, 0.0);
  v10 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(void **, __int64 *))(*v9 + 416))(ptr, v9);
    QT::QWidget::setWindowTitle(v8, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    (*(void (__fastcall **)(void **, __int64 *))(*v10 + 424))(ptr, v10);
    QT::QWidget::setWindowIcon(v8, (const QT::QIcon *)ptr);
    QT::QIcon::~QIcon((QT::QIcon *)ptr);
  }
  QT::QWidget::show(v8);
  if ( a4 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)v8 + 5) + 96LL);
    if ( *(_QWORD *)(v11 + 40) )
    {
      QT::QBasicTimer::stop((QT::QBasicTimer *)(v11 + 48));
      if ( !*(_BYTE *)(v11 + 56) )
        sub_4C4810((QT::QWidget *)v11);
    }
    QT::QBasicTimer::start(v11 + 52, 1300, v11);
  }
  if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0], 1u) )
  {
    free(v29[0]);
    v12 = dword_8D1D3C;
    if ( dword_8D1D3C > 0 )
    {
LABEL_16:
      dword_8D1D3C = v12 - 1;
      if ( v12 != 1 )
        return v8;
    }
  }
  else
  {
    v12 = dword_8D1D3C;
    if ( dword_8D1D3C > 0 )
      goto LABEL_16;
  }
  v26 = sub_47A690((__int64)QT::QCoreApplication::self);
  if ( v26 )
    sub_4C9440(v26, 0.0);
  return v8;
}
