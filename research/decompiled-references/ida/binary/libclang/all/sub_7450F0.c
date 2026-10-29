unsigned __int64 __fastcall sub_7450F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  switch ( a3 )
  {
    case 0:
      v3 = 0;
      v4 = 6;
      break;
    case 1:
      v3 = 1;
      v4 = 1;
      break;
    case 2:
      v3 = 2;
      v4 = 2;
      break;
    case 3:
      v3 = 3;
      v4 = 3;
      break;
    case 4:
      v3 = 4;
      v4 = 2;
      break;
    case 5:
      v3 = 5;
      v4 = 3;
      break;
    case 6:
      v3 = 6;
      v4 = 2;
      break;
    case 7:
      v3 = 7;
      v4 = 3;
      break;
    case 8:
      v3 = 8;
      v4 = 4;
      break;
  }
  v5 = sub_7222F0(a1 + 2192, 40, 3);
  *(_QWORD *)(v5 + 16) = a2;
  v6 = v5;
  *(_OWORD *)v5 = 0;
  v7 = (v3 << 52) | ((unsigned __int64)v4 << 48) | 0x19C00000000LL;
  v8 = v7 | *(_QWORD *)(v6 + 24) & 0xFC00000000000000LL;
  v9 = HIWORD(v7);
  *(_QWORD *)(v6 + 24) = v8;
  *(_WORD *)(v6 + 32) = 50;
  *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xE0 | 4;
  if ( (~(_BYTE)v9 & 0xF0) == 0 )
    *(_BYTE *)(v6 + 30) = v9 & 0xF;
  return v6;
}

