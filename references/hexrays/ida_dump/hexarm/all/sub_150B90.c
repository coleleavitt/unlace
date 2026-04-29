__int64 __fastcall sub_150B90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  int *v9; // r14
  char v10; // al
  int v11; // edx
  __int64 v12; // rax
  __int128 v13; // rdi
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r13
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v23[4]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v26[11]; // [rsp+60h] [rbp-58h] BYREF

  v26[3] = __readfsqword(0x28u);
  v22 = a3;
  v7 = sub_30D700(a1, a2, &v22, a4);
  if ( !v7 || *(_BYTE *)v7 != 4 )
    return 0;
  v9 = *(int **)(v7 + 8);
  v10 = *((_BYTE *)v9 + 32);
  if ( v10 == 11 )
  {
    v14 = 40;
    goto LABEL_21;
  }
  v11 = *v9;
  if ( *v9 != 19 || v10 != 4 )
    goto LABEL_7;
  v21 = *((_QWORD *)v9 + 5);
  if ( *(_DWORD *)v21 != 13 )
    return 0;
  if ( (unsigned __int8)sub_11F7C0((char *)(v21 + 48), v23, 1u) && v23[0] == 1 )
  {
    v14 = 41;
    *((_QWORD *)&v13 + 1) = v9 + 12;
    if ( sub_1255A0((unsigned __int8 *)(*((_QWORD *)v9 + 5) + 32LL), (__int64)(v9 + 12), 0) )
      goto LABEL_15;
    return 0;
  }
  v11 = *v9;
LABEL_7:
  if ( v11 != 13 )
    return 0;
  if ( *((_BYTE *)v9 + 32) != 4 )
    return 0;
  v12 = *((_QWORD *)v9 + 5);
  if ( *(_DWORD *)v12 != 24
    || *(_BYTE *)(v12 + 48) != 2
    || ((*(_BYTE *)(*(_QWORD *)(v12 + 56) + 16LL) + 1) & 7) != 0
    || *(_DWORD *)(v12 + 36) != (*(unsigned __int8 *)(*(_QWORD *)(v12 + 56) + 16LL) + 1) >> 3
    || !sub_1255A0((unsigned __int8 *)(v12 + 32), (__int64)(v9 + 12), 0) )
  {
    return 0;
  }
  *((_QWORD *)&v13 + 1) = v9 + 12;
  v14 = 38;
LABEL_15:
  *(_QWORD *)&v13 = a2;
  v22 = a3;
  v15 = sub_128E80(v13, (__int64)&v22, 0);
  if ( !v15 )
    return 0;
  if ( *(_DWORD *)v15 != 4 )
    return 0;
  if ( *(_BYTE *)(v15 + 32) != 4 )
    return 0;
  v9 = *(int **)(v15 + 40);
  if ( *((_BYTE *)v9 + 32) != 11 )
    return 0;
LABEL_21:
  if ( *((_BYTE *)v9 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v9 + 9) + 284LL) != 32 )
    return 0;
  v16 = *(_QWORD *)(a4 + 24);
  v24[1] = 0;
  v24[0] = 0xFFFFFFFF00000000LL;
  v25[0] = 0xFFFFFFFF00000000LL;
  v25[1] = 0;
  v26[0] = 0xFFFFFFFF00000000LL;
  v26[1] = 0;
  sub_330C90(v23, v16);
  v17 = *((_QWORD *)v9 + 9);
  v18 = *(_QWORD *)(v17 + 24);
  if ( (get_tinfo_property(*(_QWORD *)(v18 + 24), 2) & 0xF) == 9 )
  {
    v19 = sub_32EE10(v14);
    HIDWORD(v23[0]) |= 0x10u;
    LODWORD(v23[0]) = v19;
  }
  else
  {
    if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v18 + 24), 3) == 2 )
      v14 = sub_32EE10(v14);
    LODWORD(v23[0]) = v14;
  }
  sub_124BC0((__int64)v24, *(unsigned __int8 **)(v17 + 24));
  sub_124BC0((__int64)v25, (unsigned __int8 *)(*(_QWORD *)(v17 + 24) + 80LL));
  HIDWORD(v26[0]) = 1;
  sub_125D20(a4 + 32, (unsigned __int8 *)v23);
  sub_11C7E0(a4 + 48);
  v20 = 9;
  if ( *(_DWORD *)(a4 + 68) == 1 )
    v20 = 4;
  *(_DWORD *)a4 = v20;
  sub_11C7E0((__int64)v26);
  sub_11C7E0((__int64)v25);
  sub_11C7E0((__int64)v24);
  return 1;
}
