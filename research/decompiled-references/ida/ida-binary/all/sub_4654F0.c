void __fastcall frame_view_t__::vfunc_3(QT::QAbstractScrollArea *this, const char *a2)
{
  volatile signed __int32 *v2; // rbp
  volatile signed __int32 *v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rax

  v2 = *((volatile signed __int32 **)this + 126);
  *(_QWORD *)this = &type_listing_t___vtable;
  *((_QWORD *)this + 2) = type_listing_t___vtable_at__16;
  *((_QWORD *)this + 5) = type_listing_t___vtable_at__40;
  *((_QWORD *)this + 13) = type_listing_t___vtable_at__104;
  if ( !v2 )
  {
LABEL_7:
    CustomIDAMemo__::vfunc_3(this, a2);
    return;
  }
  v3 = v2 + 2;
  if ( *((_QWORD *)v2 + 1) != 0x100000001LL )
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
    goto LABEL_7;
  }
  v5 = *(_QWORD *)v2;
  *((_QWORD *)v2 + 1) = 0;
  (*(void (__fastcall **)(volatile signed __int32 *, const char *, volatile signed __int32 *))(v5 + 16))(v2, a2, v3);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
  CustomIDAMemo__::vfunc_3(this, a2);
}
