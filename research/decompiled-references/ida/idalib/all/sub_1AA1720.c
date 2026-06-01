_QWORD *__fastcall sub_1AA1720(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  sub_168B6B0((_QWORD *)a1, a2);
  *(_BYTE *)(a1 + 8) = 20;
  *(_WORD *)(a1 + 72) = 5121;
  *(_QWORD *)(a1 + 104) = a1 + 120;
  *(_QWORD *)(a1 + 112) = 0x600000000LL;
  result = (_QWORD *)(a1 + 200);
  *(_WORD *)(a1 + 92) = 5121;
  *(_WORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 32) &= 0xFCu;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 1;
  if ( a1 + 264 != a1 + 200 )
  {
    do
    {
      *result = -4096;
      result += 2;
    }
    while ( (_QWORD *)(a1 + 264) != result );
  }
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 276) = 20;
  *(_QWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 288) = 20;
  *(_DWORD *)(a1 + 292) = 0;
  return result;
}
