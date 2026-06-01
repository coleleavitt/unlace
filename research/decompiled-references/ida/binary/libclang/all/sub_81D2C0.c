unsigned __int64 __fastcall sub_81D2C0(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rbx

  v3 = 12LL * a2 + 8 * (a2 + (unsigned __int64)(3 * a2));
  v4 = 32 * (a2 + 1LL) + 8 * ((v3 != 0) + ((v3 - (v3 != 0)) >> 3));
  v5 = a1[274];
  a1[284] += v4;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v4 + v6 && v5 )
    a1[274] = v4 + v6;
  else
    v6 = sub_804090((__int64)(a1 + 274), v4, 3);
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x2C;
  if ( byte_4AD234C )
    sub_AC4570(44);
  *(_QWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 28) = a2;
  return v6;
}

