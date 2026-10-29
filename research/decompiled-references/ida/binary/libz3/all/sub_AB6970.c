__int64 __fastcall sub_AB6970(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  int v3; // r13d
  unsigned int v4; // ebx
  unsigned int v5; // edx

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
        sub_AB66A0(a1, a2, v5);
      }
      while ( v4 != v3 );
      return sub_AB58C0((__int64)a1, (__int64)a2);
    }
  }
  return result;
}

