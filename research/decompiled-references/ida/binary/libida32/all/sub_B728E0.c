__int64 __fastcall sub_B728E0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  unsigned __int64 v18; // rax

  v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 43 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
      return 0;
    v5 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
    if ( !v5 )
      return 0;
  }
  v8 = sub_B685F0(a1);
  while ( 1 )
  {
    v9 = *(_QWORD *)(v5 + 32);
    if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v5 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 43 <= 1 )
        break;
      v10 = sub_F3F310(v5, a2, v6, v7);
      v9 = *(_QWORD *)(v10 + 32);
      if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
        goto LABEL_6;
    }
  }
LABEL_6:
  v11 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v9) & 7;
  v14 = *(_QWORD *)(sub_B68470(a1 + 72) + 16);
  v17 = (v14 & 4) != 0 ? *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL) : v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v17 )
    v17 -= 64;
  v18 = sub_A56EE0(v8, v17, v12, v13, v15, v16);
  if ( (*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != (*(_QWORD *)&byte_8[v18
                                                                                             & 0xFFFFFFFFFFFFFFF0LL]
                                                                          & 0xFFFFFFFFFFFFFFF8LL
                                                                          | ((unsigned __int8)*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL]
                                                                           | (unsigned __int8)v18)
                                                                          & 7) )
    return 0;
  *a2 = v11 & 7;
  return 1;
}

