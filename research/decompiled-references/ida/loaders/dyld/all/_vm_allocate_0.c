// Alternative name is '_MACHOMERGER_TRAMPOLINE__kernelrpc_mach_vm_allocate_trap'
// attributes: thunk
kern_return_t __cdecl vm_allocate_0(vm_map_t target_task, vm_address_t *address, vm_size_t size, int flags)
{
  return _kernelrpc_mach_vm_allocate_trap(target_task, address, size, flags);
}
