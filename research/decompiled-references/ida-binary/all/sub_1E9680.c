void __fastcall sub_1E9680(__int64 a1)
{
  __int64 v1; // rax

  if ( !*(_BYTE *)(a1 + 24) )
  {
    v1 = *(_QWORD *)(a1 + 16);
    if ( v1 )
    {
      *(_QWORD *)(v1 + 948) = *(_QWORD *)(a1 + 32);
      *(_WORD *)(v1 + 956) = *(_WORD *)(a1 + 40);
    }
  }
  *(_QWORD *)a1 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)a1);
}
