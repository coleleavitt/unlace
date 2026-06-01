__int64 __fastcall sub_C53020(__int64 *a1, __int64 a2, _WORD *a3, __int64 a4)
{
  int v4; // eax
  unsigned int v6; // eax

  v4 = *(_DWORD *)(a2 + 48);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 48) = v4 - 1;
    return sub_C509B0(a1, a2, a3, a4);
  }
  else
  {
    v6 = sub_EEB7E0(a3);
    sub_E33C80(a2, v6, 2484, 0);
    return 0;
  }
}
