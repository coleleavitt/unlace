unsigned __int64 __fastcall sub_271820(QT::QWidget *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  const char *v12; // rsi
  char v13; // al
  __int64 v14; // r14
  __int64 v16; // rax
  __int64 v17; // r15
  const char *v18; // [rsp-8h] [rbp-108h]
  int v19; // [rsp+4h] [rbp-FCh]
  __int64 v20; // [rsp+18h] [rbp-E8h]
  __int64 v21; // [rsp+20h] [rbp-E0h]
  _BYTE v22[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v26[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  __int128 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v33; // [rsp+C8h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  QT::QPainter::QPainter((QT::QPainter *)v22, (QT::QWidget *)((char *)this + 16));
  v1 = QT::QWidget::palette(this);
  v2 = *(_QWORD *)QT::QPalette::brush(v1, 4, 10);
  v3 = *((_QWORD *)this + 4);
  v4 = _mm_loadl_epi64((const __m128i *)(v3 + 28));
  v5 = _mm_loadl_epi64((const __m128i *)(v3 + 20));
  v31 = 0;
  *(_QWORD *)&v32 = _mm_sub_epi32(v4, v5).m128i_u64[0];
  QT::QPainter::fillRect(v22, &v31, v2 + 8);
  v6 = sub_277DF0();
  v7 = *(_QWORD *)(v6 + 112);
  v8 = v6;
  if ( v7 )
  {
    v9 = sub_279D60((char *)this + 104);
    v10 = v9;
    if ( v9 )
    {
      v11 = sub_278470(v8, v9);
      if ( v11 )
      {
        v23 = -1;
        v24 = 0;
        v25 = 0;
        v12 = (const char *)&v23;
        v29 = 0;
        v31 = 0;
        v27 = 0;
        v30 = 0;
        v32 = 0;
        v28 = 0;
        v13 = sub_2710F0(0.0, (__int64)this, &v23, &v29, &v31, v7, v10, v11, &v27, (__int64)&v24, (__int64)&v25);
        v14 = v27;
        if ( v13 )
        {
          v20 = v28;
          QT::QPainter::setRenderHint(v22, 1, 1);
          v16 = *((_QWORD *)this + 4);
          v12 = (const char *)v26;
          v26[0] = 0;
          v19 = *(_DWORD *)(v16 + 28) - *(_DWORD *)(v16 + 20);
          v26[2] = v19;
          v26[1] = DWORD1(v25);
          v26[3] = HIDWORD(v25);
          QT::QPainter::setClipRect(v22, v26, 1);
          v17 = 0;
          v21 = v23;
          if ( v20 )
          {
            do
            {
              while ( 1 )
              {
                if ( v17 != v21 )
                {
                  v12 = v22;
                  if ( (unsigned __int8)sub_2716A0(
                                          (__int64)this,
                                          (QT::QPainter *)v22,
                                          *(_DWORD *)(v14 + 32 * v17 + 24),
                                          v10,
                                          v11,
                                          0) )
                    break;
                }
                if ( ++v17 == v20 )
                  goto LABEL_18;
              }
              v12 = v22;
              sub_270FE0((__int64)this, (__int64)v22, v29 + 40 * v17, 40 * v17 + v31, (__int64)&v24, (__int64)&v25, v19);
              ++v17;
            }
            while ( v17 != v20 );
          }
LABEL_18:
          if ( v21 != -1 )
          {
            v12 = v22;
            if ( (unsigned __int8)sub_2716A0(
                                    (__int64)this,
                                    (QT::QPainter *)v22,
                                    *(_DWORD *)(v14 + 32 * v21 + 24),
                                    v10,
                                    v11,
                                    1u) )
            {
              sub_270FE0((__int64)this, (__int64)v22, v29 + 40 * v21, 40 * v21 + v31, (__int64)&v24, (__int64)&v25, v19);
              v12 = v18;
            }
          }
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v31, v12);
          }
          if ( v29 )
          {
            *(_QWORD *)&v30 = 0;
            qfree(v29, v12);
          }
          if ( v14 )
            goto LABEL_10;
        }
        else
        {
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v31, (const char *)&v23);
          }
          if ( v29 )
          {
            *(_QWORD *)&v30 = 0;
            qfree(v29, (const char *)&v23);
          }
          if ( v14 )
LABEL_10:
            qfree(v14, v12);
        }
      }
    }
  }
  QT::QPainter::~QPainter((QT::QPainter *)v22);
  return v33 - __readfsqword(0x28u);
}
