void __fastcall ___ZZN5dyld412RuntimeState16setObjCNotifiersEPFvjPKPKcPKPK11mach_headerEPFvS2_S7_ESD_PFvS7_PvS7_PKvEPFvjPK29_dyld_objc_notify_mapped_infoEENK3__8clEv_block_invoke(
        __int64 a1)
{
  dyld4::RuntimeState *v1; // x25
  __int64 v2; // x8
  _QWORD *v3; // x19
  _QWORD *v4; // x20
  __int64 v5; // x23
  const void **v6; // x26
  __int64 v7; // x12
  const char **v8; // x21
  unsigned __int64 v9; // x13
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  unsigned __int64 v12; // x27
  dyld4::Loader **v13; // x20
  dyld4::Loader **v14; // x28
  dyld4::Loader *v15; // x24
  dyld4::RuntimeState *v16; // x19
  __int64 Address; // x0
  __int64 v18; // x25
  __int64 v19; // x0
  unsigned __int64 v20; // x8
  dyld4::RuntimeState *v21; // x21
  __int64 v22; // x19
  __int64 DoesObjCFixups; // x0
  unsigned __int64 v24; // x22
  char *v25; // x8
  __int64 (__fastcall *v26)(unsigned __int64, const char **, const void **); // x8
  void (__fastcall *v27)(unsigned __int64, char *); // x8
  __int64 v28; // x0
  const void *v29; // x8
  const void *v30; // t1
  const char *v31; // t1
  __int64 v32; // x8
  dyld4::Loader **v33; // x19
  __int64 v34; // x21
  dyld4::Loader **v35; // x22
  dyld4::Loader *v36; // x20
  __int64 v37; // [xsp+10h] [xbp-90h] BYREF
  const char **v38; // [xsp+18h] [xbp-88h]
  const void **v39; // [xsp+20h] [xbp-80h]
  char *v40; // [xsp+28h] [xbp-78h]
  unsigned __int64 v41; // [xsp+30h] [xbp-70h]
  unsigned __int64 v42; // [xsp+38h] [xbp-68h]
  unsigned __int64 v43; // [xsp+40h] [xbp-60h]

  v1 = *(dyld4::RuntimeState **)(a1 + 32);
  if ( *((_QWORD *)v1 + 48) && *((_QWORD *)v1 + 30) )
  {
    dyld4::RuntimeState::setDyldPatchedObjCClasses(*(dyld4::RuntimeState **)(a1 + 32));
    v2 = *((_QWORD *)v1 + 30);
    if ( v2 )
    {
      v3 = *((_QWORD **)v1 + 29);
      v4 = &v3[4 * v2];
      do
      {
        (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))v1 + 48))(*v3, v3[1], v3[2], v3[3]);
        v3 += 4;
      }
      while ( v3 != v4 );
    }
    if ( *(_BYTE *)(*((_QWORD *)v1 + 1) + 185LL) )
      dyld4::RuntimeState::log(v1, "objc-patch-class-notifier called with %ld patches:\n", *((_QWORD *)v1 + 30));
    *((_QWORD *)v1 + 30) = 0;
  }
  v5 = 8LL * *((_QWORD *)v1 + 6);
  __chkstk_darwin();
  v6 = (const void **)((char *)&v37 - ((v5 + 23) & 0xFFFFFFFFFFFFFFF0LL));
  __chkstk_darwin();
  v8 = (const char **)((char *)&v37 - v7);
  __chkstk_darwin();
  v40 = (char *)&v37 - ((v10 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v9 )
  {
    v42 = v9;
    v43 = 0;
    v11 = 0;
    v12 = 0;
    v13 = *((dyld4::Loader ***)v1 + 5);
    v14 = v13;
    v38 = v8;
    v39 = (const void **)((char *)&v37 - ((v5 + 23) & 0xFFFFFFFFFFFFFFF0LL));
    do
    {
      v15 = *v14;
      v16 = v1;
      Address = dyld4::Loader::loadAddress(*v14, v1);
      if ( (*((_WORD *)v15 + 2) & 4) != 0 )
      {
        v18 = Address;
        v19 = dyld4::Loader::path(v15);
        v20 = v42;
        if ( v12 >= v42 )
          ___ZZN5dyld412RuntimeState16setObjCNotifiersEPFvjPKPKcPKPK11mach_headerEPFvS2_S7_ESD_PFvS7_PvS7_PKvEPFvjPK29_dyld_objc_notify_mapped_infoEENK3__8clEv_block_invoke_cold_6(v19);
        v8[v12] = (const char *)v19;
        if ( v11 >= v20 )
          ___ZZN5dyld412RuntimeState16setObjCNotifiersEPFvjPKPKcPKPK11mach_headerEPFvS2_S7_ESD_PFvS7_PvS7_PKvEPFvjPK29_dyld_objc_notify_mapped_infoEENK3__8clEv_block_invoke_cold_5();
        v21 = v16;
        v6[v11] = (const void *)v18;
        v22 = dyld4::Loader::path(v15);
        DoesObjCFixups = dyld4::Loader::dyldDoesObjCFixups(v15);
        if ( v43 >= v42 )
          ___ZZN5dyld412RuntimeState16setObjCNotifiersEPFvjPKPKcPKPK11mach_headerEPFvS2_S7_ESD_PFvS7_PvS7_PKvEPFvjPK29_dyld_objc_notify_mapped_infoEENK3__8clEv_block_invoke_cold_4(DoesObjCFixups);
        ++v12;
        v41 = v11 + 1;
        v24 = v43 + 1;
        v25 = &v40[24 * v43];
        *(_QWORD *)v25 = v18;
        *((_QWORD *)v25 + 1) = v22;
        *((_DWORD *)v25 + 4) = DoesObjCFixups;
        Address = dyld4::Loader::hasConstantSegmentsToProtect(v15);
        if ( (_DWORD)Address )
        {
          v1 = v21;
          if ( (*((_WORD *)v15 + 2) & 0x80) != 0 )
            Address = dyld4::Loader::makeSegmentsReadWrite(v15, v21);
          v43 = v24;
        }
        else
        {
          v43 = v24;
          v1 = v21;
        }
        v8 = v38;
        v6 = v39;
        v11 = v41;
      }
      ++v14;
      ++v13;
      v5 -= 8;
    }
    while ( v5 );
    if ( v11 )
    {
      v26 = *((__int64 (__fastcall **)(unsigned __int64, const char **, const void **))v1 + 45);
      if ( v26 )
      {
        if ( !v12 )
          ___ZZN5dyld412RuntimeState16setObjCNotifiersEPFvjPKPKcPKPK11mach_headerEPFvS2_S7_ESD_PFvS7_PvS7_PKvEPFvjPK29_dyld_objc_notify_mapped_infoEENK3__8clEv_block_invoke_cold_3(Address);
        Address = v26(v11, v8, v6);
      }
      v27 = *((void (__fastcall **)(unsigned __int64, char *))v1 + 49);
      if ( v27 )
      {
        if ( !v43 )
          ___ZZN5dyld412RuntimeState16setObjCNotifiersEPFvjPKPKcPKPK11mach_headerEPFvS2_S7_ESD_PFvS7_PvS7_PKvEPFvjPK29_dyld_objc_notify_mapped_infoEENK3__8clEv_block_invoke_cold_2(Address);
        v27(v11, v40);
      }
      if ( *(_BYTE *)(*((_QWORD *)v1 + 1) + 185LL) )
      {
        v28 = dyld4::RuntimeState::log(v1, "objc-mapped-notifier called with %ld images:\n", v11);
        do
        {
          if ( !v12 )
            ___ZZN5dyld412RuntimeState16setObjCNotifiersEPFvjPKPKcPKPK11mach_headerEPFvS2_S7_ESD_PFvS7_PvS7_PKvEPFvjPK29_dyld_objc_notify_mapped_infoEENK3__8clEv_block_invoke_cold_1(v28);
          v30 = *v6++;
          v29 = v30;
          v31 = *v8++;
          v28 = dyld4::RuntimeState::log(v1, " objc-mapped: %p %s\n", v29, v31);
          --v12;
          --v11;
        }
        while ( v11 );
      }
      v32 = *((_QWORD *)v1 + 6);
      if ( v32 )
      {
        v33 = *((dyld4::Loader ***)v1 + 5);
        v34 = 8 * v32;
        v35 = v33;
        do
        {
          if ( (*((_WORD *)*v35 + 2) & 4) != 0 )
          {
            v36 = *v35;
            if ( (unsigned int)dyld4::Loader::hasConstantSegmentsToProtect(*v35) )
            {
              if ( (*((_WORD *)v36 + 2) & 0x80) != 0 )
                dyld4::Loader::makeSegmentsReadOnly(v36, v1);
            }
          }
          ++v35;
          ++v33;
          v34 -= 8;
        }
        while ( v34 );
      }
    }
  }
}
