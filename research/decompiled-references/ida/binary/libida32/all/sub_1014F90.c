__int64 __fastcall sub_1014F90(__int64 a1, const __m128i *a2, __int64 a3)
{
  _BOOL4 v3; // eax
  int v4; // eax
  __int64 result; // rax

  sub_10094E0(a1, a2, a3);
  *(_BYTE *)(a1 + 509) = 0;
  *(_QWORD *)a1 = &off_2C08C18;
  *(_DWORD *)(a1 + 512) = 0;
  sub_1009A40((_QWORD *)a1, "E-m:e-i64:64-i128:128-n32:64-S128", 33, (__int64)&byte_22CD811);
  *(_WORD *)(a1 + 8) = 16448;
  v3 = *(_DWORD *)(a1 + 260) == 12;
  *(_WORD *)(a1 + 30) = 16448;
  v4 = 2 * v3 + 7;
  *(_WORD *)(a1 + 24) = -32640;
  *(_DWORD *)(a1 + 140) = v4;
  *(_DWORD *)(a1 + 168) = v4;
  *(_WORD *)(a1 + 62) = 128;
  result = sub_21D5380();
  *(_QWORD *)(a1 + 112) = result;
  *(_WORD *)(a1 + 286) = 16448;
  return result;
}

