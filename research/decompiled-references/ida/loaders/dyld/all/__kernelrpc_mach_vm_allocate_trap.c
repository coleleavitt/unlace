kern_return_t __cdecl _kernelrpc_mach_vm_allocate_trap(
        mach_port_name_t target,
        mach_vm_offset_t *addr,
        mach_vm_size_t size,
        int flags)
{
  return mac_syscall(KERNELRPC_MACH_VM_ALLOCATE_TRAP, target, addr, size, flags);
}
