__int64 __fastcall sub_19FD180(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-D0h] BYREF
  int v14; // [rsp+1Ch] [rbp-BCh] BYREF
  int v15; // [rsp+20h] [rbp-B8h] BYREF
  int v16; // [rsp+24h] [rbp-B4h] BYREF
  __int64 v17; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v18[168]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v13 = a3;
  v5 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  v17 = v4;
  v6 = *(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL];
  result = 0;
  if ( *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v8 = sub_EEB7E0(a2, a2, a4);
    sub_168B9F0((__int64)v18, (__int64 *)(a1 + 8), v8, 0x1482u, 0);
    v9 = sub_1605D30((__int64)v18, &v17);
    v10 = sub_1605D30(v9, &v13);
    v14 = 1;
    v11 = sub_1587D10(v10, &v14);
    v15 = 0;
    v12 = sub_1587D10(v11, &v15);
    v16 = 0;
    sub_1587D10(v12, &v16);
    sub_15F7200(v18);
    return 1;
  }
  return result;
}
