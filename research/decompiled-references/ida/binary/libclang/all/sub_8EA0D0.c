__int64 __fastcall sub_8EA0D0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // r12
  char v4; // r13

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = *(_BYTE *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  if ( v4 )
    *(_DWORD *)(a1 + 816) = *a2;
  return 1;
}

