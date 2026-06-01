unsigned __int64 __fastcall sub_80B680(_QWORD *a1, int a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int16 v8; // ax
  __int16 v9; // bx

  v5 = a1[274];
  v6 = 8 * ((unsigned int)a3 + a2 + 1) + 24LL;
  a1[284] += v6;
  v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v6 + v7 && v5 )
    a1[274] = v6 + v7;
  else
    v7 = sub_804090((__int64)(a1 + 274), v6, 3);
  *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0x5A;
  if ( byte_4AD234C )
    sub_AC4570(90);
  v8 = *(_WORD *)(v7 + 2);
  *(_DWORD *)(v7 + 16) = a2;
  v9 = 32 * a3;
  *(_QWORD *)(v7 + 8) = 0;
  HIBYTE(v9) |= 0x18u;
  *(_DWORD *)(v7 + 20) = 0;
  LOBYTE(v9) = v9 & 0x68;
  *(_WORD *)(v7 + 2) = v8 & 0x97 | v9;
  return v7;
}

