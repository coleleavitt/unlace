__int64 __fastcall sub_1A03540(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v18[11]; // [rsp+30h] [rbp-98h] BYREF
  char v19; // [rsp+88h] [rbp-40h]
  unsigned int v20; // [rsp+90h] [rbp-38h]
  char v21; // [rsp+94h] [rbp-34h]

  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 57 > 1 )
  {
    v7 = sub_19F5590(v5, a2, a3, a4);
    if ( sub_F580C0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL)) && (!v7 || *(_DWORD *)(v7 + 20) <= 4u) )
      return 1;
  }
  else if ( sub_F580C0(v5) && *(_DWORD *)(v5 + 20) <= 4u )
  {
    return 1;
  }
  sub_168B9F0((__int64)v16, a1, *(_DWORD *)(a3 + 24), 0xF2Bu, 0);
  if ( v19 )
  {
    sub_AE9DF0(v18, a3, 0x10u);
  }
  else
  {
    if ( !v21 )
    {
LABEL_7:
      sub_15F7200(v16);
      return 0;
    }
    v10 = sub_168B9E0(v16);
    v13 = v17;
    if ( v17 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
    v15 = v13;
    v14 = sub_1587BC0(v10, &v15, v8, v9, v11, v12);
    sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * v20 + 8), a3, 0x10u);
  }
  if ( !v19 )
  {
    if ( v21 )
      sub_19FC8D0((__int64)v16, (__int64)"float/float1/float2/float3/float4");
    goto LABEL_7;
  }
  sub_AE9DF0(v18, (__int64)"float/float1/float2/float3/float4", 1u);
  sub_15F7200(v16);
  return 0;
}
