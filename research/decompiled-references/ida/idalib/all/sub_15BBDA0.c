__int64 *__fastcall sub_15BBDA0(_QWORD *a1, __int64 *a2, char a3, char a4)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 **v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v27; // [rsp+0h] [rbp-F8h]
  _QWORD v29[4]; // [rsp+10h] [rbp-E8h] BYREF
  char v30; // [rsp+30h] [rbp-C8h]
  char v31; // [rsp+31h] [rbp-C7h]
  void *v32; // [rsp+38h] [rbp-C0h]
  __int64 v33; // [rsp+40h] [rbp-B8h]
  _BYTE v34[48]; // [rsp+48h] [rbp-B0h] BYREF
  void *ptr; // [rsp+78h] [rbp-80h]
  __int64 v36; // [rsp+80h] [rbp-78h]
  _BYTE v37[112]; // [rsp+88h] [rbp-70h] BYREF

  v6 = *(_QWORD *)(*a1 + 248LL);
  v7 = a1[2];
  if ( v7 )
  {
    v8 = 0;
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
    if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x43 )
      v8 = *(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 18680);
  }
  v10 = sub_A70E70(*(_QWORD *)(*a1 + 248LL), v8, 22);
  v27 = sub_A70010(v6, v10);
  if ( a4 )
  {
    v11 = v10;
    if ( a3 )
      v11 = v10 & 7 | 1 | v10 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = sub_A73030(v6, v11, 1u);
  }
  else if ( a3 )
  {
    v8 = v8 & 7 | 1 | v8 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v12 = *a2;
  v29[2] = v8;
  v13 = *(__int64 **)(v6 + 18768);
  v29[1] = v12;
  v32 = v34;
  v33 = 0x200000000LL;
  v29[0] = a1;
  v29[3] = 0;
  v30 = a3;
  v31 = 0;
  ptr = v37;
  v36 = 0x600000000LL;
  v14 = (__int64 **)sub_15BA000((__int64)v29, "Index", 5u, v13, 0);
  v15 = sub_15BBBE0(v14, "__builtin_hlsl_resource_getpointer", 0x22u, v27, 0x80u, 0);
  v16 = sub_15BAF40((__int64)v15, 129);
  v21 = sub_15B9700(v16, 129, v17, v18, v19, v20);
  sub_15B9700((__int64)v29, 129, v22, v23, v24, v25);
  if ( ptr != v37 )
    free(ptr);
  if ( v32 != v34 )
    free(v32);
  return v21;
}
