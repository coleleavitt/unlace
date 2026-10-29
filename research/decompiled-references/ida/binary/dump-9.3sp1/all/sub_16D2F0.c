__int64 __fastcall sub_16D2F0(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  unsigned int *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rdi
  _BYTE *v22; // rdi
  __int64 v23; // rcx
  _DWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  _DWORD *v28; // r12
  int v29; // eax
  __int64 v30; // r12
  __int64 v31; // rax
  int v32; // r14d
  int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 i; // rbx
  int v40; // eax
  int v41; // eax
  _QWORD *v42; // rdx
  int v43; // eax
  int v44; // eax
  _QWORD *v45; // rax
  __int64 v46; // [rsp+8h] [rbp-50h]
  __int64 v47; // [rsp+8h] [rbp-50h]
  __int64 v48; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v6 = *(_QWORD *)(a2 + 56);
  v7 = *(_QWORD *)(a3 + 56);
  v46 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( *(_DWORD *)v6 == 55 )
    v6 = *(_QWORD *)(v6 + 16);
  if ( *(_DWORD *)v7 == 55 )
    v7 = *(_QWORD *)(v7 + 16);
  v8 = v6;
  while ( 1 )
  {
    v9 = sub_1229D0(v8);
    v13 = sub_1229D0(v7);
    if ( (v9 != 0) != (v13 != 0) )
      break;
    if ( !v9 )
    {
      v22 = *(_BYTE **)(a1 + 56);
      if ( (v22[6] & 2) != 0
        || (unsigned __int8)sub_1205A0(v22, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0, v10, v11, v12) )
      {
        return 0;
      }
      v36 = *(_QWORD *)(a1 + 64);
      v37 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
      if ( (unsigned int)v37 < *(_DWORD *)(v36 + 64) )
      {
        v38 = *(_QWORD *)(*(_QWORD *)(v36 + 528) + 8 * v37);
        for ( i = *(_QWORD *)(v38 + 48); i; i = *(_QWORD *)(i + 8) )
        {
          if ( *(_DWORD *)i == 55 )
            break;
          sub_11D5A0(i);
          v40 = *(_DWORD *)(v38 + 24);
          BYTE1(v40) &= ~2u;
          LOBYTE(v40) = v40 | 0x80;
          *(_DWORD *)(v38 + 24) = v40;
        }
        sub_13B2C0(a2);
        sub_11D5A0(*(_QWORD *)(a1 + 56));
        v41 = *(_DWORD *)(a1 + 24);
        BYTE1(v41) &= ~2u;
        LOBYTE(v41) = v41 | 0x80;
        *(_DWORD *)(a1 + 24) = v41;
        sub_112550(a1, a2, v38);
        sub_66FA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"REMOVE_IF_BRANCH");
        return 1;
      }
LABEL_64:
      sub_167AF0(v22);
    }
    if ( sub_1201A0((_BYTE *)v9, v46) || !sub_125B90((unsigned __int8 *)v9, v46, (unsigned int *)v13, 4u) )
    {
      v14 = sub_1229D0(v6);
      if ( v9 != v14 )
        goto LABEL_12;
      return 0;
    }
    v8 = *(_QWORD *)(v9 + 16);
    v7 = *(_QWORD *)(v13 + 16);
  }
  v14 = sub_1229D0(v6);
  if ( v9 == v14 )
    return 0;
  if ( v9 )
