double __fastcall PEdot(CoinIndexedVector *a1, CoinIndexedVector *a2)
{
  int v2; // eax
  unsigned int *v3; // rbx
  double result; // xmm0_8
  __int64 v5; // r13
  __int64 v7; // rsi
  double v8; // [rsp+0h] [rbp-38h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = *(unsigned int **)a1;
  if ( v2 <= 0 )
    return 0.0;
  result = 0.0;
  v5 = (__int64)&v3[v2 - 1 + 1];
  do
  {
    v7 = *v3++;
    v8 = *(double *)CoinIndexedVector::operator[](a1, v7);
    result = result + v8 * *(double *)CoinIndexedVector::operator[](a2, *(v3 - 1));
  }
  while ( v3 != (unsigned int *)v5 );
  return result;
}

