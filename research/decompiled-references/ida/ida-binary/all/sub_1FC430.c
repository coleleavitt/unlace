unsigned __int64 __fastcall sub_1FC430(double a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bp
  __int64 v5; // rdi
  void *v7[4]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  if ( (_QWORD)xmmword_8CB528 )
  {
    v1 = 0;
    do
    {
      while ( 1 )
      {
        QT::QWidget::windowTitle((QT::QWidget *)v7);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v7);
        v4 = sub_3D5FB0();
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v7[0] && !_InterlockedSub((volatile signed __int32 *)v7[0], 1u) )
          free(v7[0]);
        if ( v4 )
        {
          v5 = *(_QWORD *)(qword_8CB520 + 8 * v1);
          if ( *(_QWORD *)(v5 + 896) )
            break;
        }
        if ( ++v1 >= (unsigned __int64)xmmword_8CB528 )
          return v9 - __readfsqword(0x28u);
      }
      *(_DWORD *)(v5 + 944) = 2;
      ++v1;
      sub_1F8860(v5, nullptr, v2, v3, a1);
    }
    while ( v1 < (unsigned __int64)xmmword_8CB528 );
  }
  return v9 - __readfsqword(0x28u);
}
