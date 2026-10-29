__int64 __fastcall sub_99CAD0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  int v4; // r13d
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rsi
  void *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rbp
  void *v12; // rdi
  bool v13; // al
  unsigned int v16; // esi
  int v17; // eax
  bool v18; // al
  __int64 v19; // rax
  void *v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+18h] [rbp-40h]

  v2 = *a2;
  if ( *a2 )
  {
    v3 = v2 + 40LL * *(unsigned int *)(v2 - 4);
    if ( v3 != v2 )
    {
      v4 = *((_DWORD *)a2 + 3);
      while ( 1 )
      {
        v6 = *(_DWORD *)(v2 + 32);
        if ( v6 != -1 && v4 != v6 )
          break;
LABEL_25:
        v2 += 40;
        if ( v2 == v3 )
          return 1;
      }
      v7 = *(_QWORD *)(a1[77] + 8LL * v6);
      if ( !v7 )
        goto LABEL_12;
      if ( ((*(_BYTE *)(a1[74] + 4LL * v6 + 3) >> 4) & 3) == 2 )
      {
        v21 = *(_QWORD *)(a1[77] + 8LL * v6);
        v19 = sub_999840((__int64)a1, v6);
        v7 = v21;
        v8 = v19;
      }
      else
      {
        v8 = a1[75] + 32LL * v6;
      }
      v9 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v8 + 4) & 1) != 0 || (*(_BYTE *)(v7 + 20) & 1) != 0 )
      {
        v22 = v7;
        v20 = qword_1C7F2C0;
        v17 = sub_182C7B0(qword_1C7F2C0, v8, v7 + 16);
        v9 = v20;
        v7 = v22;
        if ( v17 )
          goto LABEL_12;
      }
      else if ( *(_DWORD *)v8 != *(_DWORD *)(v7 + 16) )
      {
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(v8 + 20) & 1) != 0 || (*(_BYTE *)(v7 + 36) & 1) != 0 )
        v18 = (unsigned int)sub_182C7B0(v9, v8 + 16, v7 + 32) == 0;
      else
        v18 = *(_DWORD *)(v8 + 16) == *(_DWORD *)(v7 + 32);
      if ( v18 )
      {
LABEL_22:
        v16 = *(_DWORD *)(v2 + 32);
        if ( v16 != -1 && ((*(_BYTE *)(a1[74] + 4LL * v16 + 3) >> 4) & 3) == 2 )
          sub_999840((__int64)a1, v16);
        goto LABEL_25;
      }
LABEL_12:
      v10 = *(_QWORD *)(a1[78] + 8LL * v6);
      if ( !v10 )
        return 0;
      v11 = sub_999800((__int64)a1, v6);
      v12 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v11 + 4) & 1) != 0 || (*(_BYTE *)(v10 + 20) & 1) != 0 )
      {
        v12 = qword_1C7F2C0;
        v13 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v11, v10 + 16) == 0;
      }
      else
      {
        v13 = *(_DWORD *)v11 == *(_DWORD *)(v10 + 16);
      }
      if ( !v13 )
        return 0;
      if ( !((*(_BYTE *)(v11 + 20) & 1) != 0 || (*(_BYTE *)(v10 + 36) & 1) != 0
           ? (unsigned int)sub_182C7B0(v12, v11 + 16, v10 + 32) == 0
           : *(_DWORD *)(v11 + 16) == *(_DWORD *)(v10 + 32)) )
        return 0;
      goto LABEL_22;
    }
  }
  return 1;
}

