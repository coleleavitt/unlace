unsigned __int64 __fastcall sub_81AA80(_QWORD *a1, unsigned int a2)
{
  __int16 v2; // bp
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int16 v6; // ax
  __int16 v7; // bp

  v2 = a2;
  v3 = 8 * (a2 + (unsigned __int64)(a2 + 1)) + 32;
  v4 = a1[274];
  a1[284] += v3;
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v5 && v4 )
    a1[274] = v3 + v5;
  else
    v5 = sub_804090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v5 = *(_WORD *)v5 & 0xFE00 | 0x3A;
  if ( byte_4AD234C )
    sub_AC4570(58);
  v6 = *(_WORD *)(v5 + 16);
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 20) = 0;
  v7 = v6 & 0x8000 | v2 & 0x7FFF;
  *(_WORD *)(v5 + 16) = v7;
  return v5;
}

