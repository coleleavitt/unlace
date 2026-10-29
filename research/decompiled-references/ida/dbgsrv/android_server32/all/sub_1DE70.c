/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DE70
// Address: 0x0001DE70

//----- (0001DE70) --------------------------------------------------------
int sub_1DE70()
{
  __pid_t v0; // r4
  __pid_t v1; // r1
  int *v2; // r0
  const char *v3; // r0
  int *v4; // r0
  const char *v5; // r0
  __pid_t v6; // r1
  int v8; // [sp+0h] [bp-1Ch]
  int v9; // [sp+10h] [bp-Ch]
  __time_t v10; // [sp+14h] [bp-8h] BYREF

  if ( dword_DD008 == -1 )
  {
    dword_DD008 = 0;
    v0 = fork();
    if ( v0 == -1 )
    {
      v2 = (int *)_errno(0);
      v3 = (const char *)winerr(*v2);
      sub_1BBA0((int)"clone: %s\n", v3);
    }
    else
    {
      if ( !v0 )
        sub_25144(1);
      v1 = qwait_timed(&v10, v0, 0, -1);
      if ( v1 == -1 )
      {
        v4 = (int *)_errno(0);
        v5 = (const char *)winerr(*v4);
        sub_1BBA0((int)"waitpid: %s\n", v5);
      }
      else if ( v1 == v0 )
      {
        if ( (v10 & 0x7F) == 0x7F )
        {
          if ( ptrace(PTRACE_SETOPTIONS, v0, 0, 2) )
          {
            if ( ptrace(PTRACE_KILL, v0, 0, 0) )
            {
              sub_1BBA0((int)"linux_test_for_tracefork: failed to kill child");
            }
            else if ( qwait_timed(&v10, v0, 0, -1) == v0 )
            {
              if ( !((unsigned int)((v10 + 1) << 25) >> 26) )
                sub_1BBA0((int)"linux_test_for_tracefork: unexpected wait status 0x%x from killed child", v10);
            }
            else
            {
              sub_1BBA0((int)"linux_test_for_tracefork: failed to wait for killed child");
            }
          }
          else
          {
            if ( ptrace(PTRACE_CONT, v0, 0, 0) )
              sub_1BBA0((int)"linux_test_for_tracefork: failed to resume child");
            v8 = 0;
            v6 = qwait_timed(&v10, v0, 0, -1);
            if ( v6 == v0 && (v10 & 0xFFFF007F) == 0x1007F )
            {
              v9 = 0;
              ptrace(PTRACE_GETEVENTMSG, v0);
            }
            else
            {
              sub_1BBA0((int)"linux_test_for_tracefork: unexpected result from waitpid (%d, status 0x%x)", v6, v10);
            }
            do
            {
              if ( ptrace(PTRACE_KILL, v0, 0, 0, v8) )
                sub_1BBA0((int)"linux_test_for_tracefork: failed to kill child");
              qwait_timed(&v10, v0, 0, -1);
            }
            while ( (v10 & 0x7F) == 0x7F );
          }
        }
        else
        {
          sub_1BBA0((int)"linux_test_for_tracefork: waitpid: unexpected status %d\b", v10);
        }
      }
      else
      {
        sub_1BBA0((int)"linux_test_for_tracefork: waitpid: unexpected result %d\n", v1);
      }
    }
  }
  return dword_DD008;
}
// 1DF7C: conditional instruction was optimized away because %var_C.4==0
// 1DFEC: variable 'v8' is possibly undefined
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// DD008: using guessed type int dword_DD008;
