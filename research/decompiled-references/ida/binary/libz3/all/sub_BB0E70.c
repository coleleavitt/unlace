__int64 __fastcall sub_BB0E70(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 result; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // rdx

  v2 = a1[1];
  result = 3LL * *((unsigned int *)a1 + 4);
  v4 = v2 + 24LL * *((unsigned int *)a1 + 4);
  if ( v2 != v4 )
  {
    while ( *(_QWORD *)(v2 + 8) <= 1u )
    {
      v2 += 24;
      if ( v4 == v2 )
        return result;
    }
    if ( v4 != v2 )
    {
      v5 = *(_QWORD *)(v2 + 8);
      do
      {
        sub_1648CA0(a2, *a1, v5, 2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(a2, *a1, *(_QWORD *)(v2 + 16), 2);
        std::__ostream_insert<char,std::char_traits<char>>();
        result = v2 + 24;
        if ( v4 == v2 + 24 )
          break;
        while ( 1 )
        {
          v5 = *(_QWORD *)(result + 8);
          v2 = result;
          if ( v5 > 1 )
            break;
          result += 24;
          if ( v4 == result )
            return result;
        }
      }
      while ( v4 != result );
    }
  }
  return result;
}

