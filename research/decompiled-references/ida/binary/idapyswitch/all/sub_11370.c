void *__fastcall sub_11370(void *a1, signed __int64 a2)
{
  void *v2; // rbx

  if ( a2 )
  {
    if ( a2 == 3735928559LL || a2 <= 0 )
    {
      v2 = nullptr;
      *__errno_location() = 12;
      sub_F2F0((unsigned int)&dword_0 + 1);
    }
    else
    {
      v2 = realloc(a1, a2);
      if ( !v2 )
        sub_F2F0(1u);
    }
  }
  else
  {
    j__free(a1);
    return nullptr;
  }
  return v2;
}

