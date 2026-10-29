/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_171F8
// Address: 0x000171F8

//----- (000171F8) --------------------------------------------------------
int sub_171F8()
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

  dword_D36E4 = 0;
  v0 = fork();
  v1 = v0;
  if ( !v0 )
  {
    v9 = _errno_location();
    *v9 = 0;
    if ( ptrace(PTRACE_TRACEME, 0, 0, 0) )
    {
      v10 = (const char *)sub_79440(*v9);
      sub_171B0((int)"PTRACE_O_TRACEFORK test: Cannot trace created process: %s\n", v10);
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
    v5 = (const char *)sub_79440(*v4);
    return sub_171B0((int)"clone: %s\n", v5);
  }
  else
  {
    v2 = sub_7A5E0(&v12, v0, 0, -1);
    if ( v2 == -1 )
    {
      v7 = _errno_location();
      v8 = (const char *)sub_79440(*v7);
      return sub_171B0((int)"waitpid: %s\n", v8);
    }
    else if ( v1 == v2 )
    {
      if ( (unsigned __int8)v12 == 127 )
      {
        if ( ptrace(PTRACE_SETOPTIONS, v1, 0, 2) )
        {
          if ( ptrace(PTRACE_KILL, v1, 0, 0) )
          {
            return sub_171B0((int)"linux_test_for_tracefork: failed to kill child");
          }
          else
          {
            result = sub_7A5E0(&v12, v1, 0, -1);
            if ( v1 == result )
            {
              if ( ((v12 & 0x7F) + 1) << 24 >> 25 <= 0 )
                return sub_171B0((int)"linux_test_for_tracefork: unexpected wait status 0x%x from killed child", v12);
            }
            else
            {
              return sub_171B0((int)"linux_test_for_tracefork: failed to wait for killed child");
            }
          }
        }
        else
        {
          if ( ptrace(PTRACE_CONT, v1, 0, 0) )
            sub_171B0((int)"linux_test_for_tracefork: failed to resume child");
          v6 = sub_7A5E0(&v12, v1, 0, -1);
          if ( v1 == v6 && (unsigned __int8)v12 == 127 && v12 >> 16 == 1 )
          {
            v13 = 0;
            if ( !ptrace(PTRACE_GETEVENTMSG, v1, 0, &v13) && v13 )
            {
              dword_D36E4 = 1;
              sub_7A5E0(&v14, v13, 0, -1);
              if ( ptrace(PTRACE_KILL, v13, 0, 0) )
                sub_171B0((int)"linux_test_for_tracefork: failed to kill second child");
              sub_7A5E0(&v12, v13, 0, -1);
            }
          }
          else
          {
            sub_171B0((int)"linux_test_for_tracefork: unexpected result from waitpid (%d, status 0x%x)", v6, v12);
          }
          do
          {
            if ( ptrace(PTRACE_KILL, v1, 0) )
              sub_171B0((int)"linux_test_for_tracefork: failed to kill child");
            result = sub_7A5E0(&v12, v1, 0, -1);
          }
          while ( (unsigned __int8)v12 == 127 );
        }
      }
      else
      {
        return sub_171B0((int)dword_8DFB0);
      }
    }
    else
    {
      return sub_171B0((int)"linux_test_for_tracefork: waitpid: unexpected result %d\n", v2);
    }
  }
  return result;
}
// 8DFB0: using guessed type int dword_8DFB0[14];
// D36E4: using guessed type int dword_D36E4;
