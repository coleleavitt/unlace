unsigned __int64 __fastcall sub_8C3790(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  __int64 v5; // rax
  unsigned __int64 v6; // rbx

  v3 = 8LL * a2 + 48;
  v4 = a2;
  v5 = a1[274];
  a1[284] += v3;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v6 && v5 )
    a1[274] = v3 + v6;
  else
    v6 = sub_8C1090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x54;
  if ( byte_4AD234C )
    sub_AC4570(84);
  *(_BYTE *)(v6 + 3) &= 0xF3u;
  *(_QWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 4) = v4;
  *(_OWORD *)(v6 + 32) = 0;
  return v6;
}

