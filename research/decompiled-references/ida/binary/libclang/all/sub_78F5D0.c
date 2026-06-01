char __fastcall sub_78F5D0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  char result; // al
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  _QWORD v6[21]; // [rsp+0h] [rbp-A8h] BYREF

  v1 = a1;
  memset(v6, 0, 0x88u);
  LOBYTE(v6[0]) = 1;
  v6[1] = -1;
  v6[3] = -1;
  v6[5] = -1;
  v6[7] = -1;
  v6[9] = -1;
  v6[11] = -1;
  v6[13] = -1;
  v6[15] = -1;
  v2 = sub_78C840((__int64)v6, a1, 7u) & 7;
  if ( (v6[0] & 1) == 0 )
  {
    v1 = 16LL * LODWORD(v6[2]);
    operator delete();
  }
  result = sub_79B100(a1, v1) & ((_BYTE)v2 == 6);
  if ( result )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    v5 = *(_QWORD *)(v4 + 8) & 7LL;
    if ( v5 <= 2 && v5 )
      sub_79B100(v4, v1);
    return 1;
  }
  if ( (_BYTE)v2 == 3 || (_BYTE)v2 != 4 && (_BYTE)v2 != 1 )
    return 1;
  return result;
}

