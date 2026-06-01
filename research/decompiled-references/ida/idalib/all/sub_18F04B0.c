void __fastcall sub_18F04B0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  __int64 *v5; // r12
  bool v7; // zf
  __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned int v10; // r13d
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // r12
  __int64 v44[2]; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v45; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v46; // [rsp+20h] [rbp-D8h] BYREF
  char v47; // [rsp+28h] [rbp-D0h]
  _QWORD v48[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v50[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v51; // [rsp+A8h] [rbp-50h]
  unsigned int v52; // [rsp+B0h] [rbp-48h]
  char v53; // [rsp+B4h] [rbp-44h]

  v5 = (__int64 *)(a2 + 8);
  v7 = *(_QWORD *)(a1 + 8) == 0;
  v44[0] = a4;
  if ( v7 )
  {
    sub_168B9F0((__int64)v48, (__int64 *)(a2 + 8), a3, 0xD35u, 0);
    v43 = sub_1605D30((__int64)v48, v44);
    v46 = sub_EEC8C0(*(_QWORD *)(a1 + 16), (__int64)v44, a5);
    sub_1587DB0(v43, (__int64 *)&v46);
    sub_15F7200(v48);
    return;
  }
  v8 = (__int64 *)(a2 + 8);
  sub_168B9F0((__int64)v48, v8, a3, 0xD33u, 0);
  v9 = sub_EEC8C0(*(_QWORD *)(a1 + 16), (__int64)v8, a5);
  v10 = v9;
  v11 = HIDWORD(v9);
  if ( v51 )
  {
    v46 = v9;
    v47 = 1;
    sub_AEC610((__int64 *)v50, (__int64 *)&v46);
    if ( !v51 )
      goto LABEL_17;
    goto LABEL_9;
  }
  if ( v53 )
  {
    v25 = sub_168B9E0(v48);
    v26 = v49;
    if ( v49 )
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
    v45 = v26;
    v27 = sub_1587BC0(v25, &v45, v21, v22, v23, v24);
    v28 = *v27 + 32LL * v52;
    v46 = __PAIR64__(v11, v10);
    v47 = 1;
    sub_AEC610((__int64 *)(v28 + 8), (__int64 *)&v46);
    if ( !v51 )
    {
LABEL_17:
      if ( !v53 )
        goto LABEL_4;
      v33 = sub_168B9E0(v48);
      v34 = v49;
      if ( v49 )
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
      v46 = v34;
      v35 = sub_1587BC0(v33, (__int64 *)&v46, v29, v30, v31, v32);
      sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v52 + 8), *(_QWORD *)(a1 + 8), 0xAu);
      if ( !v51 )
      {
LABEL_21:
        if ( v53 )
        {
          v40 = sub_168B9E0(v48);
          v41 = v49;
          if ( v49 )
            v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
          v46 = v41;
          v42 = sub_1587BC0(v40, (__int64 *)&v46, v36, v37, v38, v39);
          sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v52 + 8), v44[0], 8u);
        }
        goto LABEL_4;
      }
LABEL_10:
      sub_AE9DF0(v50, v44[0], 8u);
      goto LABEL_4;
    }
LABEL_9:
    sub_AE9DF0(v50, *(_QWORD *)(a1 + 8), 0xAu);
    if ( !v51 )
      goto LABEL_21;
    goto LABEL_10;
  }
LABEL_4:
  sub_15F7200(v48);
  sub_168B9F0((__int64)v48, v5, *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0x172Eu, 0);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)(v12 + 40);
  if ( v51 )
  {
    sub_AE9DF0(v50, *(_QWORD *)(v12 + 40), 9u);
  }
  else if ( v53 )
  {
    v18 = sub_168B9E0(v48);
    v19 = v49;
    if ( v49 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
    v46 = v19;
    v20 = sub_1587BC0(v18, (__int64 *)&v46, v14, v15, v16, v17);
    sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v52 + 8), v13, 9u);
  }
  sub_15F7200(v48);
}
