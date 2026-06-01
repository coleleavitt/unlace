// attributes: thunk
kern_return_t __cdecl vm_deallocate(vm_map_t target_task, vm_address_t address, vm_size_t size)
{
  return mach_vm_deallocate(target_task, address, size);
}
