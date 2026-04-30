const char *__fastcall sub_59A4FC(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 == 16 )
    return "SIGSTKFLT";
  if ( v1 > 0x10 )
  {
    if ( v1 == 24 )
      return "SIGXCPU";
    if ( v1 > 0x18 )
    {
      if ( v1 == 28 )
        return "SIGWINCH";
      if ( v1 > 0x1C )
      {
        if ( v1 == 30 )
          return "SIGPWR";
        if ( v1 < 0x1E )
          return "SIGIO";
        if ( v1 == 31 )
          return "SIGSYS";
        if ( v1 == -1 )
          return "DUMP_REQUESTED";
        return "UNKNOWN";
      }
      if ( v1 == 26 )
      {
        return "SIGVTALRM";
      }
      else if ( v1 > 0x1A )
      {
        return "SIGPROF";
      }
      else
      {
        return "SIGXFSZ";
      }
    }
    else if ( v1 == 20 )
    {
      return "SIGTSTP";
    }
    else if ( v1 > 0x14 )
    {
      if ( v1 == 22 )
      {
        return "SIGTTOU";
      }
      else if ( v1 > 0x16 )
      {
        return "SIGURG";
      }
      else
      {
        return "SIGTTIN";
      }
    }
    else if ( v1 == 18 )
    {
      return "SIGCONT";
    }
    else if ( v1 > 0x12 )
    {
      return "SIGSTOP";
    }
    else
    {
      return "SIGCHLD";
    }
  }
  else
  {
    if ( v1 == 8 )
      return "SIGFPE";
    if ( v1 > 8 )
    {
      if ( v1 == 12 )
      {
        return "SIGUSR2";
      }
      else if ( v1 > 0xC )
      {
        if ( v1 == 14 )
        {
          return "SIGALRM";
        }
        else if ( v1 > 0xE )
        {
          return "SIGTERM";
        }
        else
        {
          return "SIGPIPE";
        }
      }
      else if ( v1 == 10 )
      {
        return "SIGUSR1";
      }
      else if ( v1 > 0xA )
      {
        return "SIGSEGV";
      }
      else
      {
        return "SIGKILL";
      }
    }
    else
    {
      if ( v1 == 4 )
        return "SIGILL";
      if ( v1 <= 4 )
      {
        if ( v1 == 2 )
          return "SIGINT";
        if ( v1 > 2 )
          return "SIGQUIT";
        if ( v1 == 1 )
          return "SIGHUP";
        return "UNKNOWN";
      }
      if ( v1 == 6 )
      {
        return "SIGABRT";
      }
      else if ( v1 > 6 )
      {
        return "SIGBUS";
      }
      else
      {
        return "SIGTRAP";
      }
    }
  }
}
