__int64 __fastcall sub_F33CF0(__int64 a1, char a2, int a3)
{
  char v4; // si
  char v5; // si
  __int64 result; // rax

  *(_QWORD *)a1 = a1;
  *(_BYTE *)(a1 + 18) &= 0xF8u;
  *(_QWORD *)(a1 + 8) = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_WORD *)(a1 + 16) = 10;
  v4 = *(_BYTE *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = 0;
  v5 = a2 & 1 | v4 & 0xFE;
  result = 2 * (a3 & 0xFFFFFFu);
  *(_BYTE *)(a1 + 32) = v5;
  *(_DWORD *)(a1 + 32) = result | *(_DWORD *)(a1 + 32) & 0xFE000001;
  return result;
}

