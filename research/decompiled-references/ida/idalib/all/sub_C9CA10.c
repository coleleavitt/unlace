__int64 __fastcall sub_C9CA10(__int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax

  if ( a2 <= a1 + 1 )
    return 0;
  v5 = sub_2218990(*(unsigned __int8 *)(a1 + 1));
  if ( v5 == 1 || a2 < a1 + (unsigned __int64)v5 + 1 )
    return 0;
  *a3 = v5 + 1;
  return 1;
}
