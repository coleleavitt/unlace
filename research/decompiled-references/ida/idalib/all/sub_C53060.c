__int64 __fastcall sub_C53060(__int64 *a1, __int64 a2, _WORD *a3)
{
  int v3; // eax
  unsigned int v5; // eax

  v3 = *(_DWORD *)(a2 + 48);
  if ( v3 )
  {
    *(_DWORD *)(a2 + 48) = v3 - 1;
    return sub_C509B0(a1, a2, a3, 0);
  }
  else
  {
    v5 = sub_EEB7E0(a3);
    sub_E33C80(a2, v5, 2484, 0);
    return 0;
  }
}
