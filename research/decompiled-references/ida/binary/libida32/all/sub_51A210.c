__int64 __fastcall sub_51A210(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // esi
  int v7; // esi

  v2 = *a2;
  v3 = *a1;
  v4 = *(_DWORD *)(*a2 + 44);
  if ( *((_DWORD *)a1 + 2) == 39 )
  {
    v7 = v4 | 0x800;
    BYTE1(v4) &= ~8u;
    if ( v3 )
      v4 = v7;
    *(_DWORD *)(v2 + 44) = v4;
    return 0;
  }
  else
  {
    v5 = v4 | 0x1000;
    BYTE1(v4) &= ~0x10u;
    if ( v3 )
      v4 = v5;
    *(_DWORD *)(v2 + 44) = v4;
    return 0;
  }
}

