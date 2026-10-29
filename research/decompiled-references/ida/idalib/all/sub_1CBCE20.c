__int64 __fastcall sub_1CBCE20(unsigned int *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rsi

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v6 )
    return sub_1CBCBE0(a1, *v6, a3, a4, a5, a6);
  else
    return 0;
}
