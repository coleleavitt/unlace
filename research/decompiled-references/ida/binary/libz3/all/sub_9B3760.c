char __fastcall sub_9B3760(__int64 a1, __int64 a2)
{
  unsigned int **v2; // r12
  __int64 v3; // rax
  unsigned int v5; // r13d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  char result; // al
  bool v14; // al
  __int64 v15; // rdx
  unsigned int **v16; // [rsp+0h] [rbp-48h]

  v2 = (unsigned int **)(a2 + 32);
  v3 = 8LL * *(unsigned int *)(a2 + 24);
  v16 = (unsigned int **)(a2 + 32 + v3);
  if ( v3 )
  {
    v5 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
      if ( !v11 )
        return 0;
      v12 = **v2;
      if ( (unsigned int)v12 >= *(_DWORD *)(v11 - 4) )
        return 0;
      v6 = *(_QWORD *)(v11 + 8 * v12);
      if ( !v6 )
        return 0;
      v7 = (unsigned int)sub_B39350(v6, *(unsigned int *)(a1 + 8));
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v7);
      if ( !v8 )
        goto LABEL_9;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v7);
      if ( !v9 )
        goto LABEL_9;
      v10 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v8 + 20) & 1) != 0 || (*(_BYTE *)(v9 + 20) & 1) != 0 )
      {
        v10 = qword_1C7F2C0;
        if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v8 + 16, v9 + 16) )
          goto LABEL_9;
      }
      else if ( *(_DWORD *)(v8 + 16) != *(_DWORD *)(v9 + 16) )
      {
        goto LABEL_9;
      }
      if ( (*(_BYTE *)(v8 + 36) & 1) != 0 || (*(_BYTE *)(v9 + 36) & 1) != 0 )
        v14 = (unsigned int)sub_182C7B0(v10, v8 + 32, v9 + 32) == 0;
      else
        v14 = *(_DWORD *)(v8 + 32) == *(_DWORD *)(v9 + 32);
      if ( v14 )
      {
        result = sub_3ED680((__int64)qword_1C7F2C0, v8 + 48, v9 + 48);
        if ( result )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v7);
          if ( !*(_DWORD *)(v15 + 16) && !*(_DWORD *)(v15 + 48) )
            return result;
          goto LABEL_10;
        }
      }
LABEL_9:
      ++v5;
LABEL_10:
      if ( v16 == ++v2 )
        return v5 <= 1;
    }
  }
  return 1;
}

