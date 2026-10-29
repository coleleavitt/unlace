unsigned __int64 __fastcall sub_8C6230(_QWORD *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  char v9; // al
  char v10; // dl
  char v11; // bp

  v6 = a1[274];
  v7 = 16 * a2 + 32 * a3 + 72 + 8 * (unsigned int)a4;
  a1[284] += v7;
  v8 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v7 + v8 && v6 )
    a1[274] = v7 + v8;
  else
    v8 = sub_8C1090((__int64)(a1 + 274), v7, 3);
  *(_WORD *)v8 = *(_WORD *)v8 & 0xFE00 | 0x6E;
  if ( byte_4AD234C )
    sub_AC4570(110);
  v9 = *(_BYTE *)(v8 + 2);
  *(_QWORD *)(v8 + 8) = 0;
  v10 = 32 * (a4 & 1);
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  v11 = (16 * (a2 & 1)) | v9 & 0xCF;
  *(_DWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  *(_BYTE *)(v8 + 2) = v10 | v11;
  *(_OWORD *)(v8 + 32) = 0;
  return v8;
}

