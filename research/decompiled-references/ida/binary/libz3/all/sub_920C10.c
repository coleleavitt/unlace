bool __fastcall sub_920C10(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbp
  void *v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rbp
  void *v8; // r12
  bool v9; // al

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 400LL);
  v4 = qword_1C7F2C0;
  v5 = v3 + ((unsigned __int64)a3 << 6);
  v6 = ((unsigned __int64)a2 << 6) + v3;
  if ( (*(_BYTE *)(v6 + 4) & 1) != 0 || (*(_BYTE *)(v5 + 4) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v6, v5) )
      return 0;
  }
  else if ( *(_DWORD *)v6 != *(_DWORD *)v5 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(v6 + 20) & 1) != 0 || (*(_BYTE *)(v5 + 20) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(v4, v6 + 16, v5 + 16) )
      return 0;
  }
  else if ( *(_DWORD *)(v6 + 16) != *(_DWORD *)(v5 + 16) )
  {
    return 0;
  }
  v8 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v6 + 36) & 1) != 0 || (*(_BYTE *)(v5 + 36) & 1) != 0 )
    v9 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v6 + 32, v5 + 32) == 0;
  else
    v9 = *(_DWORD *)(v6 + 32) == *(_DWORD *)(v5 + 32);
  if ( !v9 )
    return 0;
  if ( (*(_BYTE *)(v6 + 52) & 1) != 0 || (*(_BYTE *)(v5 + 52) & 1) != 0 )
    return (unsigned int)sub_182C7B0(v8, v6 + 48, v5 + 48) == 0;
  else
    return *(_DWORD *)(v6 + 48) == *(_DWORD *)(v5 + 48);
}

