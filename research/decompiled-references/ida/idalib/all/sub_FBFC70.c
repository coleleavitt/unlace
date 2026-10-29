unsigned __int64 __fastcall sub_FBFC70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 result; // rax
  __int16 v8; // ax

  *(_QWORD *)(a1 + 15) = 0;
  v3 = *(_QWORD *)a1 & 0xE000000000000000LL | 0x10000C80000CC1F0LL;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)a1 = v3;
  LODWORD(v3) = *(_DWORD *)(a1 + 128) & 0xFFF01FFF;
  *(_QWORD *)(a1 + 7) = *(_QWORD *)(a1 + 7) & 0xDFLL | 0x1000000C800LL;
  v4 = *(_QWORD *)(a1 + 31) & 0xFFFF3C0000LL | 0x10000015040LL;
  *(_DWORD *)(a1 + 128) = v3;
  *(_QWORD *)(a1 + 31) = v4;
  v5 = *(_QWORD *)(a1 + 39) & 0xF800000000000000LL | 0x3FFF80000000000LL;
  *(_WORD *)(a1 + 130) = WORD1(v3) & 0xC00F;
  *(_QWORD *)(a1 + 39) = v5;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 48) & 0xFFFFFFF800000000LL | 0x47FFFFFFELL;
  *(_QWORD *)(a1 + 52) &= 0xFFFFFFF000000007LL;
  *(_QWORD *)(a1 + 60) = *(_QWORD *)(a1 + 60) & 0xFFFF000000000000LL | 0x4000000000LL;
  *(_QWORD *)(a1 + 68) = *(_QWORD *)(a1 + 68) & 0xFFFFF80000000000LL | 0x1F4;
  *(_WORD *)(a1 + 131) = *(_WORD *)(a1 + 131) & 0xF03F | 0x140;
  *(_QWORD *)(a1 + 23) = 0x100020000000000LL;
  v6 = *(_QWORD *)(a1 + 72) & 0xFFFF87FFLL;
  BYTE1(v6) |= 0x18u;
  *(_QWORD *)(a1 + 72) = v6;
  *(_QWORD *)(a1 + 80) = 0x100000000000LL;
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 88) & 0xFFFFFFE000000000LL | 0xFFFFFFFF;
  *(_QWORD *)(a1 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a1 + 112) & 0xFFFFFE00LL | 0x7FFFFFFF00000000LL;
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a1 + 120) & 0xFB08000000000000LL | 0x300400000000LL;
  result = *(_DWORD *)(a1 + 132) & 0xE000000F | 0x4014000;
  *(_DWORD *)(a1 + 132) = result;
  if ( a3 == 3 && *(_WORD *)a2 == 24946 && *(_BYTE *)(a2 + 2) == 119 && (*(_BYTE *)(a1 + 127) & 0x10) == 0 )
  {
    *(_WORD *)(a1 + 136) &= 0xFE00u;
    v8 = *(_WORD *)(a1 + 126);
    *(_DWORD *)(a1 + 832) = 1;
    v8 &= 0x4F7u;
    HIBYTE(v8) |= 0x41u;
    *(_WORD *)(a1 + 126) = v8;
    *(_QWORD *)(a1 + 128) &= 0x9FFFFFFFFFFFE000LL;
    return 0x9FFFFFFFFFFFE000LL;
  }
  else
  {
    *(_DWORD *)(a1 + 832) = 1;
  }
  return result;
}
