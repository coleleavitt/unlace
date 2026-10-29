unsigned __int64 __fastcall sub_2018C0(QT::QAbstractScrollArea **this, __int64 a2)
{
  QT::QAbstractScrollArea *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rax
  __m128i v9; // xmm0
  int v10; // eax
  QT::QAbstractScrollArea *v11; // r12
  unsigned __int8 v12; // r13
  __m128i *v13; // rbp
  QT::QPaintDevice *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  void (__fastcall *v20)(char *); // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-90h]
  char v22[8]; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( dword_8D1DC0 <= 0 )
  {
    v3 = (QT::QAbstractScrollArea *)this;
    v4 = QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)this);
    v7 = *((_BYTE *)this + 968) == 0;
    v23[0] = 0;
    v8 = *(_QWORD *)(v4 + 32);
    v9 = _mm_loadl_epi64((const __m128i *)(v8 + 20));
    v21 = _mm_sub_epi32(_mm_loadl_epi64((const __m128i *)(v8 + 28)), v9).m128i_u64[0];
    v23[1] = v21;
    if ( v7 )
    {
      v11 = nullptr;
      goto LABEL_17;
    }
    if ( !*(this + 53) )
      goto LABEL_20;
    v10 = *((_DWORD *)this + 104);
    switch ( v10 )
    {
      case 2:
        goto LABEL_21;
      case 3:
        v11 = *(this + 113);
        break;
      case 1:
        v11 = *(this + 111);
        break;
      default:
        v11 = nullptr;
        goto LABEL_17;
    }
    while ( 1 )
    {
      v12 = *((_BYTE *)v11 + 29);
      if ( v12 )
        break;
LABEL_17:
      v12 = 0;
      if ( !(unsigned __int8)is_database_busy() )
      {
        this = (QT::QAbstractScrollArea **)v11;
        v12 = sub_176E70(v11);
      }
      if ( *((_QWORD *)v3 + 53) )
        break;
LABEL_20:
      sub_1E69C0(*(double *)v9.m128i_i64, (__int64)this, a2, v5, v6);
LABEL_21:
      v11 = *((QT::QAbstractScrollArea **)v3 + 112);
    }
    v13 = (__m128i *)(*(__int64 (__fastcall **)(QT::QAbstractScrollArea *, _QWORD *, __int64))(*(_QWORD *)v11 + 544LL))(
                       v11,
                       v23,
                       (__int64)v3 + 384);
    nullsub_66((char *)v3 + 104);
    if ( v13 )
    {
      v14 = (QT::QPaintDevice *)QT::QAbstractScrollArea::viewport(v3);
      if ( v14 )
        v14 = (QT::QPaintDevice *)((char *)v14 + 16);
      QT::QPainter::QPainter((QT::QPainter *)v22, v14);
      v15 = sub_1737D0((__int64)v3, 1u);
      v16 = QT::QColor::fromRgba((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v15), 8), 1u);
      v25[1] = v17;
      v25[0] = v16;
      QT::QBrush::QBrush(v24, v25, 1);
      QT::QPainter::setBrush((QT::QPainter *)v22, (const QT::QBrush *)v24);
      QT::QBrush::~QBrush((QT::QBrush *)v24);
      sub_2015F0((__int64)v3, v13, v18, v19, *(double *)v9.m128i_i64);
      v24[0] = 0;
      v24[1] = v21;
      sub_175FF0((__int64 *)v11);
      (*(void (__fastcall **)(QT::QAbstractScrollArea *, char *, __m128i *, _QWORD))(*(_QWORD *)v11 + 496LL))(
        v11,
        v22,
        v13,
        v12);
      QT::QPainter::~QPainter((QT::QPainter *)v22);
      v20 = *(void (__fastcall **)(char *))(v13->m128i_i64[0] + 8);
      if ( v20 == paint_context_t__::vfunc_1 )
      {
        v13->m128i_i64[0] = (__int64)&paint_context_t___vtable;
        QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)&v13[5].m128i_u64[1]);
        QT::QFont::~QFont((QT::QFont *)&v13[4].m128i_u64[1]);
        operator delete(v13, 0x120u);
      }
      else
      {
        v20(v13->m128i_i8);
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}
