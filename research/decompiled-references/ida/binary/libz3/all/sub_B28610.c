__int64 __fastcall sub_B28610(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  void *v4; // r12

  if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
    return 0;
  v2 = 1;
  if ( *(_DWORD *)a1 != 1 )
    return v2;
  v4 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 12) & 1) == 0 && (*(_BYTE *)(a2 + 12) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8) )
      goto LABEL_8;
    return 0;
  }
  if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a1 + 8, a2 + 8) )
    return 0;
LABEL_8:
  if ( (*(_BYTE *)(a1 + 28) & 1) != 0 || (*(_BYTE *)(a2 + 28) & 1) != 0 )
    LOBYTE(v2) = (unsigned int)sub_182C7B0(v4, a1 + 24, a2 + 24) == 0;
  else
    LOBYTE(v2) = *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24);
  return v2;
}

