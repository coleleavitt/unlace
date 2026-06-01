void __fastcall dyld4::BumpAllocator::~BumpAllocator(vm_address_t *this)
{
  if ( *this )
  {
    vm_deallocate(mach_task_self_, *this, *(this + 1));
    *(this + 1) = 0;
    *(this + 2) = 0;
    *this = 0;
  }
}
