unsigned __int64 __fastcall sub_8C1CA0(_QWORD *a1, unsigned __int8 a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  bool v11; // zf
  char v12; // dl

  v8 = 8 * (a5 + (unsigned __int64)(a4 + a3 + (unsigned int)a2)) + 56;
  v9 = a1[274];
  a1[284] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v8 + v10 && v9 )
    a1[274] = v8 + v10;
  else
    v10 = sub_8C1090((__int64)(a1 + 274), v8, 3);
  v11 = byte_4AD234C == 0;
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x6B;
  if ( !v11 )
    sub_AC4570(107);
  v12 = *(_BYTE *)(v10 + 2);
  *(_QWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 4) = a4;
  *(_OWORD *)(v10 + 40) = 0;
  *(_BYTE *)(v10 + 2) = v12 & 0xEF | (16 * (a2 & 1));
  *(_BYTE *)(v10 + 3) = (4 * (a5 & 1)) | *(_BYTE *)(v10 + 3) & 0xFB;
  return v10;
}

