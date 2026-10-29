__int64 __fastcall sub_18D5630(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-C0h] BYREF
  bool v14; // [rsp+1Fh] [rbp-A9h] BYREF
  _BYTE v15[168]; // [rsp+20h] [rbp-A8h] BYREF

  v5 = *(_QWORD *)(a1 + 232);
  v12 = a4;
  v6 = *(unsigned int *)(v5 + 368);
  v13 = a2;
  v7 = byte_2646640[v6];
  if ( !(_BYTE)v7 )
    return v7;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 35 <= 1 )
  {
    sub_168B9F0((__int64)v15, (__int64 *)(a1 + 8), a3, 0x137Cu, 0);
    v9 = sub_1605D30((__int64)v15, &v13);
    v14 = a5 == 0;
    v10 = sub_1588420(v9, (unsigned __int8 *)&v14);
    sub_15884C0(v10, &v12);
    sub_15F7200(v15);
    return v7;
  }
  return 0;
}
