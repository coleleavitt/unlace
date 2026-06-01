/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1FA20
// Address: 0x0001FA20

//----- (0001FA20) --------------------------------------------------------
int sub_1FA20()
{
  __pid_t v0; // eax
  int v1; // ecx
  __pid_t v2; // esi
  int v3; // eax
  int v4; // ecx
  int *v5; // eax
  int *v6; // eax
  int v8; // [esp+Ch] [ebp-20h] BYREF
  __pid_t v9; // [esp+10h] [ebp-1Ch] BYREF
  __time_t v10[6]; // [esp+14h] [ebp-18h] BYREF

  v10[1] = __readgsdword(0x14u);
  if ( dword_13B00C != -1 )
    return dword_13B00C;
  dword_13B00C = 0;
  v0 = fork();
  if ( v0 == -1 )
  {
    v5 = (int *)__errno(v1);
    winerr(*v5);
LABEL_12:
    sub_1C900();
    return dword_13B00C;
  }
  v2 = v0;
  if ( !v0 )
    sub_2B8A0(v1);
  v3 = qwait_timed(v10, v0, 0, -1);
  if ( v3 == -1 )
  {
    v6 = (int *)__errno(v4);
    winerr(*v6);
    goto LABEL_12;
  }
  if ( v3 != v2 || (v10[0] & 0x7F) != 0x7F )
    goto LABEL_12;
  if ( ptrace(PTRACE_SETOPTIONS, v2, 0, 2) )
  {
    if ( ptrace(PTRACE_KILL, v2, 0, 0) || qwait_timed(v10, v2, 0, -1) != v2 || ((LOBYTE(v10[0]) + 1) & 0x7E) == 0 )
      goto LABEL_12;
  }
  else
  {
    if ( ptrace(PTRACE_CONT, v2, 0, 0) )
      sub_1C900();
    if ( qwait_timed(v10, v2, 0, -1) == v2 && (v10[0] & 0xFFFF007F) == 0x1007F )
    {
      v9 = 0;
      if ( !ptrace(PTRACE_GETEVENTMSG, v2, 0, &v9) && v9 )
      {
        dword_13B00C = 1;
        qwait_timed(&v8, v9, 0, -1);
        if ( ptrace(PTRACE_KILL, v9, 0, 0) )
          sub_1C900();
        qwait_timed(v10, v9, 0, -1);
      }
    }
    else
    {
      sub_1C900();
    }
    do
    {
      if ( ptrace(PTRACE_KILL, v2, 0, 0) )
        sub_1C900();
      qwait_timed(v10, v2, 0, -1);
    }
    while ( (v10[0] & 0x7F) == 0x7F );
  }
  return dword_13B00C;
}
// 1FAD9: variable 'v1' is possibly undefined
// 1FAF3: variable 'v4' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13B00C: using guessed type int dword_13B00C;
