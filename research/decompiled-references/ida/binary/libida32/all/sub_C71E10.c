__int64 __fastcall sub_C71E10(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  char v6; // bp
  char v7; // al
  __int64 result; // rax
  unsigned __int8 v9; // al
  __int64 v10; // [rsp+8h] [rbp-30h]

  v6 = (a4 == 0) + 1;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x30;
  if ( unk_2CAD564 )
  {
    v10 = a5;
    sub_EC5E10(48);
    a5 = v10;
  }
  v7 = *(_BYTE *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 1) = (2 * v6) | v7 & 0xF9;
  *(_WORD *)(a1 + 1) &= 0xF807u;
  if ( a5 )
  {
    *(_QWORD *)(a1 + 16) = a5 | 4;
    *(_QWORD *)(a5 + 40) = a3;
    return a5 | 4;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a3 & 0xFFFFFFFFFFFFFFFBLL;
    v9 = sub_B41C20(a1);
    *(_BYTE *)(a1 + 1) = (v9 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
    result = *(_BYTE *)(a1 + 2) & 0xF8 | (v9 >> 2) & 7u;
    *(_BYTE *)(a1 + 2) = result;
  }
  return result;
}

