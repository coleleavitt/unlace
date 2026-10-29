unsigned __int64 __fastcall sub_73A5F0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v9; // rbp
  unsigned __int8 v10; // bl
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl

  if ( a6 == 1 )
  {
    v9 = 1;
    v10 = 2;
  }
  else if ( a6 == 2 )
  {
    v9 = 2;
    v10 = 3;
  }
  else
  {
    v9 = 0;
    v10 = 1;
  }
  result = sub_7222F0(a1 + 2192, 56, 3);
  *(_QWORD *)(result + 16) = a5;
  *(_QWORD *)(result + 40) = a2;
  v12 = *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_DWORD *)(result + 48) = a3;
  *(_DWORD *)(result + 52) = a4;
  *(_WORD *)(result + 32) = 212;
  v13 = *(_BYTE *)(result + 34);
  *(_QWORD *)(result + 24) = (v9 << 52) | ((unsigned __int64)v10 << 48) | 0x19C00000000LL | v12;
  *(_OWORD *)result = 0;
  *(_BYTE *)(result + 34) = v13 & 0xE0 | 4;
  return result;
}

