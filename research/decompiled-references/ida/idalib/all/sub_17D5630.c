void __fastcall sub_17D5630(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  char v34; // di
  __int64 v35; // rsi

  if ( *(char *)(a2 + 28) < 0 )
    return;
  if ( *(char *)(a3 + 28) < 0 )
    return;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v4 + 17) & 0x10) != 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x10) != 0 )
  {
    return;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
  {
    v9 = sub_AA91B0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a2 + 48), *(_QWORD *)(a3 + 48), 0, 0, 0);
    goto LABEL_7;
  }
  v10 = sub_F57E80(v4);
  if ( v10 && (*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v10 + 17) & 4) == 0 )
    return;
  v11 = *(_QWORD *)(a2 + 48);
  v12 = *(_QWORD *)(a3 + 48);
  v13 = *(_QWORD **)(a1 + 248);
  if ( (*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v11 | (unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v12 | (unsigned __int8)*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
  {
    sub_183B590(a1, a2, a3);
    return;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                          + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) > 4u
    || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                          + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) > 4u )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
    {
      goto LABEL_26;
    }
    v9 = sub_A747C0((__int64)v13, *(_QWORD *)(a2 + 48), *(_QWORD *)(a3 + 48));
    goto LABEL_7;
  }
  v14 = sub_A72040(v13, v12);
  v19 = sub_A72040(*(_QWORD **)(a1 + 248), *(_QWORD *)(a2 + 48));
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
  {
    v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v20 != 5 )
      goto LABEL_20;
  }
  else
  {
    if ( (*(_BYTE *)(v19 + 17) & 4) == 0 )
    {
      v27 = sub_705340((__int64 *)(*(_QWORD *)(a3 + 80) + 72LL), *(_QWORD *)(a3 + 80), v15, v16, v17, v18);
      if ( v27 )
      {
        while ( 1 )
        {
          v30 = v27[6];
          v31 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL);
          v32 = *(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v32 + 16) != 5 && (*(_BYTE *)(v31 + 17) & 4) == 0 )
          {
            v33 = *(_QWORD *)&byte_8[v27[6] & 0xFFFFFFFFFFFFFFF0LL];
            v34 = v33 | v30;
            v31 = v33 & 0xFFFFFFFFFFFFFFF8LL;
            v35 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
            v32 = v35 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v35 | (unsigned __int8)*(_QWORD *)(a2 + 48)) & 7;
            if ( v32 != (v31 | v34 & 7) )
              break;
          }
          if ( (v27[9] & 3) == 0 )
          {
            v27 = sub_705340(v27 + 9, (__int64)v27, v31, v32, v28, v29);
            if ( v27 )
              continue;
          }
          goto LABEL_19;
        }
        v24 = (__int64)v27;
        goto LABEL_35;
      }
    }
LABEL_19:
    v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v20 != 5 )
    {
LABEL_20:
      if ( (unsigned __int8)(v20 - 2) <= 4u
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
      {
        v21 = *(_QWORD *)&byte_8[*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL];
        v22 = *(_QWORD *)&byte_8[*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v22 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v22 | (unsigned __int8)*(_QWORD *)(v14 + 32)) & 7) == (v21 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v21 | (unsigned __int8)*(_QWORD *)(v19 + 32)) & 7) )
        {
          v9 = *(_QWORD *)(a3 + 48);
          goto LABEL_7;
        }
      }
      goto LABEL_25;
    }
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      goto LABEL_25;
  }
  v25 = *(_QWORD *)&byte_8[*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL];
  v26 = *(_QWORD *)&byte_8[*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v26 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v26 | (unsigned __int8)*(_QWORD *)(v14 + 32)) & 7) == (v25 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v25 | (unsigned __int8)*(_QWORD *)(v19 + 32)) & 7) )
  {
    v9 = *(_QWORD *)(a2 + 48);
LABEL_7:
    if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( a4 )
        *(_QWORD *)(a2 + 48) = v9;
      return;
    }
  }
LABEL_25:
  v11 = *(_QWORD *)(a2 + 48);
LABEL_26:
  if ( (*(_BYTE *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
    || (v23 = *(_BYTE *)(a2 + 28) & 0x7F, v23 != 40) && v23 != 46
    || !sub_179A840(a2) )
  {
    v24 = a3;
LABEL_35:
    sub_17D5250(a1, a2, v24);
    return;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 && a4 )
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL);
}
