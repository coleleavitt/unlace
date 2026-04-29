__int64 __fastcall dyld4::APIs::_dyld_for_each_objc_protocol(dyld4::RuntimeState *a1, const char *a2, __int64 a3)
{
  dyld4::PrebuiltLoaderSet *v6; // x0
  unsigned int *v7; // x0
  __int64 result; // x0
  _QWORD v9[6]; // [xsp+0h] [xbp-50h] BYREF

  v6 = *((dyld4::PrebuiltLoaderSet **)a1 + 85);
  if ( !v6
    || (v7 = (unsigned int *)dyld4::PrebuiltLoaderSet::objcProtocolOpt(v6)) == nullptr
    || (result = dyld4::ObjCClassOpt::forEachClass(v7, a2, a1, a3), (result & 1) == 0) )
  {
    result = *(_QWORD *)(*((_QWORD *)a1 + 1) + 264LL);
    if ( result )
    {
      v9[0] = _NSConcreteStackBlock;
      v9[1] = 0x40000000;
      v9[2] = ___ZN5dyld44APIs28_dyld_for_each_objc_protocolEPKcU13block_pointerFvPvbPbE_block_invoke;
      v9[3] = &unk_96A90;
      v9[4] = a3;
      v9[5] = a1;
      return objc::ObjectHashTable::forEachObject((unsigned int *)result, a2, (__int64)v9);
    }
  }
  return result;
}
