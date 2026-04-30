unsigned __int64 __fastcall sub_3616D0(__int64 a1)
{
  QT::QLabel *v1; // r13
  __int64 v2; // rax
  void *v3; // rdx
  void *v4; // rdx
  void *v5; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-8h] BYREF
  __int64 vars8; // [rsp+10h] [rbp+8h]
  void *vars18[4]; // [rsp+20h] [rbp+18h] BYREF
  void *vars38[3]; // [rsp+40h] [rbp+38h] BYREF
  unsigned __int64 vars50; // [rsp+58h] [rbp+50h]
  void **vars68; // [rsp+70h] [rbp+68h]

  vars68 = &ptr[1];
  vars50 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  vars8 = 0;
  if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 232LL)) )
  {
    if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 64LL)) )
    {
      QT::QString::assign(ptr, "somefunc+0x22", 13);
    }
    else if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 72LL)) )
    {
      if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 80LL)) )
        QT::QString::assign(ptr, "seg000:0FE4", 11);
      else
        QT::QString::assign(ptr, "1000:0FE4", 9);
    }
    else
    {
      QT::QString::assign(ptr, "          0FE4", 14);
    }
  }
  v1 = *(QT::QLabel **)(*(_QWORD *)(a1 + 56) + 144LL);
  QT::QString::fromUtf8(vars18, 21, "Line prefix example: ");
  v2 = QT::QString::append((QT::QString *)vars18, (const QT::QString *)&ptr[1]);
  v3 = *(void **)v2;
  *(_QWORD *)v2 = 0;
  vars38[0] = v3;
  v4 = *(void **)(v2 + 8);
  *(_QWORD *)(v2 + 8) = 0;
  vars38[1] = v4;
  v5 = *(void **)(v2 + 16);
  *(_QWORD *)(v2 + 16) = 0;
  vars38[2] = v5;
  QT::QLabel::setText(v1, (const QT::QString *)vars38);
  if ( vars38[0] && !_InterlockedSub((volatile signed __int32 *)vars38[0], 1u) )
    free(vars38[0]);
  if ( vars18[0] && !_InterlockedSub((volatile signed __int32 *)vars18[0], 1u) )
    free(vars18[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return vars50 - __readfsqword(0x28u);
}
