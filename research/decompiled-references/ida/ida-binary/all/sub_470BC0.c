void __fastcall sub_470BC0(_QWORD *a1, __int64 a2)
{
  QT::QTreeView *v2; // rbp
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax

  v2 = (QT::QTreeView *)(a1 - 38);
  *(a1 - 38) = &til_dirtree_widget_t___vtable;
  v3 = (volatile signed __int32 *)a1[274];
  *(a1 - 36) = til_dirtree_widget_t___vtable_at__16;
  *(a1 - 8) = til_dirtree_widget_t___vtable_at__240;
  *a1 = til_dirtree_widget_t___vtable_at__304;
  if ( v3 )
  {
    v4 = v3 + 2;
    if ( *((_QWORD *)v3 + 1) == 0x100000001LL )
    {
      v6 = *(_QWORD *)v3;
      *((_QWORD *)v3 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v6 + 16))(v3, a2, v4);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd(v4, 0xFFFFFFFF);
      }
      else
      {
        v5 = *((_DWORD *)v3 + 2);
        *((_DWORD *)v3 + 2) = v5 - 1;
      }
      if ( v5 == 1 )
        sub_28E9C0(v3);
    }
  }
  ida_dirtree_widget_t__::vfunc_3(v2);
  operator delete(v2, 0x9C8u);
}
