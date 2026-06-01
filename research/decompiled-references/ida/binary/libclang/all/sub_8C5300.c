unsigned __int64 __fastcall sub_8C5300(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx

  v2 = a2;
  v3 = 8 * (a2 + 1) + 32;
  v4 = a1[274];
  a1[284] += v3;
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v5 && v4 )
    a1[274] = v3 + v5;
  else
    v5 = sub_8C1090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v5 = *(_WORD *)v5 & 0xFE00 | 0x34;
  if ( byte_4AD234C )
    sub_AC4570(52);
  *(_QWORD *)(v5 + 8) = 0;
  *(_WORD *)(v5 + 4) = v2;
  *(_OWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 8 * v2 + 32) = 0;
  return v5;
}

