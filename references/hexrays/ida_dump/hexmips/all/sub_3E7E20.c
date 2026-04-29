__int64 __fastcall sub_3E7E20(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  int v4; // eax
  __int64 v5; // r13
  unsigned int v6; // r12d
  int *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r10
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  char *v18; // rdi
  int v19; // ebp
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+8h] [rbp-60h]
  _QWORD v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v28[3] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 56);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)v3;
  v5 = 0;
  if ( *(_DWORD *)v3 == 55 )
  {
    if ( *(_BYTE *)(v3 + 32) != 7 )
      return 0;
    v8 = *(int **)(v3 + 16);
    if ( !v8 )
      return 0;
    v5 = *(_QWORD *)(a2 + 56);
    v4 = *v8;
    v3 = *(_QWORD *)(v3 + 16);
  }
  if ( v4 != 4
    || *(_BYTE *)(v3 + 64) != 1
    || *(_DWORD *)(*(_QWORD *)(a1 + 8) + 352LL) != *(_DWORD *)(v3 + 72)
    || *(_DWORD *)(v3 + 68) != 1
    || !(unsigned __int8)sub_11BB80((char *)(v3 + 32), v28, 0)
    || v28[0] )
  {
    return 0;
  }
  if ( !v5 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    if ( v11 )
      goto LABEL_17;
    if ( !under_debugger )
      sub_37E160(0xCCDCu, (__int64)v28, a3);
LABEL_44:
    BUG();
  }
  v9 = *(_QWORD *)(a2 + 64);
  v10 = *(unsigned int *)(v5 + 40);
  if ( (unsigned int)v10 >= *(_DWORD *)(v9 + 64) )
  {
    if ( !under_debugger )
      sub_37E160(0xCDEFu, (__int64)v28, a3);
    goto LABEL_44;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 528) + 8 * v10);
LABEL_17:
  v12 = *(_QWORD *)(v11 + 48);
  if ( !v12 )
    return 0;
  if ( *(_DWORD *)v12 != 42 )
    return 0;
  if ( *(_BYTE *)(v12 + 32) != 1 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 352LL) != *(_DWORD *)(v12 + 40) )
    return 0;
  v6 = *(_DWORD *)(v12 + 36);
  if ( v6 != 1 )
    return 0;
  v13 = *(_QWORD *)(v11 + 8);
  if ( !v13 )
    return 0;
  v14 = *(_DWORD *)(v13 + 72);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 40) = v14;
  }
  else
  {
    v28[0] = 0xFFFFFFFF00000007LL;
    v27 = v13;
    v28[1] = v14;
    sub_9F040(a2, v3, 55, (__int64)v28, 0, 0);
    sub_118BA0((__int64)v28);
    v13 = v27;
  }
  v15 = *(_DWORD *)(a2 + 24);
  BYTE1(v15) &= ~2u;
  LOBYTE(v15) = v15 | 0x80;
  *(_DWORD *)(a2 + 24) = v15;
  v16 = *(_DWORD *)(v11 + 24);
  BYTE1(v16) &= ~2u;
  LOBYTE(v16) = v16 | 0x80;
  *(_DWORD *)(v11 + 24) = v16;
  if ( *(_DWORD *)(v13 + 76) != 1 )
  {
    v17 = *(_DWORD *)(v13 + 24);
    BYTE1(v17) &= ~2u;
    LOBYTE(v17) = v17 | 0x80;
    *(_DWORD *)(v13 + 24) = v17;
  }
  **(_DWORD **)(a2 + 368) = *(_DWORD *)(v13 + 72);
  v18 = *(char **)(v11 + 344);
  v19 = *(_DWORD *)(a2 + 72);
  v20 = &v18[4 * *(_QWORD *)(v11 + 352)];
  if ( v18 != v20 )
  {
    while ( v19 != *(_DWORD *)v18 )
    {
      v18 += 4;
      if ( v20 == v18 )
        goto LABEL_33;
    }
    if ( v18 != v20 )
    {
      v25 = v13;
      memmove(v18, v18 + 4, v20 - v18 - 4);
      --*(_QWORD *)(v11 + 352);
      v13 = v25;
      v19 = *(_DWORD *)(a2 + 72);
    }
  }
LABEL_33:
  v21 = *(_QWORD *)(v13 + 352);
  if ( *(_QWORD *)(v13 + 360) < (unsigned __int64)(v21 + 1) )
  {
    v26 = v13;
    v24 = qvector_reserve(v13 + 344, *(_QWORD *)(v13 + 344), v21 + 1, 4);
    v13 = v26;
    *(_QWORD *)(v26 + 344) = v24;
    v21 = *(_QWORD *)(v26 + 352);
  }
  *(_DWORD *)(*(_QWORD *)(v13 + 344) + 4 * v21) = v19;
  ++*(_QWORD *)(v13 + 352);
  **(_DWORD **)(a2 + 64) |= 0x400u;
  v22 = *(_QWORD *)(a2 + 64);
  v23 = *(_QWORD *)(v22 + 784);
  if ( v23 )
  {
    *(_DWORD *)(v23 + 48) = 63;
    v22 = *(_QWORD *)(a2 + 64);
  }
  sub_62DA0(v22, 1u, (__int64)"MIPS: simplify dc (%d)", *(_DWORD *)(a2 + 72));
  return v6;
}
