__int64 __fastcall sub_F33C20(__int64 a1, char a2, __int64 a3, int a4, unsigned __int64 a5, char a6)
{
  char v6; // al
  char v7; // r10
  unsigned __int64 v8; // rax
  __int16 v9; // ax
  __int64 result; // rax

  v6 = *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)a1 = a1;
  *(_BYTE *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0;
  v7 = v6 & 0x1F;
  *(_QWORD *)(a1 + 32) = a3;
  v8 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD *)(a1 + 20) = a4;
  if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v8 = a5;
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(a1 + 17) = v7 | *(_BYTE *)(a1 + 17) & 0xE0;
  v9 = *(_WORD *)(a1 + 17) & 0xF81F;
  *(_WORD *)(a1 + 17) = v9;
  result = (8 * a6) & 0x78 | HIBYTE(v9) & 0x87u;
  *(_BYTE *)(a1 + 18) = result;
  return result;
}

