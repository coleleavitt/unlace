unsigned __int64 __fastcall sub_81BC00(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int16 v5; // ax

  v2 = a1[274];
  v3 = 8LL * a2 + 48;
  a1[284] += v3;
  v4 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v4 && v2 )
    a1[274] = v3 + v4;
  else
    v4 = sub_804090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v4 = *(_WORD *)v4 & 0xFE00 | 0x78;
  if ( byte_4AD234C )
    sub_AC4570(120);
  v5 = *(_WORD *)(v4 + 2);
  *(_QWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  v5 &= 0xFE07u;
  LOBYTE(v5) = v5 | 0xB0;
  *(_WORD *)(v4 + 2) = v5;
  return v4;
}

