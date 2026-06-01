__int64 __fastcall sub_99DC10(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdi
  __int64 v6; // rax
  unsigned int **v7; // r14
  unsigned int **v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r9
  void *v12; // rdi
  int v13; // eax
  bool v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  void *v18; // [rsp+8h] [rbp-50h]
  void *v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]

  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  v5 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_DWORD *)a1 = 1;
  sub_182CBA0(v5, a1 + 16);
  *(_BYTE *)(a1 + 20) &= ~1u;
  v6 = *(unsigned int *)(a3 + 24);
  *(_DWORD *)(a1 + 16) = 1;
  v6 *= 8;
  v7 = (unsigned int **)(a3 + 32 + v6);
  if ( v6 )
  {
    v8 = (unsigned int **)(a3 + 32);
    while ( 1 )
    {
      v9 = (unsigned int)sub_B39350(
                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8656LL) + 8LL * **v8),
                           *(unsigned int *)(a2 + 8));
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 616) + 8 * v9);
      if ( !v10 )
        goto LABEL_4;
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 624) + 8 * v9);
      if ( !v11 )
        goto LABEL_4;
      v12 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v10 + 20) & 1) != 0 || (*(_BYTE *)(v11 + 20) & 1) != 0 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(a2 + 624) + 8 * v9);
        v18 = qword_1C7F2C0;
        v13 = sub_182C7B0(qword_1C7F2C0, v10 + 16, v11 + 16);
        v12 = v18;
        v11 = v20;
        if ( !v13 )
          goto LABEL_10;
LABEL_4:
        if ( v7 == ++v8 )
          return a1;
      }
      else
      {
        if ( *(_DWORD *)(v10 + 16) != *(_DWORD *)(v11 + 16) )
          goto LABEL_4;
LABEL_10:
        if ( (*(_BYTE *)(v10 + 36) & 1) != 0 || (*(_BYTE *)(v11 + 36) & 1) != 0 )
          v14 = (unsigned int)sub_182C7B0(v12, v10 + 32, v11 + 32) == 0;
        else
          v14 = *(_DWORD *)(v10 + 32) == *(_DWORD *)(v11 + 32);
        if ( !v14 )
          goto LABEL_4;
        v15 = *(_QWORD *)(*(_QWORD *)(a2 + 616) + 8 * v9);
        v16 = v15 + 16;
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0
          && *(_DWORD *)(a1 + 16) == 1
          && (*(_BYTE *)(v15 + 36) & 1) == 0
          && *(_DWORD *)(v15 + 32) == 1 )
        {
          v19 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, a1, v16);
          sub_182CBA0(v19, a1 + 16);
          *(_BYTE *)(a1 + 20) &= ~1u;
          *(_DWORD *)(a1 + 16) = 1;
          goto LABEL_4;
        }
        sub_1848FF0(qword_1C7F2C0, a1, v16);
        if ( v7 == ++v8 )
          return a1;
      }
    }
  }
  return a1;
}

