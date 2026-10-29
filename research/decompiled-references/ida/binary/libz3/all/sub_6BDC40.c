__int64 __fastcall sub_6BDC40(__int64 a1)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rcx

  v2 = (unsigned int)(2 * *(_DWORD *)(a1 + 12));
  result = sub_186B270(8 * v2);
  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_QWORD **)a1;
  v6 = result;
  if ( (_DWORD)v4 )
  {
    if ( (unsigned int)(v4 - 1) <= 2 || (_QWORD *)result == v5 + 1 )
    {
      v8 = 8 * v4;
      result = 0;
      do
      {
        *(_QWORD *)(v6 + result) = *(_QWORD *)((char *)v5 + result);
        result += 8;
      }
      while ( v8 != result );
    }
    else
    {
      result = 0;
      do
      {
        *(__m128i *)(v6 + result) = _mm_loadu_si128((const __m128i *)((char *)v5 + result));
        result += 16;
      }
      while ( 16LL * ((unsigned int)v4 >> 1) != result );
      if ( (v4 & 1) != 0 )
      {
        v7 = v4 & 0xFFFFFFFE;
        result = v5[v7];
        *(_QWORD *)(v6 + 8LL * v7) = result;
      }
    }
  }
  if ( v5 )
  {
    result = a1 + 16;
    if ( v5 != (_QWORD *)(a1 + 16) )
      result = sub_186B220(v5);
  }
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v2;
  return result;
}

