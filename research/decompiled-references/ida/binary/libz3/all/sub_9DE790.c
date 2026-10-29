__int64 __fastcall sub_9DE790(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // r13
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  unsigned int *v8; // r13
  unsigned int v9; // edx

  result = a1[4];
  if ( result && *(_DWORD *)(result - 4) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_9DE2C0(a1, a2);
    v3 = a1[95];
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 - 4) )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = (unsigned int *)a1[95];
        if ( v7 )
        {
          v8 = &v7[*(v7 - 1)];
          while ( v8 != v7 )
          {
            v9 = *v7++;
            sub_9DD9E0(a1, a2, v9);
          }
        }
      }
    }
    sub_9DD900(a1, (__int64)a2, 1);
    sub_9DD900(a1, (__int64)a2, 0);
    std::__ostream_insert<char,std::char_traits<char>>();
    v4 = (__int64 *)a1[91];
    if ( v4 )
    {
      v5 = &v4[*((unsigned int *)v4 - 1)];
      while ( v5 != v4 )
      {
        v6 = *v4++;
        sub_9DCC90((__int64)a1, a2, v6, 0);
      }
    }
    return sub_9DCF00((__int64)a1, a2);
  }
  return result;
}

