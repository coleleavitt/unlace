unsigned __int64 __fastcall sub_2800E0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  double v15; // xmm0_8
  __int64 v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // r13
  _DWORD *v19; // r15
  _DWORD *i; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 j; // r13
  int v25; // r13d
  int *v26; // r9
  int *v27; // r15
  int *v28; // rbx
  int k; // edx
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v36; // [rsp+28h] [rbp-180h]
  _BYTE v37[8]; // [rsp+38h] [rbp-170h] BYREF
  _BYTE v38[8]; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v39[8]; // [rsp+48h] [rbp-160h] BYREF
  unsigned int v40[2]; // [rsp+50h] [rbp-158h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-150h]
  unsigned int v42; // [rsp+60h] [rbp-148h] BYREF
  int v43; // [rsp+64h] [rbp-144h]
  int v44; // [rsp+68h] [rbp-140h]
  int v45; // [rsp+6Ch] [rbp-13Ch]
  int v46; // [rsp+70h] [rbp-138h] BYREF
  int v47; // [rsp+74h] [rbp-134h]
  int v48; // [rsp+78h] [rbp-130h]
  int v49; // [rsp+7Ch] [rbp-12Ch]
  int v50; // [rsp+80h] [rbp-128h]
  int v51; // [rsp+84h] [rbp-124h]
  int v52; // [rsp+88h] [rbp-120h]
  int v53; // [rsp+8Ch] [rbp-11Ch]
  __int64 v54; // [rsp+B0h] [rbp-F8h]
  _BYTE v55[24]; // [rsp+C8h] [rbp-E0h] BYREF
  _BYTE v56[48]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v57[8]; // [rsp+110h] [rbp-98h] BYREF
  void *ptr; // [rsp+118h] [rbp-90h]
  _BYTE v59[8]; // [rsp+138h] [rbp-70h] BYREF
  _QWORD v60[2]; // [rsp+140h] [rbp-68h] BYREF
  __int64 v61; // [rsp+150h] [rbp-58h] BYREF
  __int64 v62; // [rsp+158h] [rbp-50h]
  unsigned __int64 v63; // [rsp+168h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v2 = a1[4];
  if ( *(char *)(v2 + 9) < 0 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(v2 + 20));
    v7 = _mm_loadl_epi64((const __m128i *)(v2 + 28));
    *(_QWORD *)v40 = 0;
    v8 = a1[8];
    v41 = _mm_sub_epi32(v7, v6).m128i_u64[0];
    v9 = sub_1EC7E0(v8);
    v10 = QT::QColor::fromRgba((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v9), 8), a2);
    v60[1] = v11;
    v60[0] = v10;
    QT::QPainter::QPainter((QT::QPainter *)v37, (QT::QPaintDevice *)(a1 + 2));
    QT::QBrush::QBrush(&v46, v60, 1);
    QT::QPainter::setBrush((QT::QPainter *)v37, (const QT::QBrush *)&v46);
    QT::QBrush::~QBrush((QT::QBrush *)&v46);
    sub_1C7B60((QT::QPen *)&v46, (QT::QPainter *)v37, (__int64)v60, 1);
    QT::QPen::~QPen((QT::QPen *)&v46);
    v12 = v40;
    QT::QPainter::fillRect(v37, v40, v60);
    v13 = a1[8];
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888);
      if ( v14 )
      {
        v15 = sub_2856C0(v14, v40);
        v16 = a1[6];
        v17 = 0;
        v36 = v16;
        if ( v16 )
        {
          do
          {
            v18 = (_QWORD *)(a1[5] + 96 * v17);
            v19 = (_DWORD *)v18[3];
            for ( i = &v19[4 * v18[4]]; i != v19; v19 += 4 )
            {
              while ( *v19 != -1 )
              {
                v19 += 4;
                if ( i == v19 )
                  goto LABEL_11;
              }
              v21 = QT::QColor::fromRgba(
                      (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v19[2]), 8),
                      (unsigned int)v12);
              v62 = v22;
              v61 = v21;
              QT::QBrush::QBrush(&v46, &v61, 1);
              QT::QPainter::setBrush((QT::QPainter *)v37, (const QT::QBrush *)&v46);
              QT::QBrush::~QBrush((QT::QBrush *)&v46);
              sub_1C7B60((QT::QPen *)v38, (QT::QPainter *)v37, (__int64)&v61, 1);
              QT::QPen::~QPen((QT::QPen *)v38);
              v12 = &v42;
              v42 = 0;
              v44 = 15;
              v43 = (int)((double)(int)v17 * v15);
              v45 = v43 + (int)(v15 - 1.0) - 1;
              QT::QPainter::drawRects(v37, &v42, 1);
            }
LABEL_11:
            v23 = v18[9];
            for ( j = v23 + 16LL * v18[10]; j != v23; v23 += 16 )
            {
              if ( *(_BYTE *)(v23 + 12) && *(_DWORD *)v23 == -1 )
              {
                v33 = QT::QColor::fromRgba(
                        (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(*(_DWORD *)(v23 + 8)), 8),
                        (unsigned int)v12);
                v62 = v34;
                v61 = v33;
                QT::QBrush::QBrush(&v46, &v61, 1);
                QT::QPainter::setBrush((QT::QPainter *)v37, (const QT::QBrush *)&v46);
                QT::QBrush::~QBrush((QT::QBrush *)&v46);
                sub_1C7B60((QT::QPen *)v39, (QT::QPainter *)v37, (__int64)&v61, 1);
                QT::QPen::~QPen((QT::QPen *)v39);
                v12 = (unsigned int *)&v46;
                v46 = 0;
                v48 = 15;
                v47 = (int)((double)(int)v17 * v15);
                v49 = v47 + (int)(v15 - 1.0) - 1;
                QT::QPainter::drawRects(v37, &v46, 1);
              }
            }
            ++v17;
          }
          while ( v17 != v36 );
        }
        v25 = 0;
        if ( v15 > 10.0 )
          v25 = (int)((v15 - 10.0) * 0.5);
        QT::QStyleOptionViewItem::QStyleOptionViewItem((QT::QStyleOptionViewItem *)&v46);
        QT::QStyleOption::initFrom((QT::QStyleOption *)&v46, (const QT::QWidget *)a1);
        v26 = (int *)a1[9];
        v48 = 1572865;
        v54 = 0x8400000084LL;
        v27 = &v26[2 * a1[10]];
        if ( v27 != v26 )
        {
          v28 = v26;
          for ( k = 1572865; ; k = v48 )
          {
            v30 = k & 0xFFFBFFFF;
            if ( v28[1] == 1 )
              v30 = k | 0x40000;
            v48 = v30;
            v31 = *v28;
            v50 = 0;
            v52 = 15;
            v51 = v25 + v31;
            v53 = v25 + 9 + v31;
            v32 = QT::QWidget::style((QT::QWidget *)a1);
            (*(void (__fastcall **)(__int64, __int64, int *, _BYTE *, _QWORD *))(*(_QWORD *)v32 + 176LL))(
              v32,
              23,
              &v46,
              v37,
              a1);
            v28 += 2;
            if ( v27 == v28 )
              break;
          }
        }
        QT::QBrush::~QBrush((QT::QBrush *)v59);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        QT::QIcon::~QIcon((QT::QIcon *)v57);
        QT::QLocale::~QLocale((QT::QLocale *)v56);
        QT::QFont::~QFont((QT::QFont *)v55);
        QT::QStyleOption::~QStyleOption((QT::QStyleOption *)&v46);
      }
    }
    QT::QPainter::~QPainter((QT::QPainter *)v37);
  }
  return v63 - __readfsqword(0x28u);
}
