void __fastcall sub_2E7DF0(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  QT::QAbstractScrollArea *v4; // rbx
  void (__fastcall *v5)(QT::QAbstractScrollArea *, const char *); // rax
  volatile signed __int32 *v6; // r12
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    *(_QWORD *)(a1 + 104) = 0;
  }
  v4 = *(QT::QAbstractScrollArea **)(a1 + 112);
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(QT::QAbstractScrollArea *, const char *))(*(_QWORD *)v4 + 32LL);
    if ( v5 == type_listing_t__::vfunc_4 )
    {
      v6 = *((volatile signed __int32 **)v4 + 126);
      *(_QWORD *)v4 = &type_listing_t___vtable;
      *((_QWORD *)v4 + 2) = type_listing_t___vtable_at__16;
      *((_QWORD *)v4 + 5) = type_listing_t___vtable_at__40;
      *((_QWORD *)v4 + 13) = type_listing_t___vtable_at__104;
      if ( v6 )
      {
        v7 = v6 + 2;
        if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
        {
          *((_QWORD *)v6 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, const char *, volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(
            v6,
            a2,
            v7);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v8 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
          }
          else
          {
            v8 = *((_DWORD *)v6 + 2);
            *((_DWORD *)v6 + 2) = v8 - 1;
          }
          if ( v8 == 1 )
            sub_28E9C0(v6);
        }
      }
      CustomIDAMemo__::vfunc_3(v4, a2);
      operator delete(v4, 0x3F8u);
    }
    else
    {
      ((void (__fastcall *)(_QWORD))v5)(*(_QWORD *)(a1 + 112));
    }
    *(_QWORD *)(a1 + 112) = 0;
  }
}
