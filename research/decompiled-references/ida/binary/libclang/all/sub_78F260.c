__int64 __fastcall sub_78F260(__int64 a1)
{
  char v1; // bp
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  char v5; // dl
  _QWORD v6[21]; // [rsp+0h] [rbp-A8h] BYREF

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
  v1 = sub_78C840((__int64)v6, a1, 7u) & 7;
  if ( (v6[0] & 1) == 0 )
    operator delete();
  if ( v1 == 3 || (result = 2, v1 == 6) )
  {
    v3 = *(_QWORD *)(sub_798D40(a1) + 2160);
    result = 0;
    if ( (*(_BYTE *)(v3 + 1) & 8) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v4 = *(_QWORD *)v4;
      v5 = *(_BYTE *)(v4 + 8);
      result = 1;
      if ( ((v5 + 72) & 0x7Fu) > 3 )
        return (unsigned __int8)sub_77E260(*(_QWORD *)(a1 + 112)) ^ 1u;
    }
  }
  return result;
}

