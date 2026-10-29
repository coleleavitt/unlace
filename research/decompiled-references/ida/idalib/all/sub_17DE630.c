void __fastcall sub_17DE630(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r13d
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+0h] [rbp-D8h] BYREF
  _OWORD v15[5]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-70h]
  __int64 v17; // [rsp+70h] [rbp-68h]
  __int64 v18; // [rsp+78h] [rbp-60h]
  unsigned int v19; // [rsp+80h] [rbp-58h]
  __int64 v20; // [rsp+88h] [rbp-50h] BYREF
  __int128 v21; // [rsp+90h] [rbp-48h]
  __int64 v22; // [rsp+A0h] [rbp-38h]

  v8 = *(_DWORD *)(a3 + 24);
  if ( (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          0x1A92u,
                          v8,
                          *(_QWORD *)(a1 + 264),
                          a5,
                          a6) != 1 )
  {
    v9 = *(_QWORD *)(a3 + 40);
    v14[0] = 0;
    v15[4] = 0;
    v14[1] = v15;
    v14[2] = 0x800000000LL;
    v18 = v9;
    v16 = 0;
    v17 = a1;
    v19 = v8;
    sub_B85890(&v20, v9);
    v22 = 65537;
    v21 = 0;
    sub_1A395A0(v14);
    sub_1A49A10(a1, v14, a2, 0, 0);
    v13 = sub_17A4390(a1, a3, (__int64)v14, v10, v11, v12);
    if ( v13 )
      sub_17DD7F0(a1, a3, v13, (__int64)v14);
    sub_169D230((__int64)v14);
  }
}
