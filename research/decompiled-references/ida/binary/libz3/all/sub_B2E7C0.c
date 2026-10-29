__int64 __fastcall sub_B2E7C0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  void *v4; // r12
  bool v5; // al
  bool v6; // al
  void *v7; // r14
  bool v8; // al

  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    if ( (*(_BYTE *)(a2 + 20) & 1) != 0
      || *(_DWORD *)(a2 + 16) != 1
      || (*(_BYTE *)(a1 + 36) & 1) != 0
      || *(_DWORD *)(a1 + 32) != 1 )
    {
      LOBYTE(v3) = sub_1848D40(qword_1C7F2C0, a2, a1 + 16);
    }
    else if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 20) & 1) != 0 )
    {
      v3 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a2, a1 + 16) >> 31;
    }
    else
    {
      LOBYTE(v3) = *(_DWORD *)a2 < *(_DWORD *)(a1 + 16);
    }
    if ( (_BYTE)v3 )
      return 0;
    v4 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 20) & 1) != 0 )
      v5 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a2, a1 + 16) == 0;
    else
      v5 = *(_DWORD *)a2 == *(_DWORD *)(a1 + 16);
    if ( v5 )
    {
      v6 = (*(_BYTE *)(a2 + 20) & 1) != 0 || (*(_BYTE *)(a1 + 36) & 1) != 0
         ? (unsigned int)sub_182C7B0(v4, a2 + 16, a1 + 32) == 0
         : *(_DWORD *)(a2 + 16) == *(_DWORD *)(a1 + 32);
      if ( v6 && *(_BYTE *)(a1 + 88) )
        return 0;
    }
  }
  if ( *(_DWORD *)(a1 + 48) != 1 )
    return 1;
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0
    || *(_DWORD *)(a1 + 72) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, a1 + 56, a2) )
      return 0;
  }
  else
  {
    v7 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 60) & 1) == 0 && (*(_BYTE *)(a2 + 4) & 1) == 0 )
    {
      if ( *(_DWORD *)(a1 + 56) >= *(_DWORD *)a2 )
        goto LABEL_41;
      return 0;
    }
    if ( (int)sub_182C7B0(qword_1C7F2C0, a1 + 56, a2) < 0 )
      return 0;
  }
  v7 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 60) & 1) != 0 )
  {
    v8 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a2, a1 + 56) == 0;
    goto LABEL_29;
  }
LABEL_41:
  v8 = *(_DWORD *)a2 == *(_DWORD *)(a1 + 56);
LABEL_29:
  if ( !v8 )
    return 1;
  if ( !((*(_BYTE *)(a2 + 20) & 1) != 0 || (*(_BYTE *)(a1 + 76) & 1) != 0
       ? (unsigned int)sub_182C7B0(v7, a2 + 16, a1 + 72) == 0
       : *(_DWORD *)(a2 + 16) == *(_DWORD *)(a1 + 72)) )
    return 1;
  return *(unsigned __int8 *)(a1 + 89) ^ 1u;
}

