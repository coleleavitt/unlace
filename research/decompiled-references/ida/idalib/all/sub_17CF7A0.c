__int64 __fastcall sub_17CF7A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  char v11; // r13
  char v12; // al
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  char v17; // al
  __int64 *v18; // r12
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+0h] [rbp-E8h]
  __int64 v28; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v30[200]; // [rsp+20h] [rbp-C8h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v28 = a2;
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v6 & 4) != 0 )
    v7 = *(_QWORD *)(v7 + 8);
  v8 = *(_BYTE *)(sub_B8E650(v7) + 8) & 0x7F;
  if ( v8 != 24 && v8 )
    return 0;
  v9 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v9 = *(_QWORD *)(v9 + 8);
  v10 = sub_B8E650(v9);
  LOBYTE(v3) = (*(_BYTE *)(v10 + 8) & 0x7F) == 0 || (*(_BYTE *)(v10 + 8) & 0x7F) == 24;
  if ( !(_BYTE)v3 )
    return 0;
  v11 = sub_B8D5B0(v28);
  v12 = sub_B8D5B0(a3);
  if ( v11 != 1 || v12 )
    return 0;
  if ( !sub_B8DA40(a3) )
  {
    v14 = *(_QWORD *)(v28 + 8) & 7LL;
    if ( *(char *)(v28 + 29) < 0 )
    {
      if ( !v14 )
        goto LABEL_18;
      v15 = sub_B8C660(v28);
    }
    else
    {
      if ( !v14 )
        goto LABEL_18;
      v15 = *(_QWORD *)(v28 - 8);
    }
    if ( v15 && *(_DWORD *)(sub_B8CAB0(v28) + 36) == 8 )
      return 0;
  }
LABEL_18:
  v16 = 1;
  v17 = sub_B844D0((_BYTE *)a3);
  if ( v17 != 2 )
    v16 = 2LL * (v17 == 5);
  v18 = (__int64 *)(a1 + 8);
  sub_168B9F0((__int64)v30, v18, *(_DWORD *)(v28 + 24), 0x1325u, 0);
  v19 = sub_17BA610((__int64)v30, &v28);
  v20 = v19;
  if ( *(_BYTE *)(v19 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v19 + 32), v16, 2u);
  }
  else if ( *(_BYTE *)(v19 + 132) )
  {
    v21 = sub_168B9E0((_QWORD *)v19);
    v25 = *(_QWORD *)(v20 + 16);
    if ( v25 )
    {
      v27 = v21;
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
      v21 = v27;
    }
    v29 = v25;
    v26 = sub_1587BC0(v21, &v29, v21, v22, v23, v24);
    sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * *(unsigned int *)(v20 + 128) + 8), v16, 2u);
  }
  sub_15F7200(v30);
  sub_168B9F0((__int64)v30, v18, *(_DWORD *)(a3 + 24), 0x70u, 0);
  sub_15F7200(v30);
  return v3;
}
