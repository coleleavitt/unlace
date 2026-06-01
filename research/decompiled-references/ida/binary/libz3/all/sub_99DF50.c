void __fastcall sub_99DF50(_QWORD *a1, unsigned int **a2, __int64 a3)
{
  unsigned int *v3; // rbp
  unsigned int *v6; // r15
  void *v7; // rdi
  unsigned __int8 v8; // al
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int8 v16; // al
  int v17; // eax
  unsigned __int8 v18; // al
  unsigned __int8 v19; // al
  void *v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+18h] [rbp-40h]

  v3 = *a2;
  if ( *a2 )
  {
    v6 = &v3[*(v3 - 1)];
    while ( v6 != v3 )
    {
      while ( 1 )
      {
        v9 = *v3;
        v10 = a1[78];
        v11 = (__int64 *)(v10 + 8 * v9);
        v12 = **(_QWORD **)(a1[4] + 8 * v9);
        v13 = a1[77];
        v14 = *(_QWORD *)(v13 + 8 * v9);
        if ( !v14 )
        {
LABEL_21:
          if ( *(_QWORD *)(v10 + 8 * v9) )
            goto LABEL_14;
          v19 = sub_98AD60(v12);
          sub_1590480(a3, v12, (unsigned int)v19 + 6);
          goto LABEL_11;
        }
        v15 = *v11;
        if ( *v11 )
          break;
LABEL_14:
        ++v3;
        v16 = sub_98AD60(v12);
        sub_1590480(a3, v12, (unsigned int)v16 + 4);
        if ( v6 == v3 )
          return;
      }
      v7 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v14 + 20) & 1) != 0 || (*(_BYTE *)(v15 + 20) & 1) != 0 )
      {
        v22 = *v11;
        v21 = *(_QWORD *)(v13 + 8 * v9);
        v20 = qword_1C7F2C0;
        v17 = sub_182C7B0(qword_1C7F2C0, v14 + 16, v15 + 16);
        v7 = v20;
        v14 = v21;
        v15 = v22;
        if ( v17 )
          goto LABEL_17;
      }
      else if ( *(_DWORD *)(v14 + 16) != *(_DWORD *)(v15 + 16) )
      {
        goto LABEL_18;
      }
      if ( (*(_BYTE *)(v14 + 36) & 1) == 0 && (*(_BYTE *)(v15 + 36) & 1) == 0 )
      {
        if ( *(_DWORD *)(v14 + 32) == *(_DWORD *)(v15 + 32) )
          goto LABEL_10;
LABEL_17:
        v13 = a1[77];
        v10 = a1[78];
        goto LABEL_18;
      }
      if ( !(unsigned int)sub_182C7B0(v7, v14 + 32, v15 + 32) )
      {
LABEL_10:
        v8 = sub_98AD60(v12);
        sub_1590480(a3, v12, v8);
        goto LABEL_11;
      }
      v13 = a1[77];
      v10 = a1[78];
LABEL_18:
      if ( !*(_QWORD *)(v13 + 8 * v9) )
        goto LABEL_21;
      if ( !*(_QWORD *)(v10 + 8 * v9) )
        goto LABEL_14;
      v18 = sub_98AD60(v12);
      sub_1590480(a3, v12, (unsigned int)v18 + 2);
LABEL_11:
      ++v3;
    }
  }
}

