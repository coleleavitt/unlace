__int64 __fastcall sub_201610(__int64 **a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 *v8; // rbp

  if ( *(_DWORD *)(a2 + 44) != -1 )
    return 1;
  v8 = *a1;
  sub_64640(*a1, a3, (__int64)a3, a4, a5, a6);
  sub_317C60(v8 + 2, a3 + 2);
  return 0;
}
