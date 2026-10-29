unsigned __int64 __fastcall sub_1AF6890(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v3; // r12
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rsi

  result = *(unsigned int *)(a1 + 8);
  v3 = *(unsigned __int64 **)a2;
  v4 = 8LL * *(unsigned int *)(a2 + 8);
  v5 = v4 >> 3;
  v6 = result + (v4 >> 3);
  if ( v6 > *(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v6, 8);
    result = *(unsigned int *)(a1 + 8);
    LODWORD(v6) = result + v5;
  }
  v7 = (unsigned __int64 *)(*(_QWORD *)a1 + 8 * result);
  if ( v4 )
  {
    if ( v4 == 8 )
      goto LABEL_8;
    v8 = 0;
    do
    {
      *(__m128i *)&v7[v8] = _mm_loadu_si128((const __m128i *)&v3[v8]);
      v8 += 2;
    }
    while ( v8 != 2 * (v5 >> 1) );
    result = v5 & 0xFFFFFFFFFFFFFFFELL;
    v9 = 8 * (v5 & 0xFFFFFFFFFFFFFFFELL);
    v3 = (unsigned __int64 *)((char *)v3 + v9);
    v7 = (unsigned __int64 *)((char *)v7 + v9);
    if ( (v5 & 0xFFFFFFFFFFFFFFFELL) != v5 )
    {
LABEL_8:
      result = *v3;
      *v7 = *v3;
    }
  }
  *(_DWORD *)(a1 + 8) = v6;
  return result;
}
