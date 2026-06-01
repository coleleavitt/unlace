__int64 __fastcall sub_B4E730(unsigned __int8 *a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // dl
  unsigned __int8 v3; // cl
  unsigned __int8 v4; // al
  char v5; // al
  unsigned __int8 v6; // al
  __int64 result; // rax
  char v8; // si

  v2 = a2 & 7;
  v3 = (a2 >> 3) & 3;
  v4 = *a1 & 7;
  if ( (a2 & 7) == 4 )
  {
    v2 = *a1 & 7;
  }
  else if ( v4 != 4 )
  {
    goto LABEL_3;
  }
  v5 = 1;
  if ( (unsigned __int8)(v2 - 2) <= 1u )
    goto LABEL_6;
  v4 = 4;
LABEL_3:
  if ( v4 > v2 )
    v4 = v2;
  v5 = v4 & 7;
LABEL_6:
  v6 = *a1 & 0xF8 | v5 & 7;
  *a1 = v6;
  result = (v6 >> 3) & 3;
  if ( (unsigned __int8)result >= v3 )
  {
    v8 = a2 & 0x20;
    if ( (_BYTE)result != v3 || v8 )
    {
      result = *a1 & 0xC7;
      *a1 = *a1 & 0xC7 | (8 * (v3 & 3)) | v8;
    }
  }
  return result;
}

