__int64 *__fastcall sub_15BCC50(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 **v13; // rax
  __int64 **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+8h] [rbp-D0h]
  __int64 v26; // [rsp+10h] [rbp-C8h]
  __int64 v27; // [rsp+18h] [rbp-C0h]
  __int16 v28; // [rsp+20h] [rbp-B8h]
  void *v29; // [rsp+28h] [rbp-B0h]
  __int64 v30; // [rsp+30h] [rbp-A8h]
  _BYTE v31[48]; // [rsp+38h] [rbp-A0h] BYREF
  void *ptr; // [rsp+68h] [rbp-70h]
  __int64 v33; // [rsp+70h] [rbp-68h]
  _BYTE v34[96]; // [rsp+78h] [rbp-60h] BYREF

  v1 = a1;
  if ( (*(_BYTE *)(a1[1] + 74) & 1) == 0 )
  {
    v3 = *(_QWORD *)(*a1 + 248);
    v24 = a1;
    v25 = 0;
    v4 = *(_QWORD *)(sub_15BAC80((__int64)a1) + 48);
    v5 = *(_QWORD *)(v3 + 18632);
    ptr = v34;
    v27 = 0;
    v26 = v5;
    v28 = 256;
    v29 = v31;
    v30 = 0x200000000LL;
    v33 = 0x600000000LL;
    v6 = sub_B87BD0(*(_QWORD *)(*a1 + 248) + 17536LL, *(_QWORD *)(*(_QWORD *)(a1[1] + 48) + 8LL));
    v7 = *(__int64 **)(v3 + 18768);
    v25 = v6;
    v8 = sub_15BA000((__int64)&v24, "spaceNo", 7u, v7, 0);
    v9 = sub_15BA000(v8, "range", 5u, *(__int64 **)(v3 + 18720), 0);
    v10 = sub_15BA000(v9, "index", 5u, *(__int64 **)(v3 + 18768), 0);
    v11 = sub_15BA000(v10, "orderId", 7u, *(__int64 **)(v3 + 18768), 0);
    v12 = (__int64 *)sub_A70010(v3, *(_QWORD *)(v3 + 18648) | 1LL);
    v13 = (__int64 **)sub_15BA000(v11, "name", 4u, v12, 0);
    v14 = sub_15BB250(v13, "__builtin_hlsl_resource_handlefromimplicitbinding", 0x31u, v4, 0x80u, 0, 1u, 2u, 3u, 4u);
    v15 = sub_15BAFF0((__int64)v14, 128, 0x81u);
    v1 = sub_15B9700(v15, 128, v16, v17, v18, v19);
    sub_15B9700((__int64)&v24, 128, v20, v21, v22, v23);
    if ( ptr != v34 )
      free(ptr);
    if ( v29 != v31 )
      free(v29);
  }
  return v1;
}
