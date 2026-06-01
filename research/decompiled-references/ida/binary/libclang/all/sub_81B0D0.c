unsigned __int64 __fastcall sub_81B0D0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int16 v4; // bp
  __int64 v5; // rax
  unsigned __int64 v6; // rbx

  v2 = (unsigned int)(a2 + 1);
  v3 = 8 * v2 + 32;
  v4 = v2;
  v5 = a1[274];
  a1[284] += v3;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v6 && v5 )
    a1[274] = v3 + v6;
  else
    v6 = sub_804090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x45;
  if ( byte_4AD234C )
    sub_AC4570(69);
  *(_QWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 16) &= 0xFFFF000100000000LL;
  *(_WORD *)(v6 + 22) = v4;
  return v6;
}

