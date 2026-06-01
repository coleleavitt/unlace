__int64 __fastcall sub_304FC0(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  int flags; // eax
  int v5; // edx
  __int64 v6; // rcx
  __int64 func; // rax
  __int64 v8; // rdx

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v2 = segtype(a2);
  result = 75;
  if ( v2 != 1 )
  {
    flags = get_flags_ex(a2, 4);
    v5 = flags;
    v6 = flags & 0x600;
    if ( v6 == 1024 )
    {
      return 3 * (unsigned int)((flags & 0xF0000000) != 1342177280) + 76;
    }
    else
    {
      result = 79;
      if ( v6 == 1536 )
      {
        if ( (v5 & 0x10000000) != 0 && (func = get_func(a2)) != 0 )
        {
          v8 = *(_QWORD *)(func + 16);
          result = 82;
          if ( (v8 & 0x10000) == 0 )
            return (v8 & 4) == 0 ? 81 : 205;
        }
        else
        {
          return 74;
        }
      }
    }
  }
  return result;
}
