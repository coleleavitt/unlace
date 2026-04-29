__int64 __fastcall sub_9F980(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rax
  int v7; // edx

  if ( !a2 )
    return 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a1 + 48) == a2 )
    *(_QWORD *)(a1 + 48) = v2;
  else
    *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) = v2;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a1 + 56) == a2 )
  {
    *(_QWORD *)(a1 + 56) = v3;
    v7 = *(_DWORD *)(a1 + 24);
    if ( v3 && (*(_BYTE *)(v3 + 4) & 0x40) != 0 )
      *(_DWORD *)(a1 + 24) = v7 | 8;
    else
      *(_DWORD *)(a1 + 24) = v7 & 0xFFFFFFF7;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = v3;
  }
  if ( *(_DWORD *)a2 != 55 )
    *(_DWORD *)(a1 + 24) |= 0x40u;
  v4 = *(_QWORD *)(a2 + 8);
  *(_OWORD *)(a2 + 8) = 0;
  v5 = *(_DWORD **)(a1 + 48);
  if ( v5 && *v5 != 55 )
    return v4;
  **(_DWORD **)(a1 + 64) |= 0x400u;
  return v4;
}
