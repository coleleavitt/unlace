/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A748
// Address: 0x000000000040A748

//----- (000000000040A748) ----------------------------------------------------
__int64 sub_40A748()
{
  __pid_t v0; // w0
  unsigned int v1; // w19
  unsigned int v2; // w0
  int *v4; // x0
  void *v5; // x0
  unsigned int v6; // w0
  int *v7; // x0
  void *v8; // x0
  int *v9; // x19
  void *v10; // x0
  __pid_t v11; // w0
  unsigned int v12; // [xsp+38h] [xbp-18h] BYREF
  int v13; // [xsp+3Ch] [xbp-14h] BYREF
  _QWORD v14[2]; // [xsp+40h] [xbp-10h] BYREF

  dword_51F73C = 0;
  v0 = fork();
  if ( !v0 )
  {
    v9 = __errno_location();
    *v9 = 0;
    if ( ptrace(PTRACE_TRACEME, 0, 0, 0) )
    {
      v10 = sub_492F00(*v9);
      sub_40A690((int)"PTRACE_O_TRACEFORK test: Cannot trace created process: %s\n", v10);
      _exit(127);
    }
    v11 = getpid();
    kill(v11, 19);
    fork();
    _exit(0);
  }
  v1 = v0;
  if ( v0 == -1 )
  {
    v4 = __errno_location();
    v5 = sub_492F00(*v4);
    sub_40A690((int)"clone: %s\n", v5);
  }
  else
  {
    v2 = sub_494C58((int *)&v12, v0, 0, -1);
    if ( v2 == -1 )
    {
      v7 = __errno_location();
      v8 = sub_492F00(*v7);
      sub_40A690((int)"waitpid: %s\n", v8);
    }
    else if ( v1 == v2 )
    {
      if ( (unsigned __int8)v12 == 127 )
      {
        if ( (unsigned int)ptrace(PTRACE_SETOPTIONS, v1, 0, 2) )
        {
          if ( (unsigned int)ptrace(PTRACE_KILL, v1, 0, 0) )
          {
            sub_40A690((int)"linux_test_for_tracefork: failed to kill child");
          }
          else if ( v1 == (unsigned int)sub_494C58((int *)&v12, v1, 0, -1) )
          {
            if ( (int)(((v12 & 0x7F) + 1) << 24) >> 25 <= 0 )
              sub_40A690((int)"linux_test_for_tracefork: unexpected wait status 0x%x from killed child");
          }
          else
          {
            sub_40A690((int)"linux_test_for_tracefork: failed to wait for killed child");
          }
        }
        else
        {
          if ( (unsigned int)ptrace(PTRACE_CONT, v1, 0, 0) )
            sub_40A690((int)"linux_test_for_tracefork: failed to resume child");
          v6 = sub_494C58((int *)&v12, v1, 0, -1);
          if ( v1 == v6 && (unsigned __int8)v12 == 127 && (int)v12 >> 16 == 1 )
          {
            v14[0] = 0;
            if ( !(unsigned int)ptrace(PTRACE_GETEVENTMSG, v1, 0, v14) && v14[0] )
            {
              dword_51F73C = 1;
              sub_494C58(&v13, v14[0], 0, -1);
              if ( (unsigned int)ptrace(PTRACE_KILL, LODWORD(v14[0]), 0, 0) )
                sub_40A690((int)"linux_test_for_tracefork: failed to kill second child");
              sub_494C58((int *)&v12, v14[0], 0, -1);
            }
          }
          else
          {
            sub_40A690((int)"linux_test_for_tracefork: unexpected result from waitpid (%d, status 0x%x)", v6, v12);
          }
          do
          {
            if ( (unsigned int)ptrace(PTRACE_KILL, v1, 0, 0) )
              sub_40A690((int)"linux_test_for_tracefork: failed to kill child");
            sub_494C58((int *)&v12, v1, 0, -1);
          }
          while ( (unsigned __int8)v12 == 127 );
        }
      }
      else
      {
        sub_40A690((int)qword_4B31B8);
      }
    }
    else
    {
      sub_40A690((int)"linux_test_for_tracefork: waitpid: unexpected result %d\n", v2);
    }
  }
  return v14[1] ^ _stack_chk_guard;
}
// 40A748: could not find valid save-restore pair for x23
// 4B31B8: using guessed type __int64 qword_4B31B8[7];
// 51F73C: using guessed type int dword_51F73C;
