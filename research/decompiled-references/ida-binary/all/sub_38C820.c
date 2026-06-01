__int64 __fastcall sub_38C820(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  size_t v4; // rax
  double v5; // xmm0_8
  unsigned int Data; // ebp
  void *ptr[4]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v9[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 72);
  v10 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v2 + 48);
  v4 = 0;
  if ( a2 )
    v4 = strlen(a2);
  v5 = QT::QString::fromUtf8(ptr, v4, a2);
  QT::QVariant::QVariant((QT::QVariant *)v9, (const QT::QString *)ptr);
  Data = QT::QComboBox::findData(v3, v9, 0, 16, v5);
  QT::QVariant::~QVariant((QT::QVariant *)v9);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return Data;
}
