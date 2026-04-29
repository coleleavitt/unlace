// local variable allocation has failed, the output may be wrong!
kern_return_t __cdecl mach_generate_activity_id(mach_port_name_t target, int count, uint64_t *activity_id)
{
  boolean_t v3; // w3
  vm_size_t v4; // x4

  return mac_syscall(MAP_FD_TRAP, target, *(vm_offset_t *)&count, activity_id, v3, v4);
}
