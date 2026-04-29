void __fastcall dyld4::Loader::addWeakDefsToMap(dyld4::RuntimeState *a1, __int64 a2)
{
  __int64 v2; // x8
  dyld4::Loader **v4; // x22
  __int64 v5; // x25
  dyld4::Loader *v6; // x20
  __int64 Address; // x0
  dyld3::MachOFile *v8; // x21
  __int64 v9; // x0
  _QWORD v10[7]; // [xsp+0h] [xbp-90h] BYREF
  vm_address_t v11; // [xsp+38h] [xbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v4 = *(dyld4::Loader ***)a2;
    v5 = 8 * v2;
    do
    {
      v6 = *v4;
      Address = dyld4::Loader::loadAddress(*v4, a1);
      if ( (*(_BYTE *)(Address + 25) & 0x80) != 0 )
      {
        v8 = (dyld3::MachOFile *)Address;
        if ( (dyld4::Loader::hiddenFromFlat(v6, 0) & 1) == 0 )
        {
          Diagnostics::Diagnostics((Diagnostics *)&v11);
          v9 = dyld3::MachOFile::preferredLoadAddress(v8);
          v10[0] = _NSConcreteStackBlock;
          v10[1] = 0x40000000;
          v10[2] = ___ZN5dyld46Loader16addWeakDefsToMapERNS_12RuntimeStateERKNSt3__14spanIPKS0_Lm18446744073709551615EEE_block_invoke;
          v10[3] = &__block_descriptor_tmp_103_0;
          v10[4] = a1;
          v10[5] = v6;
          v10[6] = v9;
          dyld3::MachOLoaded::forEachGlobalSymbol(v8, (Diagnostics *)&v11, (__int64)v10);
          Diagnostics::~Diagnostics(&v11);
        }
      }
      ++v4;
      v5 -= 8;
    }
    while ( v5 );
  }
}
