__int64 __fastcall sub_12B9120(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = sub_21B7850(a2, 3178, 3022, 0);
  if ( *(_DWORD *)(a1 + 44) == 36 )
  {
    v4 = sub_22B76B0(a1);
    if ( v5 == 7 && *(_DWORD *)v4 == 1701996660 && *(_WORD *)(v4 + 4) == 25697 && *(_BYTE *)(v4 + 6) == 115 )
      return 1;
  }
  return v2;
}
