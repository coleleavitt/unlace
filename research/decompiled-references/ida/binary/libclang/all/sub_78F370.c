__int64 __fastcall sub_78F370(_BYTE *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  char v3; // al
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _QWORD v7[21]; // [rsp+0h] [rbp-A8h] BYREF

  v1 = (__int64)a1;
  memset(v7, 0, 0x88u);
  LOBYTE(v7[0]) = 1;
  v7[1] = -1;
  v7[3] = -1;
  v7[5] = -1;
  v7[7] = -1;
  v7[9] = -1;
  v7[11] = -1;
  v7[13] = -1;
  v7[15] = -1;
  v2 = sub_78C840((__int64)v7, (__int64)a1, 7u) & 7;
  if ( (v7[0] & 1) == 0 )
  {
    v1 = 16LL * LODWORD(v7[2]);
    operator delete();
  }
  v3 = sub_79B100(a1, v1);
  if ( (_BYTE)v2 != 6 || !v3 )
  {
    if ( (_BYTE)v2 != 3 )
    {
      result = 1;
      if ( (_BYTE)v2 != 4 )
        return (unsigned int)v2;
      return result;
    }
    return 6;
  }
  v5 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 32LL))(a1);
  v6 = *(_QWORD *)(v5 + 8) & 7LL;
  if ( v6 <= 2 && v6 && (unsigned __int8)sub_79B100(v5, v1) )
    return 6;
  result = 5;
  if ( (a1[28] & 0x7F) == 0x16 )
    return 6;
  return result;
}

