__int64 __fastcall sub_187AD20(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v6; // rax
  int v7; // eax
  unsigned __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // r13
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v38; // [rsp+12h] [rbp-D6h] BYREF
  unsigned __int8 v39; // [rsp+13h] [rbp-D5h] BYREF
  int v40; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v41; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v42[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v44[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v45; // [rsp+98h] [rbp-50h]
  unsigned int v46; // [rsp+A0h] [rbp-48h]
  char v47; // [rsp+A4h] [rbp-44h]

  v3 = 0;
  v4 = *(_QWORD *)&byte_8[sub_A71450(*(_QWORD *)(*(_QWORD *)a1 + 248LL), *(_QWORD *)(a2 + 48)) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v4 & 8) == 0 )
    return v3;
  v6 = *(unsigned int *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL) + 4);
  if ( !v6 || (v6 & 2) == 0 )
    return v3;
  v7 = *(_DWORD *)(a1 + 16);
  if ( !v7 || v7 == 5 )
    return 0;
  v3 = *(unsigned __int8 *)(a1 + 35);
  if ( !(_BYTE)v3 )
    return 1;
  v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v8 = *(_QWORD *)v8;
  v9 = *(_BYTE *)(v8 + 8);
  v10 = v8 - 64;
  v11 = 0;
  if ( (v9 & 0x7Fu) - 58 < 4 )
    v11 = v10;
  sub_168B9F0((__int64)v42, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a2 + 24), 0x1714u, 0);
  v12 = 6;
  if ( !*(_QWORD *)(a1 + 24) )
    v12 = *(_DWORD *)(a1 + 16);
  if ( v45 )
  {
    sub_AE9DF0(v44, v12, 2u);
LABEL_22:
    if ( v45 )
    {
      sub_AE9DF0(v44, v11, 0xAu);
    }
    else if ( v47 )
    {
      v32 = sub_168B9E0(v42);
      v35 = v43;
      if ( v43 )
        v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
      v41 = v35;
      v36 = sub_1587BC0(v32, &v41, v30, v31, v33, v34);
      sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v46 + 8), v11, 0xAu);
    }
    goto LABEL_16;
  }
  if ( v47 )
  {
    v24 = sub_168B9E0(v42);
    v28 = v43;
    if ( v43 )
    {
      v37 = v24;
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
      v24 = v37;
    }
    v41 = v28;
    v29 = sub_1587BC0(v24, &v41, v24, v25, v26, v27);
    sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v46 + 8), v12, 2u);
    goto LABEL_22;
  }
LABEL_16:
  v38 = 1;
  v13 = sub_1588420((__int64)v42, &v38);
  v14 = v13;
  if ( *(_BYTE *)(v13 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v13 + 32), a2, 0xAu);
  }
  else if ( *(_BYTE *)(v13 + 132) )
  {
    v21 = sub_168B9E0((_QWORD *)v13);
    v22 = *(_QWORD *)(v14 + 16);
    if ( v22 )
      v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 32LL))(*(_QWORD *)(v14 + 16));
    v41 = v22;
    v23 = sub_1587BC0(v21, &v41, v17, v18, v19, v20);
    sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * *(unsigned int *)(v14 + 128) + 8), a2, 0xAu);
  }
  v40 = 4;
  v15 = sub_1587D10(v14, &v40);
  v39 = 0;
  v16 = sub_1588420(v15, &v39);
  LODWORD(v41) = 2;
  sub_1587D10(v16, (int *)&v41);
  sub_15F7200(v42);
  return v3;
}
