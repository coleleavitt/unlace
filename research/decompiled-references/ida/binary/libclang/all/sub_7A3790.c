__int64 __fastcall sub_7A3790(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  __int64 *v13; // rbx
  __int64 v14; // r13
  int v15; // r12d
  __int64 v16; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 128);
  if ( !v2 || (*(_BYTE *)(v2 + 10) & 0x20) == 0 )
    return 0;
  v5 = *(_QWORD *)(sub_798D40(a1) + 17344);
  v6 = sub_25E2710("__invoke", 8);
  v7 = (unsigned int)sub_25E2870(v5, "__invoke", 8, v6);
  v8 = (unsigned __int64 *)(*(_QWORD *)v5 + 8 * v7);
  v9 = *v8;
  if ( *v8 )
  {
    if ( v9 != -8 )
      goto LABEL_5;
    --*(_DWORD *)(v5 + 16);
  }
  v18 = *(_QWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 104) += 25LL;
  v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v5 + 32) >= v19 + 25 && v18 )
  {
    *(_QWORD *)(v5 + 24) = v19 + 25;
  }
  else
  {
    v26 = v8;
    v19 = sub_7A1DE0(v5 + 24, 25, 3);
    v8 = v26;
  }
  strcpy((char *)(v19 + 16), "__invoke");
  *(_QWORD *)v19 = 8;
  *(_QWORD *)(v19 + 8) = 0;
  *v8 = v19;
  ++*(_DWORD *)(v5 + 12);
  v20 = (unsigned __int64 *)(*(_QWORD *)v5 + 8LL * (unsigned int)sub_25E2C40(v5, (unsigned int)v7));
  v9 = *v20;
  if ( *v20 == -8 || !v9 )
  {
    do
    {
      do
      {
        v9 = v20[1];
        ++v20;
      }
      while ( !v9 );
    }
    while ( v9 == -8 );
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
      goto LABEL_6;
    goto LABEL_27;
  }
LABEL_5:
  v10 = *(_QWORD *)(v9 + 8);
  if ( v10 )
    goto LABEL_6;
LABEL_27:
  v21 = *(_QWORD *)(v5 + 120);
  if ( !v21
    || (v22 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v21 + 16LL))(v21, "__invoke", 8),
        *(_QWORD *)(v9 + 8) = v22,
        (v10 = v22) == 0) )
  {
    v23 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 104) += 24LL;
    v24 = (_QWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)(v24 + 3) && v23 )
      *(_QWORD *)(v5 + 24) = v24 + 3;
    else
      v24 = (_QWORD *)sub_7A1DE0(v5 + 24, 24, 3);
    v25 = *v24 & 0xFFFFFC0000000000LL;
    v24[1] = 0;
    *v24 = v25 | 0x1FFFC05;
    *(_QWORD *)(v9 + 8) = v24;
    v24[2] = v9;
    v10 = *(_QWORD *)(v9 + 8);
  }
LABEL_6:
  v11 = sub_7A0650(a1 + 64, v10);
  if ( !v11 )
    return 0;
  while ( 1 )
  {
    v12 = v11;
    v13 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = (__int64)v13;
    v15 = (v12 >> 2) & 1;
    if ( v15 )
    {
      v14 = 0;
      if ( v13 )
        v14 = *v13;
    }
    v16 = *(_QWORD *)(*(_QWORD *)(sub_7984D0(v14) + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v16 + 16) - 25 > 1 )
      v16 = sub_B0D320(v16);
    if ( ((*(_WORD *)(v16 + 18) >> 3) & 0x1F) == a2 )
      break;
    if ( (_BYTE)v15 )
    {
      if ( v13 )
      {
        v11 = v13[1];
        if ( v11 )
          continue;
      }
    }
    return 0;
  }
  if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x45 )
    return *(_QWORD *)(v14 + 48);
  return v14;
}

