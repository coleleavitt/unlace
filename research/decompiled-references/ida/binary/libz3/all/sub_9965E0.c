__int64 __fastcall sub_9965E0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdi
  __int64 v6; // rax
  unsigned int **v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r14
  void *v11; // rdi
  bool v12; // al
  void *v13; // rdi
  bool v14; // al
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int **v19; // [rsp+8h] [rbp-50h]
  void *v20; // [rsp+10h] [rbp-48h]

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
  v19 = (unsigned int **)(a3 + 32 + v6);
  if ( v6 )
  {
    v7 = (unsigned int **)(a3 + 32);
    while ( 1 )
    {
      v8 = (unsigned int)sub_B39350(
                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8656LL) + 8LL * **v7),
                           *(unsigned int *)(a2 + 8));
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 680) + 8 * v8);
      if ( !v9 )
        goto LABEL_4;
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 688) + 8 * v8);
      if ( !v10 )
        goto LABEL_4;
      v11 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v9 + 20) & 1) != 0 || (*(_BYTE *)(v10 + 20) & 1) != 0 )
      {
        v11 = qword_1C7F2C0;
        if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v9 + 16, v10 + 16) )
          goto LABEL_10;
LABEL_4:
        if ( v19 == ++v7 )
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
        if ( !v12 )
          goto LABEL_4;
        v13 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v9 + 52) & 1) != 0 || (*(_BYTE *)(v10 + 52) & 1) != 0 )
        {
          v13 = qword_1C7F2C0;
          v14 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v9 + 48, v10 + 48) == 0;
        }
        else
        {
          v14 = *(_DWORD *)(v9 + 48) == *(_DWORD *)(v10 + 48);
        }
        if ( !v14 )
          goto LABEL_4;
        if ( !((*(_BYTE *)(v9 + 68) & 1) != 0 || (*(_BYTE *)(v10 + 68) & 1) != 0
             ? (unsigned int)sub_182C7B0(v13, v9 + 64, v10 + 64) == 0
             : *(_DWORD *)(v9 + 64) == *(_DWORD *)(v10 + 64)) )
          goto LABEL_4;
        v16 = *(_QWORD *)(*(_QWORD *)(a2 + 680) + 8 * v8);
        v17 = v16 + 16;
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0
          && *(_DWORD *)(a1 + 16) == 1
          && (*(_BYTE *)(v16 + 36) & 1) == 0
          && *(_DWORD *)(v16 + 32) == 1 )
        {
          v20 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, a1, v17);
          sub_182CBA0(v20, a1 + 16);
          *(_BYTE *)(a1 + 20) &= ~1u;
          *(_DWORD *)(a1 + 16) = 1;
          goto LABEL_4;
        }
        sub_1848FF0(qword_1C7F2C0, a1, v17);
        if ( v19 == ++v7 )
          return a1;
      }
    }
  }
  return a1;
}

