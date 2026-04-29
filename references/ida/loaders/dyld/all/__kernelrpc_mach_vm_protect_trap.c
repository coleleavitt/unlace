kern_return_t __cdecl _kernelrpc_mach_vm_protect_trap(
        mach_port_name_t target,
        mach_vm_address_t address,
        mach_vm_size_t size,
        boolean_t set_maximum,
        vm_prot_t new_protection)
{
  return mac_syscall(KERNELRPC_MACH_VM_PROTECT_TRAP, target, address, size, set_maximum, new_protection);
}
