__int64 __fastcall sub_78F490(__int64 a1)
{
  char v2; // bp
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  char v6; // dl
  unsigned __int64 v7; // rdi
  _QWORD v8[21]; // [rsp+0h] [rbp-A8h] BYREF

  memset(v8, 0, 0x88u);
  LOBYTE(v8[0]) = 1;
  v8[1] = -1;
  v8[3] = -1;
  v8[5] = -1;
  v8[7] = -1;
  v8[9] = -1;
  v8[11] = -1;
  v8[13] = -1;
  v8[15] = -1;
  v2 = sub_78C840((__int64)v8, a1, 7u) & 7;
  if ( (v8[0] & 1) == 0 )
    operator delete();
  if ( v2 == 3 || (result = 2, v2 == 6) )
  {
    v4 = *(_QWORD *)(sub_798D40(a1) + 2160);
    result = 0;
    if ( (*(_BYTE *)(v4 + 1) & 8) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v5 = *(_QWORD *)v5;
      v6 = *(_BYTE *)(v5 + 8);
      result = 1;
      if ( ((v6 + 72) & 0x7Fu) > 3 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 4) != 0 )
          return (unsigned __int8)sub_79BBC0(*(_QWORD *)(v7 + 8)) ^ 1u;
        else
          return (unsigned __int8)sub_79BBC0(v7) ^ 1u;
      }
    }
  }
  return result;
}

