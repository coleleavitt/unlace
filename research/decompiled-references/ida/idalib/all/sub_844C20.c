char __fastcall sub_844C20(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char result; // al
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdi

  result = 1;
  if ( a2 < a3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = *a1;
      v6 = 0;
      while ( 1 )
      {
        v7 = (unsigned __int64 *)(v5 + 16LL * (int)v6);
        v8 = v7[1];
        if ( v8 >= a2 )
          break;
        if ( v4 == ++v6 )
          return 0;
      }
      result = a2 >= *v7 && v8 != *v7;
      if ( result )
        return v8 - 1 >= a3 - 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
