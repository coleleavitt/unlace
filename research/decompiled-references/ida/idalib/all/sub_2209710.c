void __fastcall sub_2209710(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 i; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    if ( (a2 >= a1 + 16 || a1 >= a2 + 16) && v3 > 1 )
    {
      v4 = 0;
      do
      {
        *(__m128i *)(a1 + v4) = _mm_loadu_si128((const __m128i *)(a2 + v4));
        v4 += 16;
      }
      while ( v4 != 16LL * (a3 >> 1) );
      v5 = a3 & 0xFFFFFFFE;
      if ( a3 != (_DWORD)v5 )
        *(_QWORD *)(a1 + 8 * v5) = *(_QWORD *)(a2 + 8 * v5);
    }
    else
    {
      v6 = v3;
      for ( i = 0; ; ++i )
      {
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)(a2 + 8 * i);
        if ( v6 == i )
          break;
      }
    }
  }
}
