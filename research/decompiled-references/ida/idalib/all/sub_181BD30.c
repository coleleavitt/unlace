__int64 __fastcall sub_181BD30(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned int v23; // [rsp+Ch] [rbp-CCh]
  __int64 v24; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v25[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v27; // [rsp+40h] [rbp-98h] BYREF
  char v28; // [rsp+98h] [rbp-40h]
  unsigned int v29; // [rsp+A0h] [rbp-38h]
  char v30; // [rsp+A4h] [rbp-34h]

  v6 = a3;
  v7 = a5;
  v8 = (__int64)a2;
  v9 = a2[16];
  if ( !v9 )
  {
    a2 = (__int64 *)a2[13];
    v23 = a4;
    sub_7052B0(a2 + 12, (__int64)a2, a3, a4, a5, a6);
    v9 = *(_QWORD *)(v8 + 128);
    a4 = v23;
    if ( !v9 )
      BUG();
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 88) + 74LL) & 1) == 0 || v7 == 3 )
    return 0;
  if ( (_BYTE)a4 )
  {
    if ( (unsigned int)sub_E777E0(v8, (__int64)a2, a3, a4, a5, a6) != v7 )
      goto LABEL_6;
    return 0;
  }
  if ( (int)sub_E777E0(v8, (__int64)a2, a3, a4, a5, a6) <= v7 )
    return 0;
LABEL_6:
  sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), v6, 0x1051u, 0);
  LODWORD(v24) = 0;
  sub_1587D10((__int64)v25, (int *)&v24);
  sub_15F7200(v25);
  v14 = *(_QWORD *)(v8 + 128);
  if ( !v14 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), v10, v11, v12, v13);
    v14 = *(_QWORD *)(v8 + 128);
    if ( !v14 )
      BUG();
  }
  sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)(v14 + 88) + 24LL), 0x170Bu, 0);
  if ( v28 )
  {
    sub_AE9DF0(&v27, v8, 0xAu);
    sub_15F7200(v25);
    return 1;
  }
  else
  {
    if ( v30 )
    {
      v18 = sub_168B9E0(v25);
      v21 = v26;
      if ( v26 )
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
      v24 = v21;
      v22 = sub_1587BC0(v18, &v24, v16, v17, v19, v20);
      sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v29 + 8), v8, 0xAu);
    }
    sub_15F7200(v25);
    return 1;
  }
}
