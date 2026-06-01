__int64 __fastcall sub_DA6440(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned __int64 v9; // r13
  __int64 v10; // rdx
  char *v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64); // rax
  unsigned int v18; // eax
  unsigned __int8 **v19; // rax
  __int64 v20; // rcx
  unsigned __int8 **v21; // r12
  __int64 v22; // rcx
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned int *v29; // rdi
  size_t v30; // r13
  const void *v31; // r14
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rdi
  unsigned __int8 **v35; // rbx
  __int64 v36; // rsi
  unsigned __int64 v37; // rsi
  _QWORD v38[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( *(char *)(a3 + 504) < 0 && *(char *)(sub_E0E500(a1) + 1) >= 0 )
  {
    v25 = sub_DFC980(*(_QWORD *)(a1 + 400));
    sub_E0FDF0(a1, v25, 2505, 0);
    return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24))
    && *(_DWORD *)(*(_QWORD *)(a1 + 400) + 24LL) )
  {
    return 0;
  }
  v5 = *(_BYTE *)(a3 + 504);
  if ( (v5 & 1) != 0 && (v5 & 0x10) != 0 && (*(_BYTE *)(a3 + 505) & 2) != 0 || *(_DWORD *)(a3 + 8) == 3 )
    return 1;
  v6 = *(_QWORD *)(a3 + 16);
  if ( (v6 & 4) != 0 )
    BUG();
  if ( *(char *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 28) < 0 )
    return sub_CDB0E0(a1, a2);
  if ( (int)sub_DFC980(*(_QWORD *)(a1 + 400)) >= 0 )
    goto LABEL_9;
  v26 = *(_QWORD *)(a3 + 16);
  if ( (v26 & 4) != 0 )
    BUG();
  v27 = *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF8LL) + 40);
  if ( (v27 & 7) != 0 )
    goto LABEL_9;
  v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v28 )
    goto LABEL_9;
  v29 = *(unsigned int **)(v28 + 16);
  v30 = *v29;
  v31 = v29 + 4;
  if ( j__strlen("__assert_rtn") == v30 )
  {
    if ( !v30 || !memcmp(v31, "__assert_rtn", v30) )
      goto LABEL_54;
    if ( j__strlen("__assert_fail") != v30 )
      goto LABEL_52;
    goto LABEL_51;
  }
  if ( j__strlen("__assert_fail") == v30 )
  {
    if ( !v30 )
      goto LABEL_54;
LABEL_51:
    if ( !memcmp(v31, "__assert_fail", v30) )
    {
LABEL_54:
      v32 = sub_DFC980(*(_QWORD *)(a1 + 400));
      sub_E0FF40(a1, v32, 5842, 0);
      return 0;
    }
LABEL_52:
    if ( j__strlen("_wassert") != v30 )
      goto LABEL_9;
    goto LABEL_53;
  }
  if ( j__strlen("_wassert") != v30 )
    goto LABEL_9;
  if ( !v30 )
    goto LABEL_54;
LABEL_53:
  if ( !memcmp(v31, "_wassert", v30) )
    goto LABEL_54;
LABEL_9:
  if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) == 0 )
  {
    v24 = sub_DFC980(*(_QWORD *)(a1 + 400));
    sub_E0FF40(a1, v24, 108, 0);
    return 0;
  }
  v8 = *(_QWORD *)(a3 + 16);
  if ( (v8 & 4) != 0 )
    BUG();
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(char *)(v9 + 28) < 0 )
    return 0;
  if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x26 )
  {
    if ( (*(_BYTE *)(v9 + 87) & 0x20) != 0 && (*(_BYTE *)(*(_QWORD *)(v9 + 184) + 84LL) & 3) == 0 )
      v9 = *(_QWORD *)(v9 + 184);
    v10 = *(_QWORD *)(sub_B68470(v9 + 72) + 16);
    v11 = (char *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v10 & 4) != 0 )
      v11 = *(char **)v11;
    if ( !v11 )
      BUG();
    if ( *(v11 - 36) < 0 )
      return 0;
    v12 = v9;
    if ( (*(_BYTE *)(v9 + 87) & 0x20) != 0 )
    {
      v33 = sub_DFC980(*(_QWORD *)(a1 + 400));
      v34 = 0;
      v35 = (unsigned __int8 **)sub_E0FF40(a1, v33, 2420, 1);
      if ( (*(_BYTE *)(v9 + 87) & 0x20) != 0 )
        v34 = *(_QWORD *)(v9 + 184);
      v36 = *(_QWORD *)(sub_B68470(v34 + 72) + 16);
      if ( (v36 & 4) != 0 )
        v37 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v37 = v36 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v37 )
        v37 -= 64LL;
      if ( v35 )
        sub_AC60B0(v35, v37, 0xAu);
      goto LABEL_63;
    }
  }
  else
  {
    v12 = 0;
  }
  if ( (*(_BYTE *)(a3 + 504) & 0x20) == 0
    && *(_BYTE *)(v9 + 81) >> 5 != 1
    && (*(_BYTE *)(v9 + 84) & 3) != 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24)) )
  {
    return 0;
  }
  if ( (unsigned __int8)sub_B59650(v9, (__int64)v38, 0, v7) && (*(_BYTE *)(v9 + 84) & 3) != 0 )
  {
    v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 72LL);
    if ( v16 == sub_9851D0
       ? sub_B5B8B0((_QWORD *)v9, v38, (__int64)sub_9851D0, v13, v14, v15)
       : (unsigned __int8)v16(v9) )
    {
      return 0;
    }
  }
  v18 = sub_DFC980(*(_QWORD *)(a1 + 400));
  v19 = (unsigned __int8 **)sub_E0FF40(a1, v18, 2419, 1);
  v21 = v19;
  if ( v19 )
  {
    sub_AC60B0(v19, (*(_BYTE *)(v9 + 84) & 3) != 0, 2u);
    sub_AC60B0(v21, v12 != 0, 2u);
    sub_AC60B0(v21, v9, 0xAu);
  }
  if ( !(unsigned __int8)sub_B59650(v9, (__int64)v38, 0, v20) || !v38[0] )
  {
LABEL_63:
    sub_E10070(a1, *(unsigned int *)(v9 + 24), 103);
    return 0;
  }
  if ( !(unsigned __int8)sub_B59650(v9, (__int64)v38, 0, v22) )
    BUG();
  sub_E10070(a1, *(unsigned int *)(v38[0] + 24LL), 103);
  return 0;
}

