// Alternative name is '_MACHOMERGER_TRAMPOLINE_mach_port_construct'
// attributes: thunk
kern_return_t __cdecl mach_port_construct_0(
        ipc_space_t task,
        mach_port_options_ptr_t options,
        mach_port_context_t context,
        mach_port_name_t *name)
{
  return mach_port_construct(task, options, context, name);
}