LABEL_12:
    v19 = *(unsigned int **)(v9 + 8);
  else
    v19 = *(unsigned int **)(a2 + 48);
  if ( v13 )
    v20 = *(_QWORD *)(v13 + 8);
  else
    v20 = *(_QWORD *)(a3 + 48);
  v21 = *((_QWORD *)v19 + 2);
  if ( v21 )
  {
    v16 = *(_QWORD *)(v21 + 24);
    if ( *((_QWORD *)v19 + 3) == v16 )
    {
      do
      {
        v16 = *v19;
        v15 = (unsigned int)(v16 - 29);
        if ( (unsigned int)v15 > 0xC )
          break;
        v15 = (unsigned int)(*(_DWORD *)v21 - 29);
        if ( (unsigned int)v15 > 0xC )
          break;
        if ( (unsigned int *)v14 == v19 )
          return 0;
        v19 = *((unsigned int **)v19 + 1);
        v20 = *(_QWORD *)(v20 + 8);
        v21 = *((_QWORD *)v19 + 2);
      }
      while ( *(_QWORD *)(v21 + 24) == *((_QWORD *)v19 + 3) );
    }
  }
  v22 = (_BYTE *)v4;
  if ( !(unsigned __int8)sub_168F10(v4, (__int64)v19, v15, v16, v17, v18) )
    return 0;
  v25 = *(_DWORD **)(v4 + 56);
  if ( *v25 == 55 )
    v26 = (unsigned int)v25[10];
  else
    v26 = (unsigned int)(*(_DWORD *)(v4 + 72) + 1);
  v27 = *(_QWORD *)(v4 + 64);
  if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 64) )
    goto LABEL_64;
  v28 = *(_DWORD **)(*(_QWORD *)(v27 + 528) + 8 * v26);
  v29 = v28[19];
  if ( v29 == 1 || v29 == 6 || v28[88] != 2 )
  {
    if ( v19 != *(unsigned int **)(v4 + 48) )
      v4 = sub_69930(*(_QWORD *)(v4 + 64), v4, (__int64)v19, v23);
    v30 = *(_QWORD *)(a3 + 56);
    if ( v20 != v30 )
    {
      do
      {
        v31 = sub_A3480(a3, v20);
        v30 = *(_QWORD *)(a3 + 56);
        v20 = v31;
      }
      while ( v31 != v30 );
    }
    v32 = *(_DWORD *)(v30 + 4);
    sub_11D5A0(v30);
    *(_DWORD *)v30 = 55;
    v33 = *(_DWORD *)(v4 + 72);
    *(_BYTE *)(v30 + 32) = 7;
    *(_DWORD *)(v30 + 40) = v33;
    *(_DWORD *)(v30 + 4) = v32 & 0x100000;
    sub_A73B0(a3, v4);
  }
  else
  {
    v42 = nullptr;
LABEL_53:
    if ( v19 )
    {
      while ( *v19 != 55 )
      {
        if ( *((char *)v19 + 4) >= 0 )
        {
          v48 = (__int64)v42;
          v47 = sub_A33C0(v4, (__int64)v19);
          v45 = sub_A3160((__int64)v28, v19, v48);
          v19 = (unsigned int *)v47;
          v42 = v45;
          goto LABEL_53;
        }
        v19 = *((unsigned int **)v19 + 1);
        if ( !v19 )
          break;
      }
    }
LABEL_57:
    if ( v20 )
    {
      while ( *(_DWORD *)v20 != 55 )
      {
        if ( *(char *)(v20 + 4) >= 0 )
        {
          v20 = sub_A3480(a3, v20);
          goto LABEL_57;
        }
        v20 = *(_QWORD *)(v20 + 8);
        if ( !v20 )
          break;
      }
    }
    v43 = *(_DWORD *)(v4 + 24);
    BYTE1(v43) &= ~2u;
    LOBYTE(v43) = v43 | 0x80;
    *(_DWORD *)(v4 + 24) = v43;
    v44 = v28[6];
    BYTE1(v44) &= ~2u;
    LOBYTE(v44) = v44 | 0x80;
    v28[6] = v44;
  }
  v34 = *(_DWORD *)(a3 + 24);
  BYTE1(v34) &= ~2u;
  LOBYTE(v34) = v34 | 0x80;
  *(_DWORD *)(a3 + 24) = v34;
  v35 = *(_QWORD *)(v27 + 784);
  *(_DWORD *)v27 |= 0x400u;
  if ( v35 )
    *(_DWORD *)(v35 + 48) = 63;
  sub_66FA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"EXTRACT_EQUAL_IF_TAIL_INSNS");
  return 1;
}
