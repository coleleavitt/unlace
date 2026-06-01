unsigned __int64 __fastcall sub_8C5C00(_QWORD *a1, unsigned int a2)
{
  __int16 v2; // ax
  __int64 v3; // rsi
  __int16 v4; // bp
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int16 v7; // ax

  v2 = a2;
  v3 = 8LL * a2 + 24;
  v4 = v2;
  v5 = a1[274];
  a1[284] += v3;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v6 && v5 )
    a1[274] = v3 + v6;
  else
    v6 = sub_8C1090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x3D;
  if ( byte_4AD234C )
    sub_AC4570(61);
  v7 = *(_WORD *)(v6 + 2);
  *(_QWORD *)(v6 + 8) = 0;
  *(_WORD *)(v6 + 2) = v7 & 0xF | (16 * v4);
  return v6;
}

