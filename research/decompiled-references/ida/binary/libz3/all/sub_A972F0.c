unsigned __int64 __fastcall sub_A972F0(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rax

  for ( i = 0; ; ++i )
  {
    v3 = sub_FF9B30(a1);
    result = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(v3 + 264) - *(_QWORD *)(v3 + 256)) >> 3);
    if ( i >= (unsigned int)result )
      break;
    v5 = sub_FFB090(a1);
    v6 = *(_QWORD *)(v5 + 16);
    if ( v6 )
    {
      if ( i < *(_DWORD *)(v6 - 4) )
      {
        v7 = *(unsigned int *)(v6 + 4LL * i);
        if ( (unsigned int)v7 < *(_DWORD *)v5 && i == *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v7) )
          continue;
      }
    }
    if ( (unsigned int)sub_A96880(a1, i, a2) )
    {
      sub_180B150(a1, i);
      v8 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v9 = sub_FF9B20(a1);
      sub_A91C90(v8, (__int64 *)(*(_QWORD *)(v9 + 256) + 24LL * i));
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

