__int64 __fastcall sub_F578F0(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, char a5)
{
  char v5; // al
  char v6; // r9
  unsigned __int64 v7; // rax
  __int16 v8; // ax
  __int64 result; // rax

  v5 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)a1 = a1;
  *(_BYTE *)(a1 + 16) = 57;
  *(_QWORD *)(a1 + 24) = 0;
  v6 = v5 & 0x1F;
  *(_QWORD *)(a1 + 32) = a2;
  v7 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD *)(a1 + 20) = a3;
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v7 = a4;
  *(_QWORD *)(a1 + 8) = v7;
  *(_BYTE *)(a1 + 17) = v6 | *(_BYTE *)(a1 + 17) & 0xE0;
  v8 = *(_WORD *)(a1 + 17) & 0xF81F;
  *(_WORD *)(a1 + 17) = v8;
  result = (8 * a5) & 0x78 | HIBYTE(v8) & 0x87u;
  *(_BYTE *)(a1 + 18) = result;
  return result;
}
