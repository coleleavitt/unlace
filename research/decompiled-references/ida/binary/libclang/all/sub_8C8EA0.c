unsigned __int64 __fastcall sub_8C8EA0(_QWORD *a1, int a2, unsigned int a3)
{
  __int16 v3; // bp
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rbx

  v3 = a2;
  v4 = 4LL * a3 + 40 + 8LL * (unsigned int)(a2 + 1);
  v5 = a1[274];
  a1[284] += v4;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v4 + v6 && v5 )
    a1[274] = v4 + v6;
  else
    v6 = sub_8C7D70((__int64)(a1 + 274), v4, 3);
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x22;
  if ( byte_4AD234C )
    sub_AC4570(34);
  *(_QWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 24) &= 0xE000FFFFuLL;
  *(_WORD *)(v6 + 24) = v3;
  return v6;
}

