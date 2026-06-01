unsigned __int64 __fastcall sub_740880(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int8 v9; // bl
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rcx
  char v12; // dl

  switch ( a6 )
  {
    case 0:
      v9 = 0;
      break;
    case 1:
      v9 = 1;
      break;
    case 2:
      v9 = 2;
      break;
    case 3:
      v9 = 3;
      break;
    case 4:
      v9 = 4;
      break;
  }
  result = sub_7222F0(a1 + 2192, 56, 3);
  *(_QWORD *)(result + 16) = a5;
  *(_DWORD *)(result + 36) = a2;
  v11 = ((unsigned __int64)v9 << 52) | 0x7019C00000000LL | *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_DWORD *)(result + 40) = a3;
  *(_WORD *)(result + 32) = 408;
  v12 = *(_BYTE *)(result + 34);
  *(_QWORD *)(result + 48) = a4;
  *(_QWORD *)(result + 24) = v11;
  *(_OWORD *)result = 0;
  *(_BYTE *)(result + 34) = v12 & 0xE0 | 4;
  return result;
}

