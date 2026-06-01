void __fastcall sub_22099F0(const __m128i *a1, unsigned int a2)
{
  const __m128i *v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 *v6; // rdi
  __int64 *v7; // rdx
  __int64 v8; // rax

  if ( !a2 )
    return;
  if ( a2 == 1 )
  {
    v4 = 0;
LABEL_6:
    a1->m128i_i64[v4] = ~a1->m128i_i64[v4];
    goto LABEL_7;
  }
  v2 = a1;
  do
  {
    v3 = _mm_loadu_si128(v2++);
    v2[-1] = _mm_xor_si128(v3, (__m128i)-1LL);
  }
  while ( v2 != &a1[a2 >> 1] );
  v4 = a2 & 0xFFFFFFFE;
  if ( a2 != (_DWORD)v4 )
    goto LABEL_6;
LABEL_7:
  if ( a1->m128i_i64[0]++ == -1 )
  {
    v6 = &a1->m128i_i64[1];
    v7 = &v6[a2 - 1];
    do
    {
      if ( v7 == v6 )
        break;
      v8 = *v6++;
      *(v6 - 1) = ++v8;
    }
    while ( !v8 );
  }
}
