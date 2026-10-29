void __fastcall sub_17D0BA0(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned int v7; // r15d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rdx
  int v23; // [rsp+0h] [rbp-E8h] BYREF
  int v24; // [rsp+4h] [rbp-E4h] BYREF
  __int64 v25; // [rsp+8h] [rbp-E0h] BYREF
  _QWORD v26[2]; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD v27[25]; // [rsp+20h] [rbp-C8h] BYREF

  v7 = a5;
  v9 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), a3);
  if ( v9 )
  {
    v13 = v9;
    v27[0] = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v9);
    v18 = sub_F67800(v27, v13, v14, v15, v16, v17);
    sub_17D0BA0(a1, v18, v27[0], a4, v7);
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
      case 4:
        v25 = a3;
        if ( a5 )
        {
          sub_168B9F0((__int64)v27, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a4 + 24), 0x17EDu, 0);
          v23 = 1;
          v19 = sub_1587D10((__int64)v27, &v23);
          v24 = 2;
          v20 = sub_1587D10(v19, &v24);
          v21 = sub_1605D30(v20, &v25);
          v26[0] = sub_995750(a4);
          v26[1] = v22;
          sub_166BAF0(v21, (__int64)v26);
          sub_15F7200(v27);
        }
        break;
      case 5:
        sub_17D0460(a1, a3, v7, v10, v11, v12);
        break;
    }
  }
}
