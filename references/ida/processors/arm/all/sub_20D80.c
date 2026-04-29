__int64 __fastcall sub_20D80(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v4; // r13
  __int64 v5; // rbx
  char v6; // al

  v4 = 1;
  if ( *(_DWORD *)(a1 + 212) )
    v4 = (unsigned __int64)(get_sreg(a2, 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL;
  if ( a3 <= 1 )
    return 0;
  v5 = a2 + 1;
  while ( 1 )
  {
    v6 = 1;
    if ( *(_DWORD *)(a1 + 212) )
      v6 = (unsigned __int64)(get_sreg(v5, 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL;
    if ( v4 != v6 )
      break;
    if ( a3 + a2 == ++v5 )
      return 0;
  }
  return 1;
}
