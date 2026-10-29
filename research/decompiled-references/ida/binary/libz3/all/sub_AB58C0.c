__int64 __fastcall sub_AB58C0(__int64 a1, __int64 a2)
{
  char *v3; // rsi
  __int64 result; // rax
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // r15

  v3 = "atoms:\n";
  std::__ostream_insert<char,std::char_traits<char>>();
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8560LL);
  if ( result )
  {
    v5 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        while ( 1 )
        {
          result = *(_QWORD *)(a1 + 536);
          if ( result )
          {
            if ( (unsigned int)i < *(_DWORD *)(result - 4) )
            {
              v7 = *(_QWORD *)(result + 8 * i);
              if ( v7 )
              {
                result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 16LL))(v7, v3);
                if ( (_BYTE)result )
                  break;
              }
            }
          }
          if ( ++i == v5 )
            return result;
        }
        v3 = (char *)a2;
        result = sub_AB57B0(a1, a2, (unsigned int)i, v7);
      }
    }
  }
  return result;
}

