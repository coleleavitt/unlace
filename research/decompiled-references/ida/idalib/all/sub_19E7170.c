__int64 __fastcall sub_19E7170(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5, __m128i a6, __m128 a7)
{
  __int64 v10; // rax
  char v11; // dl

  v10 = sub_19D6FE0(a1, a2, a4);
  if ( v11 )
    return 1;
  if ( v10 )
    return sub_19E6BD0(a1, a3, *(_DWORD *)(a2 + 128), v10, a6, a7);
  if ( !*(_DWORD *)(a2 + 16) && a4 )
  {
    if ( a5 )
      sub_1A4ED10(*a1, a2);
  }
  return 0;
}
