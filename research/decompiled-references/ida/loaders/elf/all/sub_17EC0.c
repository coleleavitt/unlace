__int64 __fastcall sub_17EC0(__int64 *a1)
{
  char v1; // r13
  __int64 v2; // rax
  int *v4; // rbx
  int *v5; // rbp
  int v6; // eax
  int v7; // edx
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  _QWORD v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = 0;
  v2 = a1[2];
  v18[1] = __readfsqword(0x28u);
  if ( *(_WORD *)(v2 + 522) == 8 && *(_WORD *)(v2 + 520) == 0xFFA0 )
  {
    v14 = *(_QWORD *)(v2 + 112);
    v15 = v14 + (*(_QWORD *)(v2 + 120) << 6);
    if ( v15 == v14 )
    {
      v1 = 1;
    }
    else
    {
      do
      {
        while ( *(_DWORD *)(v14 + 4) != 1879048352 )
        {
          v14 += 64;
          if ( v15 == v14 )
            goto LABEL_37;
        }
        v16 = *(_QWORD *)(v14 + 32);
        v17 = *(_QWORD *)(v14 + 24);
        v14 += 64;
        sub_17CD0(a1, v17, v16, 0);
      }
      while ( v15 != v14 );
LABEL_37:
      v2 = a1[2];
      v1 = 1;
    }
  }
  v4 = *(int **)(v2 + 32);
  v5 = &v4[14 * *(_QWORD *)(v2 + 40)];
  if ( v5 == v4 )
    goto LABEL_11;
LABEL_3:
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 == 1879048352 )
      break;
LABEL_4:
    if ( v6 == 1879048353 )
    {
      if ( v1 )
      {
        v4 += 14;
        sub_BFC0((__int64)"Packed PRX relocations not supported yet");
        if ( v5 != v4 )
          goto LABEL_16;
      }
      else
      {
        while ( v5 != v4 + 14 )
        {
          v7 = v4[14];
          if ( v7 == 1879048352 )
          {
            v4 += 28;
            if ( v5 == v4 )
              goto LABEL_10;
            v6 = *v4;
            if ( *v4 != 1879048352 )
              goto LABEL_4;
            v4 += 14;
            if ( v5 != v4 )
              goto LABEL_3;
            goto LABEL_10;
          }
          v4 += 14;
          if ( v7 != 1879048353 )
            goto LABEL_9;
        }
      }
      goto LABEL_10;
    }
LABEL_9:
    v4 += 14;
    if ( v5 == v4 )
      goto LABEL_10;
  }
  if ( !v1 )
    goto LABEL_9;
  while ( 1 )
  {
    v9 = *((_QWORD *)v4 + 4);
    v10 = *((_QWORD *)v4 + 1);
    v4 += 14;
    sub_17CD0(a1, v10, v9, 0);
    if ( v5 == v4 )
      break;
LABEL_16:
    v6 = *v4;
    if ( *v4 != 1879048352 )
      goto LABEL_4;
  }
LABEL_10:
  v2 = a1[2];
LABEL_11:
  if ( !*(_BYTE *)(v2 + 248) || !*(_QWORD *)(v2 + 120) || *(_WORD *)(v2 + 520) != 1 )
    return 1;
  if ( *(_DWORD *)(get_ph() + 4) != 12 )
    sub_15060();
  v18[0] = -1;
  sub_101F0(0xBC4u, v18);
  if ( v18[0] != -1 )
    return 1;
  netnode_check(v18, "$ got", 0, 0);
  if ( !(unsigned __int8)netnode_exist(v18) )
    return 1;
  v11 = netnode_altval(v18[0], 0, 65) - 1;
  v12 = node2ea(v11);
  if ( v12 == -1 )
    return 1;
  v13 = *(_QWORD *)(a1[2] + 456) & (a1[50] + v12);
  if ( *(_DWORD *)(get_ph() + 4) == 12 )
  {
    sub_101F0(0xBBAu, v13);
    return 1;
  }
  sub_15040();
  return 0;
}

