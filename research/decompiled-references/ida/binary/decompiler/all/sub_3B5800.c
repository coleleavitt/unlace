__int64 __fastcall sub_3B5800(__int64 a1, __int64 a2)
{
  int v2; // eax

  sub_386C90(a2, 0);
  v2 = *(_DWORD *)(a2 + 56);
  if ( v2 == 3 )
    return (unsigned __int8)sub_38B1E0(a2);
  if ( v2 == 4 )
    return (unsigned __int8)sub_38B070(a2, a2 + 64);
  return 0;
}
