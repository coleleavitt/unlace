__int64 __fastcall sub_18760B0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned __int64 v22; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v24[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v26; // [rsp+30h] [rbp-98h] BYREF
  char v27; // [rsp+88h] [rbp-40h]
  unsigned int v28; // [rsp+90h] [rbp-38h]
  char v29; // [rsp+94h] [rbp-34h]

  if ( !*a3 )
  {
    *a3 = (__int64)a2;
    return 0;
  }
  v4 = (__int64 *)(a1 + 8);
  v5 = *a2;
  v6 = (*a2 >> 1) & 3;
  if ( v6 == 1 )
  {
    v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v6 != 2 )
    {
LABEL_7:
      v10 = sub_B98AD0((__int64)a2);
      v11 = sub_B98AF0((__int64)a2);
      sub_168B9F0((__int64)v24, v4, v11, 0x107Eu, 0);
      v22 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      v9 = sub_162B6D0((__int64)v24, (__int64 *)&v22);
      goto LABEL_8;
    }
    v7 = *(_QWORD *)(*(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                   + 8LL * *(unsigned int *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                   - 8);
  }
  if ( !v7 )
    goto LABEL_7;
  v8 = sub_B98AF0((__int64)a2);
  sub_168B9F0((__int64)v24, v4, v8, 0x1082u, 0);
  v22 = *(_QWORD *)(v7 + 40);
  v9 = sub_15894B0((__int64)v24, (__int64 *)&v22);
LABEL_8:
  v12 = v9;
  v23 = sub_B98B90((__int64)a2);
  sub_1587DB0(v12, &v23);
  sub_15F7200(v24);
  v13 = sub_B98AF0(*a3);
  sub_168B9F0((__int64)v24, v4, v13, 0x1890u, 0);
  if ( v27 )
  {
    sub_AE9DF0(&v26, 0, 2u);
  }
  else if ( v29 )
  {
    v17 = sub_168B9E0(v24);
    v20 = v25;
    if ( v25 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
    v23 = v20;
    v21 = sub_1587BC0(v17, &v23, v15, v16, v18, v19);
    sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v28 + 8), 0, 2u);
  }
  v23 = sub_B98B90(*a3);
  sub_1587DB0((__int64)v24, &v23);
  sub_15F7200(v24);
  return 1;
}
