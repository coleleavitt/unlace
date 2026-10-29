void __fastcall sub_33FBF0(QT::QWidget *this, __int64 a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // ebp
  __int64 v6; // rax
  bool v7; // zf
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // edx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  int v27; // edx
  int v28; // [rsp+18h] [rbp-D0h] BYREF
  int v29; // [rsp+1Ch] [rbp-CCh]
  __int64 v30; // [rsp+20h] [rbp-C8h] BYREF
  int v31; // [rsp+28h] [rbp-C0h]
  int v32; // [rsp+2Ch] [rbp-BCh]
  _BYTE v33[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-A8h]
  _QWORD v35[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v36; // [rsp+60h] [rbp-88h]
  __int64 v37; // [rsp+70h] [rbp-78h] BYREF
  __int64 v38; // [rsp+78h] [rbp-70h]
  _BYTE v39[16]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v40[24]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+A8h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 20);
  v3 = *(_DWORD *)(a2 + 16);
  v41 = __readfsqword(0x28u);
  if ( !*((_BYTE *)this + 345) )
  {
    v4 = v3;
    v3 = v2;
    v2 = v4;
  }
  if ( v3 )
  {
    if ( v3 < v2 )
      v5 = v3 / 2;
    else
      v5 = v2 / 2;
    v6 = sub_524FA0((char *)this + 40, 2165563921LL, 0);
    v7 = *((_BYTE *)this + 345) == 0;
    v37 = v6;
    v8 = v5 - 4;
    v38 = v9;
    v10 = v5 - 2;
    *(_OWORD *)v40 = 0;
    if ( v7 )
    {
      v32 = v5 - 3;
      v11 = _mm_cvtsi32_si128(4u);
      v28 = 5;
      v29 = v5;
      v12 = _mm_cvtsi32_si128(2u);
      v30 = 0x100000001LL;
      v31 = 3;
      *(_DWORD *)&v40[4] = v5 - 4;
    }
    else
    {
      v28 = v5;
      v11 = _mm_cvtsi32_si128(v8);
      v12 = _mm_cvtsi32_si128(v10);
      v29 = 5;
      v10 = 2;
      v30 = 0x100000001LL;
      v31 = v5 - 3;
      v32 = 3;
      *(_DWORD *)v40 = v5 - 4;
      v8 = 4;
    }
    *(__m128i *)&v40[8] = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(v8)),
                            _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(v10)));
    QT::QPixmap::QPixmap(v33, &v28);
    QT::QPaintDevice::QPaintDevice((QT::QPaintDevice *)v35);
    v13 = v34;
    v34 = 0;
    v35[0] = (char *)&`vtable for'QT::QPixmap + 16;
    v14 = *((_QWORD *)this + 35);
    *((_QWORD *)this + 35) = v13;
    v36 = v14;
    QT::QPixmap::~QPixmap((QT::QPixmap *)v35);
    QT::QPixmap::~QPixmap((QT::QPixmap *)v33);
    QT::QColor::QColor(v39, 19);
    QT::QPixmap::fill((QT::QWidget *)((char *)this + 264), (const QT::QColor *)v39);
    QT::QPainter::QPainter((QT::QPainter *)v35, (QT::QWidget *)((char *)this + 264));
    QT::QPainter::setPen((QT::QPainter *)v35, (const QT::QColor *)&v37);
    QT::QPainter::fillRect(v35, &v30, &v37);
    QT::QPainter::drawPoints(v35, v40, 3);
    QT::QPainter::end((QT::QPainter *)v35);
    QT::QPainter::~QPainter((QT::QPainter *)v35);
    v15 = sub_524FA0((char *)this + 40, 2165563922LL, 0);
    v7 = *((_BYTE *)this + 345) == 0;
    HIDWORD(v30) = -1;
    v37 = v15;
    v16 = *((_DWORD **)this + 4);
    v38 = v17;
    memset(v40, 0, sizeof(v40));
    if ( v7 )
    {
      v26 = v16[8] - v16[6];
      LODWORD(v30) = 7;
      *(_DWORD *)v40 = 3;
      HIDWORD(v30) = v26 + 1;
      v27 = v26 - 4;
      v21 = v26 - 1;
      *(_DWORD *)&v40[4] = v27;
      v20 = 6;
      *(_DWORD *)&v40[12] = v21;
    }
    else
    {
      v18 = v16[7] - v16[5];
      HIDWORD(v30) = 7;
      *(_DWORD *)&v40[4] = 3;
      LODWORD(v30) = v18 + 1;
      v19 = v18 - 4;
      v20 = v18 - 1;
      *(_DWORD *)&v40[8] = v20;
      *(_DWORD *)v40 = v19;
      v21 = 6;
    }
    *(_DWORD *)&v40[16] = v20;
    *(_DWORD *)&v40[20] = v21;
    QT::QPixmap::QPixmap(v33, &v30);
    QT::QPaintDevice::QPaintDevice((QT::QPaintDevice *)v35);
    v22 = v34;
    v34 = 0;
    v35[0] = (char *)&`vtable for'QT::QPixmap + 16;
    v23 = *((_QWORD *)this + 38);
    *((_QWORD *)this + 38) = v22;
    v36 = v23;
    QT::QPixmap::~QPixmap((QT::QPixmap *)v35);
    QT::QPixmap::~QPixmap((QT::QPixmap *)v33);
    QT::QColor::QColor(v39, 19);
    QT::QPixmap::fill((QT::QWidget *)((char *)this + 288), (const QT::QColor *)v39);
    QT::QPainter::QPainter((QT::QPainter *)v33, (QT::QWidget *)((char *)this + 288));
    QT::QPainter::setRenderHint(v33, 1, 1);
    QT::QPainter::setPen((QT::QPainter *)v33, (const QT::QColor *)&v37);
    QT::QBrush::QBrush(v35, &v37, 1);
    QT::QPainter::setBrush((QT::QPainter *)v33, (const QT::QBrush *)v35);
    QT::QBrush::~QBrush((QT::QBrush *)v35);
    QT::QPainter::drawPolygon(v33, v40, 3, 0, v24, v25, &v30, v40);
    QT::QPainter::end((QT::QPainter *)v33);
    QT::QPainter::~QPainter((QT::QPainter *)v33);
    sub_33FB30(this);
  }
}
