_QWORD *__fastcall sub_15BBF80(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r12d
  __int64 *v9; // r13
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  __int64 *v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1[1];
  if ( (*(_BYTE *)(v2 + 74) & 1) != 0 )
    return a1;
  v4 = *(_QWORD *)(sub_B8C330(v2) + 17504);
  v5 = sub_2244B30("Load", 4);
  v8 = sub_2244CB0(v4, "Load", 4, v5);
  v9 = (__int64 *)(*(_QWORD *)v4 + 8LL * v8);
  if ( *v9 )
  {
    if ( *v9 != -8 )
    {
      sub_989490(v21, v9, 0);
      v12 = *v21[0];
      v13 = *(__int64 **)(*v21[0] + 8);
      if ( v13 )
        goto LABEL_17;
      goto LABEL_6;
    }
    --*(_DWORD *)(v4 + 16);
  }
  v18 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 104) += 21LL;
  v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v4 + 32) >= v19 + 21 && v18 )
    *(_QWORD *)(v4 + 24) = v19 + 21;
  else
    v19 = sub_986170(v4 + 24, 21, 21, 3, v6, v7);
  strcpy((char *)(v19 + 16), "Load");
  *(_QWORD *)v19 = 4;
  *(_QWORD *)(v19 + 8) = 0;
  *v9 = v19;
  ++*(_DWORD *)(v4 + 12);
  v20 = sub_22450D0(v4, v8);
  sub_989490(v21, (__int64 *)(*(_QWORD *)v4 + 8LL * v20), 0);
  v12 = *v21[0];
  v13 = *(__int64 **)(*v21[0] + 8);
  if ( v13 )
    goto LABEL_17;
LABEL_6:
  v14 = *(_QWORD *)(v4 + 120);
  if ( !v14
    || (v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v14 + 16LL))(
                           v14,
                           "Load",
                           4),
        (*(_QWORD *)(v12 + 8) = v13) == 0) )
  {
    v15 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 104) += 24LL;
    v16 = (__int64 *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v4 + 32) >= (unsigned __int64)(v16 + 3) && v15 )
    {
      *(_QWORD *)(v4 + 24) = v16 + 3;
      v13 = (__int64 *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v13 = (__int64 *)sub_986170(v4 + 24, 24, 24, 3, v10, v11);
      v16 = v13;
    }
    v17 = *v13 & 0xFFFFF80000000000LL;
    v13[1] = 0;
    *v13 = v17 | 0x1FFFC05;
    *(_QWORD *)(v12 + 8) = v13;
    v13[2] = v12;
    goto LABEL_18;
  }
LABEL_17:
  v16 = v13;
LABEL_18:
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 5;
  v21[0] = v16;
  sub_15BBDA0(a1, (__int64 *)v21, 0, 0);
  return a1;
}
