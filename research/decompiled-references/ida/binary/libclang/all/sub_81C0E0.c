unsigned __int64 __fastcall sub_81C0E0(_QWORD *a1, int a2)
{
  __int16 v2; // bp
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx

  v2 = a2;
  v3 = 8LL * (unsigned int)(a2 + 1) + 16;
  v4 = a1[274];
  a1[284] += v3;
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v5 && v4 )
    a1[274] = v3 + v5;
  else
    v5 = sub_804090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v5 = *(_WORD *)v5 & 0xFE00 | 0x12;
  if ( byte_4AD234C )
    sub_AC4570(18);
  *(_QWORD *)(v5 + 8) = 0;
  *(_WORD *)(v5 + 4) = v2 + 1;
  return v5;
}

