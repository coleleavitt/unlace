__int64 __fastcall sub_9BDB80(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  bool v5; // dl
  _BOOL4 v6; // eax
  void *v7; // rdi
  int v9; // eax

  v4 = *(_BYTE *)(a3 + 4);
  v5 = (*(_BYTE *)(a3 + 20) & 1) == 0;
  v6 = (v4 & 1) == 0;
  if ( v6 && *(_DWORD *)a3 == -1 )
  {
    if ( !v5 || *(_DWORD *)(a3 + 16) != 1 )
    {
      if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, a3, a2) )
        goto LABEL_8;
      return 0;
    }
    if ( !*(_DWORD *)(a3 + 32) )
      return 1;
    v7 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 && *(_DWORD *)(a2 + 16) == 1 )
      goto LABEL_18;
LABEL_5:
    if ( !(unsigned __int8)sub_1848D40(v7, a3, a2) )
    {
LABEL_8:
      v7 = qword_1C7F2C0;
      goto LABEL_9;
    }
    return 0;
  }
  v7 = qword_1C7F2C0;
  if ( !v5 || *(_DWORD *)(a3 + 16) != 1 || (*(_BYTE *)(a2 + 20) & 1) != 0 || *(_DWORD *)(a2 + 16) != 1 )
    goto LABEL_5;
  if ( !v6 )
    goto LABEL_7;
LABEL_18:
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
LABEL_7:
    if ( (int)sub_182C7B0(v7, a3, a2) >= 0 )
      goto LABEL_8;
    return 0;
  }
  if ( *(_DWORD *)a3 < *(_DWORD *)a2 )
    return 0;
LABEL_9:
  if ( !sub_3ED680((__int64)v7, a3, a2) )
    return 1;
  LOBYTE(v9) = sub_3ED700((__int64)qword_1C7F2C0, a3 + 32, a2 + 32);
  return v9 ^ 1u;
}

