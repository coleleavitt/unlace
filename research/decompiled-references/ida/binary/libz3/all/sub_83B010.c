__int64 __fastcall sub_83B010(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // r14
  __int64 v5; // rbp
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rsi
  void *v11; // r12
  __int64 v12; // rbx
  __int64 result; // rax

  v1 = **(_QWORD **)(a1 + 24);
  v2 = 0x27FFFFFFD8LL;
  if ( v1 )
    v2 = 40LL * (unsigned int)(*(_DWORD *)(v1 - 4) - 1);
  v3 = v2 + v1;
  v4 = qword_1C7F2C0;
  v5 = **(_QWORD **)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16);
  *(_DWORD *)v5 = *(_DWORD *)v3;
  if ( (*(_BYTE *)(v3 + 12) & 1) != 0 )
  {
    sub_182C690(v4, v5 + 8, v3 + 8);
    if ( (*(_BYTE *)(v3 + 28) & 1) == 0 )
      goto LABEL_5;
  }
  else
  {
    v6 = *(_DWORD *)(v3 + 8);
    *(_BYTE *)(v5 + 12) &= ~1u;
    *(_DWORD *)(v5 + 8) = v6;
    if ( (*(_BYTE *)(v3 + 28) & 1) == 0 )
    {
LABEL_5:
      v7 = *(_DWORD *)(v3 + 24);
      *(_BYTE *)(v5 + 28) &= ~1u;
      *(_DWORD *)(v5 + 24) = v7;
      goto LABEL_6;
    }
  }
  sub_182C690(v4, v5 + 24, v3 + 24);
LABEL_6:
  v8 = 0x27FFFFFFD8LL;
  v9 = *(__int64 **)(a1 + 24);
  v10 = *v9;
  if ( *v9 )
    v8 = 40LL * (unsigned int)(*(_DWORD *)(v10 - 4) - 1);
  v11 = qword_1C7F2C0;
  v12 = v10 + v8;
  sub_182CBA0(qword_1C7F2C0, v10 + v8 + 8);
  sub_182CBA0(v11, v12 + 24);
  result = *v9;
  --*(_DWORD *)(*v9 - 4);
  return result;
}

