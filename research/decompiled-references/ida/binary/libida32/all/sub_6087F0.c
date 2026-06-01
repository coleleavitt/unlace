__int64 __fastcall sub_6087F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r13d
  unsigned int i; // ebx
  __int64 v7; // rdx

  result = sub_79B3A0(a1, a2, 0xFFFFFFFFLL, 65);
  if ( (int)result > 0 )
  {
    v5 = result;
    for ( i = 0; i != v5; ++i )
    {
      while ( 1 )
      {
        result = sub_79B6F0(a1, a2, 0, i, 83);
        if ( !result )
          break;
        if ( v5 == ++i )
          return result;
      }
      v7 = i;
      result = sub_79B440(a1, a2, v7, a3, 0, 83);
    }
  }
  return result;
}

