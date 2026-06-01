__int64 __fastcall sub_17F970(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // bp
  void *v4; // rdi
  char v5; // r14
  QT::QAction *v7; // rbp
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  void *v9; // [rsp+8h] [rbp-40h]
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 232);
  if ( v2 )
  {
    v3 = sub_1EC200(*(_QWORD *)(a2 + 232));
    QT::QAction::text((QT::QAction *)&ptr);
    v4 = v9;
    if ( !v9 )
      v4 = &QT::QString::_empty;
    v5 = (unsigned int)QT::QString::compare_helper(v4, v10, "Abort selection", 15, 1) == 0;
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      free(ptr);
      if ( v3 == v5 )
        return 3;
    }
    else if ( v3 == v5 )
    {
      return 3;
    }
    v7 = qword_8CA588;
    if ( (unsigned __int8)sub_1EC200(v2) )
      QT::QString::fromUtf8(&ptr, 15, "Abort selection");
    else
      QT::QString::fromUtf8(&ptr, 15, "Begin selection");
    QT::QAction::setText(v7, (const QT::QString *)&ptr);
    if ( ptr )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
    }
    return 3;
  }
  return 7;
}
