unsigned __int64 __fastcall sub_805F10(
        _QWORD *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi

  v5 = a1[274];
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v7 = 32LL * a5 + 16 * (a2 + (unsigned __int64)a4) + 8LL * a3 + 32;
  a1[284] += v7;
  if ( a1[275] >= v7 + v6 && v5 )
    a1[274] = v7 + v6;
  else
    v6 = sub_804090((__int64)(a1 + 274), v7, 3);
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x48;
  if ( byte_4AD234C )
    sub_AC4570(72);
  *(_QWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  return v6;
}

