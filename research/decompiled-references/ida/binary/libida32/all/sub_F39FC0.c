__int64 __fastcall sub_F39FC0(__int64 a1, _DWORD *a2, __int64 a3, unsigned __int64 a4)
{
  char v6; // al
  __int64 v7; // r9
  char v8; // r10
  char v9; // al
  char v10; // r10
  unsigned __int64 v11; // rcx
  __int64 v12; // r11
  int v13; // eax
  __int64 result; // rax

  v6 = sub_F328B0(
         (*a2 >> 14) & 2u
       | (4 * (((*a2 >> 14) & 4) != 0))
       | (8 * (((*a2 >> 14) & 8) != 0))
       | ((*a2 & 0x4000) != 0)
       | (16 * (((*a2 >> 14) & 0x10) != 0)));
  *(_QWORD *)(v7 + 32) = a3;
  v9 = v6 | v8;
  v10 = *(_BYTE *)(v7 + 17);
  v11 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 24) = v12;
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v11 = a4;
  *(_BYTE *)(v7 + 18) &= 0xF8u;
  *(_BYTE *)(v7 + 17) = v9 & 0x1F | v10 & 0xE0;
  v13 = *(unsigned __int16 *)(v7 + 16);
  *(_QWORD *)(v7 + 8) = v11;
  LOWORD(v13) = v13 & 0x1F00;
  result = v13 | 0xFu;
  *(_WORD *)(v7 + 16) = result;
  return result;
}

