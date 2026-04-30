__int64 sub_17A4A0()
{
  unsigned int v0; // ebp
  int v2; // ebx
  void *ptr[4]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v4[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp-20h]

  v0 = 0;
  v5 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_inited() )
  {
    QT::QAction::data((QT::QAction *)v4);
    v2 = QT::QVariant::toInt((QT::QVariant *)v4, nullptr) - 1;
    v0 = 0;
    QT::QVariant::~QVariant((QT::QVariant *)v4);
    sub_2DDEB0(ptr, 2147483651LL);
    if ( v2 < (__int64)ptr[2] )
    {
      sub_4CB2D0(qword_8CD8B8);
      v0 = 1;
    }
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v0;
}
