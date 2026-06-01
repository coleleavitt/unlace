// Alternative name is '_MACHOMERGER_TRAMPOLINE_mach_port_deallocate'
// attributes: thunk
kern_return_t __cdecl mach_port_deallocate_0(ipc_space_t task, mach_port_name_t name)
{
  return mach_port_deallocate(task, name);
}
