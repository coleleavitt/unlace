__int64 __fastcall sub_B309F0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r13d
  unsigned int v4; // ebx
  __int64 v5; // rdx

  result = a1[4];
  if ( result )
  {
    v3 = *(_DWORD *)(result - 4);
    if ( v3 )
    {
      v4 = 0;
      std::__ostream_insert<char,std::char_traits<char>>();
      do
      {
        v5 = v4++;
        result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 440LL))(a1, a2, v5);
      }
      while ( v4 != v3 );
    }
  }
  return result;
}

