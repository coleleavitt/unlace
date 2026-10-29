__int64 __fastcall sub_F33A20(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, _DWORD *a5, int a6)
{
  __int64 v6; // rax
  char v7; // r10
  int v8; // r11d
  char v9; // al
  unsigned __int64 v10; // r10
  char v11; // dl
  int v12; // eax
  __int64 result; // rax

  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( a4 )
  {
    v7 = *(_BYTE *)(v6 + 17);
    LOBYTE(v8) = 1;
    if ( (v7 & 1) == 0 && (*a4 & 0x4000) == 0 )
    {
      LOBYTE(v8) = 0;
      if ( a5 )
        v8 = (*a5 >> 14) & 1;
    }
    v9 = (8 * ((v7 & 8) != 0)) | v8 | v7 & 0x19 | 6;
  }
  else
  {
    v9 = *(_BYTE *)(v6 + 17) & 0x1F;
  }
  *(_QWORD *)a1 = a1;
  v10 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v10 = a3;
  v11 = *(_BYTE *)(a1 + 17);
  *(_BYTE *)(a1 + 18) &= 0xF8u;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 40) = a4;
  *(_BYTE *)(a1 + 17) = v11 & 0xE0 | v9 & 0x1F;
  v12 = *(unsigned __int16 *)(a1 + 16);
  *(_QWORD *)(a1 + 48) = a5;
  LOWORD(v12) = v12 & 0x1F00;
  *(_DWORD *)(a1 + 56) = a6;
  result = v12 | 0x20u;
  *(_WORD *)(a1 + 16) = result;
  return result;
}

