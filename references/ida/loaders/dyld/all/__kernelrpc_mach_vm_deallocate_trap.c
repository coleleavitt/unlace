kern_return_t __cdecl _kernelrpc_mach_vm_deallocate_trap(
        mach_port_name_t target,
        mach_vm_address_t address,
        mach_vm_size_t size)
{
  return mac_syscall(KERNELRPC_MACH_VM_DEALLOCATE_TRAP, target, address, size);
}
