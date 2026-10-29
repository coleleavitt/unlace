void __fastcall sub_2204E00(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  void *v8; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-60h]
  _QWORD v10[11]; // [rsp+10h] [rbp-58h] BYREF

  sub_22010F0((__int64)&v8, a1);
  sub_21FF1C0(v10, &v8);
  if ( (_UNKNOWN *)v10[0] == &unk_26F7B20 )
    sub_2204E00(v10, a2, a3, a4, a5);
  else
    sub_2203EA0((__int64)v10, a2, a3, a4, a5);
  if ( (_UNKNOWN *)v10[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v10);
  else
    sub_21F9170(v10);
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}
