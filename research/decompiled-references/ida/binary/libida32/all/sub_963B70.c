__int64 __fastcall sub_963B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rsi
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // edx
  int v17; // r13d
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  _QWORD v25[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = *(_QWORD *)(a2 + 48);
  v25[0] = a1;
  v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25;
  if ( (unsigned int)v7 > 1 )
    v6 = sub_F3F310(v6, a2, v7, a4, a5);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = sub_963580(v25, **(_QWORD **)(a2 + 120), 0, a4, a5);
  v10 = v8;
  v11 = v9;
  v14 = sub_A5DBD0(v25[0], v8, 0);
  v15 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v16 == 43 )
  {
    v17 = 1;
    v24 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43;
    if ( (unsigned int)v24 > 1 )
    {
      v15 = sub_F3F310(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL), v8, v24, v12, v13);
      if ( !v15 )
        goto LABEL_8;
    }
  }
  else
  {
    v17 = 2;
    v12 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43;
    if ( (unsigned int)v12 > 1 )
    {
      v23 = (unsigned int)(v16 - 43);
      if ( (unsigned int)v23 > 1 )
        goto LABEL_8;
      v15 = sub_F3F310(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL), v8, v23, v12, v13);
      if ( !v15 )
        goto LABEL_8;
    }
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v15 + 32);
    if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v18 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      v15 = *(_QWORD *)v18;
      v19 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v18 + 16LL) - 43;
      if ( (unsigned int)v19 <= 1 )
        break;
      v20 = sub_F3F310(v15, v10, v19, v12, v13);
      v8 = *(_QWORD *)(v20 + 32);
      if ( (*(_BYTE *)(v20 + 18) & 0x10) == 0 )
        goto LABEL_8;
    }
  }
LABEL_8:
  v21 = sub_C75AF0(v25[0], v8, v17, 5, v11, 0, v14, 0, 0, 0, 0);
  return sub_ECB360(v25[0], 0, v21, 0);
}

