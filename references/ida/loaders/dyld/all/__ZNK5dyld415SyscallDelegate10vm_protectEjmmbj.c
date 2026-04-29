__int64 __fastcall dyld4::SyscallDelegate::vm_protect(
        dyld4::SyscallDelegate *this,
        vm_map_t target_task,
        vm_address_t address,
        vm_size_t size,
        boolean_t set_maximum,
        vm_prot_t new_protection)
{
  return vm_protect(target_task, address, size, set_maximum, new_protection);
}
