unsigned __int64 __fastcall sub_5478F0(QT::QObject *this, int a2, int a3, __int64 *a4)
{
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        QT::QFont::QFont((QT::QFont *)&ptr, (const QT::QFont *)a4[1]);
        sub_499B10(this, (QT::QFont *)&ptr);
        QT::QFont::~QFont((QT::QFont *)&ptr);
      }
    }
    else
    {
      QT::QString::fromUtf8(&ptr, 13, "Tabular views");
      v5 = ptr;
      v6 = *a4;
      if ( *a4 )
      {
        v5 = *(void **)v6;
        *(_QWORD *)v6 = ptr;
        ptr = v5;
        v7 = *(_QWORD *)(v6 + 8);
        *(_QWORD *)(v6 + 8) = v11;
        v11 = v7;
        v8 = *(_QWORD *)(v6 + 16);
        *(_QWORD *)(v6 + 16) = v12;
        v12 = v8;
      }
      if ( v5 && !_InterlockedSub((volatile signed __int32 *)v5, 1u) )
        free(ptr);
    }
  }
  return v13 - __readfsqword(0x28u);
}
