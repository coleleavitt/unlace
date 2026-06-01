__int64 __fastcall ___ZN5dyld44APIs30_dyld_register_for_image_loadsEPFvPK11mach_headerPKcbE_block_invoke(
        __int64 result)
{
  dyld4::RuntimeState *v1; // x20
  __int64 v2; // x8
  __int64 v3; // x19
  dyld4::Loader **v4; // x24
  __int64 v5; // x25
  dyld4::Loader **v6; // x26
  dyld4::Loader *v7; // x22
  const void *Address; // x0
  const void *v9; // x23
  __int64 (__fastcall *v10)(const void *, __int64, bool); // x27
  __int64 v11; // x1

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
      v7 = *v6;
      Address = (const void *)dyld4::Loader::loadAddress(*v6, v1);
      v9 = Address;
      if ( *(_BYTE *)(*((_QWORD *)v1 + 1) + 185LL) )
        dyld4::RuntimeState::log(v1, "add notifier %p called with mh=%p\n", *(const void **)(v3 + 40), Address);
      v10 = *(__int64 (__fastcall **)(const void *, __int64, bool))(v3 + 40);
      v11 = dyld4::Loader::path(v7);
      result = v10(v9, v11, (*((_WORD *)v7 + 2) & 0x20) == 0);
      ++v6;
      ++v4;
      v5 -= 8;
    }
    while ( v5 );
  }
  return result;
}
