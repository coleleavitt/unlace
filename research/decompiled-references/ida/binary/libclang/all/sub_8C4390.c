unsigned __int64 __fastcall sub_8C4390(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  char v6; // al

  v3 = 8LL * a2 + 32;
  v4 = a1[274];
  a1[284] += v3;
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v5 && v4 )
    a1[274] = v3 + v5;
  else
    v5 = sub_8C1090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v5 = *(_WORD *)v5 & 0xFE00 | 0x71;
  if ( byte_4AD234C )
    sub_AC4570(113);
  v6 = *(_BYTE *)(v5 + 2);
  *(_QWORD *)(v5 + 8) = 0;
  *(_BYTE *)(v5 + 2) = (8 * (a2 & 1)) | v6 & 0xF7;
  return v5;
}

