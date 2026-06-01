unsigned __int64 __fastcall sub_8C3FC0(_QWORD *a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  char v8; // al

  v5 = 8 * (a2 + (unsigned __int64)a3) + 40;
  v6 = a1[274];
  a1[284] += v5;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v5 + v7 && v6 )
    a1[274] = v5 + v7;
  else
    v7 = sub_8C1090((__int64)(a1 + 274), v5, 3);
  *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0x57;
  if ( byte_4AD234C )
    sub_AC4570(87);
  v8 = *(_BYTE *)(v7 + 3);
  *(_DWORD *)(v7 + 4) = a2;
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 32) = 0;
  *(_BYTE *)(v7 + 3) = (8 * (a3 & 1)) | v8 & 0xF3;
  return v7;
}

