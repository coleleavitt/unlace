__int64 __fastcall sub_127290(unsigned __int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // eax

  v4 = *(_DWORD *)(a1 + 4);
  if ( a3 && v4 > a3 )
    return sub_126F10(a1, a2, v4 - a3, a4);
  else
    return 0;
}
