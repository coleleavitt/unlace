__int64 __fastcall sub_62FF70(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // al
  bool v5; // zf
  __int64 v6; // rbp
  int v7; // edx
  unsigned int v8; // eax
  __int64 result; // rax

  v3 = a1 + 8;
  *(_QWORD *)(v3 - 8) = 0;
  *(_QWORD *)(v3 + 272) = 0;
  memset(
    (void *)(v3 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v3 & 0xFFFFFFF8) + 288) >> 3));
  *(_WORD *)(a1 + 4) = 920;
  *(_WORD *)a1 = 17481;
  v4 = 1;
  v5 = byte_2CCC2F8 == 0;
  *(_WORD *)(a1 + 184) = 514;
  if ( !v5 )
    v4 = 17;
  *(_WORD *)(a1 + 216) = 4353;
  *(_WORD *)(a1 + 22) = 3;
  *(_OWORD *)(a1 + 72) = -1;
  *(_OWORD *)(a1 + 56) = -1;
  byte_2CCC2FA = 0;
  byte_2CCC2F9 = 0;
  *(_BYTE *)(a1 + 2) = 65;
  *(_DWORD *)(a1 + 24) = 519;
  *(_QWORD *)(a1 + 88) = -1;
  *(_DWORD *)(a1 + 40) = -536961033;
  *(_QWORD *)(a1 + 104) = -1;
  *(_QWORD *)(a1 + 136) = -1;
  *(_QWORD *)(a1 + 152) = 16;
  *(_BYTE *)(a1 + 218) = 10;
  *(_BYTE *)(a1 + 187) = 15;
  *(_BYTE *)(a1 + 212) = v4;
  *(_BYTE *)(a1 + 201) = 15;
  *(_BYTE *)(a1 + 224) = 97;
  *(_QWORD *)(a1 + 96) = -1;
  *(_WORD *)(a1 + 188) = 15;
  *(_WORD *)(a1 + 206) = 80;
  *(_WORD *)(a1 + 262) = 1026;
  *(_QWORD *)(a1 + 192) = 0x64000070EA3BE67LL;
  *(_QWORD *)(a1 + 248) = 23;
  *(_DWORD *)(a1 + 44) = 15;
  *(_DWORD *)(a1 + 208) = 1876;
  *(_DWORD *)(a1 + 257) = 67175441;
  *(_BYTE *)(a1 + 264) = 8;
  *(_BYTE *)(a1 + 186) = 16;
  *(__m128i *)(a1 + 160) = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a2 + 1672) + 40LL));
  v6 = *(_QWORD *)(a2 + 1672);
  dto_init(v6 + 496, 0);
  dto_init(v6 + 512, 1);
  v7 = *(_DWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 184) = *(_BYTE *)(v6 + 501);
  v8 = v7 & 0xFFFFFFDF;
  if ( *(_BYTE *)(v6 + 502) )
    v8 = v7 | 0x20;
  *(_DWORD *)(a1 + 208) = v8;
  *(_BYTE *)(a1 + 203) = *(_BYTE *)(v6 + 503);
  *(_BYTE *)(a1 + 202) = *(_BYTE *)(v6 + 504);
  *(_BYTE *)(a1 + 213) = *(_BYTE *)(v6 + 505);
  *(_WORD *)(a1 + 204) = *(_WORD *)(v6 + 506);
  *(_WORD *)(a1 + 214) = *(_WORD *)(v6 + 508);
  result = *(unsigned __int8 *)(v6 + 510);
  *(_BYTE *)(a1 + 216) = result;
  return result;
}
