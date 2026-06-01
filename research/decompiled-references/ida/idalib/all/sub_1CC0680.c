char __fastcall sub_1CC0680(__int64 *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  int v5; // ebp
  char v7; // al
  unsigned __int8 v8; // al
  int v9; // eax
  unsigned __int8 v10; // cl
  _QWORD *v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r13
  __int64 *v18; // r15
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r12
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v43; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v46[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v48[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v49; // [rsp+98h] [rbp-50h]
  unsigned int v50; // [rsp+A0h] [rbp-48h]
  char v51; // [rsp+A4h] [rbp-44h]

  v5 = a4;
  v7 = *(_BYTE *)(a2 + 28);
  v43 = a2;
  v8 = v7 & 0x7F;
  if ( v8 != 72 )
  {
    if ( v8 == 69 )
    {
      v5 = (a4 != 0) + 2;
    }
    else if ( v8 == 71 )
    {
      v5 = 4;
    }
    else if ( (unsigned int)v8 - 35 <= 3 )
    {
      v5 = 5;
    }
    else if ( (unsigned int)v8 - 40 <= 6 )
    {
      v5 = 6;
    }
    else if ( (unsigned int)v8 - 58 <= 3 )
    {
      v5 = 7;
    }
    else if ( v8 != 62 || (v5 = 8, (*(_BYTE *)(a1[29] + 1) & 0x10) == 0) )
    {
      sub_168B9F0((__int64)v46, a1 + 1, a3, 0x142Bu, 0);
      LODWORD(v45) = (*(_BYTE *)(a1[29] + 1) & 0x10) != 0;
      sub_1588370((__int64)v46, (unsigned int *)&v45);
      sub_15F7200(v46);
      sub_168B9F0((__int64)v46, a1 + 1, *(_DWORD *)(v43 + 24), 0x18DEu, 0);
      sub_15F7200(v46);
      LOBYTE(v9) = 1;
      return v9;
    }
  }
  v10 = *(_BYTE *)(sub_B8EAA0(a1[68]) + 8) & 0x7F;
  if ( v10 > 0x12u )
  {
    if ( ((v10 + 94) & 0x7Fu) > 5 )
      goto LABEL_13;
LABEL_27:
    sub_168B9F0((__int64)v46, a1 + 1, a3, 0x1423u, 0);
    sub_17BA610((__int64)v46, &v43);
    sub_15F7200(v46);
    LOBYTE(v9) = 1;
    return v9;
  }
  if ( ((1LL << v10) & 0x40182) != 0 )
    goto LABEL_27;
LABEL_13:
  v11 = (_QWORD *)(*(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v43 + 16) & 4) != 0 )
    v11 = (_QWORD *)*v11;
  v12 = sub_B8EAA0((__int64)v11);
  v17 = sub_B8EAA0(a1[68]);
  if ( (*(_BYTE *)(v17 + 8) & 0x7F) == 0x18 || (*(_BYTE *)(v17 + 8) & 0x7F) == 0 )
  {
    v9 = sub_B91990(v17, v12, v13, v14, v15, v16) ^ 1;
    goto LABEL_18;
  }
  if ( v12 )
  {
    v23 = sub_B91570(v17, a2, v13, v14, v15, v16);
    LOBYTE(v9) = v23 != sub_B91570(v12, a2, v24, v25, v26, v27);
LABEL_18:
    if ( !(_BYTE)v9 )
      return v9;
  }
  v18 = a1 + 1;
  if ( (*(_BYTE *)(v12 + 8) & 0x7F) != 0 )
  {
    v19 = sub_B8C1B0(v12);
    v20 = 5162;
    v44 = v19;
    if ( *(char *)a1[29] < 0 )
      v20 = ((*(_BYTE *)(v17 + 8) + 70) & 0x7Fu) < 4 ? 5162 : 5621;
    sub_168B9F0((__int64)v46, v18, a3, v20, 0);
    if ( v49 )
    {
      sub_AE9DF0(v48, v5, 2u);
    }
    else if ( v51 )
    {
      v39 = sub_168B9E0(v46);
      v40 = v47;
      if ( v47 )
        v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
      v45 = v40;
      v41 = sub_1587BC0(v39, &v45, v35, v36, v37, v38);
      sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v50 + 8), v5, 2u);
    }
    v21 = sub_17BA610((__int64)v46, &v43);
    v22 = sub_17BA610(v21, &v44);
    LOBYTE(v45) = (*(_BYTE *)(v44 + 28) & 0x7Fu) - 59 <= 2;
    sub_1588420(v22, (unsigned __int8 *)&v45);
    sub_15F7200(v46);
  }
  else
  {
    sub_168B9F0((__int64)v46, v18, a3, 0x1429u, 0);
    if ( v49 )
    {
      sub_AE9DF0(v48, v5, 2u);
    }
    else if ( v51 )
    {
      v32 = sub_168B9E0(v46);
      v33 = v47;
      if ( v47 )
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
      v45 = v33;
      v34 = sub_1587BC0(v32, &v45, v28, v29, v30, v31);
      sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v50 + 8), v5, 2u);
    }
    sub_17BA610((__int64)v46, &v43);
    sub_15F7200(v46);
  }
  sub_168B9F0((__int64)v46, v18, *(_DWORD *)(v43 + 24), 0x18DEu, 0);
  sub_15F7200(v46);
  LOBYTE(v9) = ((*(_BYTE *)(v17 + 8) + 70) & 0x7Fu) <= 3;
  return v9;
}
