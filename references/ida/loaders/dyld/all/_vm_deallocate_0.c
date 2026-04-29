// Alternative name is '_MACHOMERGER_TRAMPOLINE__kernelrpc_mach_vm_deallocate_trap'
// attributes: thunk
kern_return_t __cdecl vm_deallocate_0(vm_map_t target_task, vm_address_t address, vm_size_t size)
{
  return _kernelrpc_mach_vm_deallocate_trap(target_task, address, size);
}
