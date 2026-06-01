__int64 __fastcall sub_F3A4A0(__int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  char v7; // r10
  unsigned __int64 v8; // rax

  v6 = *(_BYTE *)(*(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)a1 = a1;
  *(_BYTE *)(a1 + 16) = 8;
  *(_QWORD *)(a1 + 24) = 0;
  v7 = v6 & 0x1F;
  *(_QWORD *)(a1 + 32) = a4;
  v8 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 40) = a5;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v8 = a2;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(a1 + 17) = v7 | *(_BYTE *)(a1 + 17) & 0xE0;
  *(_WORD *)(a1 + 17) &= 0xF81Fu;
  *(_WORD *)(a1 + 18) = (8 * a3) | *(_WORD *)(a1 + 18) & 7;
  return (unsigned int)(8 * a3);
}

