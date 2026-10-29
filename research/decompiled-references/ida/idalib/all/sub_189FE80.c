void __fastcall sub_189FE80(_QWORD **a1)
{
  unsigned __int64 v1; // rcx
  char v2; // dl
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v23[11]; // [rsp+30h] [rbp-98h] BYREF
  char v24; // [rsp+88h] [rbp-40h]
  unsigned int v25; // [rsp+90h] [rbp-38h]
  char v26; // [rsp+94h] [rbp-34h]

  v1 = *(_QWORD *)(**a1 + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(**a1 + 16LL) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  v2 = *(_BYTE *)(*a1[1] + 28LL) & 0x7F;
  if ( (*(_BYTE *)(v1 + 8) & 0x7F) != 0x17 || v1 == 48 )
  {
    v4 = v2 == 22;
    v5 = 0;
  }
  else
  {
    v3 = *(_QWORD *)(v1 - 8);
    if ( (v3 & 7) != 0 )
    {
      v5 = 1;
      v4 = 2LL * (v2 == 22);
    }
    else
    {
      v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v4 )
      {
        v5 = 2;
        v4 = 2LL * (v2 == 22);
      }
      else
      {
        v5 = 1;
        if ( v2 == 22 )
          v4 = 2;
      }
    }
  }
  sub_168B9F0((__int64)v21, a1[3], *(_DWORD *)(*a1[2] + 24LL), 0x1100u, 0);
  if ( v24 )
  {
    sub_AE9DF0(v23, v5, 2u);
    if ( v24 )
      goto LABEL_17;
  }
  else
  {
    if ( !v26 )
      goto LABEL_13;
    v10 = sub_168B9E0(v21);
    v11 = v22;
    if ( v22 )
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
    v20 = v11;
    v12 = sub_1587BC0(v10, &v20, v6, v7, v8, v9);
    sub_AE9DF0((unsigned __int8 **)(*v12 + 32LL * v25 + 8), v5, 2u);
    if ( v24 )
    {
LABEL_17:
      sub_AE9DF0(v23, v4, 2u);
      goto LABEL_13;
    }
  }
  if ( v26 )
  {
    v17 = sub_168B9E0(v21);
    v18 = v22;
    if ( v22 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
    v20 = v18;
    v19 = sub_1587BC0(v17, &v20, v13, v14, v15, v16);
    sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v25 + 8), v4, 2u);
  }
LABEL_13:
  sub_15F7200(v21);
  sub_168B9F0((__int64)v21, a1[3], *(_DWORD *)(**a1 + 24LL), 0x70u, 0);
  sub_15F7200(v21);
}
