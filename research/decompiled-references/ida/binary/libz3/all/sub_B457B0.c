__int64 __fastcall sub_B457B0(const __m128i *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r13d
  unsigned int v4; // ebx
  unsigned int v5; // edx

  result = a1[2].m128i_i64[0];
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
        result = sub_B45690(a1, a2, v5);
      }
      while ( v4 != v3 );
    }
  }
  return result;
}

