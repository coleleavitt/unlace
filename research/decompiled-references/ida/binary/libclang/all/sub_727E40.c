unsigned __int64 __fastcall sub_727E40(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // rbp
  unsigned __int8 v8; // bl
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rcx
  char v11; // dl

  if ( a5 == 1 )
  {
    v7 = 1;
    v8 = 2;
  }
  else if ( a5 == 2 )
  {
    v7 = 2;
    v8 = 3;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  result = sub_7222F0(a1 + 2192, 48, 3);
  *(_QWORD *)(result + 16) = a4;
  *(_DWORD *)(result + 36) = a2;
  v10 = *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_DWORD *)(result + 40) = a3;
  *(_OWORD *)result = 0;
  *(_WORD *)(result + 32) = 120;
  v11 = *(_BYTE *)(result + 34);
  *(_QWORD *)(result + 24) = (v7 << 52) | ((unsigned __int64)v8 << 48) | 0x19C00000000LL | v10;
  *(_BYTE *)(result + 34) = v11 & 0xE0 | 4;
  return result;
}

