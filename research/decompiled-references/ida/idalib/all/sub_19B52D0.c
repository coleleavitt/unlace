void __fastcall sub_19B52D0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 *v22; // rbp
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
  __int64 v34; // r13
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r13
  __int64 v42; // rax
  _QWORD *v43; // rax
  bool v44; // [rsp+1h] [rbp-C1h] BYREF
  __int64 v45; // [rsp+2h] [rbp-C0h] BYREF
  _QWORD v46[2]; // [rsp+Ah] [rbp-B8h] BYREF
  __int64 v47; // [rsp+1Ah] [rbp-A8h]
  unsigned __int8 *v48[11]; // [rsp+2Ah] [rbp-98h] BYREF
  char v49; // [rsp+82h] [rbp-40h]
  unsigned int v50; // [rsp+8Ah] [rbp-38h]
  char v51; // [rsp+8Eh] [rbp-34h]

  if ( **(_BYTE **)a1 )
  {
    sub_168B9F0((__int64)v46, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), **(_DWORD **)(a1 + 8), 0x1055u, 0);
    v2 = **(_QWORD **)(a1 + 24);
    v3 = *(_QWORD *)(v2 + 40);
    if ( v49 )
    {
      sub_AE9DF0(v48, *(_QWORD *)(v2 + 40), 9u);
    }
    else
    {
      if ( !v51 )
        goto LABEL_4;
      v19 = sub_168B9E0(v46);
      v20 = v47;
      if ( v47 )
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
      v45 = v20;
      v21 = sub_1587BC0(v19, &v45, v15, v16, v17, v18);
      sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v50 + 8), v3, 9u);
    }
    if ( v49 )
    {
      sub_AE9DF0(v48, a2, 2u);
    }
    else
    {
      if ( !v51 )
        goto LABEL_4;
      v41 = sub_168B9E0(v46);
      v42 = v47;
      if ( v47 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
      v45 = v42;
      v43 = sub_1587BC0(v41, &v45, v37, v38, v39, v40);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v50 + 8), a2, 2u);
    }
    v22 = *(__int64 **)(a1 + 32);
    if ( v49 )
    {
      sub_AE9DF0(v48, *v22, 9u);
    }
    else if ( v51 )
    {
      v34 = sub_168B9E0(v46);
      v35 = v47;
      if ( v47 )
        v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
      v45 = v35;
      v36 = sub_1587BC0(v34, &v45, v30, v31, v32, v33);
      sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v50 + 8), *v22, 9u);
    }
LABEL_4:
    sub_15F7200(v46);
    sub_168B9F0(
      (__int64)v46,
      (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL),
      *(_DWORD *)(**(_QWORD **)(a1 + 24) + 24LL),
      0x1915u,
      0);
    v44 = sub_B74C70(**(_QWORD **)(a1 + 24));
    v4 = sub_1588420((__int64)v46, (unsigned __int8 *)&v44);
    v5 = **(_QWORD **)(a1 + 24);
    v6 = *(_QWORD *)(v5 + 40);
    if ( *(_BYTE *)(v4 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v4 + 32), *(_QWORD *)(v5 + 40), 9u);
    }
    else
    {
      if ( !*(_BYTE *)(v4 + 132) )
      {
LABEL_6:
        sub_15F7200(v46);
        return;
      }
      v11 = sub_168B9E0((_QWORD *)v4);
      v12 = *(_QWORD *)(v4 + 16);
      if ( v12 )
        v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 32LL))(*(_QWORD *)(v4 + 16));
      v45 = v12;
      v13 = sub_1587BC0(v11, &v45, v7, v8, v9, v10);
      sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * *(unsigned int *)(v4 + 128) + 8), v6, 9u);
    }
    v14 = *(__int64 **)(a1 + 40);
    if ( *(_BYTE *)(v4 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v4 + 32), *v14, 0xCu);
    }
    else if ( *(_BYTE *)(v4 + 132) )
    {
      v27 = sub_168B9E0((_QWORD *)v4);
      v28 = *(_QWORD *)(v4 + 16);
      if ( v28 )
        v28 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 32LL))(*(_QWORD *)(v4 + 16));
      v45 = v28;
      v29 = sub_1587BC0(v27, &v45, v23, v24, v25, v26);
      sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * *(unsigned int *)(v4 + 128) + 8), *v14, 0xCu);
    }
    goto LABEL_6;
  }
}
