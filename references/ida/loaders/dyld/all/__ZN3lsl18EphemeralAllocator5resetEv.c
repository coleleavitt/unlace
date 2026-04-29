_QWORD *__fastcall lsl::EphemeralAllocator::reset(_QWORD *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 i; // x1
  __int64 v4; // x9
  vm_address_t *v5; // x20
  vm_address_t *v6; // x21
  vm_address_t v7; // x1
  vm_address_t v8; // x8
  _BYTE v9[1024]; // [xsp-400h] [xbp-490h] BYREF
  _QWORD *v10; // [xsp+0h] [xbp-90h] BYREF
  vm_address_t *v11; // [xsp+8h] [xbp-88h]
  __int64 v12; // [xsp+10h] [xbp-80h]
  __int64 v13; // [xsp+18h] [xbp-78h]
  _QWORD v14[7]; // [xsp+20h] [xbp-70h] BYREF

  if ( *(this + 4) )
  {
    v1 = this;
    __chkstk_darwin();
    __bzero(v9, 0x400u);
    lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)v14, v9, 1024);
    v10 = v14;
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    v2 = v1[4];
    if ( v2 )
    {
      for ( i = 1; ; i = v12 + 1 )
      {
        lsl::Vector<lsl::MemoryManager::Buffer>::reserve(&v10, i);
        v4 = v12++;
        *(_OWORD *)&v11[2 * v4] = *(_OWORD *)v2;
        v2 = *(_QWORD *)(v2 + 16);
        if ( !v2 )
          break;
      }
      v5 = v11;
      if ( v12 )
      {
        v6 = &v11[2 * v12];
        do
        {
          v7 = *v5;
          v8 = v5[1];
          v5 += 2;
          vm_deallocate(mach_task_self_, v7, vm_page_size + v8);
        }
        while ( v5 != v6 );
        v5 = v11;
      }
      v1[2] = 0;
      v1[3] = 0;
      v1[4] = 0;
      if ( v5 )
        lsl::Vector<lsl::MemoryManager::Buffer>::resize(&v10, 0);
    }
    else
    {
      v1[2] = 0;
      v1[3] = 0;
      v1[4] = 0;
    }
    v14[0] = &off_94090;
    return (_QWORD *)lsl::EphemeralAllocator::reset((lsl::EphemeralAllocator *)v14);
  }
  return this;
}
