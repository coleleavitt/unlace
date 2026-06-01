__int64 __fastcall dyld4::APIs::_dyld_visit_objc_classes(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _QWORD v4[6]; // [xsp+0h] [xbp-30h] BYREF

  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 256LL);
  if ( result )
  {
    v4[0] = _NSConcreteStackBlock;
    v4[1] = 0x40000000;
    v4[2] = ___ZN5dyld44APIs24_dyld_visit_objc_classesEU13block_pointerFvPKvE_block_invoke;
    v4[3] = &unk_96AB8;
    v4[4] = a2;
    v4[5] = a1;
    return objc::ObjectHashTable::forEachObject(result, v4);
  }
  return result;
}
