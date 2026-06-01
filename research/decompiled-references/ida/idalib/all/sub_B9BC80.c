__int64 __fastcall sub_B9BC80(__int64 a1, int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned __int64 v21; // rbx
  __int64 v22; // r12
  __int64 *v23; // rbx
  __int64 v24; // r13
  int v25; // r12d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 *v30[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(sub_B8C330(a1) + 17504);
  v5 = sub_2244B30("__invoke", 8);
  v8 = (unsigned int)sub_2244CB0(v4, "__invoke", 8, v5);
  v9 = (__int64 *)(*(_QWORD *)v4 + 8 * v8);
  if ( !*v9 )
  {
LABEL_8:
    v18 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 104) += 25LL;
    v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v4 + 32) >= v19 + 25 && v18 )
      *(_QWORD *)(v4 + 24) = v19 + 25;
    else
      v19 = sub_986170(v4 + 24, 25, 25, 3, v6, v7);
    strcpy((char *)(v19 + 16), "__invoke");
    *(_QWORD *)v19 = 8;
    *(_QWORD *)(v19 + 8) = 0;
    *v9 = v19;
    ++*(_DWORD *)(v4 + 12);
    v20 = sub_22450D0(v4, (unsigned int)v8);
    sub_989490(v30, (__int64 *)(*(_QWORD *)v4 + 8LL * v20), 0);
    v14 = *v30[0];
    v15 = *(_QWORD **)(*v30[0] + 8);
    if ( v15 )
      goto LABEL_12;
    goto LABEL_4;
  }
  if ( *v9 == -8 )
  {
    --*(_DWORD *)(v4 + 16);
    goto LABEL_8;
  }
  sub_989490(v30, v9, 0);
  v14 = *v30[0];
  v15 = *(_QWORD **)(*v30[0] + 8);
  if ( v15 )
    goto LABEL_12;
LABEL_4:
  v16 = *(_QWORD *)(v4 + 120);
  if ( !v16
    || (v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v16 + 16LL))(
                          v16,
                          "__invoke",
                          8),
        (*(_QWORD *)(v14 + 8) = v15) == 0) )
  {
    v15 = (_QWORD *)sub_B9B750((__int64 *)(v4 + 24), 24, 3u);
    v17 = *v15 & 0xFFFFF80000000000LL;
    v15[1] = 0;
    *v15 = v17 | 0x1FFFC05;
    *(_QWORD *)(v14 + 8) = v15;
    v15[2] = v14;
  }
LABEL_12:
  v21 = sub_B94670(a1 + 64, (__int64)v15, v10, v11, v12, v13);
  if ( !v21 )
    return 0;
  while ( 1 )
  {
    v22 = v21;
    v23 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
    v24 = (__int64)v23;
    v25 = (v22 >> 2) & 1;
    if ( v25 )
    {
      v24 = 0;
      if ( v23 )
        v24 = *v23;
    }
    v26 = *(_QWORD *)(*(_QWORD *)(sub_B8BF30(v24) + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v28 = (unsigned int)*(unsigned __int8 *)(v26 + 16) - 25;
    if ( (unsigned int)v28 > 1 )
      v26 = sub_F63050(v26, v15, v28, v27);
    if ( ((*(_WORD *)(v26 + 20) >> 2) & 0x3F) == a2 )
      break;
    if ( v25 )
    {
      if ( v23 )
      {
        v21 = v23[1];
        if ( v21 )
          continue;
      }
    }
    return 0;
  }
  if ( (*(_BYTE *)(v24 + 28) & 0x7F) != 0x47 )
    return v24;
  return *(_QWORD *)(v24 + 48);
}
