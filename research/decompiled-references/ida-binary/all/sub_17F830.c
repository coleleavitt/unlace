__int64 __fastcall sub_17F830(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  QT::QAction *v6; // rbp
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = get_debugger_plugins(0) == 0;
  result = 7;
  if ( !v2 && *(_DWORD *)(a2 + 8) != 28 )
  {
    v4 = sub_19AFC0();
    v5 = qword_8CA288;
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 44) != 3 && *(_QWORD *)(v4 + 56) != (_QWORD)xmmword_8CC810 )
        return 3;
      v5 = qword_8CA290;
    }
    if ( v5 )
    {
      v6 = *(QT::QAction **)(a1 + 192);
      QT::QAction::text((QT::QAction *)ptr);
      QT::QAction::setText(v6, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QAction::toolTip((QT::QAction *)ptr);
      QT::QAction::setToolTip(v6, (const QT::QString *)ptr);
      if ( ptr[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
      QT::QAction::icon((QT::QAction *)ptr);
      QT::QAction::setIcon(v6, (const QT::QIcon *)ptr);
      QT::QIcon::~QIcon((QT::QIcon *)ptr);
    }
    return 3;
  }
  return result;
}
