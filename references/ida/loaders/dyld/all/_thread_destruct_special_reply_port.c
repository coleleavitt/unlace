__int64 __fastcall thread_destruct_special_reply_port(mach_port_name_t name, int a2)
{
  mach_port_t v3; // w0
  mach_port_name_t v4; // w1
  mach_port_delta_t v5; // w2

  switch ( a2 )
  {
    case 2:
      return mach_port_deallocate(mach_task_self_, name);
    case 1:
      v3 = mach_task_self_;
      v4 = name;
      v5 = 0;
      return mach_port_destruct(v3, v4, v5, 0);
    case 0:
      v3 = mach_task_self_;
      v4 = name;
      v5 = -1;
      return mach_port_destruct(v3, v4, v5, 0);
  }
  return 4;
}
