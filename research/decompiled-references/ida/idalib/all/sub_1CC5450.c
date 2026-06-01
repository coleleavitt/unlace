void __fastcall sub_1CC5450(__int64 a1, __int64 a2, double a3)
{
  __int64 *v4; // r12
  unsigned __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rsi
  __int64 *v8; // r12
  unsigned __int64 v9; // rdi
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v21; // [rsp+30h] [rbp-88h] BYREF
  char v22; // [rsp+88h] [rbp-30h]
  unsigned int v23; // [rsp+90h] [rbp-28h]
  char v24; // [rsp+94h] [rbp-24h]

  v4 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  v5 = **(_QWORD **)(a1 + 8);
  if ( v5 )
    v6 = sub_EEB7E0(v5, a2, a3);
  else
    v6 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 16LL))(**(_QWORD **)(a1 + 16));
  v7 = (__int64)v4;
  sub_168B9F0((__int64)v19, v4, v6, 0x13FDu, 0);
  sub_15F7200(v19);
  v8 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  v9 = **(_QWORD **)(a1 + 24);
  if ( v9 )
    v10 = sub_EEB7E0(v9, v7, a3);
  else
    v10 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 32) + 16LL))(**(_QWORD **)(a1 + 32));
  sub_168B9F0((__int64)v19, v8, v10, 0x1908u, 0);
  if ( v22 )
  {
    sub_AE9DF0(&v21, 0, 2u);
  }
  else if ( v24 )
  {
    v13 = sub_168B9E0(v19);
    v16 = v20;
    if ( v20 )
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
    v18 = v16;
    v17 = sub_1587BC0(v13, &v18, v11, v12, v14, v15);
    sub_AE9DF0((unsigned __int8 **)(*v17 + 32LL * v23 + 8), 0, 2u);
  }
  sub_15F7200(v19);
}
