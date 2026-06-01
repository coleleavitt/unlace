__int64 __fastcall sub_779E00(unsigned __int8 *a1, unsigned __int8 a2)
{
  unsigned __int8 v3; // dl
  unsigned __int8 v4; // di
  unsigned __int8 v5; // al
  char v6; // al
  unsigned __int8 v7; // al
  __int64 result; // rax
  int v9; // esi
  int v10; // edi

  v3 = a2 & 7;
  v4 = (a2 >> 3) & 3;
  v5 = *a1 & 7;
  if ( (a2 & 7) == 4 )
  {
    v3 = *a1 & 7;
  }
  else if ( v5 != 4 )
  {
    goto LABEL_3;
  }
  v6 = 1;
  if ( (unsigned __int8)(v3 - 2) <= 1u )
    goto LABEL_6;
  v5 = 4;
LABEL_3:
  if ( v3 <= v5 )
    v5 = v3;
  v6 = v5 & 7;
LABEL_6:
  v7 = *a1 & 0xF8 | v6 & 7;
  *a1 = v7;
  result = (v7 >> 3) & 3;
  if ( (unsigned __int8)result >= v4 )
  {
    v9 = a2 & 0x20;
    if ( (_BYTE)result != v4 || (_BYTE)v9 )
    {
      v10 = 8 * (v4 & 3);
      result = v9 | v10 | *a1 & 0xC7u;
      *a1 = v9 | v10 | *a1 & 0xC7;
    }
  }
  return result;
}

