void __fastcall dyld4::RemoteNotificationResponder::~RemoteNotificationResponder(
        dyld4::RemoteNotificationResponder *this)
{
  unsigned __int64 v2; // x21
  vm_size_t v3; // x2

  if ( *((_DWORD *)this + 10) )
  {
    v2 = 0;
    do
      mach_port_deallocate(mach_task_self_, *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v2++));
    while ( v2 < *((unsigned int *)this + 10) );
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
      vm_deallocate(mach_task_self_, *((_QWORD *)this + 4), v3);
  }
}
