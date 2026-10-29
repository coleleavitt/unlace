void __fastcall __noreturn sub_8ACCA0(_QWORD *arg)
{
  __int64 v1; // rax
  int v2; // r9d

  if ( !arg[52] && !arg[51] )
  {
    sub_8AC5D0(arg[4], (__int64)"Starting monitor thread\n");
    arg[52] = qsem_create(nullptr, 0);
    v1 = qthread_create((void *(*)(void *))sub_8B6000, arg);
    arg[51] = v1;
    callui(87, 3, v1, 1, (int)callui, v2);
  }
  if ( !under_debugger )
    interr(3155);
  BUG();
}
