__int64 __fastcall sub_613490(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // al
  bool v5; // zf
  __int64 v6; // rbp
  int v7; // edx
  unsigned int v8; // eax
  __int64 result; // rax

  v3 = a1 + 11;
  *(_QWORD *)(v3 - 8) = 0;
  *(_QWORD *)(v3 + 185) = 0;
  memset(
    (void *)(v3 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v3 & 0xFFFFFFF8) + 204) >> 3));
  *(_WORD *)(a1 + 116) = 514;
  *(_WORD *)a1 = 17481;
  v4 = 1;
  v5 = byte_2CA23F8 == 0;
  *(_WORD *)(a1 + 4) = 920;
  if ( !v5 )
    v4 = 17;
  *(_WORD *)(a1 + 22) = 3;
  *(_WORD *)(a1 + 148) = 4353;
  *(_QWORD *)(a1 + 60) = -1;
  *(_QWORD *)(a1 + 52) = -1;
  *(_BYTE *)(a1 + 144) = v4;
  byte_2CA23FA = 0;
  byte_2CA23F9 = 0;
  *(_BYTE *)(a1 + 2) = 65;
  *(_DWORD *)(a1 + 24) = 513;
  *(_DWORD *)(a1 + 68) = -1;
  *(_DWORD *)(a1 + 40) = -536961033;
  *(_DWORD *)(a1 + 76) = -1;
  *(_DWORD *)(a1 + 92) = -1;
  *(_DWORD *)(a1 + 100) = 16;
  *(_BYTE *)(a1 + 150) = 10;
  *(_BYTE *)(a1 + 119) = 15;
  *(_BYTE *)(a1 + 133) = 15;
  *(_BYTE *)(a1 + 156) = 97;
  *(_DWORD *)(a1 + 72) = -1;
  *(_WORD *)(a1 + 120) = 15;
  *(_WORD *)(a1 + 138) = 80;
  *(_WORD *)(a1 + 186) = 1026;
  *(_QWORD *)(a1 + 124) = 0x64000070EA3BE67LL;
  *(_DWORD *)(a1 + 176) = 7;
  *(_DWORD *)(a1 + 44) = 15;
  *(_DWORD *)(a1 + 140) = 1876;
  *(_DWORD *)(a1 + 181) = 33620498;
  *(_BYTE *)(a1 + 188) = 8;
  *(_BYTE *)(a1 + 118) = 16;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(*(_QWORD *)(a2 + 1480) + 40LL);
  v6 = *(_QWORD *)(a2 + 1480);
  dto_init(v6 + 488, 0);
  dto_init(v6 + 504, 1);
  v7 = *(_DWORD *)(a1 + 140);
  *(_BYTE *)(a1 + 116) = *(_BYTE *)(v6 + 493);
  v8 = v7 & 0xFFFFFFDF;
  if ( *(_BYTE *)(v6 + 494) )
    v8 = v7 | 0x20;
  *(_DWORD *)(a1 + 140) = v8;
  *(_BYTE *)(a1 + 135) = *(_BYTE *)(v6 + 495);
  *(_BYTE *)(a1 + 134) = *(_BYTE *)(v6 + 496);
  *(_BYTE *)(a1 + 145) = *(_BYTE *)(v6 + 497);
  *(_WORD *)(a1 + 136) = *(_WORD *)(v6 + 498);
  *(_WORD *)(a1 + 146) = *(_WORD *)(v6 + 500);
  result = *(unsigned __int8 *)(v6 + 502);
  *(_BYTE *)(a1 + 148) = result;
  return result;
}

