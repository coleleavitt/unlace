__int64 __fastcall sub_9755C0(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  int v6; // eax

  v4 = sub_9750B0(a1 + 29928, a2, a3, *(_DWORD *)(a1 + 30104));
  v5 = v4;
  if ( v4 > 0xFFFFFFFFFFFFFF88LL )
    return v5;
  if ( !v4 )
  {
    if ( *(_DWORD *)(a1 + 30224) == 1 && *(_QWORD *)(a1 + 30216) && *(_QWORD *)(a1 + 30192) )
      sub_974E30(a1);
    v6 = *(_DWORD *)(a1 + 29956);
    if ( v6 && v6 != *(_DWORD *)(a1 + 30200) )
      return -32;
    if ( *(_DWORD *)(a1 + 29960) && !*(_DWORD *)(a1 + 30108) )
    {
      *(_DWORD *)(a1 + 30112) = 1;
      sub_903680((_QWORD *)(a1 + 30008), 0);
    }
    else
    {
      *(_DWORD *)(a1 + 30112) = 0;
    }
    *(_QWORD *)(a1 + 29976) += a3;
    return v5;
  }
  return -72;
}
