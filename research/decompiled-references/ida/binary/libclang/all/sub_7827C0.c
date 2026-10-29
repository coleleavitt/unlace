__int64 __fastcall sub_7827C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  v2 = *(_BYTE *)(a1 + 29) & 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return (*(_BYTE *)(*(_QWORD *)(a2 + 2160) + 14LL) & 0x20) != 0;
  v4 = sub_79A2B0(a1);
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( v5 < v6 )
  {
    while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 243 )
    {
      v5 += 8LL;
      if ( v6 == v5 )
        return (*(_BYTE *)(*(_QWORD *)(a2 + 2160) + 14LL) & 0x20) != 0;
    }
  }
  else
  {
    if ( v5 == v6 )
      return (*(_BYTE *)(*(_QWORD *)(a2 + 2160) + 14LL) & 0x20) != 0;
    while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 243 )
    {
      v6 += 8LL;
      if ( v5 == v6 )
        return (*(_BYTE *)(*(_QWORD *)(a2 + 2160) + 14LL) & 0x20) != 0;
    }
  }
  if ( v5 == v6 )
    return (*(_BYTE *)(*(_QWORD *)(a2 + 2160) + 14LL) & 0x20) != 0;
  return v2;
}

