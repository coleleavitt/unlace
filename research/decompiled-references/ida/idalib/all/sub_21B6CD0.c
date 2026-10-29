__int64 __fastcall sub_21B6CD0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  *(_QWORD *)(a1 + 16) = 0x1000000000LL;
  *(_QWORD *)a1 = off_2BE9928;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = a2;
  *(_QWORD *)(a1 + 184) = a1 + 200;
  *(_QWORD *)(a1 + 192) = 0x1000000000LL;
  return 0x1000000000LL;
}
