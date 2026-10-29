__int64 __fastcall sub_99DE30(__int64 a1, __int64 a2)
{
  unsigned int **v2; // rbx
  __int64 v3; // rax
  unsigned int **v4; // r13
  __int64 v6; // r12
  unsigned int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r15
  void *v10; // rdi

  v2 = (unsigned int **)(a2 + 32);
  v3 = 8LL * *(unsigned int *)(a2 + 24);
  v4 = (unsigned int **)(a2 + 32 + v3);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v6 = (__int64)*v2;
    v7 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **v2), *(unsigned int *)(a1 + 8));
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * v7);
    if ( !v8 )
      break;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * v7);
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
    if ( v4 == ++v2 )
      return 0;
  }
  return v6;
}

