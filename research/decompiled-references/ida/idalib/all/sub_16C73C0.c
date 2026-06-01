char __fastcall sub_16C73C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // r8
  signed __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rsi
  _QWORD *v14; // rbp
  signed __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r13
  __int64 v28; // rax

  v6 = sub_BFB9F0(a3);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
    || (LOBYTE(v8) = sub_9EC890(a2, a2, v4, v5, v7), (_BYTE)v8) )
  {
    LOWORD(v8) = *(_WORD *)v6 & 0x1FF;
    if ( (_WORD)v8 != 4 )
      return v8;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 17) & 4) == 0 )
      return v8;
    LOWORD(v8) = *(_WORD *)v6 & 0x1FF;
    if ( (_WORD)v8 != 4 )
      return v8;
  }
  LOBYTE(v8) = *(_BYTE *)(v6 + 2) >> 3;
  if ( (_BYTE)v8 != 4 )
    return v8;
  v8 = sub_BFB9F0(*(_QWORD *)(v6 + 16));
  if ( (*(_WORD *)v8 & 0x1FF) != 0x2E )
    return v8;
  v10 = *(_QWORD *)(a1 + 2456);
  v11 = *(unsigned int *)(a1 + 2464);
  v12 = v10 + 32 * v11;
  v13 = (32 * v11) >> 7;
  if ( v13 )
  {
    if ( v8 == *(_QWORD *)v10 )
    {
      v14 = *(_QWORD **)(a1 + 2456);
      goto LABEL_25;
    }
    v14 = (_QWORD *)(v10 + 32);
    if ( v8 == *(_QWORD *)(v10 + 32) )
      goto LABEL_25;
    v14 = (_QWORD *)(v10 + 64);
    if ( v8 == *(_QWORD *)(v10 + 64) )
      goto LABEL_25;
    v14 = (_QWORD *)(v10 + 96);
    v13 = v10 + (v13 << 7);
    if ( v8 == *(_QWORD *)(v10 + 96) )
      goto LABEL_25;
    while ( 1 )
    {
      v14 = (_QWORD *)(v10 + 128);
      if ( v13 == v10 + 128 )
        break;
      if ( v8 == *(_QWORD *)(v10 + 128) )
        goto LABEL_25;
      if ( v8 == *(_QWORD *)(v10 + 160) )
      {
        v14 = (_QWORD *)(v10 + 160);
        goto LABEL_25;
      }
      if ( v8 == *(_QWORD *)(v10 + 192) )
      {
        v14 = (_QWORD *)(v10 + 192);
        goto LABEL_25;
      }
      if ( v8 == *(_QWORD *)(v10 + 224) )
      {
        v14 = (_QWORD *)(v10 + 224);
        goto LABEL_25;
      }
      v10 += 128;
    }
  }
  else
  {
    v14 = *(_QWORD **)(a1 + 2456);
  }
  v10 = (v12 - (__int64)v14) >> 5;
  if ( v10 == 2 )
    goto LABEL_39;
  if ( v10 != 3 )
  {
    if ( v10 != 1 )
      return v8;
    goto LABEL_24;
  }
  if ( v8 != *v14 )
  {
    v14 += 4;
LABEL_39:
    if ( v8 != *v14 )
    {
      v14 += 4;
LABEL_24:
      if ( v8 != *v14 )
        return v8;
    }
  }
LABEL_25:
  if ( (_QWORD *)v12 == v14 )
    return v8;
  if ( (*(_BYTE *)(a2 + 17) & 4) == 0 )
  {
    LOBYTE(v8) = sub_9EC890(a2, v13, v12, v10, v9);
    if ( !(_BYTE)v8 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v8 + 16) != 42 )
        return v8;
      v19 = sub_F68450(a2, v13, v16, v17, v18);
      LOBYTE(v8) = sub_F62670(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v20, v21, v22, v23);
      if ( !(_BYTE)v8 )
      {
        v27 = *(_QWORD *)(a1 + 248);
        v28 = sub_F68450(a2, 0, v24, v25, v26);
        v8 = sub_A980A0(v27, v28);
        if ( v8 > v14[3] )
          return v8;
      }
    }
    v11 = *(unsigned int *)(a1 + 2464);
    v12 = *(_QWORD *)(a1 + 2456) + 32 * v11;
  }
  v15 = v12 - (_QWORD)(v14 + 4);
  if ( v15 > 0 )
    LOBYTE(v8) = (unsigned __int8)memmove(v14, v14 + 4, v15);
  *(_DWORD *)(a1 + 2464) = v11 - 1;
  return v8;
}
