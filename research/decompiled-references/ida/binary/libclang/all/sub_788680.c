__int64 __fastcall sub_788680(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v3 = sub_798D40(a1);
  v4 = *(_QWORD *)(v3 + 2160);
  if ( (*(_BYTE *)(v4 + 60) & 0x10) == 0 )
    goto LABEL_3;
  if ( (*(_BYTE *)(v4 + 89) & 0x40) != 0 )
    goto LABEL_3;
  if ( (*(_BYTE *)(a1 + 96) & 5) != 1 )
    goto LABEL_3;
  v1 = *(_BYTE *)(a1 + 29) & 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_3;
  v6 = sub_79A2B0(a1);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( v7 < v8 )
  {
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 162 )
    {
      v7 += 8LL;
      if ( v8 == v7 )
        goto LABEL_14;
    }
  }
  else
  {
    if ( v7 == v8 )
    {
LABEL_14:
      v3 = sub_798D40(a1);
LABEL_3:
      LOBYTE(v1) = (unsigned int)sub_7884D0(a1, v3, v2) != 0;
      return v1;
    }
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 162 )
    {
      v8 += 8LL;
      if ( v7 == v8 )
        goto LABEL_14;
    }
  }
  if ( v7 == v8 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 5 )
    goto LABEL_14;
  return v1;
}

