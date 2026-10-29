/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80582E0
// Address: 0x080582E0

//----- (080582E0) --------------------------------------------------------
unsigned int sub_80582E0()
{
  __pid_t v0; // eax
  __pid_t v1; // ebp
  int v2; // eax
  __pid_t v3; // esi
  unsigned int result; // eax
  int *v5; // eax
  int *v6; // eax
  int *v7; // eax
  int *v8; // esi
  __pid_t v9; // eax
  int v10; // [esp+10h] [ebp-2Ch] BYREF
  __pid_t pid; // [esp+14h] [ebp-28h] BYREF
  int v12; // [esp+18h] [ebp-24h] BYREF
  unsigned int v13; // [esp+1Ch] [ebp-20h]

  v13 = __readgsdword(0x14u);
  dword_811D384 = 0;
  v0 = fork();
  if ( !v0 )
  {
    v7 = __errno_location();
    *v7 = 0;
    v8 = v7;
    if ( ptrace(PTRACE_TRACEME, 0, 0, 0) )
    {
      sub_80D0500(*v8);
      sub_8058290();
      if ( v13 == __readgsdword(0x14u) )
        _exit(127);
    }
    else
    {
      v9 = getpid();
      kill(v9, 19);
      fork();
      if ( v13 == __readgsdword(0x14u) )
        _exit(0);
    }
LABEL_34:
    sub_80D7AB0();
  }
  v1 = v0;
  if ( v0 == -1 )
  {
    v5 = __errno_location();
    sub_80D0500(*v5);
    sub_8058290();
  }
  else
  {
    v2 = sub_80D1E00(&v10, v0, 0, -1);
    v3 = v2;
    if ( v2 == -1 )
    {
      v6 = __errno_location();
      sub_80D0500(*v6);
      sub_8058290();
    }
    else
    {
      if ( v1 != v2 || (_BYTE)v10 != 127 )
        goto LABEL_6;
      if ( ptrace(PTRACE_SETOPTIONS, v1, 0, 2) )
      {
        if ( ptrace(PTRACE_KILL, v1, 0, 0)
          || v1 != sub_80D1E00(&v10, v1, 0, -1)
          || __OFSUB__((v10 & 0x7F) + 1, 1)
          || (v10 & 0x7F) == 0 )
        {
LABEL_6:
          sub_8058290();
        }
      }
      else
      {
        if ( ptrace(PTRACE_CONT, v3, 0, 0) )
          sub_8058290();
        if ( v3 == sub_80D1E00(&v10, v3, 0, -1) && (_BYTE)v10 == 127 && v10 >> 16 == 1 )
        {
          pid = 0;
          if ( !ptrace(PTRACE_GETEVENTMSG, v3, 0, &pid) && pid )
          {
            dword_811D384 = 1;
            sub_80D1E00(&v12, pid, 0, -1);
            if ( ptrace(PTRACE_KILL, pid, 0, 0) )
              sub_8058290();
            sub_80D1E00(&v10, pid, 0, -1);
          }
        }
        else
        {
          sub_8058290();
        }
        do
        {
          if ( ptrace(PTRACE_KILL, v3, 0, 0) )
            sub_8058290();
          sub_80D1E00(&v10, v3, 0, -1);
        }
        while ( (_BYTE)v10 == 127 );
      }
    }
  }
  result = v13 - __readgsdword(0x14u);
  if ( result )
    goto LABEL_34;
  return result;
}
// 811D384: using guessed type int dword_811D384;
