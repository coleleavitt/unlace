unsigned __int64 __fastcall sub_727B80(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rbp
  unsigned __int8 v6; // bl
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rcx
  char v9; // dl

  if ( a4 == 1 )
  {
    v5 = 1;
    v6 = 2;
  }
  else if ( a4 == 2 )
  {
    v5 = 2;
    v6 = 3;
  }
  else
  {
    v5 = 0;
    v6 = 1;
  }
  result = sub_7222F0(a1 + 2192, 40, 3);
  *(_QWORD *)(result + 16) = a3;
  *(_DWORD *)(result + 36) = a2;
  v8 = *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_OWORD *)result = 0;
  *(_WORD *)(result + 32) = 119;
  v9 = *(_BYTE *)(result + 34);
  *(_QWORD *)(result + 24) = (v5 << 52) | ((unsigned __int64)v6 << 48) | 0x19C00000000LL | v8;
  *(_BYTE *)(result + 34) = v9 & 0xE0 | 4;
  return result;
}

