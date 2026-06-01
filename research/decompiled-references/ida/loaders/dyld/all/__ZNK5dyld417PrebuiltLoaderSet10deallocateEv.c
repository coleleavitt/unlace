__int64 __fastcall dyld4::PrebuiltLoaderSet::deallocate(vm_address_t address)
{
  return vm_deallocate(
           mach_task_self_,
           address,
           (vm_page_size + *(unsigned int *)(address + 8) - 1) & -(__int64)vm_page_size);
}
