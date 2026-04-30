unsigned __int64 __fastcall sub_514C10(QT::QAbstractScrollArea *this, int *a2, int a3, char a4, double a5, double a6)
{
  __int64 v8; // r13
  char v10; // r15
  size_t v11; // rax
  QT::QGuiApplication *v12; // r14
  int v13; // r13d
  int v14; // r12d
  int v15; // ebp
  char **p_s2; // rsi
  char *v17; // rbp
  char *v18; // r12
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rsi
  const char *v22; // rdi
  __m128i si128; // xmm0
  int v24; // r12d
  int v25; // eax
  QT::QAbstractSlider *v26; // r12
  int v27; // r13d
  int v28; // ebp
  int v29; // eax
  size_t n[2]; // [rsp+0h] [rbp-E8h] BYREF
  QT::QAbstractSlider *v31; // [rsp+18h] [rbp-D0h]
  size_t v32; // [rsp+20h] [rbp-C8h]
  int v33; // [rsp+2Ch] [rbp-BCh]
  __int64 v34; // [rsp+38h] [rbp-B0h] BYREF
  int v35[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-A0h] BYREF
  QT::QGuiApplication *v37; // [rsp+50h] [rbp-98h] BYREF
  __int128 v38; // [rsp+58h] [rbp-90h]
  char *s2; // [rsp+70h] [rbp-78h] BYREF
  __int128 v40; // [rsp+78h] [rbp-70h]
  _BYTE v41[24]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+A8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( a3 == 1 || a3 == 2 && (QT::QGuiApplication::keyboardModifiers(this) & 0x2000000) != 0 )
  {
    if ( *((_DWORD *)this + 26) == -1 || (v8 = *((_QWORD *)this + 13), HIDWORD(v8) == -1) )
      v8 = *((_QWORD *)this + 14);
  }
  else
  {
    v8 = -1;
  }
  v34 = v8;
  if ( (unsigned int)sub_511D50((int *)this + 26, (int *)&v34) || (unsigned int)sub_511D50((int *)this + 28, a2) )
  {
    v10 = 0;
    if ( *((_DWORD *)this + 26) != -1 && *((_DWORD *)this + 27) != -1 && *((_DWORD *)this + 28) != -1 )
      v10 = *((_DWORD *)this + 29) != -1;
    v37 = nullptr;
    v38 = 0;
    sub_5132B0((__int64)this, (__int64)&v37);
    v11 = v38;
    v12 = v37;
    *((_QWORD *)this + 13) = v8;
    n[0] = v11;
    *((_QWORD *)this + 14) = *(_QWORD *)a2;
    if ( a4 )
    {
      if ( (*((_BYTE *)this + 96) & 1) != 0 )
      {
        sub_5149B0((__int64)this + 40);
        *((_DWORD *)this + 24) &= ~1u;
        sub_5135F0(
          *((QT::QAbstractScrollArea **)this + 10),
          *((_DWORD *)this + 22),
          *((_DWORD *)this + 23),
          (__m128d)0LL);
      }
      *(_QWORD *)v35 = 0;
      v36 = 0;
      if ( (unsigned __int8)sub_513100(this, (__int64 *)v35, (unsigned int *)&v36, 0, 0.0, a6) )
      {
        v13 = HIDWORD(v36);
        v14 = v35[1];
        v15 = v35[0];
        LODWORD(v32) = v36 + 1;
        if ( v35[1] <= SHIDWORD(v36) && v35[0] <= (int)v36 + 1 )
        {
          v31 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(this);
          v33 = QT::QAbstractSlider::value(v31);
          if ( v14 >= (int)QT::QAbstractSlider::value(v31) )
          {
            v24 = QT::QAbstractSlider::value(v31);
            v25 = v24 + QT::QAbstractSlider::pageStep(v31);
            v14 = v33;
            if ( v25 <= v13 )
              v14 = v13 - QT::QAbstractSlider::pageStep(v31);
          }
          QT::QAbstractSlider::setValue(v31, v14);
          v26 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(this);
          v27 = QT::QAbstractSlider::value(v26);
          if ( (int)QT::QAbstractSlider::value(v26) <= v15 )
          {
            v28 = QT::QAbstractSlider::value(v26);
            v29 = v28 + QT::QAbstractSlider::pageStep(v26);
            v15 = v27;
            if ( v29 <= (int)v32 )
              v15 = v32 - QT::QAbstractSlider::pageStep(v26);
          }
          QT::QAbstractSlider::setValue(v26, v15);
        }
      }
    }
    p_s2 = &s2;
    s2 = nullptr;
    v40 = 0;
    sub_5132B0((__int64)this, (__int64)&s2);
    v17 = s2;
    if ( (_QWORD)v40 )
    {
      v18 = s2;
      v22 = &s1;
      if ( !n[0] )
        goto LABEL_40;
    }
    else
    {
      v18 = (char *)&s1;
      if ( !n[0] )
      {
LABEL_19:
        v19 = 0;
        if ( *((_DWORD *)this + 26) != -1 && *((_DWORD *)this + 27) != -1 && *((_DWORD *)this + 28) != -1 )
          v19 = *((_DWORD *)this + 29) != -1;
        if ( v10 != v19 )
        {
          v20 = xmmword_8D2388;
          if ( !(_QWORD)xmmword_8D2388 )
          {
            v21 = qword_8D2380;
            v41[8] = 1;
            *(_QWORD *)v41 = "OutputCopy";
            if ( (unsigned __int64)v41 < qword_8D2380
              || (unsigned __int64)v41 >= qword_8D2380 + 16LL * *((_QWORD *)&xmmword_8D2388 + 1) )
            {
              if ( !*((_QWORD *)&xmmword_8D2388 + 1) )
              {
                qword_8D2380 = qvector_reserve(&qword_8D2380, qword_8D2380, 1, 16);
                v20 = xmmword_8D2388;
                v21 = qword_8D2380;
              }
              *(__m128i *)(v21 + 16 * v20) = _mm_load_si128((const __m128i *)v41);
            }
            else
            {
              si128 = _mm_load_si128((const __m128i *)v41);
              if ( !*((_QWORD *)&xmmword_8D2388 + 1) )
              {
                *(__m128i *)n = si128;
                qword_8D2380 = qvector_reserve(&qword_8D2380, qword_8D2380, 1, 16);
                v20 = xmmword_8D2388;
                v21 = qword_8D2380;
                si128 = _mm_load_si128((const __m128i *)n);
              }
              *(__m128i *)(v21 + 16 * v20) = si128;
            }
            *(_QWORD *)&xmmword_8D2388 = xmmword_8D2388 + 1;
          }
          p_s2 = (char **)this;
          sub_531B30(1, this, &qword_8D2380);
        }
        QT::QWidget::update(this);
        if ( v17 )
          qfree(v17, (const char *)p_s2);
        if ( v12 )
          qfree(v12, (const char *)p_s2);
        return sub_4F8290(this);
      }
    }
    v22 = (const char *)v12;
LABEL_40:
    p_s2 = (char **)v18;
    if ( strcmp(v22, v18) )
    {
      memset(v41, 0, sizeof(v41));
      v31 = (QT::QAbstractSlider *)(QT::QCoreApplication::self + 2);
      if ( v18 )
      {
        n[0] = strlen(v18);
        v32 = n[0] + 1;
        *(_QWORD *)v41 = qvector_reserve(v41, 0, n[0] + 1, 1);
        *(_QWORD *)&v41[8] = n[0] + 1;
        memmove(*(void **)v41, v18, n[0]);
        *(_BYTE *)(*(_QWORD *)v41 + n[0]) = 0;
      }
      p_s2 = (char **)v41;
      sub_47C5A0(v31, (__int64)v41, 1u);
      if ( *(_QWORD *)v41 )
      {
        *(_QWORD *)&v41[8] = 0;
        qfree(*(_QWORD *)v41, v41);
      }
    }
    goto LABEL_19;
  }
  return sub_4F8290(this);
}
