__int64 __fastcall sub_357F80(
        const char **a1,
        __int64 a2,
        __int128 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int128 *v12; // rbx
  void *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebp
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // rsi
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-88h] BYREF
  __int128 v26; // [rsp+8h] [rbp-80h]
  void *ptr[4]; // [rsp+20h] [rbp-68h] BYREF
  void *v28; // [rsp+40h] [rbp-48h] BYREF
  void *v29; // [rsp+48h] [rbp-40h]
  unsigned __int64 v30; // [rsp+58h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v12 = a3;
  v25 = 0;
  v26 = 0;
  if ( !a3 )
    v12 = &xmmword_8CF080;
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v28, (const QT::QString *)ptr);
  v13 = v29;
  if ( !v29 )
    v13 = &QT::QByteArray::_empty;
  v16 = eval_expr_long(a1, xmmword_8CC810, v13, &v25);
  if ( v28 && !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
    free(v28);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( !(_BYTE)v16 )
  {
    if ( (v12[1] & 1) != 0 )
    {
      if ( (_QWORD)v26 )
        sub_169630((int)"%s", v25, v14, v15, v17, v18, (__m128)0LL, a5, a6, a7, v19, v20, a10, a11, v25);
      else
        sub_169630((int)"%s", (__int64)&s1, v14, v15, v17, v18, (__m128)0LL, a5, a6, a7, v19, v20, a10, a11, v25);
    }
    v21 = &byte_7;
    QT::QWidget::setFocus(a2, 7);
    goto LABEL_16;
  }
  v21 = *a1;
  if ( (__int64)*a1 < *(_QWORD *)v12 )
  {
    v23 = *((_DWORD *)v12 + 4);
    if ( (v23 & 2) == 0 )
      goto LABEL_22;
LABEL_28:
    sub_169630(
      (int)"Value %lld outside expected range: [%lld, %lld)",
      (__int64)v21,
      *(_QWORD *)v12,
      *((_QWORD *)v12 + 1),
      v17,
      v18,
      (__m128)0LL,
      a5,
      a6,
      a7,
      v19,
      v20,
      a10,
      a11,
      v25);
    v23 = *((_DWORD *)v12 + 4);
    goto LABEL_22;
  }
  if ( (__int64)v21 < *((_QWORD *)v12 + 1) )
    goto LABEL_17;
  v23 = *((_DWORD *)v12 + 4);
  if ( (v23 & 2) != 0 )
    goto LABEL_28;
LABEL_22:
  if ( (v23 & 4) != 0 )
  {
LABEL_16:
    v16 = 0;
    goto LABEL_17;
  }
  v24 = *(_QWORD *)v12;
  if ( (__int64)*a1 >= *(_QWORD *)v12 )
    v24 = *((_QWORD *)v12 + 1) - 1LL;
  *a1 = (const char *)v24;
LABEL_17:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, v21);
  }
  return v16;
}
