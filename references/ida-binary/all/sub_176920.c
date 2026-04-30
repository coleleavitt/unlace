__int64 __fastcall sub_176920(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  _BYTE v5[8]; // [rsp+8h] [rbp-40h] BYREF
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_201290(ptr, *(_QWORD *)(a1 + 16));
  if ( ptr[2] )
  {
    QT::QUrl::QUrl(v5, ptr, 0);
    QT::QDesktopServices::openUrl((QT::QDesktopServices *)v5, (const QT::QUrl *)ptr);
    QT::QUrl::~QUrl((QT::QUrl *)v5);
    goto LABEL_10;
  }
  if ( (sub_47B6A0(QT::QCoreApplication::self, a2) & 1) != 0 )
  {
    sub_200F00(*(_QWORD *)(a1 + 16));
LABEL_10:
    v3 = 1;
    goto LABEL_5;
  }
  v2 = sub_5313F0(unk_8C9E90);
  if ( v2 )
    v3 = sub_5314B0(v2);
  else
    v3 = 0;
LABEL_5:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v3;
}
