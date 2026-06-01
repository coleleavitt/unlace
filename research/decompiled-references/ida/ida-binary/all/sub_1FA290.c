unsigned __int64 __fastcall sub_1FA290(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  double v10; // xmm0_8
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  double v21; // [rsp+8h] [rbp-F0h]
  double v22; // [rsp+18h] [rbp-E0h]
  void *v23; // [rsp+20h] [rbp-D8h]
  int v24; // [rsp+38h] [rbp-C0h]
  int v25; // [rsp+3Ch] [rbp-BCh]
  void *v26[4]; // [rsp+40h] [rbp-B8h] BYREF
  void *ptr[4]; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v28[4]; // [rsp+80h] [rbp-78h] BYREF
  __m128i v29; // [rsp+90h] [rbp-68h]
  _QWORD v30[3]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+B8h] [rbp-40h]

  v23 = a2;
  LODWORD(a2) = a4;
  v31 = __readfsqword(0x28u);
  v7 = sub_178210(a3, a4, a1);
  sub_175CF0(v7);
  v8 = *a5 + 16 * a5[1];
  if ( *a5 != v8 )
  {
    v9 = *a5;
    do
    {
      *(__m128i *)v28 = _mm_loadu_si128((const __m128i *)a4);
      v13 = _mm_loadu_si128((const __m128i *)(a4 + 16));
      v29 = v13;
      if ( *(_BYTE *)(v9 + 12) )
      {
        v14 = *(_DWORD *)v9;
        v21 = *(double *)a4;
        if ( *(_DWORD *)v9 == -1 )
        {
          v24 = 0;
          v14 = 0;
          v22 = *(double *)(a4 + 32);
        }
        else
        {
          QT::QTextLayout::text((QT::QTextLayout *)v26);
          v18 = sub_175D50(v7, v14);
          QT::QString::mid(ptr, v26, 0, v18);
          a2 = ptr;
          QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)(a4 + 80), (const QT::QString *)ptr, -1);
          *(double *)v13.m128i_i64 = *(double *)v13.m128i_i64 + v21;
          v21 = *(double *)v13.m128i_i64;
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( v26[0] && !_InterlockedSub((volatile signed __int32 *)v26[0], 1u) )
            free(v26[0]);
          v19 = *(_DWORD *)(v7 + 208);
          if ( v19 >= v14 )
          {
            v24 = 0;
          }
          else
          {
            v24 = v14 - v19;
            *(double *)v13.m128i_i64 = (double)(v14 - v19) * *(double *)(a4 + 136) + *(double *)v13.m128i_i64;
            v21 = (double)(v14 - v19) * *(double *)(a4 + 136) + v21;
          }
          v22 = *(double *)v13.m128i_i64;
        }
        if ( *(_DWORD *)(v9 + 4) == 0x7FFFFFFF )
        {
          v10 = *(double *)(a4 + 32) + *(double *)(a4 + 48);
        }
        else
        {
          v25 = sub_175D50(v7, v14);
          QT::QTextLayout::text((QT::QTextLayout *)v26);
          v15 = sub_175D50(v7, v14 + *(_DWORD *)(v9 + 4));
          QT::QString::mid(ptr, v26, v25, v15 - v25);
          a2 = ptr;
          QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)(a4 + 80), (const QT::QString *)ptr, -1);
          v10 = *(double *)v13.m128i_i64 + v21;
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( v26[0] && !_InterlockedSub((volatile signed __int32 *)v26[0], 1u) )
            free(v26[0]);
          v16 = *(_DWORD *)(v7 + 208);
          v17 = *(_DWORD *)(v9 + 4) + v14;
          if ( v16 < v17 )
            v10 = v10 + (double)(v17 - v24 - v16) * *(double *)(a4 + 136);
        }
        *(double *)v28 = v22 - *(double *)v28 + *(double *)v28;
        *(double *)v29.m128i_i64 = v10 - *(double *)v28;
        v11 = QT::QColor::fromRgba(
                (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(*(_DWORD *)(v9 + 8)), 8),
                (unsigned int)a2);
        v30[1] = v12;
        v30[0] = v11;
        QT::QBrush::QBrush(ptr, v30, 1);
        a2 = v28;
        QT::QPainter::fillRect(v23, v28, ptr);
        QT::QBrush::~QBrush((QT::QBrush *)ptr);
      }
      v9 += 16;
    }
    while ( v8 != v9 );
  }
  return v31 - __readfsqword(0x28u);
}
