unsigned __int64 __fastcall sub_8C67E0(_QWORD *a1, int a2, unsigned __int8 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  char v9; // al

  v6 = a1[274];
  v7 = 32 * a4 + 16 * (unsigned int)a3 + 8 * a2 + 80;
  a1[284] += v7;
  v8 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v7 + v8 && v6 )
    a1[274] = v7 + v8;
  else
    v8 = sub_8C1090((__int64)(a1 + 274), v7, 3);
  *(_WORD *)v8 = *(_WORD *)v8 & 0xFE00 | 0x18;
  if ( byte_4AD234C )
    sub_AC4570(24);
  v9 = *(_BYTE *)(v8 + 2);
  *(_DWORD *)(v8 + 4) = a2;
  *(_DWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  *(_BYTE *)(v8 + 2) = (8 * (a3 & 1)) | v9 & 0xF7;
  *(_DWORD *)(v8 + 72) = 0;
  *(_OWORD *)(v8 + 8) = 0;
  *(_OWORD *)(v8 + 40) = 0;
  return v8;
}

