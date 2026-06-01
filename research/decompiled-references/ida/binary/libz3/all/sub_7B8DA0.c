size_t __fastcall sub_7B8DA0(__int64 a1, int a2, __int64 *a3, unsigned int a4, __m128i a5)
{
  int v5; // eax
  bool v6; // zf
  unsigned int v7; // esi

  v5 = 2 * a2;
  v6 = a2 == 0x7FFFFFFF;
  v7 = -2;
  if ( !v6 )
    v7 = v5;
  return sub_7B8AC0(a1, v7, a3, a4, *(unsigned __int8 *)(a1 + 1048), a5);
}

