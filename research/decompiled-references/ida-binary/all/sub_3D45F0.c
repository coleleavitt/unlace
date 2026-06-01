unsigned __int64 __fastcall sub_3D45F0(
        QT::QPlainTextEdit **this,
        QT::QKeyEvent *a2,
        char a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 (*v13)(); // rax
  __m128i v14; // xmm0
  __int64 v15; // rdx
  void *v16; // rdi
  char v17; // al
  QT::QAbstractItemModel *v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  QT::QWidget *v21; // rax
  char v23; // r12
  volatile signed __int32 *v24; // rbp
  __int64 v25; // rbp
  __int64 v26; // rsi
  void (__fastcall *v27)(void **, __int64, _QWORD, _QWORD, void **); // rax
  int v28; // eax
  int v29; // edx
  int v30; // eax
  QT::QWidget *v31; // rax
  char v32; // r14
  __int64 v33; // r15
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 v36; // rbp
  __int64 v37; // [rsp+0h] [rbp-138h]
  int v38; // [rsp+18h] [rbp-120h]
  void (__fastcall *v39)(_BYTE *, __int64, void **, _QWORD); // [rsp+18h] [rbp-120h]
  int v40[2]; // [rsp+20h] [rbp-118h] BYREF
  int v41[2]; // [rsp+28h] [rbp-110h]
  void *ptr[2]; // [rsp+30h] [rbp-108h] BYREF
  int v43[2]; // [rsp+40h] [rbp-F8h]
  void *v44[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-D8h]
  void *v46[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+80h] [rbp-B8h]
  void *v48[2]; // [rsp+90h] [rbp-A8h] BYREF
  char v49[8]; // [rsp+A0h] [rbp-98h]
  void *v50[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-78h]
  _BYTE v52[40]; // [rsp+D0h] [rbp-68h] BYREF
  int v53[2]; // [rsp+F8h] [rbp-40h]

  *(_QWORD *)v53 = __readfsqword(0x28u);
  v13 = *(__int64 (**)())(*QT::QCoreApplication::self + 304LL);
  if ( v13 != sub_3CFBC0 && !(unsigned __int8)v13() )
    return *(_QWORD *)v53 - __readfsqword(0x28u);
  *(_QWORD *)v43 = 0;
  v14.m128i_i64[0] = 0;
  *(_OWORD *)ptr = 0;
  if ( !a2 )
  {
    QT::QString::assign(ptr, &unk_5C2F25, 0);
    goto LABEL_10;
  }
  v14 = _mm_loadu_si128((const __m128i *)((char *)a2 + 40));
  v15 = *((_QWORD *)a2 + 7);
  if ( v14.m128i_i64[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)v14.m128i_i64[0], 1u);
    v16 = ptr[0];
    *(_QWORD *)v43 = v15;
    *(__m128i *)ptr = v14;
    if ( v16 && !_InterlockedSub((volatile signed __int32 *)v16, 1u) )
      free(v16);
  }
  else
  {
    *(_QWORD *)v43 = *((_QWORD *)a2 + 7);
    *(__m128i *)ptr = v14;
  }
  if ( (QT::QKeyEvent::modifiers(a2) & 0x4000000) != 0 || (QT::QKeyEvent::modifiers(a2) & 0x2000000) != 0 )
  {
    v14 = _mm_loadu_si128((const __m128i *)((char *)a2 + 40));
    *(_QWORD *)v49 = *((_QWORD *)a2 + 7);
    *(__m128i *)v48 = v14;
    if ( v14.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)v14.m128i_i64[0], 1u);
    QT::QString::trimmed_helper((QT::QString *)v50, (QT::QString *)v48);
    if ( v51 )
    {
      v23 = 0;
      if ( !v50[0] )
      {
        if ( v48[0] && !_InterlockedSub((volatile signed __int32 *)v48[0], 1u) )
          free(v48[0]);
        goto LABEL_10;
      }
    }
    else
    {
      v23 = 1;
      if ( !v50[0] )
      {
        if ( v48[0] && !_InterlockedSub((volatile signed __int32 *)v48[0], 1u) )
          free(v48[0]);
        goto LABEL_31;
      }
    }
    if ( !_InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
      free(v50[0]);
    if ( v48[0] && !_InterlockedSub((volatile signed __int32 *)v48[0], 1u) )
      free(v48[0]);
    if ( v23 )
      goto LABEL_31;
  }
