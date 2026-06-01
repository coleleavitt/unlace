__int64 __fastcall _pthread_terminate(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x23
  __int64 v5; // x25
  __int64 v7; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  mach_port_name_t v10; // w0
  mach_port_t v11; // w0
  int v12; // w27
  __int64 v13; // x28
  __int64 v14; // x22
  char v15; // w8
  __int64 v16; // x9
  _QWORD *v17; // x10
  char v18; // w24
  unsigned __int64 v19; // x0
  __int64 result; // x0

  if ( _pthread_introspection_hook )
    _pthread_introspection_hook_callout_thread_terminate(a1);
  v4 = *(_QWORD *)(a1 + 192);
  v5 = *(_QWORD *)(a1 + 200);
  if ( v4 < a1 && v4 + v5 > a1 )
  {
    v8 = (a1 - v4) & -(__int64)vm_page_size;
    *(_QWORD *)(a1 + 192) = v4 + v8;
    *(_QWORD *)(a1 + 200) = v5 - v8;
  }
  else if ( (_UNKNOWN *)a1 == &_main_thread )
  {
    v7 = qword_A9EB8 - qword_A9EB0;
    if ( qword_A9EB8 == qword_A9EB0 )
      v7 = -524288;
    v4 = qword_A9EB0 + v7;
    v8 = (_pthread_current_stack_address() & -(__int64)vm_page_size) - v4;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(unsigned int *)(a1 + 248);
  v10 = *(_DWORD *)(a1 + 288);
  if ( v10 )
  {
    *(_DWORD *)(a1 + 288) = 0;
    thread_destruct_special_reply_port(v10);
  }
  v11 = *(_DWORD *)(a1 + 240);
  if ( v11 )
    mig_dealloc_reply_port(v11);
  os_unfair_lock_lock_with_options(&_pthread_list_lock, 327680);
  *(_DWORD *)(a1 + 52) = -1;
  *(_QWORD *)(a1 + 40) = a2;
  v12 = _pthread_count--;
  v13 = *(_QWORD *)(a1 + 32);
  if ( v13 )
    v14 = _pthread_joiner_prepost_wake(a1);
  else
    v14 = 0;
  v15 = *(_BYTE *)(a1 + 49);
  if ( (v15 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 49) = v15 | 2;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(_QWORD **)(a1 + 24);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 24) = v17;
      v17 = *(_QWORD **)(a1 + 24);
    }
    else
    {
      off_9C1A8 = *(_UNKNOWN **)(a1 + 24);
    }
    *v17 = v16;
  }
  v18 = v15 & 1;
  os_unfair_lock_unlock((os_unfair_lock_t)&_pthread_list_lock);
  if ( v13 )
  {
    _pthread_joiner_wake(a1);
    os_unfair_lock_lock_with_options(&_pthread_list_lock, 327680);
    if ( *(_QWORD *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 49) |= 2u;
      v18 = 1;
    }
    os_unfair_lock_unlock((os_unfair_lock_t)&_pthread_list_lock);
  }
  if ( (_UNKNOWN *)a1 != &_main_thread && (v18 & 1) == 0 )
  {
    if ( _pthread_introspection_hook )
      _pthread_introspection_hook_callout_thread_destroy(a1);
    v8 = v5;
  }
  if ( v12 <= 1 )
    __exit(0);
  if ( v8 )
    v19 = v4;
  else
    v19 = 0;
  result = __bsdthread_terminate(v19, v8, v9, v14);
  qword_9C1C0 = (__int64)"BUG IN LIBPTHREAD: thread didn't terminate";
  qword_9C1F0 = a1;
  __break(1u);
  return result;
}
