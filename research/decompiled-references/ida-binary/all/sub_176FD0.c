__int64 __fastcall FlatRenderer__::vfunc_5(QT::QObject *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rdi

  if ( *(_WORD *)(a2 + 8) != 2001 )
    return QT::QObject::event(a1, (QT::QEvent *)a2);
  if ( (unsigned __int8)netnode_is_available()
    && !(unsigned __int8)is_database_busy()
    && (dword_8CC5F0 <= 0 || (*(_BYTE *)(dbg + 32LL) & 0x40) == 0) )
  {
    return sub_175720((__int64)a1, *(_QWORD *)(a2 + 16));
  }
  v4 = (_QWORD *)operator new(0x18u);
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0;
  v6 = v4;
  QT::QEvent::QEvent(v4, 2001);
  v7 = *((_QWORD *)a1 + 20);
  v6[2] = v5;
  *v6 = IRendererUpdateModel___vtable;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *((_QWORD *)a1 + 20) = v6;
  QT::QBasicTimer::start((char *)a1 + 168, 200, (char *)a1 + 136);
  return 1;
}
