unsigned __int64 __fastcall sub_81BE60(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  char v6; // al

  v3 = 8LL * a2 + 24;
  v4 = a1[274];
  a1[284] += v3;
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v5 && v4 )
    a1[274] = v3 + v5;
  else
    v5 = sub_804090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v5 = *(_WORD *)v5 & 0xFE00 | 4;
  if ( byte_4AD234C )
    sub_AC4570(4);
  v6 = *(_BYTE *)(v5 + 2);
  *(_QWORD *)(v5 + 8) = 0;
  *(_BYTE *)(v5 + 2) = v6 & 7 | 0x20;
  *(_BYTE *)(v5 + 3) = (2 * (a2 & 1)) | *(_BYTE *)(v5 + 3) & 0xFD;
  return v5;
}

