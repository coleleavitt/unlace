QT::QLineEdit *__fastcall sub_4FB220(
        __int64 a1,
        const QT::QString *a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  QT::QLineEdit *v12; // rbp
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  int v16; // r14d
  int v17; // eax
  __int64 v18; // rdx
  void **v19; // rsi
  unsigned __int64 v21; // rdx
  size_t v22; // rax
  const char *v23; // rbx
  const char *v24; // [rsp+0h] [rbp-68h] BYREF
  __int128 v25; // [rsp+8h] [rbp-60h]
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_4F93E0(a1, *(_BYTE *)(a3 + 16), *(_DWORD *)(a3 + 12));
  v12 = (QT::QLineEdit *)operator new(0x28u);
  sub_50FA80(v12);
  sub_4FB100(v12, a2);
  if ( *(int *)(a3 + 8) > 0 )
  {
    QT::QWidget::setSizePolicy(v12, &stru_50000);
    v16 = *(_DWORD *)(a3 + 8);
    QT::QString::fromUtf8(ptr, 1, "X");
    v17 = sub_4F9CA0((QT::QString *)ptr, v16);
    QT::QWidget::setFixedWidth(v12, v17);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  v18 = (unsigned int)*(char *)(a3 + 16);
  v19 = *(void ***)(a3 + 40);
  v25 = 0;
  v24 = nullptr;
  if ( (unsigned __int8)sub_4F9450(
                          a1,
                          (const char *)v19,
                          v18,
                          (__int64 *)&v24,
                          0,
                          v13,
                          (__m128)0LL,
                          a5,
                          a6,
                          a7,
                          v14,
                          v15,
                          a10,
                          a11) )
  {
    if ( (_QWORD)v25 )
    {
      v22 = v25 - 1;
      v23 = v24;
      v21 = (unsigned __int64)(v25 - 1) >> 63;
    }
    else
    {
      LOBYTE(v21) = 0;
      v22 = 0;
      v23 = &s1;
    }
    if ( !v23 || (_BYTE)v21 )
    {
      v22 = 0;
      if ( v23 )
        v22 = strlen(v23);
    }
    QT::QString::fromUtf8(ptr, v22, v23);
    v19 = ptr;
    QT::QLineEdit::setText(v12, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, (const char *)v19);
  }
  return v12;
}
