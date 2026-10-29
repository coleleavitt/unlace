__int64 __fastcall sub_1E4C470(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  _WORD *v5; // rsi
  _WORD *v6; // r13

  if ( (*(_DWORD *)a2 & 0x4000) != 0 && (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) != 0 )
  {
    v3 = 8LL * ((*(_DWORD *)(a2 + 16) & 0x7FFFFFFFu) - 1) + 8;
    v4 = 0;
    while ( 1 )
    {
      while ( *(char *)(a2 + 19) < 0 && *(_DWORD *)(v4 + a2 + 16LL * (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) + 40) )
      {
        v4 += 8;
        if ( v4 == v3 )
          return 1;
      }
      v5 = *(_WORD **)(a2 + 2 * v4 + 40);
      v6 = *(_WORD **)(a2 + 2 * v4 + 48);
      if ( v5 && ((*v5 + 509) & 0x1FFu) <= 0x7E && (*(_DWORD *)v5 & 0x4000) != 0 || *(_BYTE *)(a1 + 24) )
      {
        sub_BC97E0((__int64 *)a1, (__int64)v5);
        if ( !v6 || ((*v6 + 509) & 0x1FFu) > 0x7E )
          goto LABEL_17;
      }
      else if ( !v6 || ((*v6 + 509) & 0x1FFu) > 0x7E )
      {
        goto LABEL_9;
      }
      if ( (*(_DWORD *)v6 & 0x4000) != 0 )
      {
LABEL_18:
        sub_BC97E0((__int64 *)a1, (__int64)v6);
        goto LABEL_9;
      }
LABEL_17:
      if ( *(_BYTE *)(a1 + 24) )
        goto LABEL_18;
LABEL_9:
      v4 += 8;
      if ( v4 == v3 )
        return 1;
    }
  }
  return 1;
}
