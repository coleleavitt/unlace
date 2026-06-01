__int64 __fastcall sub_B562C0(__int64 a1, const __m128i **a2)
{
  __int64 result; // rax
  const __m128i *v3; // rbx
  unsigned int v4; // ecx
  __int64 v5; // r14
  const __m128i *v6; // rbp
  const __m128i *v7; // r15
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // rdi
  const __m128i *v12; // rax
  const __m128i *v13; // rdx
  __m128i v14; // xmm0

  result = *(unsigned int *)(a1 + 48);
  v3 = *(const __m128i **)(a1 + 40);
  if ( (_DWORD)result )
  {
    v4 = *((_DWORD *)a2 + 2);
    LODWORD(v5) = *((_DWORD *)a2 + 3);
    v6 = &v3[result];
    do
    {
      if ( v4 < (unsigned int)v5 )
      {
        v7 = *a2;
      }
      else
      {
        v5 = (unsigned int)(2 * v5);
        v10 = sub_186B270(16 * v5);
        v4 = *((_DWORD *)a2 + 2);
        v11 = (char *)*a2;
        v7 = (const __m128i *)v10;
        if ( v4 )
        {
          v12 = *a2;
          v13 = v7;
          do
          {
            v14 = _mm_loadu_si128(v12++);
            ++v13;
            v13[-1] = v14;
          }
          while ( &v11[16 * v4] != (char *)v12 );
        }
        if ( v11 )
        {
          if ( v11 != (char *)(a2 + 2) )
          {
            sub_186B220(v11);
            v4 = *((_DWORD *)a2 + 2);
          }
        }
        *a2 = v7;
        *((_DWORD *)a2 + 3) = v5;
      }
      v8 = _mm_loadu_si128(v3);
      v9 = v4;
      ++v3;
      ++v4;
      result = 16 * v9;
      *(__m128i *)((char *)v7 + result) = v8;
      *((_DWORD *)a2 + 2) = v4;
    }
    while ( v6 != v3 );
  }
  return result;
}

