unsigned __int64 __fastcall sub_8054B0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  char v7; // al

  v2 = 56;
  if ( a2 != 2 )
    v2 = 0;
  v4 = v2 + 8LL * (a2 == 1) + 24;
  v5 = a1[274];
  a1[284] += v4;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v4 + v6 && v5 )
    a1[274] = v4 + v6;
  else
    v6 = sub_804090((__int64)(a1 + 274), v4, 3);
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x3E;
  if ( byte_4AD234C )
    sub_AC4570(62);
  v7 = *(_BYTE *)(v6 + 2);
  *(_QWORD *)(v6 + 8) = 0;
  *(_BYTE *)(v6 + 2) = (8 * (a2 & 3)) | v7 & 0xE7;
  if ( a2 == 2 )
  {
    *(_BYTE *)(v6 + 28) &= ~1u;
    *(_DWORD *)(v6 + 24) = 0;
  }
  return v6;
}

