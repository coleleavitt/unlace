void __fastcall sub_1868B70(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4, double a5)
{
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  bool v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int8 v20; // dl
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r13
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rax
  unsigned __int8 v44[16]; // [rsp+Ch] [rbp-ECh] BYREF
  bool v45; // [rsp+1Ch] [rbp-DCh] BYREF
  bool v46; // [rsp+1Dh] [rbp-DBh] BYREF
  bool v47; // [rsp+1Eh] [rbp-DAh] BYREF
  unsigned __int8 v48; // [rsp+1Fh] [rbp-D9h] BYREF
  __int64 v49; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v51[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v53[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v54; // [rsp+A8h] [rbp-50h]
  unsigned int v55; // [rsp+B0h] [rbp-48h]
  char v56; // [rsp+B4h] [rbp-44h]

  v44[0] = a4;
  v6 = sub_EEB7E0(a2, a2, a5);
  v7 = sub_EEC8C0(a2, a2, a5);
  v8 = *(_QWORD *)(a1 + 48);
  v50 = v7;
  v9 = *(_QWORD *)(a1 + 40);
  if ( !v9 )
  {
    if ( v8 )
      goto LABEL_5;
LABEL_9:
    v13 = 0;
    v12 = 0;
    goto LABEL_10;
  }
  if ( !v8 )
    goto LABEL_9;
  v6 = *(_DWORD *)(v9 + 24);
  if ( (*(_BYTE *)(v8 + 28) & 4) != 0 )
    v50 = sub_B98B90(v8);
  else
    v50 = 0;
LABEL_5:
  v10 = *(_QWORD *)v8;
  v11 = (*(__int64 *)v8 >> 1) & 3;
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                      + 8LL * *(unsigned int *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                      - 8);
      v13 = v12 != 0;
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v12 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = v12 != 0;
LABEL_10:
  sub_168B9F0((__int64)v51, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), v6, 0x1787u, 0);
  if ( v54 )
  {
    sub_AE9DF0(v53, *(_QWORD *)(a1 + 24), 0xAu);
    if ( v54 )
    {
LABEL_23:
      sub_AE9DF0(v53, a3, 0xAu);
      goto LABEL_12;
    }
  }
  else
  {
    if ( !v56 )
      goto LABEL_12;
    v34 = sub_168B9E0(v51);
    v35 = v52;
    if ( v52 )
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
    v49 = v35;
    v36 = sub_1587BC0(v34, &v49, v30, v31, v32, v33);
    sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v55 + 8), *(_QWORD *)(a1 + 24), 0xAu);
    if ( v54 )
      goto LABEL_23;
  }
  if ( v56 )
  {
    v41 = sub_168B9E0(v51);
    v42 = v52;
    if ( v52 )
      v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
    v49 = v42;
    v43 = sub_1587BC0(v41, &v49, v37, v38, v39, v40);
    sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v55 + 8), a3, 0xAu);
  }
LABEL_12:
  v45 = (*(_BYTE *)(a3 + 84) & 3) == 2;
  v14 = sub_1588420((__int64)v51, (unsigned __int8 *)&v45);
  v15 = sub_15890D0(v14, v44);
  v46 = (*(_BYTE *)(a3 + 28) & 0x7F) == 38;
  v16 = sub_1588420(v15, (unsigned __int8 *)&v46);
  v17 = sub_15890D0(v16, (unsigned __int8 *)(a1 + 32));
  v47 = v13;
  v18 = sub_1588420(v17, (unsigned __int8 *)&v47);
  v19 = *(_QWORD *)(a1 + 48);
  v20 = 0;
  if ( v19 )
    v20 = ((*(_BYTE *)(v19 + 28) >> 2) ^ 1) & 1;
  v48 = v20;
  v21 = sub_1588420(v18, &v48);
  v22 = v21;
  if ( *(_BYTE *)(v21 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v21 + 32), v12, 0xAu);
  }
  else if ( *(_BYTE *)(v21 + 132) )
  {
    v27 = sub_168B9E0((_QWORD *)v21);
    v28 = *(_QWORD *)(v22 + 16);
    if ( v28 )
      v28 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 32LL))(*(_QWORD *)(v22 + 16));
    v49 = v28;
    v29 = sub_1587BC0(v27, &v49, v23, v24, v25, v26);
    sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * *(unsigned int *)(v22 + 128) + 8), v12, 0xAu);
  }
  sub_15884C0(v22, &v50);
  sub_15F7200(v51);
}
