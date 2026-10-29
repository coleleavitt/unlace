__int64 __fastcall sub_F3A3D0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int64 a5)
{
  char v5; // al
  int v6; // r9d
  unsigned __int64 v7; // rax
  __int64 result; // rax

  v5 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)a1 = a1;
  *(_BYTE *)(a1 + 16) = 54;
  *(_QWORD *)(a1 + 24) = 0;
  v6 = v5 & 0x1F;
  *(_QWORD *)(a1 + 32) = a2;
  v7 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 40) = a3;
  if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v7 = a5;
  *(_DWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 8) = v7;
  result = v6 | *(_BYTE *)(a1 + 17) & 0xE0u;
  *(_BYTE *)(a1 + 17) = v6 | *(_BYTE *)(a1 + 17) & 0xE0;
  *(_WORD *)(a1 + 17) &= 0xF81Fu;
  return result;
}

