__int64 __fastcall sub_9B3300(__int64 a1, __int64 a2)
{
  unsigned int **v2; // rbx
  __int64 v3; // rax
  unsigned int **v4; // r13
  __int64 v6; // r12
  unsigned int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // r15
  void *v10; // rdi
  void *v13; // rdi
  bool v14; // al
  bool v15; // al

  v2 = (unsigned int **)(a2 + 32);
  v3 = 8LL * *(unsigned int *)(a2 + 24);
  v4 = (unsigned int **)(a2 + 32 + v3);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v6 = (__int64)*v2;
    v7 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **v2), *(unsigned int *)(a1 + 8));
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * v7);
    if ( !v8 )
      break;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * v7);
    if ( !v9 )
      break;
    v10 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v8 + 20) & 1) != 0 || (*(_BYTE *)(v9 + 20) & 1) != 0 )
    {
      v10 = qword_1C7F2C0;
      if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v8 + 16, v9 + 16) )
        return v6;
    }
    else if ( *(_DWORD *)(v8 + 16) != *(_DWORD *)(v9 + 16) )
    {
      return v6;
    }
    if ( !((*(_BYTE *)(v8 + 36) & 1) != 0 || (*(_BYTE *)(v9 + 36) & 1) != 0
         ? (unsigned int)sub_182C7B0(v10, v8 + 32, v9 + 32) == 0
         : *(_DWORD *)(v8 + 32) == *(_DWORD *)(v9 + 32)) )
      break;
    v13 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v8 + 52) & 1) != 0 || (*(_BYTE *)(v9 + 52) & 1) != 0 )
    {
      v13 = qword_1C7F2C0;
      v14 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v8 + 48, v9 + 48) == 0;
    }
    else
    {
      v14 = *(_DWORD *)(v8 + 48) == *(_DWORD *)(v9 + 48);
    }
    if ( !v14 )
      break;
    v15 = (*(_BYTE *)(v8 + 68) & 1) != 0 || (*(_BYTE *)(v9 + 68) & 1) != 0
        ? (unsigned int)sub_182C7B0(v13, v8 + 64, v9 + 64) == 0
        : *(_DWORD *)(v8 + 64) == *(_DWORD *)(v9 + 64);
    if ( !v15 || !sub_3ED680((__int64)qword_1C7F2C0, v8 + 80, v9 + 80) )
      break;
    if ( v4 == ++v2 )
      return 0;
  }
  return v6;
}

