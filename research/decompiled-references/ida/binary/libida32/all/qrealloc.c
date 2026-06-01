void *__fastcall qrealloc(void *a1, signed __int64 a2)
{
  void *v2; // rbx

  if ( a2 )
  {
    if ( a2 == 3735928559LL || a2 <= 0 )
    {
      v2 = nullptr;
      *__errno_location() = 12;
      set_qerrno((char *)&dword_0 + 1, a2);
    }
    else
    {
      v2 = realloc(a1, a2);
      if ( !v2 )
        set_qerrno(1, a2);
    }
  }
  else
  {
    qfree(a1);
    return nullptr;
  }
  return v2;
}

