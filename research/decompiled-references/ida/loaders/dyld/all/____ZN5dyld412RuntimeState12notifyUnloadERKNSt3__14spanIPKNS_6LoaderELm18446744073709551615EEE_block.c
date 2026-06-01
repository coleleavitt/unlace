__int64 __fastcall ___ZN5dyld412RuntimeState12notifyUnloadERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke(
        __int64 result)
{
  dyld4::RuntimeState *v1; // x20
  __int64 v2; // x8
  const void **v3; // x24
  __int64 v4; // x9
  __int64 v5; // x8
  const void *v6; // x28
  dyld4::Loader **v7; // x25
  __int64 v8; // x19
  dyld4::Loader *v9; // x23
  dyld3::MachOLoaded *Address; // x22
  __int64 Slide; // x1
  const void **v12; // [xsp+10h] [xbp-D0h]
  __int64 v13; // [xsp+18h] [xbp-C8h]
  int v14; // [xsp+20h] [xbp-C0h] BYREF
  dyld3::MachOLoaded *v15; // [xsp+28h] [xbp-B8h]
  __int64 v16; // [xsp+30h] [xbp-B0h]
  const void *v17; // [xsp+38h] [xbp-A8h]
  __int128 v18; // [xsp+40h] [xbp-A0h]
  __int128 v19; // [xsp+50h] [xbp-90h]
  __int128 v20; // [xsp+60h] [xbp-80h]
  __int128 v21; // [xsp+70h] [xbp-70h]
  __int128 v22; // [xsp+80h] [xbp-60h]

  v13 = result;
  v1 = *(dyld4::RuntimeState **)(result + 32);
  v2 = *((_QWORD *)v1 + 56);
  if ( v2 )
  {
    v3 = *((const void ***)v1 + 55);
    v12 = &v3[v2];
    do
    {
      v4 = *(_QWORD *)(v13 + 40);
      v5 = *(_QWORD *)(v4 + 8);
      if ( v5 )
      {
        v6 = *v3;
        v7 = *(dyld4::Loader ***)v4;
        v8 = 8 * v5;
        do
        {
          v9 = *v7;
          Address = (dyld3::MachOLoaded *)dyld4::Loader::loadAddress(*v7, v1);
          v14 = 520552476;
          v15 = Address;
          v16 = 0;
          v17 = v6;
          v18 = 0u;
          v19 = 0u;
          v20 = 0u;
          v21 = 0u;
          v22 = 0u;
          dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v14);
          if ( *(_BYTE *)(*((_QWORD *)v1 + 1) + 185LL) )
            dyld4::RuntimeState::log(v1, "remove notifier %p called with mh=%p\n", v6, Address);
          if ( (*((_WORD *)v9 + 2) & 2) != 0 )
            Slide = *(_QWORD *)(*((_QWORD *)v1 + 1) + 208LL);
          else
            Slide = dyld3::MachOLoaded::getSlide(Address);
          ((void (__fastcall *)(dyld3::MachOLoaded *, __int64))v6)(Address, Slide);
          result = dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v14);
          ++v7;
          v8 -= 8;
        }
        while ( v8 );
      }
      ++v3;
    }
    while ( v3 != v12 );
  }
  return result;
}
