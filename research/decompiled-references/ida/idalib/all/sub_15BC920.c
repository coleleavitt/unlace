__int64 *__fastcall sub_15BC920(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 **v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-D0h]
  __int64 v18; // [rsp+10h] [rbp-C8h]
  __int64 v19; // [rsp+18h] [rbp-C0h]
  __int16 v20; // [rsp+20h] [rbp-B8h]
  void *v21; // [rsp+28h] [rbp-B0h]
  __int64 v22; // [rsp+30h] [rbp-A8h]
  _BYTE v23[48]; // [rsp+38h] [rbp-A0h] BYREF
  void *ptr; // [rsp+68h] [rbp-70h]
  __int64 v25; // [rsp+70h] [rbp-68h]
  _BYTE v26[96]; // [rsp+78h] [rbp-60h] BYREF

  v1 = a1;
  if ( (*(_BYTE *)(a1[1] + 74) & 1) == 0 )
  {
    v16 = a1;
    v3 = *(_QWORD *)(sub_15BAC80((__int64)a1) + 48);
    v4 = *a1;
    v17 = 0;
    ptr = v26;
    v19 = 0;
    v5 = *(_QWORD *)(v4 + 248);
    v18 = *(_QWORD *)(v5 + 18632);
    v20 = 256;
    v21 = v23;
    v22 = 0x200000000LL;
    v25 = 0x600000000LL;
    v17 = sub_B87BD0(v5 + 17536, *(_QWORD *)(*(_QWORD *)(v1[1] + 48) + 8LL));
    v6 = sub_15BB0A0(&v16, "__builtin_hlsl_resource_uninitializedhandle", 0x2Bu, v3, 0x80u);
    v7 = sub_15BAFF0((__int64)v6, 128, 0x81u);
    v1 = sub_15B9700(v7, 128, v8, v9, v10, v11);
    sub_15B9700((__int64)&v16, 128, v12, v13, v14, v15);
    if ( ptr != v26 )
      free(ptr);
    if ( v21 != v23 )
      free(v21);
  }
  return v1;
}
