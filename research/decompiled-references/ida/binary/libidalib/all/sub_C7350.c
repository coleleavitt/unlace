__int64 __fastcall sub_C7350(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 44);
  if ( v1 < 0 || v1 >= *(_DWORD *)(dbg + 64LL) )
    return 0xFFFFFFFFLL;
  if ( *(_BYTE *)(a1 + 32) == 0xFF )
    return 4 * (unsigned int)sub_C4950(v1);
  return (unsigned int)*(char *)(a1 + 33);
}

