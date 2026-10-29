__int64 __fastcall sub_184AAD0(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 v10; // [rsp+3h] [rbp-C5h] BYREF
  int v11; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v12; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v13[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = sub_B981D0((_QWORD *)a2, a2);
  v5 = 1;
  if ( v4 )
  {
    v6 = sub_B73090(**(_QWORD **)(a2 + 120));
    sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), v6, 0xEC7u, 0);
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    v7 = sub_1587DB0((__int64)v13, &v12);
    v11 = 1;
    v8 = sub_1587D10(v7, &v11);
    v10 = 0;
    sub_1588420(v8, &v10);
    sub_15F7200(v13);
    sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x183Cu, 0);
    sub_15F7200(v13);
    sub_B88650(a2, 1);
    return 0;
  }
  return v5;
}
