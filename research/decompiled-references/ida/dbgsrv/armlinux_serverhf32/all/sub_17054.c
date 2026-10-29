/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17054
// Address: 0x00017054

//----- (00017054) --------------------------------------------------------
int sub_17054()
{
  __pid_t v0; // r0
  __pid_t v1; // r4
  int v2; // r0
  int result; // r0
  int *v4; // r0
  const char *v5; // r0
  int v6; // r0
  int *v7; // r0
  const char *v8; // r0
  int *v9; // r5
  const char *v10; // r0
  __pid_t v11; // r0
  int v12; // [sp+0h] [bp-10h] BYREF
  __pid_t v13; // [sp+4h] [bp-Ch] BYREF
  int v14; // [sp+8h] [bp-8h] BYREF

  dword_D26C4 = 0;
  v0 = fork();
  v1 = v0;
  if ( !v0 )
  {
    v9 = _errno_location();
    *v9 = 0;
    if ( ptrace(PTRACE_TRACEME, 0, 0, 0) )
    {
      v10 = (const char *)sub_792D8(*v9);
      sub_1700C((int)"PTRACE_O_TRACEFORK test: Cannot trace created process: %s\n", v10);
      exit(127);
    }
    v11 = getpid();
    kill(v11, 19);
    fork();
    exit(0);
  }
  if ( v0 == -1 )
  {
    v4 = _errno_location();
    v5 = (const char *)sub_792D8(*v4);
    return sub_1700C((int)"clone: %s\n", v5);
  }
  else
  {
    v2 = sub_7A478(&v12, v0, 0, -1);
    if ( v2 == -1 )
    {
      v7 = _errno_location();
      v8 = (const char *)sub_792D8(*v7);
      return sub_1700C((int)"waitpid: %s\n", v8);
    }
    else if ( v1 == v2 )
    {
      if ( (unsigned __int8)v12 == 127 )
      {
        if ( ptrace(PTRACE_SETOPTIONS, v1, 0, 2) )
        {
          if ( ptrace(PTRACE_KILL, v1, 0, 0) )
          {
            return sub_1700C((int)"linux_test_for_tracefork: failed to kill child");
          }
          else
          {
            result = sub_7A478(&v12, v1, 0, -1);
            if ( v1 == result )
            {
              if ( ((v12 & 0x7F) + 1) << 24 >> 25 <= 0 )
                return sub_1700C((int)"linux_test_for_tracefork: unexpected wait status 0x%x from killed child", v12);
            }
            else
            {
              return sub_1700C((int)"linux_test_for_tracefork: failed to wait for killed child");
            }
          }
        }
        else
        {
          if ( ptrace(PTRACE_CONT, v1, 0, 0) )
            sub_1700C((int)"linux_test_for_tracefork: failed to resume child");
          v6 = sub_7A478(&v12, v1, 0, -1);
          if ( v1 == v6 && (unsigned __int8)v12 == 127 && v12 >> 16 == 1 )
          {
            v13 = 0;
            if ( !ptrace(PTRACE_GETEVENTMSG, v1, 0, &v13) && v13 )
            {
              dword_D26C4 = 1;
              sub_7A478(&v14, v13, 0, -1);
              if ( ptrace(PTRACE_KILL, v13, 0, 0) )
                sub_1700C((int)"linux_test_for_tracefork: failed to kill second child");
              sub_7A478(&v12, v13, 0, -1);
            }
          }
          else
          {
            sub_1700C((int)"linux_test_for_tracefork: unexpected result from waitpid (%d, status 0x%x)", v6, v12);
          }
          do
          {
            if ( ptrace(PTRACE_KILL, v1, 0) )
              sub_1700C((int)"linux_test_for_tracefork: failed to kill child");
            result = sub_7A478(&v12, v1, 0, -1);
          }
          while ( (unsigned __int8)v12 == 127 );
        }
      }
      else
      {
        return sub_1700C((int)dword_8DE74);
      }
    }
    else
    {
      return sub_1700C((int)"linux_test_for_tracefork: waitpid: unexpected result %d\n", v2);
    }
  }
  return result;
}
// 8DE74: using guessed type int dword_8DE74[14];
// D26C4: using guessed type int dword_D26C4;
