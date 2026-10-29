__int64 __fastcall sub_783E70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  int v4; // eax
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]

  v8 = 0;
  v2 = sub_7943D0(168, a1, a2, 0);
  v9 = 0;
  v7 = 0;
  *(_OWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = off_49F5208;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x602000000000LL;
  v3 = sub_799DF0(32);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(32);
  *(_QWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)v2 = &off_47D9BD0;
  *(_QWORD *)(v2 + 56) = 0;
  sub_79B760(v2 + 72, 32);
  *(_QWORD *)(v2 + 104) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v2 + 112) = v2;
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)v2 = &off_47D9D38;
  *(_QWORD *)(v2 + 128) = 0;
  *(_DWORD *)(v2 + 136) = 0;
  v4 = sub_792B00(&v7);
  if ( !v4 )
    v4 = v8;
  *(_DWORD *)(v2 + 140) = v4;
  v5 = v9;
  *(_WORD *)(v2 + 84) &= 0xE000u;
  *(_QWORD *)(v2 + 160) = v5;
  LODWORD(v5) = *(_DWORD *)(v2 + 80);
  *(_DWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_DWORD *)(v2 + 80) = v5 & 0x1FFF | 0x200000;
  return v2;
}

