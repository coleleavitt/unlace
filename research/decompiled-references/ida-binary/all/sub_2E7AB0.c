void __fastcall sub_2E7AB0(_QWORD *a1, const char *a2)
{
  QT::QAbstractScrollArea *v2; // rbp
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax

  v2 = (QT::QAbstractScrollArea *)(a1 - 2);
  v3 = (volatile signed __int32 *)a1[124];
  *(a1 - 2) = &type_listing_t___vtable;
  *a1 = type_listing_t___vtable_at__16;
  a1[3] = type_listing_t___vtable_at__40;
  a1[11] = type_listing_t___vtable_at__104;
  if ( v3 )
  {
    v4 = v3 + 2;
    if ( *((_QWORD *)v3 + 1) == 0x100000001LL )
    {
      v6 = *(_QWORD *)v3;
      *((_QWORD *)v3 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, const char *, volatile signed __int32 *))(v6 + 16))(v3, a2, v4);
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
  CustomIDAMemo__::vfunc_3(v2, a2);
  operator delete(v2, 0x3F8u);
}
