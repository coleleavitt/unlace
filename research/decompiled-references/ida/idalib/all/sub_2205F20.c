__int64 __fastcall sub_2205F20(__int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // edx
  unsigned __int64 v8; // r10
  __int64 result; // rax
  __int64 v10; // rdx

  v3 = a2 >> 6;
  v4 = a3 >> 6;
  v5 = -1LL << a2;
  v6 = *a1;
  v7 = a3 & 0x3F;
  if ( v7 )
  {
    v8 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v7);
    if ( v3 == v4 )
    {
      v5 &= v8;
    }
    else
    {
      *(_QWORD *)(v6 + 8LL * v4) |= v8;
      v6 = *a1;
    }
  }
  *(_QWORD *)(v6 + 8LL * v3) |= v5;
  result = v3 + 1;
  if ( v4 > (unsigned int)result )
  {
    v10 = (unsigned int)result;
    result = 8LL * (unsigned int)result;
    do
    {
      *(_QWORD *)(*a1 + result) = -1;
      result += 8;
    }
    while ( 8 * (v10 + v4 - 2 - v3 + 1) != result );
  }
  return result;
}
