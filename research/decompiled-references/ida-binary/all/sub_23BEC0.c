__int64 __fastcall sub_23BEC0(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  __int64 v5; // rdi

  if ( !a2 || !a4 && *(int *)(a2 + 80) <= 1 && *(_DWORD *)(a2 + 44) != 3 )
    return a5;
  v5 = a1 + 40;
  if ( (*(_BYTE *)(a2 + 72) & 8) == 0 )
    return sub_524F80(v5, 2165563978LL, 0);
  if ( (*(_BYTE *)(a2 + 76) & 1) != 0 && dword_8CC5F0 )
    return sub_524F80(v5, 2165563979LL, 0);
  return sub_524F80(v5, 2165563977LL, 0);
}
