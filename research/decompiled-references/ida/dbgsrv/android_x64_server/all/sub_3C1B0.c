/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C1B0
// Address: 0x000000000003C1B0

//----- (000000000003C1B0) ----------------------------------------------------
__int64 __fastcall sub_3C1B0(__int64 a1)
{
  __pid_t v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rdx
  int *v5; // rax
  char *v6; // rcx
  int *v7; // rax
  char *v8; // rcx
  unsigned int v10; // ecx
  int v11; // [rsp+4h] [rbp-34h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v13; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( dword_154018 == -1 )
  {
    dword_154018 = 0;
    v1 = fork();
    if ( v1 == -1 )
    {
      v5 = (int *)__errno(a1);
      v6 = winerr(*v5);
      sub_390A0((int)"clone: %s\n", v6);
    }
    else
    {
      v2 = v1;
      if ( !v1 )
        sub_48A30(a1);
      v3 = qwait_timed(&v13, v1, 0, -1);
      if ( v3 == -1 )
      {
        v7 = (int *)__errno(&v13);
        v8 = winerr(*v7);
        sub_390A0((int)"waitpid: %s\n", v8);
      }
      else if ( v3 == v2 )
      {
        if ( (v13 & 0x7F) == 0x7F )
        {
          if ( (unsigned int)ptrace(PTRACE_SETOPTIONS, v2, 0, 2) )
          {
            if ( (unsigned int)ptrace(PTRACE_KILL, v2, 0, 0) )
            {
              sub_390A0((int)"linux_test_for_tracefork: failed to kill child");
            }
            else if ( (unsigned int)qwait_timed(&v13, v2, 0, -1) == v2 )
            {
              if ( (((_BYTE)v13 + 1) & 0x7E) == 0 )
                sub_390A0((int)"linux_test_for_tracefork: unexpected wait status 0x%x from killed child");
            }
            else
            {
              sub_390A0((int)"linux_test_for_tracefork: failed to wait for killed child");
            }
          }
          else
          {
            if ( (unsigned int)ptrace(PTRACE_CONT, v2, 0, 0) )
              sub_390A0((int)"linux_test_for_tracefork: failed to resume child");
            v10 = qwait_timed(&v13, v2, 0, -1);
            if ( v10 == v2 && (v13 & 0xFFFF007F) == 0x1007F )
            {
              v12 = 0;
              if ( !(unsigned int)ptrace(PTRACE_GETEVENTMSG, v2, 0, &v12) && v12 )
              {
                dword_154018 = 1;
                qwait_timed(&v11, v12, 0, -1);
                if ( (unsigned int)ptrace(PTRACE_KILL, (unsigned int)v12, 0, 0) )
                  sub_390A0((int)"linux_test_for_tracefork: failed to kill second child");
                qwait_timed(&v13, v12, 0, -1);
              }
            }
            else
            {
              sub_390A0((int)"linux_test_for_tracefork: unexpected result from waitpid (%d, status 0x%x)", v10, v13);
            }
            do
            {
              if ( (unsigned int)ptrace(PTRACE_KILL, v2, 0, 0) )
                sub_390A0((int)"linux_test_for_tracefork: failed to kill child");
              qwait_timed(&v13, v2, 0, -1);
            }
            while ( (v13 & 0x7F) == 0x7F );
          }
        }
        else
        {
          sub_390A0((int)"linux_test_for_tracefork: waitpid: unexpected status %d\b", v13, v4, v3);
        }
      }
      else
      {
        sub_390A0((int)"linux_test_for_tracefork: waitpid: unexpected result %d\n", v3);
      }
    }
  }
  return (unsigned int)dword_154018;
}
// 3C2E4: variable 'v4' is possibly undefined
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 154018: using guessed type int dword_154018;
