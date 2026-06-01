__int64 __fastcall sub_34A090(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  void *v6; // r13
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r13
  int v11; // eax
  void *v12; // rdi
  __int64 v13; // rdx
  char v15; // al
  char v16; // al
  int v17; // eax
  void *v18; // [rsp+8h] [rbp-40h]
  void *v19; // [rsp+8h] [rbp-40h]
  void *v20; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  v6 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(v5 + 644) & 1) != 0 )
  {
    v7 = a1 + 16;
    sub_182C690(v6, a1, v5 + 640);
    if ( (*(_BYTE *)(v5 + 660) & 1) == 0 )
      goto LABEL_3;
LABEL_26:
    sub_182C690(v6, v7, v5 + 656);
    goto LABEL_4;
  }
  v7 = a1 + 16;
  *(_DWORD *)a1 = *(_DWORD *)(v5 + 640);
  if ( (*(_BYTE *)(v5 + 660) & 1) != 0 )
    goto LABEL_26;
LABEL_3:
  v8 = *(_DWORD *)(v5 + 656);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = v8;
LABEL_4:
  v9 = **(_QWORD **)(v5 + 32);
  if ( v9 )
  {
    v10 = v9 + 56LL * *(unsigned int *)(v9 - 4);
    if ( v9 != v10 )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)sub_1374270(a3, *(_QWORD *)v9) )
          goto LABEL_7;
        v11 = *(_DWORD *)(v9 + 16);
        v12 = qword_1C7F2C0;
        if ( !v11 )
        {
          v15 = *(_BYTE *)(a1 + 4);
          if ( (v15 & 1) != 0 )
          {
            v19 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, a1, a1);
            v12 = v19;
          }
          else
          {
            *(_BYTE *)(a1 + 4) = v15 & 0xFE;
          }
          v16 = *(_BYTE *)(a1 + 20);
          if ( (v16 & 1) != 0 )
            sub_182C690(v12, v7, v7);
          else
            *(_BYTE *)(a1 + 20) = v16 & 0xFE;
          goto LABEL_7;
        }
        v13 = v9 + 16;
        if ( *(_DWORD *)a1 )
        {
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0
            && *(_DWORD *)(a1 + 16) == 1
            && (*(_BYTE *)(v9 + 36) & 1) == 0
            && *(_DWORD *)(v9 + 32) == 1 )
          {
            v18 = qword_1C7F2C0;
            sub_1831A80(qword_1C7F2C0, a1, v13, a1);
            sub_182CBA0(v18, v7);
            *(_BYTE *)(a1 + 20) &= ~1u;
            *(_DWORD *)(a1 + 16) = 1;
            goto LABEL_7;
          }
          sub_1851D20(qword_1C7F2C0, a1, v13, a1);
          v9 += 56;
          if ( v10 == v9 )
            return a1;
        }
        else
        {
          if ( (*(_BYTE *)(v9 + 20) & 1) != 0 )
          {
            v20 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, a1, v13);
            v12 = v20;
            if ( (*(_BYTE *)(v9 + 36) & 1) != 0 )
            {
LABEL_30:
              sub_182C690(v12, v7, v9 + 32);
              goto LABEL_7;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 4) &= ~1u;
            *(_DWORD *)a1 = v11;
            if ( (*(_BYTE *)(v9 + 36) & 1) != 0 )
              goto LABEL_30;
          }
          v17 = *(_DWORD *)(v9 + 32);
          *(_BYTE *)(a1 + 20) &= ~1u;
          *(_DWORD *)(a1 + 16) = v17;
LABEL_7:
          v9 += 56;
          if ( v10 == v9 )
            return a1;
        }
      }
    }
  }
  return a1;
}

