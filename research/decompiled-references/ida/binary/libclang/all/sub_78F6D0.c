__int64 __fastcall sub_78F6D0(__int64 a1)
{
  unsigned __int64 v1; // rax
  char v2; // bp
  unsigned __int64 v3; // rax
  _QWORD v5[21]; // [rsp+0h] [rbp-A8h] BYREF

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  if ( ((*(_BYTE *)(v1 + 8) + 72) & 0x7Fu) <= 3 )
    return 0;
  memset(v5, 0, 0x88u);
  LOBYTE(v5[0]) = 1;
  v5[1] = -1;
  v5[3] = -1;
  v5[5] = -1;
  v5[7] = -1;
  v5[9] = -1;
  v5[11] = -1;
  v5[13] = -1;
  v5[15] = -1;
  v2 = sub_78C840((__int64)v5, a1, 7u) & 7;
  if ( (v5[0] & 1) != 0 )
  {
    if ( v2 == 3 )
      goto LABEL_7;
LABEL_6:
    if ( v2 == 6 )
      goto LABEL_7;
    return 0;
  }
  operator delete();
  if ( v2 != 3 )
    goto LABEL_6;
LABEL_7:
  if ( (*(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) & 8) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v3 = *(_QWORD *)v3;
    if ( ((*(_BYTE *)(v3 + 8) + 72) & 0x7Fu) > 3 )
      return sub_77E260(*(_QWORD *)(a1 + 112));
    return 0;
  }
  return 1;
}

