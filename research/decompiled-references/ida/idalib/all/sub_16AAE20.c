__int64 __fastcall sub_16AAE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v13[168]; // [rsp+20h] [rbp-A8h] BYREF

  v11 = a3;
  v5 = *(_QWORD *)(a1 + 232);
  v12 = a2;
  v6 = *(_BYTE *)(v5 + 13);
  LOBYTE(v5) = *(_BYTE *)(v5 + 201);
  v10 = a4;
  LOBYTE(v4) = (v6 >> 1) & ((v5 & 3) == 1);
  if ( (_BYTE)v4 )
  {
    sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), v12, 0xFBAu, 0);
    v8 = sub_1605D30((__int64)v13, &v11);
    v9 = sub_1605D30(v8, &v10);
    sub_15884C0(v9, &v12);
    sub_15F7200(v13);
  }
  return v4;
}
