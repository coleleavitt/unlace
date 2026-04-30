unsigned __int64 __fastcall sub_498220(QT::QLabel *this, const QT::QString *a2, __int64 a3)
{
  void *v3; // rax
  __m128i v4; // xmm0
  int v5; // r13d
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r12
  __m128i si128; // xmm0
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rbp
  __int64 v16; // [rsp+10h] [rbp-88h]
  __int64 v17; // [rsp+10h] [rbp-88h]
  __int64 v18; // [rsp+18h] [rbp-80h]
  void *ptr[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v20; // [rsp+30h] [rbp-68h]
  void *v21[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  QT::QKeySequence::mnemonic((QT::QKeySequence *)v21, a2);
  v3 = *((void **)this + 7);
  *((void **)this + 7) = v21[0];
  v21[0] = v3;
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v21);
  v4 = _mm_loadu_si128((const __m128i *)a2);
  v20 = *((_QWORD *)a2 + 2);
  *(__m128i *)ptr = v4;
  if ( v4.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v4.m128i_i64[0], 1u);
  v5 = QT::QLabel::textFormat(this);
  if ( v5 || !(unsigned __int8)QT::Qt::mightBeRichText(*((_QWORD *)a2 + 1), *((_QWORD *)a2 + 2) | 0x8000000000000000LL) )
  {
    v6 = *((_QWORD *)a2 + 2);
    v7 = *((_QWORD *)a2 + 1);
    if ( -v6 >= 0 && v6 != 0
      || v6 <= 0
      || (v18 = *((_QWORD *)a2 + 2), v16 = v7 + 2 * v6, v8 = QT::QtPrivate::qustrchr((2 * v6) >> 1, v7, 38), v16 == v8)
      || (v9 = (v8 - v7) >> 1, (_DWORD)v9 == -1)
      || (int)v9 >= v18 - 1
      || *(_WORD *)(v7 + 2LL * ((int)v9 + 1)) == 38 )
    {
      if ( !v5 )
        goto LABEL_12;
    }
    else
    {
      QT::QString::mid(v21, a2, 0, (int)v9);
      si128 = _mm_load_si128((const __m128i *)ptr);
      v12 = v20;
      v13 = (int)v9 + 1;
      *(__m128i *)ptr = _mm_load_si128((const __m128i *)v21);
      v20 = v22;
      v22 = v12;
      *(__m128i *)v21 = si128;
      if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
      {
        free(v21[0]);
        v13 = (int)v9 + 1;
      }
      v17 = v13;
      QT::QString::append(ptr, "<u>", 3);
      QT::QString::append(ptr, *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2 * v17));
      QT::QString::append(ptr, "</u>", 4);
      QT::QString::mid(v21, a2, (int)v9 + 2, -1);
      QT::QString::append((QT::QString *)ptr, (const QT::QString *)v21);
      if ( v21[0] && !_InterlockedSub((volatile signed __int32 *)v21[0], 1u) )
        free(v21[0]);
      v14 = operator new(0x10u);
      QT::QShortcut::QShortcut(v14, (char *)this + 56, this, "1transfer_focus()", 0, 1);
    }
    QT::QLabel::setTextFormat(this, 2);
  }
LABEL_12:
  QT::QLabel::setText(this, (const QT::QString *)ptr);
  *((_QWORD *)this + 6) = a3;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v23 - __readfsqword(0x28u);
}
