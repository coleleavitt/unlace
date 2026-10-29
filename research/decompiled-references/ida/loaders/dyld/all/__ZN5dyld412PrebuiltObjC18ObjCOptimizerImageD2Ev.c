void __fastcall dyld4::PrebuiltObjC::ObjCOptimizerImage::~ObjCOptimizerImage(
        dyld4::PrebuiltObjC::ObjCOptimizerImage *this)
{
  vm_address_t v2; // x1
  vm_address_t v3; // x1
  vm_address_t v4; // x1
  vm_address_t v5; // x1
  vm_address_t v6; // x1
  vm_address_t v7; // x1
  vm_address_t v8; // x1
  vm_address_t v9; // x1
  vm_address_t v10; // x1
  vm_address_t v11; // x1

  *((_QWORD *)this + 58) = 0;
  v2 = *((_QWORD *)this + 59);
  if ( v2 )
    vm_deallocate(mach_task_self_, v2, *((_QWORD *)this + 60));
  *((_QWORD *)this + 53) = 0;
  v3 = *((_QWORD *)this + 54);
  if ( v3 )
    vm_deallocate(mach_task_self_, v3, *((_QWORD *)this + 55));
  *((_QWORD *)this + 46) = 0;
  v4 = *((_QWORD *)this + 47);
  if ( v4 )
    vm_deallocate(mach_task_self_, v4, *((_QWORD *)this + 48));
  *((_QWORD *)this + 41) = 0;
  v5 = *((_QWORD *)this + 42);
  if ( v5 )
    vm_deallocate(mach_task_self_, v5, *((_QWORD *)this + 43));
  *((_QWORD *)this + 36) = 0;
  v6 = *((_QWORD *)this + 37);
  if ( v6 )
    vm_deallocate(mach_task_self_, v6, *((_QWORD *)this + 38));
  *((_QWORD *)this + 29) = 0;
  v7 = *((_QWORD *)this + 30);
  if ( v7 )
    vm_deallocate(mach_task_self_, v7, *((_QWORD *)this + 31));
  *((_QWORD *)this + 24) = 0;
  v8 = *((_QWORD *)this + 25);
  if ( v8 )
    vm_deallocate(mach_task_self_, v8, *((_QWORD *)this + 26));
  *((_QWORD *)this + 17) = 0;
  v9 = *((_QWORD *)this + 18);
  if ( v9 )
    vm_deallocate(mach_task_self_, v9, *((_QWORD *)this + 19));
  *((_QWORD *)this + 12) = 0;
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
    vm_deallocate(mach_task_self_, v10, *((_QWORD *)this + 14));
  *((_QWORD *)this + 7) = 0;
  v11 = *((_QWORD *)this + 8);
  if ( v11 )
    vm_deallocate(mach_task_self_, v11, *((_QWORD *)this + 9));
  Diagnostics::~Diagnostics((vm_address_t *)this + 4);
}
