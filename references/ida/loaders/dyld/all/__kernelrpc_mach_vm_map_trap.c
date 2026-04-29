kern_return_t __cdecl _kernelrpc_mach_vm_map_trap(
        mach_port_name_t target,
        mach_vm_offset_t *address,
        mach_vm_size_t size,
        mach_vm_offset_t mask,
        int flags,
        vm_prot_t cur_protection)
{
  return mac_syscall(KERNELRPC_MACH_VM_MAP_TRAP, target, address, size, (mach_vm_offset_t *)mask, flags, cur_protection);
}
