__int64 __fastcall dyld4::APIs::_dyld_for_each_objc_class(__int64 a1, __int64 a2, __int64 a3)
{
  dyld4::PrebuiltLoaderSet *v6; // x0
  __int64 v7; // x0
  __int64 result; // x0
  _QWORD v9[6]; // [xsp+0h] [xbp-50h] BYREF

  v6 = *(dyld4::PrebuiltLoaderSet **)(a1 + 680);
  if ( !v6
    || (v7 = dyld4::PrebuiltLoaderSet::objcClassOpt(v6)) == 0
    || (result = dyld4::ObjCClassOpt::forEachClass(v7, a2, a1, a3), (result & 1) == 0) )
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 256LL);
    if ( result )
    {
      v9[0] = _NSConcreteStackBlock;
      v9[1] = 0x40000000;
      v9[2] = ___ZN5dyld44APIs25_dyld_for_each_objc_classEPKcU13block_pointerFvPvbPbE_block_invoke;
      v9[3] = &unk_96A68;
      v9[4] = a3;
      v9[5] = a1;
      return objc::ObjectHashTable::forEachObject(result, a2, v9);
    }
  }
  return result;
}
