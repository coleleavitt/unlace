__int64 __fastcall ___ZN5dyld44APIs33_dyld_register_func_for_add_imageEPFvPK11mach_headerlE_block_invoke(
        __int64 result)
{
  dyld4::RuntimeState *v1; // x20
  __int64 v2; // x8
  __int64 v3; // x19
  dyld4::Loader **v4; // x23
  __int64 v5; // x24
  dyld4::Loader **v6; // x25
  const DyldSharedCache *Address; // x0
  const dyld3::MachOFile *v8; // x2
  const DyldSharedCache *v9; // x22
  __int64 v10; // x8
  _BOOL4 v11; // w0
  __int64 (__fastcall *v12)(const DyldSharedCache *, __int64); // x26
  __int64 Slide; // x1

  v1 = *(dyld4::RuntimeState **)(result + 32);
  v2 = *((_QWORD *)v1 + 6);
  if ( v2 )
  {
    v3 = result;
    v4 = *((dyld4::Loader ***)v1 + 5);
    v5 = 8 * v2;
    v6 = v4;
    do
    {
      Address = (const DyldSharedCache *)dyld4::Loader::loadAddress(*v6, v1);
      v9 = Address;
      v10 = *((_QWORD *)v1 + 1);
      if ( *(_BYTE *)(v10 + 185) )
      {
        dyld4::RuntimeState::log(v1, "add notifier %p called with mh=%p\n", *(const void **)(v3 + 40), Address);
        v10 = *((_QWORD *)v1 + 1);
      }
      v11 = DyldSharedCache::inDyldCache(*(DyldSharedCache **)(v10 + 200), v9, v8);
      v12 = *(__int64 (__fastcall **)(const DyldSharedCache *, __int64))(v3 + 40);
      if ( v11 )
        Slide = *(_QWORD *)(*((_QWORD *)v1 + 1) + 208LL);
      else
        Slide = dyld3::MachOLoaded::getSlide(v9);
      result = v12(v9, Slide);
      ++v6;
      ++v4;
      v5 -= 8;
    }
    while ( v5 );
  }
  return result;
}
