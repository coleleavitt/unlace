__int64 __fastcall sub_F5E170(__int64 a1, char a2, __int64 a3, unsigned __int64 a4)
{
  char v7; // al
  unsigned __int64 v8; // rdi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  __int64 result; // rax

  v7 = sub_B8E180(a3 + 64);
  *(_BYTE *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  v8 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)a1 = a1;
  v9 = -(v7 != 0);
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v8 = a4;
  v10 = v9 & 6;
  v11 = *(unsigned __int8 *)(a1 + 17);
  *(_QWORD *)(a1 + 8) = v8;
  result = v10 | v11 & 0xFFFFFFE0;
  *(_BYTE *)(a1 + 17) = result;
  *(_WORD *)(a1 + 17) &= 0xF81Fu;
  return result;
}
