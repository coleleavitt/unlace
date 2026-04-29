unsigned __int64 __fastcall dyld4::PrebuiltObjC::generateHashTables(dyld4::PrebuiltObjC *this, dyld4::RuntimeState *a2)
{
  char *v3; // x20
  unsigned __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x10
  unsigned __int64 v7; // x20
  unsigned __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // [xsp+0h] [xbp-460h] BYREF
  __int64 v11; // [xsp+8h] [xbp-458h]
  __int64 v12; // [xsp+10h] [xbp-450h]
  __int128 v13; // [xsp+418h] [xbp-48h]
  __int128 v14; // [xsp+428h] [xbp-38h]
  vm_size_t size; // [xsp+438h] [xbp-28h]

  v3 = (char *)this + 384;
  dyld4::writeClassOrProtocolHashTable(1, this, (char *)this + 536, (char *)this + 384, (char *)this + 176);
  result = dyld4::writeClassOrProtocolHashTable(0, this, (char *)this + 576, v3, (char *)this + 280);
  if ( *((_QWORD *)this + 7) )
  {
    size = 0;
    v13 = 0u;
    v14 = 0u;
    v11 = 0;
    v12 = 0;
    v10 = 0;
    objc::PerfectHash::make_perfect((__int64)this + 40, (__int64)&v10);
    if ( (unsigned int)(HIDWORD(v11) + 1) > 8 )
      v5 = (unsigned int)(HIDWORD(v11) + 1);
    else
      v5 = 8;
    if ( (unsigned int)v10 <= 8 )
      v6 = 8;
    else
      v6 = (unsigned int)v10;
    v7 = (v5 + v6 + 8LL * (unsigned int)v10 + 1063) & 0xFFFFFFFF8LL;
    v8 = *((_QWORD *)this + 64);
    if ( v8 != v7 )
    {
      if ( v8 <= v7 )
        dyld3::OverflowSafeArray<unsigned char,4294967295ul>::reserve((char *)this + 496, v7);
      *((_QWORD *)this + 64) = v7;
    }
    v9 = *((_QWORD *)this + 62);
    *((_QWORD *)this + 60) = v9;
    result = dyld4::ObjCStringTable::write(v9, (unsigned int *)&v10, (_QWORD *)this + 17);
    *(_QWORD *)&v14 = 0;
    if ( *((_QWORD *)&v14 + 1) )
      return vm_deallocate(mach_task_self_, *((vm_address_t *)&v14 + 1), size);
  }
  return result;
}
