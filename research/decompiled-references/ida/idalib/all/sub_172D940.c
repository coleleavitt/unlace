void __fastcall sub_172D940(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  __int16 v7; // [rsp+8h] [rbp-50h]
  char v8; // [rsp+Ah] [rbp-4Eh]
  void *ptr; // [rsp+10h] [rbp-48h]
  __int64 v10; // [rsp+18h] [rbp-40h]
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (_QWORD *)sub_168B6C0((__int64)a1);
  v6 = sub_A63CE0(v2);
  v7 = 0;
  v8 = 0;
  ptr = v11;
  v10 = 0x400000000LL;
  sub_172AF50(a1, a2, (__int64)&v6, v3, v4, v5);
  if ( ptr != v11 )
    free(ptr);
}
