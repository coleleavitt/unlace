__int64 __fastcall sub_89B840(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  void *v5; // r12
  bool v6; // al

  LOBYTE(v2) = sub_3ED700((__int64)qword_1C7F2C0, a1, a2);
  v3 = v2;
  if ( (_BYTE)v2 )
    return v3;
  v5 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(a2 + 4) & 1) != 0 )
    v6 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a1, a2) == 0;
  else
    v6 = *(_DWORD *)a1 == *(_DWORD *)a2;
  if ( !v6 )
    return v3;
  if ( !((*(_BYTE *)(a1 + 20) & 1) != 0 || (*(_BYTE *)(a2 + 20) & 1) != 0
       ? (unsigned int)sub_182C7B0(v5, a1 + 16, a2 + 16) == 0
       : *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16)) )
    return v3;
  LOBYTE(v3) = *(_DWORD *)(a1 + 32) < *(_DWORD *)(a2 + 32);
  return v3;
}

