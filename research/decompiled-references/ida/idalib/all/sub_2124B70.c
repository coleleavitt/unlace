__int64 __fastcall sub_2124B70(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v3; // al
  __int64 result; // rax

  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  *(_QWORD *)(a1 + 88) = a1 + 104;
  *(_OWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 128) = 16777473;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 16777217;
  *(_BYTE *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 10;
  *(_WORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  v2 = *(_QWORD *)(a2 + 56) == 0;
  *(_QWORD *)(a1 + 80) = 0;
  if ( v2 || (v3 = 0, **(_BYTE **)(a2 + 48) != 64) )
    v3 = *(_BYTE *)(a2 + 328);
  *(_BYTE *)(a1 + 145) = v3;
  result = *(unsigned __int8 *)(a2 + 377);
  *(_DWORD *)(a1 + 16) = 11;
  *(_BYTE *)(a1 + 151) = result;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 64;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 8) = 1;
  return result;
}
