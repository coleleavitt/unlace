__int64 __fastcall sub_779E80(_BYTE *a1, unsigned __int8 a2, char a3)
{
  unsigned __int8 v3; // cl
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // al
  char v6; // al
  __int64 result; // rax
  int v8; // esi
  int v9; // r8d

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
  result = *a1 & 0xF8 | v6 & 7u;
  *a1 = result;
  if ( a3 )
  {
    result = ((unsigned __int8)result >> 3) & 3;
    if ( (unsigned __int8)result >= v4 )
    {
      v8 = a2 & 0x20;
      if ( (_BYTE)result != v4 || (_BYTE)v8 )
      {
        v9 = 8 * (v4 & 3);
        result = v8 | v9 | *a1 & 0xC7u;
        *a1 = v8 | v9 | *a1 & 0xC7;
      }
    }
  }
  return result;
}

