__int64 __fastcall is_control_tty(int fd)
{
  __pid_t v1; // eax
  __pid_t v3; // ebx
  __pid_t v4; // eax

  v1 = getsid(0);
  if ( v1 == -1 )
    return 0;
  v3 = v1;
  v4 = tcgetsid(fd);
  if ( v4 == -1 )
    return 0;
  else
    return (unsigned int)(v3 != v4) + 1;
}

