__int64 mach_init()
{
  if ( (mach_init_mach_init_inited & 1) == 0 )
  {
    mach_task_self_ = task_self_trap();
    _task_reply_port = mach_reply_port();
    if ( !vm_kernel_page_shift )
      vm_kernel_page_shift = MEMORY[0xFFFFF4037];
    if ( !vm_page_shift )
    {
      vm_page_shift = MEMORY[0xFFFFF4025];
      vm_page_size = 1 << MEMORY[0xFFFFF4025];
      vm_page_mask = vm_page_size - 1;
    }
    _pthread_set_self(0);
    mach_init_mach_init_inited = 1;
  }
  return 0;
}
