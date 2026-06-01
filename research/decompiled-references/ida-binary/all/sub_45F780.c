void __fastcall sub_45F780(__int64 a1, QT::QAbstractScrollArea *a2)
{
  void (__fastcall *v2)(QT::QAbstractScrollArea *, const char *); // rax
  volatile signed __int32 *v3; // rbp
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax

  v2 = *(void (__fastcall **)(QT::QAbstractScrollArea *, const char *))(*(_QWORD *)a2 + 24LL);
  if ( v2 != type_listing_t__::vfunc_3 )
  {
    ((void (__fastcall *)(QT::QAbstractScrollArea *))v2)(a2);
    return;
  }
  *(_QWORD *)a2 = &type_listing_t___vtable;
  v3 = *((volatile signed __int32 **)a2 + 126);
  *((_QWORD *)a2 + 2) = type_listing_t___vtable_at__16;
  *((_QWORD *)a2 + 5) = type_listing_t___vtable_at__40;
  *((_QWORD *)a2 + 13) = type_listing_t___vtable_at__104;
  if ( !v3 )
    goto LABEL_7;
  v4 = v3 + 2;
  if ( *((_QWORD *)v3 + 1) == 0x100000001LL )
  {
    v6 = *(_QWORD *)v3;
    *((_QWORD *)v3 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, QT::QAbstractScrollArea *, volatile signed __int32 *))(v6 + 16))(
      v3,
      a2,
      v4);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
    CustomIDAMemo__::vfunc_3(a2, (const char *)a2);
    return;
  }
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
  {
    sub_28E9C0(v3);
    CustomIDAMemo__::vfunc_3(a2, (const char *)a2);
  }
  else
  {
LABEL_7:
    CustomIDAMemo__::vfunc_3(a2, (const char *)a2);
  }
}
