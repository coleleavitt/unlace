__int64 __fastcall sub_E6C790(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  int v3; // edx

  result = 0;
  if ( a1 )
  {
    do
    {
      v2 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) )
        v3 = 4 * (((unsigned int)(v2 >> 1) & 3) >= 2) + 8;
      else
        v3 = 4;
      result = (unsigned int)(v3 + result);
      a1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 );
  }
  return result;
}

