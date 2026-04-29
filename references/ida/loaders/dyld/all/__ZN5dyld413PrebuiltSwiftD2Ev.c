void __fastcall dyld4::PrebuiltSwift::~PrebuiltSwift(dyld4::PrebuiltSwift *this)
{
  vm_address_t v2; // x1
  vm_address_t v3; // x1
  vm_address_t v4; // x1
  vm_address_t v5; // x1
  vm_address_t v6; // x1
  vm_address_t v7; // x1

  *((_QWORD *)this + 35) = 0;
  v2 = *((_QWORD *)this + 36);
  if ( v2 )
    vm_deallocate(mach_task_self_, v2, *((_QWORD *)this + 37));
  *((_QWORD *)this + 30) = 0;
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    vm_deallocate(mach_task_self_, v3, *((_QWORD *)this + 32));
  *((_QWORD *)this + 22) = 0;
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
    vm_deallocate(mach_task_self_, v4, *((_QWORD *)this + 24));
  *((_QWORD *)this + 17) = 0;
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
    vm_deallocate(mach_task_self_, v5, *((_QWORD *)this + 19));
  *((_QWORD *)this + 9) = 0;
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
    vm_deallocate(mach_task_self_, v6, *((_QWORD *)this + 11));
  *((_QWORD *)this + 4) = 0;
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
    vm_deallocate(mach_task_self_, v7, *((_QWORD *)this + 6));
}
