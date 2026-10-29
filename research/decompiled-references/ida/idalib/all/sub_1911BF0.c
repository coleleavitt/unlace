void __fastcall sub_1911BF0(__m128 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rdx

  v4 = (__int64 *)(a2 + 32);
  v5 = a2 + 8LL * *(unsigned int *)(a2 + 28) + 32;
  if ( v5 != a2 + 32 )
  {
    do
    {
      v6 = *v4++;
      sub_19116F0(a1, *(_DWORD *)(a2 + 24), v6, (_QWORD *)a2, 1, (__int64)&a1[280].m128_i64[1], a3, a4);
    }
    while ( (__int64 *)v5 != v4 );
  }
}
