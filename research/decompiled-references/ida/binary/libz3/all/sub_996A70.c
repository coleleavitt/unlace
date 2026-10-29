void __fastcall sub_996A70(_QWORD *a1, unsigned int **a2, __int64 a3)
{
  unsigned int *v3; // rbp
  void *v5; // rdi
  __int64 v6; // rax
  unsigned __int8 v7; // al
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 *v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rdx
  bool v14; // al
  void *v15; // rdi
  bool v16; // si
  unsigned __int8 v17; // al
  unsigned int *v19; // [rsp+10h] [rbp-48h]

  v3 = *a2;
  if ( *a2 )
  {
    v19 = &v3[*(v3 - 1)];
    if ( v19 != v3 )
    {
      while ( 1 )
      {
        v8 = *v3;
        v9 = **(_QWORD **)(a1[4] + 8 * v8);
        v10 = *(_QWORD *)(a1[85] + 8 * v8);
        v6 = a1[86];
        v11 = (__int64 *)(v6 + 8 * v8);
        if ( !v10 )
          goto LABEL_29;
        v12 = *v11;
        if ( !*v11 )
          goto LABEL_13;
        v5 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v10 + 20) & 1) != 0 || (*(_BYTE *)(v12 + 20) & 1) != 0 )
        {
          v5 = qword_1C7F2C0;
          if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v10 + 16, v12 + 16) )
            goto LABEL_7;
        }
        else if ( *(_DWORD *)(v10 + 16) != *(_DWORD *)(v12 + 16) )
        {
          goto LABEL_7;
        }
        if ( (*(_BYTE *)(v10 + 36) & 1) != 0 || (*(_BYTE *)(v12 + 36) & 1) != 0 )
          v14 = (unsigned int)sub_182C7B0(v5, v10 + 32, v12 + 32) == 0;
        else
          v14 = *(_DWORD *)(v10 + 32) == *(_DWORD *)(v12 + 32);
        if ( v14 )
        {
          v15 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v10 + 52) & 1) != 0 || (*(_BYTE *)(v12 + 52) & 1) != 0 )
          {
            v15 = qword_1C7F2C0;
            if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v10 + 48, v12 + 48) )
            {
LABEL_24:
              if ( (*(_BYTE *)(v10 + 68) & 1) != 0 || (*(_BYTE *)(v12 + 68) & 1) != 0 )
                v16 = (unsigned int)sub_182C7B0(v15, v10 + 64, v12 + 64) == 0;
              else
                v16 = *(_DWORD *)(v10 + 64) == *(_DWORD *)(v12 + 64);
              v13 = (unsigned __int8)sub_98ADE0(v9);
              if ( v16 )
                goto LABEL_14;
            }
          }
          else if ( *(_DWORD *)(v10 + 48) == *(_DWORD *)(v12 + 48) )
          {
            goto LABEL_24;
          }
        }
LABEL_7:
        v6 = a1[86];
        if ( *(_QWORD *)(a1[85] + 8 * v8) )
        {
          if ( *(_QWORD *)(v6 + 8 * v8) )
          {
            v7 = sub_98ADE0(v9);
            sub_1590480(a3, v9, (unsigned int)v7 + 2);
            goto LABEL_10;
          }
LABEL_13:
          v13 = (unsigned int)(unsigned __int8)sub_98ADE0(v9) + 4;
LABEL_14:
          ++v3;
          sub_1590480(a3, v9, v13);
          if ( v19 == v3 )
            return;
        }
        else
        {
LABEL_29:
          if ( *(_QWORD *)(v6 + 8 * v8) )
            goto LABEL_13;
          v17 = sub_98ADE0(v9);
          sub_1590480(a3, v9, (unsigned int)v17 + 6);
LABEL_10:
          if ( v19 == ++v3 )
            return;
        }
      }
    }
  }
}

