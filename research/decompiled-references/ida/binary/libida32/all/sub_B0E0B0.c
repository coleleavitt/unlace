__int64 __fastcall sub_B0E0B0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v5; // bl
  char v6; // bp
  __int64 result; // rax
  char v8; // dl

  if ( a4 == 1 )
  {
    v5 = 1;
    v6 = 1;
  }
  else if ( a4 )
  {
    v5 = (a4 != 2) + 2;
    v6 = v5;
  }
  else
  {
    v5 = 0;
    v6 = 2;
  }
  result = sub_99FDF0((__int64 *)(a1 + 2352), 48, 3u);
  *(_WORD *)(result + 32) = 418;
  v8 = *(_BYTE *)(result + 38);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a3;
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_QWORD *)(result + 40) = a2;
  *(_WORD *)(result + 36) = 44;
  *(_BYTE *)(result + 38) = v8 & 0xE0 | 4;
  *(_BYTE *)(result + 34) = v6 | (16 * v5);
  return result;
}