LABEL_10:
  QT::QPlainTextEdit::document(*(this + 2));
  QT::QTextDocument::toPlainText((QT::QTextDocument *)v50);
  QT::QString::trimmed_helper((QT::QString *)v44, (QT::QString *)v50);
  if ( v50[0] && !_InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
    free(v50[0]);
  v17 = 1;
  if ( v45 )
  {
    v17 = 0;
    if ( v45 == *(_QWORD *)v43 )
      v17 = QT::QtPrivate::equalStrings(v45, v44[1], v45, ptr[1]);
  }
  if ( *((_BYTE *)this + 44) != v17 )
  {
    *((_BYTE *)this + 44) = v17;
    v18 = sub_3D3590((QT::QObject *)this, v17);
    QT::QCompleter::setModel((QT::QCompleter *)this, v18);
  }
  if ( (unsigned __int8)sub_3D13A0((__int64)this, (__int64)ptr) )
    goto LABEL_28;
  QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v50);
  QT::QTextCursor::select(v50, 0);
  QT::QTextCursor::selectedText((QT::QTextCursor *)v46);
  QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v50);
  if ( !v47 )
    *((_DWORD *)this + 10) = 0;
  if ( !(_BYTE)byte_8D0A70 && __cxa_guard_acquire(&byte_8D0A70) )
  {
    *(double *)v14.m128i_i64 = QT::QString::fromUtf8(&unk_8D0A80, 28, "~!@#%^&*()+{}|:\"<>?,./;'[]\\=");
    __cxa_atexit((void (*)(void *))sub_17C8C0, &unk_8D0A80, &off_85BC80);
    __cxa_guard_release(&byte_8D0A70);
  }
  if ( a3 )
  {
    sub_3D1E00((QT::QCompleter *)this, 1, *(double *)v14.m128i_i64, a5, a6, a7, v19, v20, a10, a11);
    goto LABEL_53;
  }
  if ( v47 > 0 )
  {
    if ( *(_QWORD *)v43 <= 1u )
    {
      a5 = *(double *)&ptr[1];
      *(_QWORD *)v49 = *(_QWORD *)v43;
      v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr[0], (__m128i)(unsigned __int64)ptr[1]);
      *(__m128i *)v48 = v14;
      if ( ptr[0] )
        _InterlockedAdd((volatile signed __int32 *)ptr[0], 1u);
    }
    else
    {
      QT::QString::QString((QT::QString *)v48, (const QT::QChar *)((char *)ptr[1] + 2 * *(_QWORD *)v43 - 2), 1);
    }
    if ( QT::QString::indexOf(&unk_8D0A80, v48, 0, 1, *(double *)v14.m128i_i64) != -1 )
    {
      if ( v48[0] && !_InterlockedSub((volatile signed __int32 *)v48[0], 1u) )
        free(v48[0]);
      goto LABEL_24;
    }
    QT::QString::trimmed_helper((QT::QString *)v50, (const QT::QString *)ptr);
    v36 = v51;
    if ( v50[0] && !_InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
      free(v50[0]);
    if ( v48[0] && !_InterlockedSub((volatile signed __int32 *)v48[0], 1u) )
      free(v48[0]);
    if ( !v36 )
      goto LABEL_24;
LABEL_53:
    QT::QCompleter::completionPrefix((QT::QCompleter *)v50);
    v24 = (volatile signed __int32 *)v50[0];
    if ( v51 == v47 )
    {
      v32 = QT::QtPrivate::equalStrings(v51, v46[1], v51, v50[1]);
      if ( v24 && !_InterlockedSub(v24, 1u) )
        free(v50[0]);
      if ( v32 )
      {
LABEL_58:
        v28 = QT::QPlainTextEdit::cursorRect(*(this + 2));
        v40[0] = v28 + sub_527DF0(*(this + 2), v37, (int)v44, (int)v46, v38, v28, v29, (__int64)ptr[0]);
        v41[0] = v40[0] + sub_3D00A0((QT::QCompleter *)this) - 1;
        v30 = *((_DWORD *)this + 10);
        if ( v30 )
        {
          if ( v30 != 1 )
          {
            v31 = (QT::QWidget *)QT::QCompleter::popup((QT::QCompleter *)this);
            QT::QWidget::hide(v31);
LABEL_61:
            if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
              QT::QWidget::close(qword_8CCE70);
            goto LABEL_25;
          }
        }
        else if ( !(unsigned __int8)sub_3D0410((__int64)this) )
        {
          goto LABEL_61;
        }
        QT::QCompleter::complete(this, v40);
        v33 = QT::QCompleter::completionModel((QT::QCompleter *)this);
        v39 = *(void (__fastcall **)(_BYTE *, __int64, void **, _QWORD))(*(_QWORD *)v33 + 144LL);
        QT::QCompleter::currentIndex((QT::QCompleter *)v48);
        v39(v52, v33, v48, 0);
        QT::QVariant::toString((QT::QVariant *)v50);
        sub_3D1820(this, (QT::QString *)v50, *(double *)v14.m128i_i64, a5, a6, a7, v34, v35, a10, a11);
        if ( v50[0] && !_InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
          free(v50[0]);
        QT::QVariant::~QVariant((QT::QVariant *)v52);
        goto LABEL_25;
      }
    }
    else if ( v50[0] && !_InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
    {
      free(v50[0]);
    }
    QT::QCompleter::setCompletionPrefix((QT::QCompleter *)this, (const QT::QString *)v46);
    v25 = QT::QCompleter::popup((QT::QCompleter *)this);
    v26 = QT::QCompleter::completionModel((QT::QCompleter *)this);
    v27 = *(void (__fastcall **)(void **, __int64, _QWORD, _QWORD, void **))(*(_QWORD *)v26 + 96LL);
    v48[0] = (void *)-1LL;
    v48[1] = nullptr;
    *(_QWORD *)v49 = 0;
    v27(v50, v26, 0, 0, v48);
    QT::QAbstractItemView::setCurrentIndex(v25, v50);
    goto LABEL_58;
  }
LABEL_24:
  v21 = (QT::QWidget *)QT::QCompleter::popup((QT::QCompleter *)this);
  QT::QWidget::hide(v21);
LABEL_25:
  if ( v46[0] && !_InterlockedSub((volatile signed __int32 *)v46[0], 1u) )
    free(v46[0]);
LABEL_28:
  if ( v44[0] && !_InterlockedSub((volatile signed __int32 *)v44[0], 1u) )
    free(v44[0]);
LABEL_31:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return *(_QWORD *)v53 - __readfsqword(0x28u);
}
