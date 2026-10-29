void __fastcall local_types_dirtree_widget_t__::vfunc_4(QT::QTreeView *this, __int64 a2)
{
  volatile signed __int32 *v2; // rbp
  volatile signed __int32 *v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rax

  *(_QWORD *)this = &til_dirtree_widget_t___vtable;
  v2 = *((volatile signed __int32 **)this + 312);
  *((_QWORD *)this + 2) = til_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)this + 30) = til_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)this + 38) = til_dirtree_widget_t___vtable_at__304;
  if ( v2 )
  {
    v3 = v2 + 2;
    if ( *((_QWORD *)v2 + 1) == 0x100000001LL )
    {
      v5 = *(_QWORD *)v2;
      *((_QWORD *)v2 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v5 + 16))(v2, a2, v3);
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
  ida_dirtree_widget_t__::vfunc_3(this);
  operator delete(this, 0x9C8u);
}
