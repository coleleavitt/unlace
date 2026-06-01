unsigned __int64 __fastcall sub_1AF67E0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  unsigned __int64 *v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi

  v3 = a3 - (_QWORD)a2;
  v4 = (a3 - (__int64)a2) >> 3;
  v5 = a2;
  result = *(unsigned int *)(a1 + 8);
  v7 = v4 + result;
  if ( v4 + result > *(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v7, 8);
    result = *(unsigned int *)(a1 + 8);
    LODWORD(v7) = v4 + result;
  }
  v8 = (unsigned __int64 *)(*(_QWORD *)a1 + 8 * result);
  if ( v3 > 0 )
  {
    if ( v3 <= 8 )
      goto LABEL_8;
    v9 = 0;
    do
    {
      *(__m128i *)&v8[v9] = _mm_loadu_si128((const __m128i *)&a2[v9]);
      v9 += 2;
    }
    while ( v9 != 2 * (v4 >> 1) );
    result = v4 & 0xFFFFFFFFFFFFFFFELL;
    v10 = 8 * (v4 & 0xFFFFFFFFFFFFFFFELL);
    v5 = (unsigned __int64 *)((char *)v5 + v10);
    v8 = (unsigned __int64 *)((char *)v8 + v10);
    if ( v4 != (v4 & 0xFFFFFFFFFFFFFFFELL) )
    {
LABEL_8:
      result = *v5;
      *v8 = *v5;
    }
  }
  *(_DWORD *)(a1 + 8) = v7;
  return result;
}
