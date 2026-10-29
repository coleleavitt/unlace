__int64 __fastcall sub_AEF7C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp

  result = *(unsigned int *)(a1 + 108);
  if ( (_DWORD)result )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 280LL))(a1, a2);
    v3 = *(_QWORD *)(a1 + 96);
    v4 = v3 + 16LL * *(unsigned int *)(a1 + 104);
    if ( v3 != v4 )
    {
      while ( *(_QWORD *)v3 <= 1u )
      {
        v3 += 16;
        if ( v4 == v3 )
          return result;
      }
      while ( v4 != v3 )
      {
        sub_AEF200(*(_QWORD **)(v3 + 8), a1, a2);
        result = v3 + 16;
        if ( v4 == v3 + 16 )
          break;
        while ( 1 )
        {
          v3 = result;
          if ( *(_QWORD *)result > 1u )
            break;
          result += 16;
          if ( v4 == result )
            return result;
        }
      }
    }
  }
  return result;
}

