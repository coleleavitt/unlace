void __fastcall sub_4E0B20(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  QT::QCoreApplication *v5; // r12
  int v6; // edx
  int v7; // eax
  bool (*v8)(); // rax
  __int64 v9; // r13
  bool v10; // bl
  int v11; // ecx

  if ( !a2 )
    return;
  if ( !a1 )
    goto LABEL_21;
  v3 = qword_8D1E60;
  v4 = qword_8D1E60 + 16 * xmmword_8D1E68;
  if ( qword_8D1E60 == v4 )
    goto LABEL_21;
  while ( a1 != *(_QWORD *)(v3 + 8) )
  {
    v3 += 16;
    if ( v4 == v3 )
      goto LABEL_21;
  }
  if ( v3 )
    v5 = *(QT::QCoreApplication **)v3;
  else
LABEL_21:
    v5 = nullptr;
  v6 = a3 & 1;
  v7 = *(_DWORD *)(a1 + 1680);
  if ( v6 )
  {
    if ( (v7 & 1) == 0 )
    {
      QT::QCoreApplication::removePostedEvents(v5, (QT::QObject *)((char *)&stru_7C0.st_size + 1), v6);
      v7 = *(_DWORD *)(a1 + 1680) | 1;
      *(_DWORD *)(a1 + 1680) = v7;
    }
  }
  else if ( (v7 & 1) == 0 )
  {
    return;
  }
  if ( (v7 & 0x100) != 0 )
    return;
  *(_DWORD *)(a1 + 1680) = v7 & 0xFFFFFFFE;
  v8 = *(bool (**)())(*(_QWORD *)a1 + 64LL);
  if ( v8 != vault_files_dirtree_widget_t__::vfunc_8 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64))v8)(a1) )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (unsigned int)get_undo_state() )
LABEL_15:
    *(_DWORD *)(a2 + 64) |= 0x20u;
LABEL_16:
  if ( (*(_BYTE *)(a1 + 1681) & 4) != 0 )
    *(_DWORD *)(a2 + 64) |= 0x40u;
  v9 = operator new(0x20u);
  v10 = *(_DWORD *)(a1 + 1840) > 0;
  QT::QEvent::QEvent(v9, 2001);
  *(_QWORD *)(v9 + 16) = a2;
  *(_QWORD *)v9 = filtered_widget_update_model_event_t___vtable;
  *(_BYTE *)(v9 + 24) = v10;
  QT::QCoreApplication::postEvent(v5, (QT::QObject *)v9, nullptr, v11);
}
