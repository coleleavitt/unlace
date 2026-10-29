__int64 __fastcall sub_C09AC0(_QWORD *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  char v12; // r14
  __int64 v13; // r15
  bool v14; // zf
  char v15; // al
  unsigned __int8 v16; // al
  unsigned int v17; // eax

  v9 = 8LL * (a3 == 1) + 56LL * (a3 == 2) + 24;
  v10 = a1[294];
  a1[304] += v9;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= (unsigned __int64)(v9 + v11) && v10 )
    a1[294] = v9 + v11;
  else
    v11 = sub_986170((__int64)(a1 + 294), v9, 8LL * (a3 == 1) + 56LL * (a3 == 2) + 24, 3, a5, a6);
  v12 = *(_BYTE *)(a2 + 1);
  v13 = *(_QWORD *)(a2 + 8);
  v14 = unk_2CD7484 == 0;
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x3D;
  if ( !v14 )
    sub_EE9B50(61);
  v15 = *(_BYTE *)(v11 + 1);
  *(_BYTE *)(v11 + 2) &= 0xF8u;
  *(_QWORD *)(v11 + 8) = v13;
  *(_QWORD *)(v11 + 16) = a2;
  *(_BYTE *)(v11 + 1) = v12 & 0x3E | v15 & 1;
  v16 = sub_B62350(v11);
  *(_BYTE *)(v11 + 1) = (v16 << 6) | *(_BYTE *)(v11 + 1) & 0x3F;
  *(_BYTE *)(v11 + 2) = (8 * (a3 & 3)) | (v16 >> 2) & 7 | *(_BYTE *)(v11 + 2) & 0xE0;
  v17 = *(_DWORD *)(v11 + 2) & 0xFF00FC1F;
  *(_DWORD *)(v11 + 2) = v17;
  *(_BYTE *)(v11 + 5) = a4 & 1 | HIBYTE(v17) & 0xFE;
  if ( a3 == 2 )
  {
    *(_BYTE *)(v11 + 28) &= ~1u;
    *(_DWORD *)(v11 + 24) = 0;
  }
  return v11;
}
