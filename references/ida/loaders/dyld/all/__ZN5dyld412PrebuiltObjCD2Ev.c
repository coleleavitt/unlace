void __fastcall dyld4::PrebuiltObjC::~PrebuiltObjC(dyld4::PrebuiltObjC *this)
{
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  _QWORD *v5; // x24
  vm_address_t v6; // x1
  vm_address_t v7; // x1
  vm_address_t v8; // x1
  vm_address_t v9; // x1
  vm_address_t v10; // x1
  vm_address_t v11; // x1
  vm_address_t v12; // x1
  vm_address_t v13; // x1
  vm_address_t v14; // x1
  vm_address_t v15; // x1
  vm_address_t v16; // x1
  vm_address_t v17; // x1
  vm_address_t v18; // x1
  vm_address_t v19; // x1
  vm_address_t v20; // x1
  __int64 v21; // x21
  __int64 v22; // x22
  vm_address_t v23; // x1

  if ( *((_QWORD *)this + 81) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = *((_QWORD *)this + 79);
      v5 = (_QWORD *)(v4 + v2);
      *(_QWORD *)(v4 + v2 + 136) = 0;
      v6 = *(_QWORD *)(v4 + v2 + 144);
      if ( v6 )
        vm_deallocate(mach_task_self_, v6, v5[19]);
      v5[12] = 0;
      v7 = v5[13];
      if ( v7 )
        vm_deallocate(mach_task_self_, v7, *(_QWORD *)(v4 + v2 + 112));
      ++v3;
      v2 += 160;
    }
    while ( v3 != *((_QWORD *)this + 81) );
  }
  *((_QWORD *)this + 81) = 0;
  v8 = *((_QWORD *)this + 82);
  if ( v8 )
    vm_deallocate(mach_task_self_, v8, *((_QWORD *)this + 83));
  *((_QWORD *)this + 74) = 0;
  v9 = *((_QWORD *)this + 75);
  if ( v9 )
    vm_deallocate(mach_task_self_, v9, *((_QWORD *)this + 76));
  *((_QWORD *)this + 69) = 0;
  v10 = *((_QWORD *)this + 70);
  if ( v10 )
    vm_deallocate(mach_task_self_, v10, *((_QWORD *)this + 71));
  *((_QWORD *)this + 64) = 0;
  v11 = *((_QWORD *)this + 65);
  if ( v11 )
    vm_deallocate(mach_task_self_, v11, *((_QWORD *)this + 66));
  *((_QWORD *)this + 57) = 0;
  v12 = *((_QWORD *)this + 58);
  if ( v12 )
    vm_deallocate(mach_task_self_, v12, *((_QWORD *)this + 59));
  *((_QWORD *)this + 52) = 0;
  v13 = *((_QWORD *)this + 53);
  if ( v13 )
    vm_deallocate(mach_task_self_, v13, *((_QWORD *)this + 54));
  *((_QWORD *)this + 44) = 0;
  v14 = *((_QWORD *)this + 45);
  if ( v14 )
    vm_deallocate(mach_task_self_, v14, *((_QWORD *)this + 46));
  *((_QWORD *)this + 39) = 0;
  v15 = *((_QWORD *)this + 40);
  if ( v15 )
    vm_deallocate(mach_task_self_, v15, *((_QWORD *)this + 41));
  *((_QWORD *)this + 31) = 0;
  v16 = *((_QWORD *)this + 32);
  if ( v16 )
    vm_deallocate(mach_task_self_, v16, *((_QWORD *)this + 33));
  *((_QWORD *)this + 26) = 0;
  v17 = *((_QWORD *)this + 27);
  if ( v17 )
    vm_deallocate(mach_task_self_, v17, *((_QWORD *)this + 28));
  *((_QWORD *)this + 19) = 0;
  v18 = *((_QWORD *)this + 20);
  if ( v18 )
    vm_deallocate(mach_task_self_, v18, *((_QWORD *)this + 21));
  *((_QWORD *)this + 14) = 0;
  v19 = *((_QWORD *)this + 15);
  if ( v19 )
    vm_deallocate(mach_task_self_, v19, *((_QWORD *)this + 16));
  *((_QWORD *)this + 7) = 0;
  v20 = *((_QWORD *)this + 8);
  if ( v20 )
    vm_deallocate(mach_task_self_, v20, *((_QWORD *)this + 9));
  if ( *((_QWORD *)this + 2) )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      dyld4::PrebuiltObjC::ObjCOptimizerImage::~ObjCOptimizerImage((dyld4::PrebuiltObjC::ObjCOptimizerImage *)(*(_QWORD *)this + v21));
      ++v22;
      v21 += 568;
    }
    while ( v22 != *((_QWORD *)this + 2) );
  }
  *((_QWORD *)this + 2) = 0;
  v23 = *((_QWORD *)this + 3);
  if ( v23 )
    vm_deallocate(mach_task_self_, v23, *((_QWORD *)this + 4));
}
