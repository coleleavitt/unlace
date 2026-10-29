_BYTE *__fastcall sub_FC6A20(__int64 a1)
{
  unsigned __int64 v1; // rax
  char v2; // cl
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  char v6; // dl
  char v7; // dl
  void **v8; // r13
  void **v9; // r12
  void **v10; // rbp
  void **v11; // r13
  void **v12; // r12
  void **v13; // rbp
  void **v14; // r13
  void **v15; // r12
  void **v16; // rbp
  _BYTE *result; // rax

  v1 = *(_QWORD *)a1 & 0xFFFFFFFCFF87FFFFLL;
  v2 = *(_BYTE *)(a1 + 46);
  *(_BYTE *)(a1 + 817) = 0;
  *(_BYTE *)(a1 + 12) &= 0xDBu;
  *(_QWORD *)a1 = v1 | 0x100400000LL;
  v3 = *(_QWORD *)(a1 + 16) & 0xFF9A1F6FBFFFFF7FLL | 0x64001000000000LL;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 16) = v3;
  v4 = *(_QWORD *)(a1 + 104) & 0xFFFFF1DFBF6C1100LL | 0x20004;
  *(_BYTE *)(a1 + 157) &= ~0x20u;
  *(_QWORD *)(a1 + 104) = v4;
  v5 = *(_QWORD *)(a1 + 200) & 0xE073FFFFFFFF1FFFLL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 200) = v5 | 0x1E00000000000000LL;
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a1 + 208) & 0xCC0000FF | 0x1145200;
  *(_QWORD *)(a1 + 124) = 0x40000000100LL;
  *(_QWORD *)(a1 + 132) = 0x10000000000200LL;
  *(_QWORD *)(a1 + 140) = *(_QWORD *)(a1 + 140) & 0xFFFFFFFELL | 0x10000000000LL;
  v6 = *(_BYTE *)(a1 + 45);
  *(_QWORD *)(a1 + 196) = *(_QWORD *)(a1 + 196) & 0xFFFFFFFB00000000LL | 0x400000080LL;
  LOBYTE(v5) = v6 & 0xBF | (4 * v6) & 0x40;
  v7 = (v6 & 8) != 0;
  *(_BYTE *)(a1 + 46) = v7 | v2 & 0xC0 | 0x20;
  *(_BYTE *)(a1 + 45) = (v7 << 7) | v5 & 0x7F;
  v8 = *(void ***)(a1 + 248);
  v9 = *(void ***)(a1 + 256);
  if ( v8 != v9 )
  {
    v10 = *(void ***)(a1 + 248);
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 += 4;
        if ( v9 == v10 )
          goto LABEL_5;
      }
      v10 += 4;
    }
    while ( v9 != v10 );
LABEL_5:
    *(_QWORD *)(a1 + 256) = v8;
  }
  v11 = *(void ***)(a1 + 272);
  v12 = *(void ***)(a1 + 280);
  if ( v11 != v12 )
  {
    v13 = *(void ***)(a1 + 272);
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 4;
        if ( v12 == v13 )
          goto LABEL_10;
      }
      v13 += 4;
    }
    while ( v12 != v13 );
LABEL_10:
    *(_QWORD *)(a1 + 280) = v11;
  }
  v14 = *(void ***)(a1 + 296);
  v15 = *(void ***)(a1 + 304);
  if ( v14 != v15 )
  {
    v16 = *(void ***)(a1 + 296);
    do
    {
      while ( *v16 != v16 + 2 )
      {
        operator delete(*v16);
        v16 += 4;
        if ( v15 == v16 )
          goto LABEL_15;
      }
      v16 += 4;
    }
    while ( v15 != v16 );
LABEL_15:
    *(_QWORD *)(a1 + 304) = v14;
  }
  result = *(_BYTE **)(a1 + 488);
  *(_QWORD *)(a1 + 496) = 0;
  *result = 0;
  *(_BYTE *)(a1 + 744) = 0;
  return result;
}

