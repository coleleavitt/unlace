__int64 __fastcall sub_9B1940(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdi
  __int64 v6; // rax
  unsigned int **v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r13
  void *v11; // rdi
  bool v12; // al
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int **v16; // [rsp+8h] [rbp-50h]
  void *v17; // [rsp+10h] [rbp-48h]

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
  v16 = (unsigned int **)(a3 + 32 + v6);
  if ( v6 )
  {
    v7 = (unsigned int **)(a3 + 32);
    while ( 1 )
    {
      v8 = (unsigned int)sub_B39350(
                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8656LL) + 8LL * **v7),
                           *(unsigned int *)(a2 + 8));
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 744) + 8 * v8);
      if ( !v9 )
        goto LABEL_4;
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 752) + 8 * v8);
      if ( !v10 )
        goto LABEL_4;
      v11 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v9 + 20) & 1) != 0 || (*(_BYTE *)(v10 + 20) & 1) != 0 )
      {
        v11 = qword_1C7F2C0;
        if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v9 + 16, v10 + 16) )
          goto LABEL_10;
LABEL_4:
        if ( v16 == ++v7 )
          return a1;
      }
      else
      {
        if ( *(_DWORD *)(v9 + 16) != *(_DWORD *)(v10 + 16) )
          goto LABEL_4;
LABEL_10:
        if ( (*(_BYTE *)(v9 + 36) & 1) != 0 || (*(_BYTE *)(v10 + 36) & 1) != 0 )
          v12 = (unsigned int)sub_182C7B0(v11, v9 + 32, v10 + 32) == 0;
        else
          v12 = *(_DWORD *)(v9 + 32) == *(_DWORD *)(v10 + 32);
        if ( !v12 || !sub_9B0850(v9 + 48, v10 + 48) )
          goto LABEL_4;
        v13 = *(_QWORD *)(*(_QWORD *)(a2 + 744) + 8 * v8);
        v14 = v13 + 48;
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0
          && *(_DWORD *)(a1 + 16) == 1
          && (*(_BYTE *)(v13 + 68) & 1) == 0
          && *(_DWORD *)(v13 + 64) == 1 )
        {
          v17 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, a1, v14);
          sub_182CBA0(v17, a1 + 16);
          *(_BYTE *)(a1 + 20) &= ~1u;
          *(_DWORD *)(a1 + 16) = 1;
          goto LABEL_4;
        }
        sub_1848FF0(qword_1C7F2C0, a1, v14);
        if ( v16 == ++v7 )
          return a1;
      }
    }
  }
  return a1;
}

