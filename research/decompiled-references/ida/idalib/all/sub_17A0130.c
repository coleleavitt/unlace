__int64 __fastcall sub_17A0130(_WORD *a1, char a2)
{
  __int16 v3; // r12
  __int64 result; // rax
  __int16 v5; // dx
  __int16 v6; // si
  __int16 v7; // cx
  __int16 v8; // si
  __int16 v9; // dx
  __int16 v10; // dx

  v3 = a1[15];
  result = (*(__int64 (**)(void))(*(_QWORD *)a1 + 48LL))();
  v5 = a1[15];
  v6 = v3 & 0xCA0;
  v7 = v5 & 0x3FD9;
  if ( (v3 & 0x102) == 0 )
  {
    a1[15] = v5 & 0xFFD9;
    goto LABEL_3;
  }
  v9 = a1[15] & 0x3ED9 | 0x100 | v5 & 0xC000;
  a1[15] = v9;
  if ( a2 )
    goto LABEL_14;
  if ( result )
  {
    if ( (*(_BYTE *)(result + 30) & 2) == 0 )
    {
      if ( !v6 )
        return result;
      v10 = v7 & 0x3E7F | 0x180 | v9 & 0xC000;
      v7 |= 0x100u;
      a1[15] = v10;
      goto LABEL_12;
    }
LABEL_14:
    v7 |= 0x106u;
    a1[15] = v7 & 0x3FFF | a1[15] & 0xC000;
    goto LABEL_3;
  }
  v7 |= 0x100u;
LABEL_3:
  if ( !v6 )
    return result;
  v8 = v7 & 0x3F7F | 0x80 | a1[15] & 0xC000;
  a1[15] = v8;
  if ( a2 )
    goto LABEL_5;
  if ( result )
  {
LABEL_12:
    if ( (*(_BYTE *)(result + 30) & 0x20) != 0 )
    {
      v8 = a1[15];
LABEL_5:
      LOBYTE(v7) = v7 | 0xA0;
      a1[15] = v7 & 0x3FFF | v8 & 0xC000;
    }
  }
  return result;
}
