__int64 __fastcall sub_994280(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v7; // rax
  int v8; // edx
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 *v19; // rax
  __int64 v20; // r10
  unsigned int v21; // r14d
  int v23; // eax
  int v24; // r11d
  __int64 v25; // rax
  __int64 v26[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v8 = *(_DWORD *)(v7 + 48);
  switch ( v8 )
  {
    case 0:
      v9 = *(_QWORD **)(v7 + 24);
      if ( v9 )
        goto LABEL_3;
LABEL_18:
      sub_A2E240(a1, a3, 2196, 0);
      return 1;
    case 2:
      if ( !*(_QWORD *)(v7 + 24) )
        goto LABEL_18;
LABEL_29:
      BUG();
    case 3:
      goto LABEL_29;
  }
  if ( !*(_QWORD *)(v7 + 32) && !*(_QWORD *)v7 )
    goto LABEL_18;
  if ( v8 == 1 )
  {
    v10 = *(_QWORD **)(v7 + 24);
    v11 = (_QWORD *)v10[4];
    v9 = v10;
    goto LABEL_4;
  }
  v9 = *(_QWORD **)(v7 + 24);
LABEL_3:
  v10 = (_QWORD *)v9[4];
  v11 = v10;
LABEL_4:
  v12 = *v10;
  if ( (v12 & 2) != 0 )
  {
    v14 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    v13 = v14;
  }
  else
  {
    v13 = 0;
    LODWORD(v14) = 0;
  }
  v15 = *(unsigned int *)(a1 + 64);
  v16 = *(_QWORD *)(a1 + 48);
  v17 = a1 + 48;
  if ( (_DWORD)v15 )
  {
    v18 = (v15 - 1) & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
    v19 = (__int64 *)(v16 + 80LL * v18);
    v20 = *v19;
    if ( v13 == *v19 )
    {
LABEL_8:
      if ( v19 != (__int64 *)(v16 + 80 * v15) )
        v3 = *((unsigned __int8 *)v19 + 72);
    }
    else
    {
      v23 = 1;
      while ( v20 != -4096 )
      {
        v24 = v23 + 1;
        v25 = ((_DWORD)v15 - 1) & (v18 + v23);
        v18 = v25;
        v19 = (__int64 *)(v16 + 80 * v25);
        v20 = *v19;
        if ( *v19 == v13 )
          goto LABEL_8;
        v23 = v24;
      }
    }
  }
  v21 = sub_9A1D30(v17, v13, v9, a1, v16);
  if ( (_BYTE)v21 )
    return sub_9DC8F0(a1, a2, v3, 2, v11, v13);
  v26[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  sub_A2E0C0(a1, v26, 2203, 0);
  return v21;
}

