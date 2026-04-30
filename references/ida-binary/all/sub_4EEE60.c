QT::QWidget *__fastcall sub_4EEE60(__int64 *a1, __int64 a2, __int64 a3)
{
  QT::QWidget *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __m128i v7; // xmm0
  const char *v9; // r13
  signed __int64 v10; // rax
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v4 = sub_4EE8D0(a1, a2, 1);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a2 + 152);
    if ( v5 > 1 )
    {
      v9 = *(const char **)(a2 + 144);
      v10 = v5 - 1;
      if ( !v9 || v10 < 0 )
      {
        v10 = 0;
        if ( v9 )
          v10 = strlen(v9);
      }
      QT::QString::fromUtf8(ptr, v10, v9);
      QT::QWidget::setWindowTitle(v4, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  if ( a3 )
  {
    v6 = *(_QWORD *)a3;
    v7 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    *(_QWORD *)a3 = *a1;
    *(_QWORD *)(a3 + 8) = a1[1];
    *(_QWORD *)(a3 + 16) = a1[2];
    *a1 = v6;
    *(__m128i *)(a1 + 1) = v7;
  }
  return v4;
}
