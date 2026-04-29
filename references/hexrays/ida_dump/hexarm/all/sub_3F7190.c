__int64 __fastcall sub_3F7190(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, double a6)
{
  __int64 v8; // r12
  unsigned __int8 v10; // al
  __int64 v12; // [rsp-10h] [rbp-38h]

  v8 = a2;
  if ( sub_3EE080(a1, a2) || (a2 = a4, sub_3EE080(a1, a4)) )
  {
    if ( !under_debugger )
      sub_3835A0(0xC859u, a2, a6);
    BUG();
  }
  v10 = sub_3EE470(a1, v8, 1, a6);
  sub_3F6E70(a1, 4u, v10, a5, 0x3BEA45E214ADDC55LL, a3, a6, 0, 1);
  return v12;
}
