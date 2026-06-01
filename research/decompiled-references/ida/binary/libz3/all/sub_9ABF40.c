__int64 __fastcall sub_9ABF40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  void *v5; // r12
  _BYTE v7[16]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+10h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 656) + 4LL * a3 + 3) & 0x40) != 0 )
  {
    if ( a5 )
      sub_9A9130((__int64)v7, a4);
    else
      sub_9ABE60((__int64)v7, a4);
    sub_894960(a1, (__int64)v7);
    v5 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v7);
    sub_182CBA0(v5, v8);
    return a1;
  }
  else
  {
    sub_91F480(a1, a4);
    return a1;
  }
}

