__int64 __fastcall sub_16DDD00(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+Ch] [rbp-C4h] BYREF
  char v15; // [rsp+14h] [rbp-BCh]
  _QWORD v16[2]; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+28h] [rbp-A8h]
  __int64 v18[11]; // [rsp+38h] [rbp-98h] BYREF
  char v19; // [rsp+90h] [rbp-40h]
  unsigned int v20; // [rsp+98h] [rbp-38h]
  char v21; // [rsp+9Ch] [rbp-34h]

  if ( *(char *)(*(_QWORD *)(a1 + 232) + 15LL) < 0 )
    return 0;
  sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), a2, 0x1307u, 0);
  if ( v19 )
  {
    v14 = a3;
    v15 = 1;
    sub_AEC610(v18, &v14);
  }
  else if ( v21 )
  {
    v9 = sub_168B9E0(v16);
    v10 = v17;
    if ( v17 )
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
    v13 = v10;
    v11 = sub_1587BC0(v9, &v13, v5, v6, v7, v8);
    v12 = *v11 + 32LL * v20;
    v14 = a3;
    v15 = 1;
    sub_AEC610((__int64 *)(v12 + 8), &v14);
  }
  sub_15F7200(v16);
  return 1;
}
