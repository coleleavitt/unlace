char __fastcall sub_18255F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  char result; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v36[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v38; // [rsp+30h] [rbp-88h] BYREF
  char v39; // [rsp+88h] [rbp-30h]
  unsigned int v40; // [rsp+90h] [rbp-28h]
  char v41; // [rsp+94h] [rbp-24h]

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43;
  if ( (unsigned int)v7 > 1 )
  {
    v27 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v27 > 1 )
      goto LABEL_8;
    v6 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v27, a4);
    if ( !v6 )
      goto LABEL_8;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v6 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      v6 = *(_QWORD *)v9;
      v7 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v9 + 16LL) - 43;
      if ( (unsigned int)v7 <= 1 )
        break;
      v10 = sub_F63050(v6, a2, v7, a4);
      v8 = *(_QWORD *)(v10 + 32);
      if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  v11 = sub_1804350(v8, a2, v7, a4);
  v16 = v11;
  if ( !v11
    || (result = sub_F62670(v11, nullptr, v12, v13, v14, v15)) == 0
    && (v22 = sub_F60F10(v16, 0, v18, v19, v20, v21), (result = sub_18043C0((__int64)v22, 0, v23, v24, v25, v26)) == 0) )
  {
LABEL_8:
    sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x1D10u, 0);
    if ( v39 )
    {
      sub_AE9DF0(&v38, a3, 0x10u);
    }
    else if ( v41 )
    {
      v30 = sub_168B9E0(v36);
      v33 = v37;
      if ( v37 )
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
      v35 = v33;
      v34 = sub_1587BC0(v30, &v35, v28, v29, v31, v32);
      sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v40 + 8), a3, 0x10u);
    }
    sub_15F7200(v36);
    return 0;
  }
  return result;
}
