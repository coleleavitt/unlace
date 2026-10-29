unsigned __int64 __fastcall sub_80BE80(
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
  v7 = 32LL * a5 + 16 * (a2 + (unsigned __int64)a4) + 8LL * a3 + 48;
  a1[284] += v7;
  if ( a1[275] >= v7 + v6 && v5 )
    a1[274] = v7 + v6;
  else
    v6 = sub_804090((__int64)(a1 + 274), v7, 3);
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x2F;
  if ( byte_4AD234C )
    sub_AC4570(47);
  *(_QWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 40) = 0;
  *(_OWORD *)(v6 + 16) = 0;
  return v6;
}

