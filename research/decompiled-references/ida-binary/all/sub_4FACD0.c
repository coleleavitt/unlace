__int64 __fastcall sub_4FACD0(__int64 a1, const char *a2, unsigned int a3)
{
  char v3; // r13
  unsigned int v4; // ebp
  size_t v5; // rax
  size_t v6; // rdx
  double v7; // xmm0_8
  void *ptr[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v10; // [rsp+10h] [rbp-58h]
  void *v11[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a3;
  v11[3] = (void *)__readfsqword(0x28u);
  v5 = strlen(a2);
  if ( !a2 || (v6 = (int)v5, (v5 & 0x80000000) != 0LL) )
  {
    v6 = 0;
    if ( a2 )
      v6 = v5;
  }
  v7 = QT::QString::fromUtf8(ptr, v6, a2);
  QT::QWidget::windowTitle((QT::QWidget *)v11);
  if ( v3 )
  {
    v4 = QT::QString::startsWith(v11, ptr, 1, v7);
  }
  else if ( v10 == v11[2] )
  {
    v4 = QT::QtPrivate::equalStrings(v10, v11[1], v10, ptr[1]);
  }
  if ( v11[0] && !_InterlockedSub((volatile signed __int32 *)v11[0], 1u) )
    free(v11[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v4;
}
