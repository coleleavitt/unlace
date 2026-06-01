const char *__fastcall sub_6C3B60(
        __int64 *a1,
        char a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  const char *result; // rax
  __int64 v11; // r13
  unsigned int v12; // r12d
  double v13; // xmm4_8
  double v14; // xmm5_8
  unsigned int i; // ebp
  __int64 v16; // rsi
  int v17; // r12d
  unsigned int v18; // ebp

  if ( a2 )
    return (const char *)sub_6BB2A0(a1, 1);
  v11 = *(_QWORD *)(*a1 + 1864);
  *(_BYTE *)(v11 + 8) = 1;
  v12 = sub_64E0C0((__int64)a1, a1[1]);
  if ( v12 > 1 )
  {
    for ( i = 1; i != v12; ++i )
    {
      v16 = i;
      sub_65C970(a1, v16, a3, a4, a5, a6, v13, v14, a9, a10);
    }
  }
  *(_BYTE *)(v11 + 8) = 0;
  sub_6C32B0(a1);
  sub_6BB2A0(a1, 0);
  result = (const char *)sub_64E0C0((__int64)a1, a1[1]);
  v17 = (int)result;
  if ( (unsigned int)result > 1 )
  {
    v18 = 1;
    do
    {
      while ( 1 )
      {
        result = (const char *)sub_64DFD0((__int64)a1, a1[1], v18, nullptr);
        if ( result )
        {
          if ( *result )
            break;
        }
        if ( v17 == ++v18 )
          return result;
      }
      result = (const char *)sub_6B9860(a1, result, 1, 1u);
      ++v18;
    }
    while ( v17 != v18 );
  }
  return result;
}
