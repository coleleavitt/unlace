// local variable allocation has failed, the output may be wrong!
kern_return_t __cdecl host_create_mach_voucher_trap(
        mach_port_name_t host,
        mach_voucher_attr_raw_recipe_array_t recipes,
        int recipes_size,
        mach_port_name_t *voucher)
{
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  void *v7; // x7

  return mac_syscall(-70, *(void **)&host, recipes, *(void **)&recipes_size, voucher, v4, v5, v6, v7);
}
