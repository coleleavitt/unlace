__int64 __fastcall sub_99DAA0(__int64 a1, __int64 a2)
{
  unsigned int **v2; // r12
  __int64 v3; // rax
  unsigned int **v4; // r15
  unsigned int v6; // r14d
  __int64 v7; // rdi
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rcx
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  int v16; // eax
  void *v17; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  v2 = (unsigned int **)(a2 + 32);
  v3 = 8LL * *(unsigned int *)(a2 + 24);
  v4 = (unsigned int **)(a2 + 32 + v3);
  if ( !v3 )
    return 1;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
      if ( !v13 )
        return 0;
      v14 = **v2;
      if ( (unsigned int)v14 >= *(_DWORD *)(v13 - 4) )
        return 0;
      v7 = *(_QWORD *)(v13 + 8 * v14);
      if ( !v7 )
        return 0;
      v9 = (unsigned int)sub_B39350(v7, *(unsigned int *)(a1 + 8));
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v9);
      if ( !v10 )
        goto LABEL_9;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v9);
      if ( !v11 )
        goto LABEL_9;
      v12 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v10 + 20) & 1) != 0 || (*(_BYTE *)(v11 + 20) & 1) != 0 )
        break;
      if ( *(_DWORD *)(v10 + 16) == *(_DWORD *)(v11 + 16) )
        goto LABEL_15;
LABEL_9:
      ++v2;
      ++v6;
      if ( v4 == v2 )
        goto LABEL_21;
    }
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v9);
    v17 = qword_1C7F2C0;
    v16 = sub_182C7B0(qword_1C7F2C0, v10 + 16, v11 + 16);
    v12 = v17;
    v11 = v18;
    if ( v16 )
      goto LABEL_9;
LABEL_15:
    if ( (*(_BYTE *)(v10 + 36) & 1) != 0 || (*(_BYTE *)(v11 + 36) & 1) != 0 )
      LOBYTE(v8) = (unsigned int)sub_182C7B0(v12, v10 + 32, v11 + 32) == 0;
    else
      LOBYTE(v8) = *(_DWORD *)(v10 + 32) == *(_DWORD *)(v11 + 32);
    if ( !(_BYTE)v8 )
      goto LABEL_9;
    if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v9) + 16LL) )
      return v8;
    ++v2;
  }
  while ( v4 != v2 );
LABEL_21:
  LOBYTE(v8) = v6 <= 1;
  return v8;
}

