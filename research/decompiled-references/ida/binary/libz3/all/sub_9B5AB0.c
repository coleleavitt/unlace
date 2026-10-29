__int64 __fastcall sub_9B5AB0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rdi
  int v6; // eax

  if ( !*(_DWORD *)a3
    && (*(_BYTE *)(a3 + 36) & 1) == 0
    && *(_DWORD *)(a3 + 32) == -1
    && (*(_BYTE *)(a3 + 52) & 1) == 0
    && *(_DWORD *)(a3 + 48) == 1
    && !*(_DWORD *)(a3 + 64) )
  {
    return 1;
  }
  v4 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, a3, a2) )
    {
LABEL_9:
      v4 = qword_1C7F2C0;
      goto LABEL_10;
    }
    return 0;
  }
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 || (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    if ( (int)sub_182C7B0(qword_1C7F2C0, a3, a2) >= 0 )
      goto LABEL_9;
    return 0;
  }
  if ( *(_DWORD *)a3 < *(_DWORD *)a2 )
    return 0;
LABEL_10:
  if ( !sub_3ED680((__int64)v4, a3, a2) )
    return 1;
  LOBYTE(v6) = sub_927C80(a3 + 32, a2 + 32);
  return v6 ^ 1u;
}

