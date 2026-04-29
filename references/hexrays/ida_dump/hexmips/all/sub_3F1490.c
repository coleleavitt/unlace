__int64 __fastcall sub_3F1490(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, double a6)
{
  __int64 v8; // r12
  signed int v9; // ebx
  unsigned __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  int *v19; // rdi
  int v20; // r14d
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  int v23; // edx
  int v25; // eax
  __int64 v26; // r9
  int v27; // [rsp+0h] [rbp-48h]
  char v28; // [rsp+6h] [rbp-42h]
  bool v29; // [rsp+7h] [rbp-41h]

  v8 = a4;
  v9 = a2;
  if ( !a5 )
  {
    if ( ((a4 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
    {
      if ( !under_debugger )
        sub_37E160(0xCCEFu, a2, a6);
LABEL_33:
      BUG();
    }
    v10 = *(_WORD *)(a1 + 48);
    if ( v10 > 0x337u )
    {
      if ( (unsigned __int16)(v10 - 826) <= 1u )
        goto LABEL_5;
      goto LABEL_31;
    }
    if ( v10 <= 0x335u )
    {
LABEL_31:
      if ( !under_debugger )
        sub_37E160(0xCCF0u, a2, a6);
      goto LABEL_33;
    }
LABEL_20:
    v28 = 1;
    v11 = *(_QWORD *)(a1 + 832);
    goto LABEL_7;
  }
  sub_3EA750(a1, a6);
  v25 = *(unsigned __int16 *)(a1 + 890);
  if ( a5 == 2 )
  {
    if ( ((2 * v25) & 0x1FFFE) != v8 )
      return 0;
    v8 = (unsigned __int16)v25;
    goto LABEL_5;
  }
  v8 = (unsigned __int16)v25;
  if ( a5 == 1 )
    goto LABEL_20;
LABEL_5:
  v11 = *(_QWORD *)(a1 + 832);
  v28 = 0;
  if ( **(_DWORD **)(v11 + 696) == (_DWORD)a2 )
  {
    v26 = (int)a2;
    a2 = 3;
    sub_1D1F50(a1, 3u, *(_DWORD *)(v11 + 80), 0, 0x3BEA45E214ADDC55LL, v26, 0);
    v11 = *(_QWORD *)(a1 + 832);
  }
LABEL_7:
  v12 = *(_QWORD *)(v11 + 760);
  if ( !v12
    || (a2 = 4,
        v13 = *(int *)(*(_QWORD *)(v11 + 752) + 4 * v12 - 4),
        *(_QWORD *)(v11 + 760) = v12 - 1,
        sub_3EAB70(a1, 4u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), a3, 0x3BEA45E214ADDC55LL, v13, 0),
        v14 = *(_QWORD *)(a1 + 832),
        (v15 = *(_QWORD *)(v14 + 760)) == 0) )
  {
    sub_3E5460(a6, a1, a2);
  }
  v16 = *(int *)(*(_QWORD *)(v14 + 752) + 4 * v15 - 4);
  *(_QWORD *)(v14 + 760) = v15 - 1;
  sub_3EAB70(a1, 3u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v8, 0x3BEA45E214ADDC55LL, v16, 1);
  v17 = v8;
  v27 = v8;
  v19 = *(int **)(a1 + 832);
  v29 = a5 == 0;
  v20 = 2;
  v21 = v17;
  while ( 1 )
  {
    v22 = v19[16];
    if ( v28 )
    {
      sub_3EAB70(a1, 2u, v27, v22, v13, v9, v19[21]);
      sub_3EE280(a1, v21, v9);
    }
    else
    {
      sub_3EAB70(a1, 1u, v27, v9, v22, v13, v19[21]);
    }
    sub_3EAB70(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v13, v16, v13, 0);
    v19 = *(int **)(a1 + 832);
    if ( v19[120] == v9 )
      break;
    v23 = v19[20];
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 800) + 145LL) && v29 )
    {
      v9 -= v23;
      if ( v20 == 1 )
        break;
    }
    else
    {
      v9 += v23;
      if ( v20 == 1 )
        break;
    }
    v20 = 1;
  }
  sub_3E8540((__int64)v19, v13);
  sub_3E8540(*(_QWORD *)(a1 + 832), v16);
  return 1;
}
