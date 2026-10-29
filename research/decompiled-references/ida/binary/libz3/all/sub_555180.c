__int64 __fastcall sub_555180(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6, __m128 a7)
{
  int v9; // ebp
  unsigned int v10; // ebx
  __int64 result; // rax

  if ( !a4 )
    return 1;
  v9 = a4 + a3;
  v10 = a3;
  while ( 1 )
  {
    result = sub_554760(a1, a2, v10, a5, a6, a7);
    if ( !(_BYTE)result )
      break;
    if ( ++v10 == v9 )
      return 1;
  }
  return result;
}

