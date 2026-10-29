__int64 __fastcall Z3_goal_formula(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  char v4; // r12
  __int64 v5; // r15
  int v6; // ecx
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // r14d
  _DWORD *v10; // rbx
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r13
  int v15; // eax
  __int64 v16; // rax
  int v17; // ecx
  __int64 *v18; // rax

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29C650(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 || (v5 = *(_QWORD *)(a2 + 24)) == 0 )
    BUG();
  v6 = *(_DWORD *)(v5 + 32);
  v7 = *(_QWORD *)(v5 + 72);
  *(_DWORD *)(v5 + 32) = v6 + 1;
  if ( !v7 )
  {
    *(_DWORD *)(v5 + 32) = v6;
    if ( !v6 )
    {
      sub_ED44E0(v5);
      sub_186B220((void *)v5);
    }
    goto LABEL_27;
  }
  v8 = *(_BYTE *)(v7 + 3) >> 6;
  if ( v8 )
  {
    if ( v8 != 1 )
      goto LABEL_8;
LABEL_21:
    v15 = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v5 + 32) = v6;
    v9 = v15 + 1;
    if ( v6 )
      goto LABEL_11;
    goto LABEL_22;
  }
  do
  {
    v7 = *(_QWORD *)(v7 + 16);
    v8 = *(_BYTE *)(v7 + 3) >> 6;
  }
  while ( !v8 );
  if ( v8 == 1 )
    goto LABEL_21;
LABEL_8:
  if ( v8 == 2 )
    v9 = *(_DWORD *)(v7 + 4) - 1;
  else
    v9 = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v5 + 32) = v6;
  if ( v6 )
  {
LABEL_11:
    if ( (unsigned int)v3 < v9 )
    {
      v10 = *(_DWORD **)(a2 + 24);
      goto LABEL_13;
    }
LABEL_27:
    sub_24EA30(a1, 2u, nullptr);
    if ( !v4 )
      return 0;
    sub_2BB620(0);
    v13 = 0;
LABEL_39:
    byte_1C7EBA0 = 1;
    return v13;
  }
LABEL_22:
  sub_ED44E0(v5);
  sub_186B220((void *)v5);
  if ( (unsigned int)v3 >= v9 )
    goto LABEL_27;
  v10 = *(_DWORD **)(a2 + 24);
  if ( !v10 )
    BUG();
LABEL_13:
  v11 = v10[8];
  v12 = *(_QWORD *)v10;
  v10[8] = v11 + 1;
  if ( (*((_BYTE *)v10 + 123) & 0x20) != 0 )
  {
    v13 = *(_QWORD *)(v12 + 864);
  }
  else
  {
    v16 = *((_QWORD *)v10 + 9);
    v17 = 18;
    while ( --v17 )
    {
      if ( *(char *)(v16 + 3) >= 0 )
      {
        if ( (_DWORD)v3 == *(_DWORD *)(v16 + 4) )
        {
          v18 = (__int64 *)(v16 + 8);
          goto LABEL_35;
        }
      }
      else if ( *(_BYTE *)(v16 + 3) >> 6 != 2 )
      {
        v18 = (__int64 *)(*(_QWORD *)(v16 + 16) + 8 * v3);
        goto LABEL_35;
      }
      v16 = *(_QWORD *)(v16 + 16);
    }
    sub_233F80((__int64 *)(v12 + 616), v10 + 18);
    v11 = v10[8] - 1;
    v18 = (__int64 *)(*(_QWORD *)(*((_QWORD *)v10 + 9) + 16LL) + 8 * v3);
LABEL_35:
    v13 = *v18;
  }
  v10[8] = v11;
  if ( !v11 )
  {
    sub_ED44E0(v10);
    sub_186B220(v10);
  }
  sub_251FD0(a1, v13);
  if ( v4 )
  {
    sub_2BB620(v13);
    goto LABEL_39;
  }
  return v13;
}

