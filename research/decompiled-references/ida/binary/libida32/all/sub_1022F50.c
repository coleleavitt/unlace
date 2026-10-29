void __fastcall sub_1022F50(__int64 a1, const __m128i *a2, __int64 a3)
{
  bool v3; // zf
  char v4; // al

  sub_10094E0(a1, a2, a3);
  *(_BYTE *)(a1 + 509) = 0;
  *(_QWORD *)a1 = &off_2C08830;
  *(_DWORD *)(a1 + 512) = 0;
  sub_1009A40((_QWORD *)a1, "E-m:e-p:32:32-i64:64-i128:128-f128:64-n32-S64", 45, (__int64)&byte_22CD811);
  if ( (unsigned int)(*(_DWORD *)(a1 + 260) - 11) <= 1 )
  {
    *(_DWORD *)(a1 + 136) = 8;
    *(_QWORD *)(a1 + 144) = 0x700000007LL;
  }
  else
  {
    *(_DWORD *)(a1 + 136) = 6;
    *(_QWORD *)(a1 + 144) = 0x500000005LL;
  }
  *(_BYTE *)(a1 + 286) = 64;
  v3 = (unsigned int)sub_108B850(a1, *(unsigned int *)(a1 + 512)) == 1;
  v4 = 64;
  if ( !v3 )
    v4 = 32;
  *(_BYTE *)(a1 + 287) = v4;
  *(_QWORD *)a1 = &off_2BDD950;
  sub_1009A40((_QWORD *)a1, "e-m:e-p:32:32-i64:64-i128:128-f128:64-n32-S64", 45, (__int64)&byte_22CD811);
}

