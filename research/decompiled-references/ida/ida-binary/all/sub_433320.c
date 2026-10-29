__int64 __fastcall checkout_for_move_or_copy_action_t__::vfunc_1(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  unsigned int v4; // ecx
  int v5; // eax

  v2 = *a2;
  v3 = *a2 + 48 * a2[1];
  if ( v2 == v3 )
    return 0;
  while ( (*(_DWORD *)(v2 + 24) & 0x20) == 0 )
  {
    v4 = *(unsigned __int8 *)(a1 + 8);
    v5 = *(_DWORD *)(v2 + 24) & 2;
    if ( (_BYTE)v4 )
    {
      if ( !v5 || *(_DWORD *)(v2 + 28) != -1 || *(_DWORD *)(v2 + 32) != *(_DWORD *)(v2 + 36) )
        goto LABEL_5;
      if ( *(_BYTE *)(v2 + 40) != 2 )
        return v4;
      v2 += 48;
      if ( v3 == v2 )
        return 0;
    }
    else
    {
      if ( v5 && *(_BYTE *)(v2 + 40) != 2 )
        return 1;
LABEL_5:
      v2 += 48;
      if ( v3 == v2 )
        return 0;
    }
  }
  return 1;
}
