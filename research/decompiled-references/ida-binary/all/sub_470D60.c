__int64 __fastcall sub_470D60(_QWORD *a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbp
  volatile signed __int32 *v3; // rdx
  signed __int32 v4; // eax
  __int64 v6; // rax

  *(a1 - 30) = &til_dirtree_widget_t___vtable;
  v2 = (volatile signed __int32 *)a1[282];
  *(a1 - 28) = til_dirtree_widget_t___vtable_at__16;
  *a1 = til_dirtree_widget_t___vtable_at__240;
  a1[8] = til_dirtree_widget_t___vtable_at__304;
  if ( v2 )
  {
    v3 = v2 + 2;
    if ( *((_QWORD *)v2 + 1) == 0x100000001LL )
    {
      v6 = *(_QWORD *)v2;
      *((_QWORD *)v2 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v6 + 16))(v2, a2, v3);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v4 = _InterlockedExchangeAdd(v3, 0xFFFFFFFF);
      }
      else
      {
        v4 = *((_DWORD *)v2 + 2);
        *((_DWORD *)v2 + 2) = v4 - 1;
      }
      if ( v4 == 1 )
        sub_28E9C0(v2);
    }
  }
  return ida_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 30));
}
