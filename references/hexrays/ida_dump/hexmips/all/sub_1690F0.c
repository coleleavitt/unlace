__int64 __fastcall sub_1690F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdi
  _BYTE *v18; // rdi
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  _DWORD *v23; // r12
  int v24; // eax
  __int64 v25; // r12
  __int64 v26; // rax
  int v27; // r14d
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 i; // rbx
  int v35; // eax
  int v36; // eax
  _QWORD *v37; // rdx
  int v38; // eax
  int v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // [rsp+8h] [rbp-50h]
  __int64 v42; // [rsp+8h] [rbp-50h]
  __int64 v43; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v6 = *(_QWORD *)(a2 + 56);
  v7 = *(_QWORD *)(a3 + 56);
  v41 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( *(_DWORD *)v6 == 55 )
    v6 = *(_QWORD *)(v6 + 16);
  if ( *(_DWORD *)v7 == 55 )
    v7 = *(_QWORD *)(v7 + 16);
  v8 = v6;
  while ( 1 )
  {
    v9 = sub_11E7D0(v8);
    v13 = sub_11E7D0(v7);
    if ( (v9 != 0) != (v13 != 0) )
      break;
    if ( !v9 )
    {
      v18 = *(_BYTE **)(a1 + 56);
      if ( (v18[6] & 2) != 0
        || (unsigned __int8)sub_11C3A0(v18, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0, v10, v11, v12) )
      {
        return 0;
      }
      v31 = *(_QWORD *)(a1 + 64);
      v32 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
      if ( (unsigned int)v32 < *(_DWORD *)(v31 + 64) )
      {
        v33 = *(_QWORD *)(*(_QWORD *)(v31 + 528) + 8 * v32);
        for ( i = *(_QWORD *)(v33 + 48); i; i = *(_QWORD *)(i + 8) )
        {
          if ( *(_DWORD *)i == 55 )
            break;
          sub_1193A0(i);
          v35 = *(_DWORD *)(v33 + 24);
          BYTE1(v35) &= ~2u;
          LOBYTE(v35) = v35 | 0x80;
          *(_DWORD *)(v33 + 24) = v35;
        }
        sub_1370C0(a2);
        sub_1193A0(*(_QWORD *)(a1 + 56));
        v36 = *(_DWORD *)(a1 + 24);
        BYTE1(v36) &= ~2u;
        LOBYTE(v36) = v36 | 0x80;
        *(_DWORD *)(a1 + 24) = v36;
        sub_10E350(a1, a2, v33);
        sub_62DA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"REMOVE_IF_BRANCH");
        return 1;
      }
LABEL_64:
      sub_1638F0(v18);
    }
    if ( sub_11BFA0((_BYTE *)v9, v41) || !sub_121990((unsigned __int8 *)v9, v41, (unsigned int *)v13, 4u) )
    {
      v14 = sub_11E7D0(v6);
      if ( v9 != v14 )
        goto LABEL_12;
      return 0;
    }
    v8 = *(_QWORD *)(v9 + 16);
    v7 = *(_QWORD *)(v13 + 16);
  }
  v14 = sub_11E7D0(v6);
  if ( v9 == v14 )
    return 0;
  if ( v9 )
LABEL_12:
    v15 = *(_QWORD *)(v9 + 8);
  else
    v15 = *(_QWORD *)(a2 + 48);
  if ( v13 )
    v16 = *(_QWORD *)(v13 + 8);
  else
    v16 = *(_QWORD *)(a3 + 48);
  v17 = *(_QWORD *)(v15 + 16);
  if ( v17 && *(_QWORD *)(v15 + 24) == *(_QWORD *)(v17 + 24) )
  {
    do
    {
      if ( (unsigned int)(*(_DWORD *)v15 - 29) > 0xC || (unsigned int)(*(_DWORD *)v17 - 29) > 0xC )
        break;
      if ( v14 == v15 )
        return 0;
      v15 = *(_QWORD *)(v15 + 8);
      v16 = *(_QWORD *)(v16 + 8);
      v17 = *(_QWORD *)(v15 + 16);
    }
    while ( *(_QWORD *)(v17 + 24) == *(_QWORD *)(v15 + 24) );
  }
  v18 = (_BYTE *)v4;
  if ( !(unsigned __int8)sub_164D10(v4, v15) )
    return 0;
  v20 = *(_DWORD **)(v4 + 56);
  if ( *v20 == 55 )
    v21 = (unsigned int)v20[10];
  else
    v21 = (unsigned int)(*(_DWORD *)(v4 + 72) + 1);
  v22 = *(_QWORD *)(v4 + 64);
  if ( (unsigned int)v21 >= *(_DWORD *)(v22 + 64) )
    goto LABEL_64;
  v23 = *(_DWORD **)(*(_QWORD *)(v22 + 528) + 8 * v21);
  v24 = v23[19];
  if ( v24 == 1 || v24 == 6 || v23[88] != 2 )
  {
    if ( v15 != *(_QWORD *)(v4 + 48) )
      v4 = sub_65730(*(_QWORD *)(v4 + 64), v4, v15);
    v25 = *(_QWORD *)(a3 + 56);
    if ( v16 != v25 )
    {
      do
      {
        v26 = sub_9F280(a3, v16);
        v25 = *(_QWORD *)(a3 + 56);
        v16 = v26;
      }
      while ( v26 != v25 );
    }
    v27 = *(_DWORD *)(v25 + 4);
    sub_1193A0(v25);
    *(_DWORD *)v25 = 55;
    v28 = *(_DWORD *)(v4 + 72);
    *(_BYTE *)(v25 + 32) = 7;
    *(_DWORD *)(v25 + 40) = v28;
    *(_DWORD *)(v25 + 4) = v27 & 0x100000;
    sub_A31B0(a3, v4);
  }
  else
  {
    v37 = nullptr;
LABEL_53:
    if ( v15 )
    {
      while ( *(_DWORD *)v15 != 55 )
      {
        if ( *(char *)(v15 + 4) >= 0 )
        {
          v43 = (__int64)v37;
          v42 = sub_9F1C0(v4, v15);
          v40 = sub_9EF60((__int64)v23, (_QWORD *)v15, v43);
          v15 = v42;
          v37 = v40;
          goto LABEL_53;
        }
        v15 = *(_QWORD *)(v15 + 8);
        if ( !v15 )
          break;
      }
    }
LABEL_57:
    if ( v16 )
    {
      while ( *(_DWORD *)v16 != 55 )
      {
        if ( *(char *)(v16 + 4) >= 0 )
        {
          v16 = sub_9F280(a3, v16);
          goto LABEL_57;
        }
        v16 = *(_QWORD *)(v16 + 8);
        if ( !v16 )
          break;
      }
    }
    v38 = *(_DWORD *)(v4 + 24);
    BYTE1(v38) &= ~2u;
    LOBYTE(v38) = v38 | 0x80;
    *(_DWORD *)(v4 + 24) = v38;
    v39 = v23[6];
    BYTE1(v39) &= ~2u;
    LOBYTE(v39) = v39 | 0x80;
    v23[6] = v39;
  }
  v29 = *(_DWORD *)(a3 + 24);
  BYTE1(v29) &= ~2u;
  LOBYTE(v29) = v29 | 0x80;
  *(_DWORD *)(a3 + 24) = v29;
  v30 = *(_QWORD *)(v22 + 784);
  *(_DWORD *)v22 |= 0x400u;
  if ( v30 )
    *(_DWORD *)(v30 + 48) = 63;
  sub_62DA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"EXTRACT_EQUAL_IF_TAIL_INSNS");
  return 1;
}
