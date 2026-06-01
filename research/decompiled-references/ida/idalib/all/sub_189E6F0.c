unsigned __int64 __fastcall sub_189E6F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  char v6; // r14
  __int16 v8; // ax
  char v9; // r13
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v20; // [rsp+0h] [rbp-E8h]
  unsigned __int16 v22; // [rsp+1Ch] [rbp-CCh] BYREF
  unsigned __int16 v23; // [rsp+1Eh] [rbp-CAh] BYREF
  _BYTE v24[200]; // [rsp+20h] [rbp-C8h] BYREF

  v6 = a4;
  v8 = sub_F6A600(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  v9 = v8;
  v10 = HIBYTE(v8);
  v13 = sub_F6A600(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12, a5 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v10 == HIBYTE(v13) )
  {
    if ( v10 )
    {
      v20 = v13;
      if ( v9 != (_BYTE)v13 )
      {
        sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), a2, 0x2Cu, 0);
        LOBYTE(v23) = v9;
        HIBYTE(v23) = v6;
        v17 = sub_189E1F0((__int64)v24, &v23, v15, v16);
        LOBYTE(v22) = v20;
        HIBYTE(v22) = a6;
        sub_189E1F0(v17, &v22, a6, v18);
        sub_15F7200(v24);
      }
    }
    return a3;
  }
  if ( v10 )
    return a3;
  return sub_A719E0(*(_QWORD *)(a1 + 248), v13, a3, a3);
}
