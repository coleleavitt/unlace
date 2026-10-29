__int64 __fastcall sub_78FD30(__int64 a1)
{
  unsigned __int64 v2; // rax
  char v3; // bp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  _QWORD v7[21]; // [rsp+0h] [rbp-A8h] BYREF

  v2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v2 = *(_QWORD *)v2;
  if ( ((*(_BYTE *)(v2 + 8) + 72) & 0x7Fu) <= 3 )
    return 0;
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
  v3 = sub_78C840((__int64)v7, a1, 7u) & 7;
  if ( (v7[0] & 1) != 0 )
  {
    if ( v3 == 3 )
      goto LABEL_7;
  }
  else
  {
    operator delete();
    if ( v3 == 3 )
      goto LABEL_7;
  }
  if ( v3 != 6 )
    return 0;
LABEL_7:
  if ( (*(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) & 8) == 0 )
    return 1;
  v4 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v4 = *(_QWORD *)v4;
  if ( ((*(_BYTE *)(v4 + 8) + 72) & 0x7Fu) <= 3 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 4) != 0 )
    v5 = *(_QWORD *)(v5 + 8);
  return sub_79BBC0(v5);
}

