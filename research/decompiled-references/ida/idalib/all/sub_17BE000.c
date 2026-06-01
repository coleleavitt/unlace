void __fastcall sub_17BE000(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rdx
  int v22; // [rsp+0h] [rbp-D8h] BYREF
  int v23; // [rsp+4h] [rbp-D4h] BYREF
  __int64 v24; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v25[2]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v26[23]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), a3);
  if ( v8 )
  {
    v12 = v8;
    v26[0] = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v8);
    v17 = sub_F67720(v26, v12, v13, v14, v15, v16);
    sub_17BE000(a1, v17, v26[0], a4, a5);
    return;
  }
  if ( a2 != 1 )
  {
    if ( !a2 )
      return;
    if ( a2 != 2 )
    {
      sub_17BD820(a1, a3, a5, v9, v10, v11);
      return;
    }
  }
  v24 = a3;
  if ( a5 )
  {
    sub_168B9F0((__int64)v26, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a4 + 24), 0x17EDu, 0);
    v23 = 1;
    v18 = sub_1587D10((__int64)v26, &v23);
    v22 = 0;
    v19 = sub_1587D10(v18, &v22);
    v20 = sub_1605D30(v19, &v24);
    v25[0] = sub_995750(a4);
    v25[1] = v21;
    sub_166BAF0(v20, (__int64)v25);
    sub_15F7200(v26);
  }
}
