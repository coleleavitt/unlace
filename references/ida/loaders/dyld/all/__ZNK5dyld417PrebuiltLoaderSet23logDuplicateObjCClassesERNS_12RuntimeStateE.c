void __fastcall dyld4::PrebuiltLoaderSet::logDuplicateObjCClasses(dyld4::PrebuiltLoaderSet *this, dyld4::Loader **a2)
{
  __int64 v2; // x8
  char *v3; // x20
  __int64 v5; // x21
  _QWORD v6[6]; // [xsp+0h] [xbp-120h] BYREF
  _QWORD v7[5]; // [xsp+30h] [xbp-F0h] BYREF
  _QWORD v8[5]; // [xsp+58h] [xbp-C8h] BYREF
  _QWORD v9[5]; // [xsp+80h] [xbp-A0h] BYREF
  vm_address_t v10; // [xsp+A8h] [xbp-78h]
  vm_size_t v11; // [xsp+B0h] [xbp-70h]
  __int64 v12; // [xsp+C8h] [xbp-58h]
  vm_address_t address; // [xsp+D0h] [xbp-50h]
  vm_size_t size; // [xsp+D8h] [xbp-48h]

  if ( this )
  {
    v2 = *((unsigned int *)this + 11);
    if ( (_DWORD)v2 )
    {
      v3 = (char *)this + v2;
      if ( *(_QWORD *)((char *)this
                     + 8 * *(unsigned int *)((char *)this + v2)
                     + 8 * *(unsigned int *)((char *)this + v2)
                     + v2
                     + *(unsigned int *)((char *)this + v2 + 16)
                     + *(unsigned int *)((char *)this + v2 + 20)
                     + 1056) )
      {
        if ( *((_BYTE *)a2[1] + 183) )
        {
          v5 = dyld4::Loader::loadAddress(a2[3], (dyld4::RuntimeState *)a2);
          v8[0] = 0;
          v8[1] = v8;
          v8[2] = 0x8802000000LL;
          v8[3] = __Block_byref_object_copy__64;
          v8[4] = __Block_byref_object_dispose__65;
          dyld3::Map<char const*,bool,dyld3::HashCString,dyld3::EqualCString>::Map(v9);
          v7[0] = _NSConcreteStackBlock;
          v7[1] = 0x40000000;
          v7[2] = ___ZNK5dyld417PrebuiltLoaderSet23logDuplicateObjCClassesERNS_12RuntimeStateE_block_invoke;
          v7[3] = &unk_963F0;
          v7[4] = v8;
          dyld3::MachOAnalyzer::forEachObjCDuplicateClassToIgnore(v5, v7);
          v6[0] = _NSConcreteStackBlock;
          v6[1] = 0x40000000;
          v6[2] = ___ZNK5dyld417PrebuiltLoaderSet23logDuplicateObjCClassesERNS_12RuntimeStateE_block_invoke_2;
          v6[3] = &unk_96418;
          v6[4] = v8;
          v6[5] = a2;
          dyld4::ObjCClassOpt::forEachClass(v3, a2, v6);
          _Block_object_dispose(v8, 8);
          v12 = 0;
          if ( address )
            vm_deallocate(mach_task_self_, address, size);
          v9[4] = 0;
          if ( v10 )
            vm_deallocate(mach_task_self_, v10, v11);
        }
      }
    }
  }
}
