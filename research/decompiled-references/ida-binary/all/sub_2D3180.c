__int64 __fastcall sub_2D3180(QT::QFrame *this, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v9; // rax
  const char *v10; // r13
  signed __int64 v11; // rax
  double v12; // xmm0_8
  __int64 v13; // rax
  __int64 v14; // r15
  _QWORD *v15; // r13
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  const char *v18; // rdx
  unsigned __int64 v19; // rcx
  double v20; // xmm0_8
  double v21; // xmm0_8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  size_t v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // r12
  double v29; // xmm1_8
  __int64 v30; // rax
  int v31; // ebx
  double v32; // [rsp+8h] [rbp-120h]
  const char *v33; // [rsp+10h] [rbp-118h]
  void *ptr[4]; // [rsp+20h] [rbp-108h] BYREF
  __m128i v35[4]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v36[16]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v37[8]; // [rsp+90h] [rbp-98h] BYREF
  double v38; // [rsp+98h] [rbp-90h]
  double v39; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v40; // [rsp+E8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( (unsigned int)sub_1EB590((__int64)this, a2, a3, a4, a5) == 1 )
    goto LABEL_4;
  do
  {
    if ( under_debugger )
      BUG();
    interr(40316, a2, v5, v6, a5);
LABEL_4:
    ;
  }
  while ( !*((_QWORD *)this + 111) );
  v7 = -1;
  if ( *((_DWORD *)this + 290) )
  {
    memset(v35, 0, sizeof(v35));
    QT::QFont::QFont((QT::QFont *)v36);
    QT::QFont::QFont((QT::QFont *)ptr);
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v37, (const QT::QFont *)ptr);
    QT::QFont::~QFont((QT::QFont *)ptr);
    sub_1C8200(v35, (__int64)this, (__m128d)0x3FF0000000000000uLL);
    v9 = *((_QWORD *)this + 135);
    if ( v9 <= 1 )
    {
      v32 = 0.0;
    }
    else
    {
      v10 = *((const char **)this + 134);
      v11 = v9 - 1;
      if ( !v10 || v11 < 0 )
      {
        v11 = 0;
        if ( v10 )
          v11 = strlen(*((const char **)this + 134));
      }
      v12 = QT::QString::fromUtf8(ptr, v11, v10);
      QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)v37, (const QT::QString *)ptr, -1);
      v32 = v12 * v38;
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    v13 = sub_2D1CC0((__int64)this + 1024, nullptr);
    v14 = *(_QWORD *)(v13 + 8);
    v15 = (_QWORD *)v13;
    v16 = 0;
    if ( !v14 )
    {
LABEL_30:
      v22 = *((_DWORD *)this + 290);
LABEL_31:
      if ( (int)v16 < v22 )
        *((_DWORD *)this + 290) = v16;
      v26 = QT::QAbstractScrollArea::viewportMargins(this);
      v28 = v27;
      v29 = (double)(int)(2 * QT::QFrame::frameWidth(this) + 2);
      v30 = (unsigned int)(int)((double)(int)v16 * v39 + v29 + (double)SHIDWORD(v26) + (double)SHIDWORD(v28));
      if ( (int)v30 > 0x7FFF )
        v30 = 0x7FFF;
      v31 = (int)((double)(int)v26 + v29 + v32 + (double)(int)v28);
      if ( v31 > 0x7FFF )
        v31 = 0x7FFF;
      v7 = (v30 << 32) | (unsigned int)v31;
      QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v37);
      QT::QFont::~QFont((QT::QFont *)v36);
      return v7;
    }
    while ( 1 )
    {
      v22 = *((_DWORD *)this + 290);
      if ( v22 <= (int)v16 )
        goto LABEL_31;
      v23 = *v15 + 24 * v16;
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
      {
        v17 = v24 - 1;
        v18 = *(const char **)v23;
        v19 = v17 >> 63;
        if ( v18 )
          goto LABEL_16;
      }
      else
      {
        v18 = &s1;
        LOBYTE(v19) = 0;
        v17 = 0;
        if ( &s1 )
        {
LABEL_16:
          if ( !(_BYTE)v19 )
            goto LABEL_17;
        }
      }
      v17 = 0;
      if ( v18 )
      {
        v33 = v18;
        v25 = strlen(v18);
        v20 = QT::QString::fromUtf8(ptr, v25, v33);
        goto LABEL_18;
      }
LABEL_17:
      v20 = QT::QString::fromUtf8(ptr, v17, v18);
LABEL_18:
      QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)v37, (const QT::QString *)ptr, -1);
      v21 = v20 * v38;
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v32 = fmax(v21, v32);
      if ( v14 == v16 + 1 )
      {
        LODWORD(v16) = v16 + 1;
        goto LABEL_30;
      }
      ++v16;
    }
  }
  return v7;
}
