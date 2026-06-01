__int64 __fastcall sub_1ADA000(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
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
  unsigned __int8 *v23; // [rsp+30h] [rbp-98h] BYREF
  char v24; // [rsp+88h] [rbp-40h]
  unsigned int v25; // [rsp+90h] [rbp-38h]
  char v26; // [rsp+94h] [rbp-34h]

  v4 = *a1 + 200;
  v5 = sub_168B6E0((__int64)a1);
  if ( sub_FF8060(v4, (__int64)"cl_khr_subgroups", 16, v5) )
    return 0;
  v7 = *a1 + 200;
  v8 = sub_168B6E0((__int64)a1);
  if ( sub_FF8060(v7, (__int64)"__opencl_c_subgroups", 20, v8) )
    return 0;
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v9 = *(_DWORD *)(a2 + 24);
  }
  else if ( *(char *)(a2 + 2) >= 0
         || (v9 = sub_EEB7E0(
                    *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                    (__int64)"__opencl_c_subgroups",
                    a3)) == 0 )
  {
    v9 = sub_EEB7E0(*(_QWORD *)(a2 + 32), (__int64)"__opencl_c_subgroups", a3);
    if ( !v9 )
    {
      if ( *(_DWORD *)(a2 + 16) )
      {
        v10 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
        if ( v10 )
          v9 = sub_EEB7E0(v10, (__int64)"__opencl_c_subgroups", a3);
      }
    }
  }
  sub_168B9F0((__int64)v21, a1, v9, 0x125Du, 0);
  if ( v24 )
  {
    sub_AE9DF0(&v23, 1, 2u);
  }
  else if ( v26 )
  {
    v17 = sub_168B9E0(v21);
    v18 = v22;
    if ( v22 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
    v20 = v18;
    v19 = sub_1587BC0(v17, &v20, v13, v14, v15, v16);
    sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v25 + 8), 1, 2u);
  }
  v11 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( v11 && (*(_BYTE *)(v11 + 28) & 0x7Fu) - 34 >= 6 )
    v11 = 0;
  v20 = v11;
  v12 = sub_16CEDA0((__int64)v21, &v20);
  if ( *(_BYTE *)(v12 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v12 + 32), (__int64)"cl_khr_subgroups or __opencl_c_subgroups", 1u);
  }
  else if ( *(_BYTE *)(v12 + 132) )
  {
    sub_1AD78E0((_QWORD *)v12, (__int64)"cl_khr_subgroups or __opencl_c_subgroups");
  }
  sub_15F7200(v21);
  return 1;
}
