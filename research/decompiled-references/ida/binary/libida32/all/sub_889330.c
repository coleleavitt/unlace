void __fastcall __noreturn sub_889330(_DWORD **arg)
{
  __int64 v1; // rax
  int v2; // r9d

  if ( !arg[52] && !arg[51] )
  {
    sub_888C60(arg[4], (__int64)"Starting monitor thread\n");
    arg[52] = (_DWORD *)qsem_create(nullptr, 0);
    v1 = qthread_create((void *(*)(void *))sub_892680, arg);
    arg[51] = (_DWORD *)v1;
    callui(87, 3, v1, 1, (int)callui, v2);
  }
  if ( !under_debugger )
    interr(3155);
  BUG();
}

