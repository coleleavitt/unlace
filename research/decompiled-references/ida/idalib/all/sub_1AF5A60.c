__int64 __fastcall sub_1AF5A60(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[184]; // [rsp+0h] [rbp-B8h] BYREF

  v3 = sub_1E5F010(a3, 0);
  if ( (unsigned __int8)sub_F613D0(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL), 0, v4, v5, v6, v7)
    || sub_F61420(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL), 0, v8, v9, v10, v11) )
  {
    return v3;
  }
  sub_168B9F0((__int64)v13, a1, a2, 0x11C7u, 0);
  sub_15F7200(v13);
  return 0;
}
