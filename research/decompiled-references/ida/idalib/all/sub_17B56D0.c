void __fastcall sub_17B56D0(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  int v21; // [rsp+0h] [rbp-D8h] BYREF
  int v22; // [rsp+4h] [rbp-D4h] BYREF
  __int64 v23; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v24[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v25[184]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), a3);
  if ( v8 )
  {
    v12 = v8;
    v13 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v8);
    v16 = sub_F65A30(v13, v12, v14, v15);
    sub_17B56D0(a1, v16, v13, a4, a5);
  }
  else
  {
    switch ( a2 )
    {
      case 0:
      case 1:
        return;
      case 2:
      case 3:
        v23 = a3;
        if ( a5 )
        {
          sub_168B9F0((__int64)v25, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a4 + 24), 0x17EDu, 0);
          v22 = 1;
          v17 = sub_1587D10((__int64)v25, &v22);
          v21 = 1;
          v18 = sub_1587D10(v17, &v21);
          v19 = sub_1605D30(v18, &v23);
          v24[0] = sub_995750(a4);
          v24[1] = v20;
          sub_166BAF0(v19, (__int64)v24);
          sub_15F7200(v25);
        }
        break;
      case 4:
        sub_17B5080(a1, a3, a5, v9, v10, v11);
        break;
    }
  }
}
