unsigned __int64 __fastcall sub_80B980(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx

  v5 = 16LL * a2 + 8LL * a3 + 40;
  v6 = a1[274];
  a1[284] += v5;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v5 + v7 && v6 )
    a1[274] = v5 + v7;
  else
    v7 = sub_804090((__int64)(a1 + 274), v5, 3);
  *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0x1C;
  if ( byte_4AD234C )
    sub_AC4570(28);
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 32) = a2;
  *(_DWORD *)(v7 + 36) = a3;
  return v7;
}

