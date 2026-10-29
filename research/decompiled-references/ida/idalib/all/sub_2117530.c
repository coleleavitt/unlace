__int64 __fastcall sub_2117530(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        char a8,
        __int64 a9)
{
  int v9; // r13d
  char v11; // al
  __int64 result; // rax

  v9 = a6;
  LOBYTE(a6) = 0;
  if ( (unsigned __int8)v9 <= 0x12u )
    a6 = (0x41002uLL >> v9) & 1;
  sub_2113B00(a1, 3, a4, a5, (unsigned __int8)(a8 - 2) <= 1u, a6, a9);
  *(_DWORD *)(a1 + 188) = v9;
  *(_DWORD *)(a1 + 196) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)a1 = off_2C730C8;
  *(_DWORD *)(a1 + 192) = a7;
  *(_QWORD *)(a1 + 200) = a1 + 216;
  if ( !a3 )
  {
    *(_WORD *)(a1 + 172) = 0;
LABEL_23:
    *(_BYTE *)(a1 + 174) = 0;
    goto LABEL_24;
  }
  *(_BYTE *)(a1 + 172) = *a2;
  if ( a3 <= 1 )
    v11 = 0;
  else
    v11 = a2[1];
  *(_BYTE *)(a1 + 173) = v11;
  if ( a3 <= 2 )
    goto LABEL_23;
  *(_BYTE *)(a1 + 174) = a2[2];
  if ( a3 <= 3 )
  {
LABEL_24:
    *(_BYTE *)(a1 + 175) = 0;
    goto LABEL_25;
  }
  *(_BYTE *)(a1 + 175) = a2[3];
  if ( a3 <= 4 )
  {
LABEL_25:
    *(_BYTE *)(a1 + 176) = 0;
    goto LABEL_26;
  }
  *(_BYTE *)(a1 + 176) = a2[4];
  if ( a3 <= 5 )
  {
LABEL_26:
    *(_BYTE *)(a1 + 177) = 0;
    goto LABEL_27;
  }
  *(_BYTE *)(a1 + 177) = a2[5];
  if ( a3 <= 6 )
  {
LABEL_27:
    *(_BYTE *)(a1 + 178) = 0;
    goto LABEL_28;
  }
  *(_BYTE *)(a1 + 178) = a2[6];
  if ( a3 <= 7 )
  {
LABEL_28:
    *(_BYTE *)(a1 + 179) = 0;
    goto LABEL_29;
  }
  *(_BYTE *)(a1 + 179) = a2[7];
  if ( a3 <= 8 )
  {
LABEL_29:
    *(_BYTE *)(a1 + 180) = 0;
    goto LABEL_30;
  }
  *(_BYTE *)(a1 + 180) = a2[8];
  if ( a3 <= 9 )
  {
LABEL_30:
    *(_BYTE *)(a1 + 181) = 0;
    goto LABEL_31;
  }
  *(_BYTE *)(a1 + 181) = a2[9];
  if ( a3 <= 0xA )
  {
LABEL_31:
    *(_BYTE *)(a1 + 182) = 0;
    goto LABEL_32;
  }
  *(_BYTE *)(a1 + 182) = a2[10];
  if ( a3 <= 0xB )
  {
LABEL_32:
    *(_BYTE *)(a1 + 183) = 0;
    goto LABEL_33;
  }
  *(_BYTE *)(a1 + 183) = a2[11];
  if ( a3 <= 0xC )
  {
LABEL_33:
    *(_BYTE *)(a1 + 184) = 0;
    goto LABEL_34;
  }
  *(_BYTE *)(a1 + 184) = a2[12];
  if ( a3 <= 0xD )
  {
LABEL_34:
    *(_BYTE *)(a1 + 185) = 0;
    goto LABEL_35;
  }
  *(_BYTE *)(a1 + 185) = a2[13];
  if ( a3 <= 0xE )
  {
LABEL_35:
    *(_BYTE *)(a1 + 186) = 0;
    result = 0;
    goto LABEL_21;
  }
  *(_BYTE *)(a1 + 186) = a2[14];
  if ( a3 <= 0xF )
    result = 0;
  else
    result = (unsigned __int8)a2[15];
LABEL_21:
  *(_BYTE *)(a1 + 187) = result;
  return result;
}
