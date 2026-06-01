__int64 __fastcall sub_9CED40(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rbx

  result = std::__ostream_insert<char,std::char_traits<char>>();
  v5 = a1[71];
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v6 )
    {
      v7 = 0;
      while ( 1 )
      {
        result = 3 * v7;
        if ( *(_DWORD *)(v5 + 24 * v7 + 12) != -1 )
        {
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          result = sub_9CE820(a1, a2, (__int64 *)(24 * v7 + a1[71]), a3);
        }
        if ( v6 == ++v7 )
          break;
        v5 = a1[71];
      }
    }
  }
  return result;
}

