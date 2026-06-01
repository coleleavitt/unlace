__int64 __fastcall sub_613120(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax

  *(_QWORD *)(a1 + 8) = 100;
  v2 = *a2;
  *(_QWORD *)a1 = &off_1C52890;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 48) = v2;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = a2 + 82;
  *(_QWORD *)(a1 + 56) = a2 + 82;
  sub_5C8F60(a1 + 72, a2, 40000);
  sub_FA3A80(a1 + 496, *(_QWORD *)(a1 + 48));
  v3 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 656) = 1;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 624) = v3;
  *(_DWORD *)(a1 + 672) = 1;
  *(_BYTE *)(a1 + 680) = 0;
  *(_WORD *)(a1 + 688) = 256;
  *(_OWORD *)(a1 + 640) = 0;
  return 256;
}

