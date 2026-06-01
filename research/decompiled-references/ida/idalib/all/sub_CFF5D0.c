__int64 __fastcall sub_CFF5D0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // r12
  char v4; // r13

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  v4 = *(_BYTE *)sub_E21760(v3, 8);
  sub_E21790(v3, 8);
  if ( v4 )
    *(_DWORD *)(a1 + 1256) = *a2;
  return 1;
}
