unsigned __int64 __fastcall sub_2743E0(
        QT::QObject *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rax
  _QWORD *v11; // rbp
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rcx
  const void *v19; // r9
  size_t v20; // r8
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rsi
  const char *v24; // rdx
  const char *v25; // rsi
  __int64 v26; // rax
  QT::QObject *v27; // r14
  QT::QHBoxLayout *v28; // rbp
  QT::QWidget *v29; // r15
  QT::QAbstractItemView *v30; // rbp
  double v31; // xmm4_8
  double v32; // xmm5_8
  void *v34; // rdi
  size_t v35; // rdx
  char *v36; // r15
  __int64 (__fastcall *v37)(); // [rsp+8h] [rbp-D0h]
  __int64 v38; // [rsp+18h] [rbp-C0h]
  size_t v39; // [rsp+18h] [rbp-C0h]
  size_t v40; // [rsp+18h] [rbp-C0h]
  size_t v41; // [rsp+20h] [rbp-B8h]
  const void *v42; // [rsp+28h] [rbp-B0h]
  _BYTE v43[4]; // [rsp+3Ch] [rbp-9Ch] BYREF
  __int64 v44; // [rsp+40h] [rbp-98h] BYREF
  __int128 v45; // [rsp+48h] [rbp-90h]
  void *v46[4]; // [rsp+60h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-58h] BYREF
  size_t n; // [rsp+90h] [rbp-48h]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v10 = sub_277DF0();
  v11 = (_QWORD *)v10;
  if ( v10 )
  {
    v11 = *(_QWORD **)(v10 + 112);
    if ( v11 )
    {
      v12 = *((_DWORD *)a1 + 16);
      if ( v12 )
      {
        if ( v12 == 1 )
          v11 = (_QWORD *)v11[8];
        else
          v11 = (_QWORD *)v11[9];
      }
      else
      {
        v11 = (_QWORD *)v11[7];
      }
    }
  }
  sub_2777F0(v43, v11);
  while ( (int)QT::QSplitter::count(a1) > 0 )
  {
    v13 = QT::QSplitter::widget(a1, 0);
    sub_2DE260(0, v13);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  }
  *((_QWORD *)a1 + 7) = 0;
  *(_OWORD *)((char *)a1 + 40) = 0;
  v14 = sub_277DF0();
  v15 = v14;
  if ( *((_DWORD *)a1 + 16) <= 2u )
  {
    v16 = *(_QWORD *)(v14 + 112);
    if ( v16 )
    {
      if ( !v11 )
      {
        sub_273610(a1, 0);
        goto LABEL_32;
      }
      v17 = v16 + 8;
      v37 = sub_273C00((__int64)a1, v17);
      QT::QWidget::windowTitle((QT::QWidget *)v46);
      QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)v46);
      v19 = ptr[1];
      v20 = n;
      if ( !ptr[1] )
        v19 = &QT::QByteArray::_empty;
      v44 = 0;
      v45 = 0;
      if ( n )
      {
        v34 = nullptr;
        v35 = n + 1;
        if ( n != -1 )
        {
          v42 = v19;
          v41 = n;
          v40 = n + 1;
          v44 = qvector_reserve(&v44, 0, v35, 1);
          v19 = v42;
          v34 = (void *)v44;
          v20 = v41;
          v35 = v40;
        }
        *(_QWORD *)&v45 = v35;
        v39 = v20;
        memmove(v34, v19, v20);
        v20 = v39;
        *(_BYTE *)(v44 + v39) = 0;
      }
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v46[0] && !_InterlockedSub((volatile signed __int32 *)v46[0], 1u) )
        free(v46[0]);
      v21 = v45;
      v22 = 2;
      if ( (_QWORD)v45 )
      {
        v22 = v45 + 1;
        v23 = v44;
        v21 = v45 - 1;
        if ( *((_QWORD *)&v45 + 1) >= (unsigned __int64)(v45 + 1) )
          goto LABEL_24;
      }
      else
      {
        v23 = v44;
        if ( *((_QWORD *)&v45 + 1) >= 2u )
        {
LABEL_24:
          *(_QWORD *)&v45 = v22;
          v24 = &s1;
          *(_BYTE *)(v23 + v21) = 58;
          *(_BYTE *)(v44 + v21 + 1) = 0;
          if ( (_QWORD)v45 )
            v24 = (const char *)v44;
          v25 = (const char *)v17;
          v26 = ((__int64 (__fastcall *)(_QWORD *, __int64, const char *, __int64, size_t))v37)(v11, v17, v24, v18, v20);
          *((_QWORD *)a1 + 5) = v26;
          if ( v26 )
          {
            *(_QWORD *)(v26 + 48) = a1;
            *(_DWORD *)(*((_QWORD *)a1 + 5) + 16LL) |= 1u;
            v27 = (QT::QObject *)sub_277C30(*((_QWORD *)a1 + 5));
            v28 = (QT::QHBoxLayout *)operator new(0x20u);
            QT::QHBoxLayout::QHBoxLayout(v28);
            *(_OWORD *)ptr = 0;
            QT::QLayout::setContentsMargins(v28, ptr);
            if ( (unsigned int)(*((_DWORD *)a1 + 16) - 1) <= 1 )
            {
              v36 = (char *)operator new(0x90u);
              sub_270F30(v36);
              *((_QWORD *)a1 + 6) = v36;
              QT::QWidget::setFixedWidth((QT::QWidget *)v36, 50);
              QT::QBoxLayout::addWidget(v28, *((_QWORD *)a1 + 6), 0, 0);
            }
            QT::QBoxLayout::addWidget(v28, v27, 0, 0);
            v29 = (QT::QWidget *)operator new(0x28u);
            QT::QWidget::QWidget(v29, 0, 0);
            QT::QWidget::setLayout(v29, v28);
            QT::QSplitter::addWidget(a1, v29);
            v30 = (QT::QAbstractItemView *)operator new(0x58u);
            sub_26EA80(v30);
            *((_QWORD *)a1 + 7) = v30;
            sub_273690((__int64)a1, *(_DWORD *)(v15 + 136));
            QT::QSplitter::addWidget(a1, *((QT::QWidget **)a1 + 7));
            sub_51B6E0(a1);
            v25 = (const char *)v27;
            sub_273FD0(a1, v27, (__m128)0LL, a3, a4, a5, v31, v32, a8, a9);
          }
          if ( v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree(v44, v25);
          }
          goto LABEL_32;
        }
      }
      v38 = v22;
      v44 = qvector_reserve(&v44, v23, v22, 1);
      v22 = v38;
      v23 = v44;
      goto LABEL_24;
    }
  }
LABEL_32:
  sub_278220(v15, a1);
  sub_277860(v43);
  return v49 - __readfsqword(0x28u);
}
