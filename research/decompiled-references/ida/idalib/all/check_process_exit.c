__int64 __fastcall check_process_exit(__pid_t a1, int *a2, unsigned int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v3 = a3;
  if ( a3 == 1 )
    v3 = -1;
  v4 = qwait_timed(&v8, a1, 0, v3);
  if ( v4 )
  {
    v5 = v4;
    if ( v4 == -1 )
    {
      if ( a2 )
        *a2 = *__errno_location();
    }
    else
    {
      v6 = v8 & 0x7F;
      if ( (v8 & 0x7F) != 0 )
      {
        if ( (char)(v6 + 1) <= 1 )
        {
          if ( !under_debugger )
            interr(1150);
          BUG();
        }
        if ( a2 )
          *a2 = -v6;
      }
      else if ( a2 )
      {
        *a2 = BYTE1(v8);
      }
      return 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
