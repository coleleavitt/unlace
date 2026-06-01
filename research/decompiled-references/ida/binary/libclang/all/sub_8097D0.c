unsigned __int64 __fastcall sub_8097D0(_QWORD *a1, unsigned int a2, int a3, int a4)
{
  char v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // ax

  v6 = a4;
  v7 = (unsigned int)(a4 * a3) + 4LL * a2 + 20;
  v8 = a1[274];
  a1[284] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v7 + v9 && v8 )
    a1[274] = v7 + v9;
  else
    v9 = sub_804090((__int64)(a1 + 274), v7, 3);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0xA;
  if ( byte_4AD234C )
    sub_AC4570(10);
  v10 = *(_WORD *)(v9 + 2);
  *(_QWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 4) = a2;
  *(_DWORD *)(v9 + 16) = a3;
  *(_WORD *)(v9 + 2) = ((v6 & 7) << 6) | v10 & 0xFE3F;
  return v9;
}

