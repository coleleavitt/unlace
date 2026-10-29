unsigned __int64 __fastcall sub_8418C0(__int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)result )
  {
    if ( (unsigned __int8)(result - 6) <= 1u )
    {
      LOBYTE(result) = (_BYTE)result != 7;
      result = (unsigned int)(result + 6);
      *(_BYTE *)(a1 + 16) = result;
      if ( !a2 )
        **(_BYTE **)a1 = result;
    }
    else if ( !a2 )
    {
      result = *(_QWORD *)a1;
      *(_BYTE *)(*(_QWORD *)a1 + 3LL) ^= 1u;
    }
  }
  else
  {
    if ( a2 )
    {
      ++*a2;
    }
    else
    {
      result = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(*(_QWORD *)a1 + result) = 4;
    }
    ++*(_QWORD *)(a1 + 8);
  }
  if ( !a3 )
  {
    *(__m128i *)(a1 + 20) = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 20)), (__m128i)-1LL);
    *(__m128i *)(a1 + 36) = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 36)), (__m128i)-1LL);
  }
  return result;
}

