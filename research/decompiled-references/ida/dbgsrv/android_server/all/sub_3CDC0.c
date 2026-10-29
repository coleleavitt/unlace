/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CDC0
// Address: 0x000000000003CDC0

//----- (000000000003CDC0) ----------------------------------------------------
__int64 sub_3CDC0()
{
  __int64 v0; // x0
  unsigned int v1; // w19
  __int64 v2; // x0
  int *v3; // x0
  const char *v4; // x0
  int *v5; // x0
  const char *v6; // x0
  int v7; // w0
  char v9; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v10; // [xsp+8h] [xbp-48h] BYREF
  int v11; // [xsp+14h] [xbp-3Ch] BYREF
  __int64 v12; // [xsp+18h] [xbp-38h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( dword_164018 == -1 )
  {
    dword_164018 = 0;
    v0 = fork();
    if ( (_DWORD)v0 == -1 )
    {
      v3 = (int *)__errno(v0);
      v4 = (const char *)winerr(*v3);
      sub_39FA0((__int64)"clone: %s\n", v4);
    }
    else
    {
      v1 = v0;
      if ( !(_DWORD)v0 )
        sub_47740(v0);
      v2 = qwait_timed((int)&v11, v0);
      if ( (_DWORD)v2 == -1 )
      {
        v5 = (int *)__errno(v2);
        v6 = (const char *)winerr(*v5);
        sub_39FA0((__int64)"waitpid: %s\n", v6);
      }
      else if ( (_DWORD)v2 == v1 )
      {
        if ( (~v11 & 0x7F) != 0 )
        {
          sub_39FA0((__int64)"linux_test_for_tracefork: waitpid: unexpected status %d\b", v11);
        }
        else if ( (unsigned int)ptrace(PTRACE_SETOPTIONS, v1, 0, 2) )
        {
          if ( (unsigned int)ptrace(PTRACE_KILL, v1, 0, 0) )
          {
            sub_39FA0((__int64)"linux_test_for_tracefork: failed to kill child");
          }
          else if ( (unsigned int)qwait_timed((int)&v11, v1) == v1 )
          {
            if ( ((v11 + 1) & 0x7E) == 0 )
              sub_39FA0((__int64)"linux_test_for_tracefork: unexpected wait status 0x%x from killed child", v11);
          }
          else
          {
            sub_39FA0((__int64)"linux_test_for_tracefork: failed to wait for killed child");
          }
        }
        else
        {
          if ( (unsigned int)ptrace(PTRACE_CONT, v1, 0, 0) )
            sub_39FA0((__int64)"linux_test_for_tracefork: failed to resume child");
          v7 = qwait_timed((int)&v11, v1);
          if ( v7 == v1 && (v11 & 0xFFFF007F) == 0x1007F )
          {
            v10 = 0;
            if ( !(unsigned int)ptrace(PTRACE_GETEVENTMSG, v1, 0, &v10) && v10 )
            {
              dword_164018 = 1;
              qwait_timed((int)&v9, v10);
              if ( (unsigned int)ptrace(PTRACE_KILL, (unsigned int)v10, 0, 0) )
                sub_39FA0((__int64)"linux_test_for_tracefork: failed to kill second child");
              qwait_timed((int)&v11, v10);
            }
          }
          else
          {
            sub_39FA0((__int64)"linux_test_for_tracefork: unexpected result from waitpid (%d, status 0x%x)", v7, v11);
          }
          do
          {
            if ( (unsigned int)ptrace(PTRACE_KILL, v1, 0, 0) )
              sub_39FA0((__int64)"linux_test_for_tracefork: failed to kill child");
            qwait_timed((int)&v11, v1);
          }
          while ( (~v11 & 0x7F) == 0 );
        }
      }
      else
      {
        sub_39FA0((__int64)"linux_test_for_tracefork: waitpid: unexpected result %d\n", v2);
      }
    }
  }
  return (unsigned int)dword_164018;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 164018: using guessed type int dword_164018;
