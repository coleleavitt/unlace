void __fastcall sub_17B9310(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  signed __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-C0h] BYREF
  unsigned int v8; // [rsp+18h] [rbp-B0h] BYREF
  unsigned int v9; // [rsp+1Ch] [rbp-ACh] BYREF
  _BYTE v10[168]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = *(_QWORD *)(a1 + 248);
  v7 = a2;
  v3 = *(_DWORD *)(*(_QWORD *)(v2 + 17448) + 72LL);
  if ( v3 && !sub_B73A10(a2) )
  {
    v4 = sub_A97FF0(*(_QWORD *)(a1 + 248), v3);
    if ( v4 < (__int64)sub_AB0BF0(*(_QWORD **)(a1 + 248), v7, 0) )
    {
      sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), *(_DWORD *)(v7 + 24), 0x1441u, 0);
      v8 = sub_AB0BF0(*(_QWORD **)(a1 + 248), v7, 0);
      v5 = sub_16CF160((__int64)v10, &v8);
      v6 = sub_17B9080(v5, (__int64 *)&v7);
      v9 = v4;
      sub_16CF160(v6, &v9);
      sub_15F7200(v10);
    }
  }
}
