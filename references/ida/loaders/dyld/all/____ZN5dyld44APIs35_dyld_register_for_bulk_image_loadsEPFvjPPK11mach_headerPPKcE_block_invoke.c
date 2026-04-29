__int64 __fastcall ___ZN5dyld44APIs35_dyld_register_for_bulk_image_loadsEPFvjPPK11mach_headerPPKcE_block_invoke(
        __int64 a1)
{
  dyld4::RuntimeState *v2; // x21
  __int64 v3; // x20
  unsigned __int64 v4; // x23
  __int64 v5; // x24
  char *v6; // x22
  size_t v7; // x25
  char *v8; // x24
  __int64 v9; // x25
  __int64 v11; // [xsp+10h] [xbp-50h] BYREF

  v2 = *(dyld4::RuntimeState **)(a1 + 32);
  v3 = *((_QWORD *)v2 + 6);
  v4 = 8LL * (unsigned int)v3;
  __chkstk_darwin();
  v5 = (v4 + 15) & 0xFFFFFFFF0LL;
  v6 = (char *)&v11 - v5;
  if ( v4 >= 0x200 )
    v7 = 512;
  else
    v7 = 8LL * (unsigned int)v3;
  __bzero((char *)&v11 - v5, v7);
  __chkstk_darwin();
  v8 = (char *)&v11 - v5;
  __bzero(v8, v7);
  if ( (_DWORD)v3 )
  {
    v9 = 0;
    do
    {
      *(_QWORD *)&v6[v9] = dyld4::Loader::loadAddress(*(dyld4::Loader **)(*((_QWORD *)v2 + 5) + v9), v2);
      *(_QWORD *)&v8[v9] = dyld4::Loader::path(*(dyld4::Loader **)(*((_QWORD *)v2 + 5) + v9));
      v9 += 8;
    }
    while ( v4 != v9 );
  }
  if ( *(_BYTE *)(*((_QWORD *)v2 + 1) + 185LL) )
    dyld4::RuntimeState::log(v2, "add bulk notifier %p called with %d images\n", *(const void **)(a1 + 40), v3);
  return (*(__int64 (__fastcall **)(__int64, char *, char *))(a1 + 40))(v3, v6, v8);
}
