// local variable allocation has failed, the output may be wrong!
kern_return_t __cdecl mach_voucher_extract_attr_recipe_trap(
        mach_port_name_t voucher_name,
        mach_voucher_attr_key_t key,
        mach_voucher_attr_raw_recipe_t recipe,
        mach_msg_type_number_t *recipe_size)
{
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  void *v7; // x7

  return mac_syscall(-72, *(void **)&voucher_name, *(void **)&key, recipe, recipe_size, v4, v5, v6, v7);
}
