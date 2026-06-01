void __fastcall sub_9B1B90(_QWORD *a1, unsigned int **a2, __int64 a3)
{
  unsigned int *v3; // rbp
  unsigned int *v5; // r15
  void *v6; // rdi
  bool v7; // si
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  __int64 v12; // rbx
  __int64 *v13; // rsi
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r8
  int v17; // eax
  unsigned __int8 v18; // al
  int v19; // eax
  void *v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  __int64 v23; // [rsp+18h] [rbp-40h]

  v3 = *a2;
  if ( *a2 )
  {
    v5 = &v3[*(v3 - 1)];
    if ( v5 != v3 )
    {
      while ( 1 )
      {
        v12 = *v3;
        v10 = a1[94];
        v13 = (__int64 *)(v10 + 8 * v12);
        v14 = **(_QWORD **)(a1[4] + 8 * v12);
        v9 = a1[93];
        v15 = *(_QWORD *)(v9 + 8 * v12);
        if ( !v15 )
          goto LABEL_23;
        v16 = *v13;
        if ( !*v13 )
          goto LABEL_18;
        v6 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v15 + 20) & 1) != 0 || (*(_BYTE *)(v16 + 20) & 1) != 0 )
        {
          v23 = *v13;
          v21 = qword_1C7F2C0;
          v17 = sub_182C7B0(qword_1C7F2C0, v15 + 16, v16 + 16);
          v6 = v21;
          v16 = v23;
          if ( v17 )
            goto LABEL_11;
        }
        else if ( *(_DWORD *)(v15 + 16) != *(_DWORD *)(v16 + 16) )
        {
          goto LABEL_12;
        }
        if ( (*(_BYTE *)(v15 + 36) & 1) != 0 || (*(_BYTE *)(v16 + 36) & 1) != 0 )
        {
          v22 = v16;
          v19 = sub_182C7B0(v6, v15 + 32, v16 + 32);
          v16 = v22;
          if ( v19 )
            goto LABEL_11;
LABEL_10:
          v7 = sub_9B0850(v15 + 48, v16 + 48);
          v8 = (unsigned __int8)sub_98ACD0(v14);
          if ( !v7 )
            goto LABEL_11;
LABEL_19:
          ++v3;
          sub_1590480(a3, v14, v8);
          if ( v5 == v3 )
            return;
        }
        else
        {
          if ( *(_DWORD *)(v15 + 32) == *(_DWORD *)(v16 + 32) )
            goto LABEL_10;
LABEL_11:
          v9 = a1[93];
          v10 = a1[94];
LABEL_12:
          if ( *(_QWORD *)(v9 + 8 * v12) )
          {
            if ( !*(_QWORD *)(v10 + 8 * v12) )
              goto LABEL_18;
            v11 = sub_98ACD0(v14);
            sub_1590480(a3, v14, (unsigned int)v11 + 2);
            goto LABEL_15;
          }
LABEL_23:
          if ( *(_QWORD *)(v10 + 8 * v12) )
          {
LABEL_18:
            v8 = (unsigned int)(unsigned __int8)sub_98ACD0(v14) + 4;
            goto LABEL_19;
          }
          v18 = sub_98ACD0(v14);
          sub_1590480(a3, v14, (unsigned int)v18 + 6);
LABEL_15:
          if ( v5 == ++v3 )
            return;
        }
      }
    }
  }
}

