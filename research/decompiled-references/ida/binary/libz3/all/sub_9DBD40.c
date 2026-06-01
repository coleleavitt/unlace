void __fastcall sub_9DBD40(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int64 i; // rbx
  __int64 v5; // r12
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r15
  void *v10; // rdi
  int v11; // eax
  bool v12; // al
  __int64 v13; // [rsp+0h] [rbp-68h]
  void *v14; // [rsp+0h] [rbp-68h]
  __int64 v15; // [rsp+8h] [rbp-60h]
  char v16[88]; // [rsp+10h] [rbp-58h] BYREF

  v1 = a1[4];
  if ( v1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (int)v2 > 0 )
    {
      for ( i = 0; v2 != i; ++i )
      {
        while ( 1 )
        {
          v6 = *(_BYTE *)(a1[74] + 4 * i + 3);
          if ( (v6 & 0x30) != 0 )
            goto LABEL_6;
          v7 = a1[75] + 32 * i;
          v8 = *(_QWORD *)(a1[77] + 8 * i);
          v9 = *(_QWORD *)(a1[78] + 8 * i);
          if ( !v8 )
            break;
          if ( !v9 )
          {
            v10 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v7 + 4) & 1) != 0 || (*(_BYTE *)(v8 + 20) & 1) != 0 )
            {
              v15 = a1[75] + 32 * i;
              v14 = qword_1C7F2C0;
              v11 = sub_182C7B0(qword_1C7F2C0, v7, v8 + 16);
              v10 = v14;
              v7 = v15;
              if ( v11 )
              {
LABEL_17:
                sub_9DAE90(a1, i, v8 + 16);
                goto LABEL_6;
              }
            }
            else if ( *(_DWORD *)v7 != *(_DWORD *)(v8 + 16) )
            {
              goto LABEL_17;
            }
            if ( (*(_BYTE *)(v7 + 20) & 1) != 0 || (*(_BYTE *)(v8 + 36) & 1) != 0 )
              v12 = (unsigned int)sub_182C7B0(v10, v7 + 16, v8 + 32) == 0;
            else
              v12 = *(_DWORD *)(v7 + 16) == *(_DWORD *)(v8 + 32);
            if ( v12 )
              goto LABEL_6;
            goto LABEL_17;
          }
          v5 = v8 + 16;
          v13 = a1[75] + 32 * i;
          if ( !sub_3ED680((__int64)qword_1C7F2C0, v7, v5) && !sub_3ED680((__int64)qword_1C7F2C0, v13, v9 + 16) )
          {
            sub_9DAE90(a1, i, v5);
            goto LABEL_12;
          }
LABEL_6:
          if ( v2 == ++i )
            return;
        }
        if ( !v9 )
        {
          if ( (v6 & 0x40) != 0 && ((*(_BYTE *)(v7 + 20) & 1) != 0 || *(_DWORD *)(v7 + 16) != 1) )
          {
            sub_992C20((__int64)v16, v7);
            sub_9DAE90(a1, i, (__int64)v16);
            sub_25A130(v16);
          }
          goto LABEL_6;
        }
        if ( sub_3ED680((__int64)qword_1C7F2C0, v7, v9 + 16) )
          goto LABEL_6;
        sub_9DAE90(a1, i, v9 + 16);
LABEL_12:
        ;
      }
    }
  }
}

