_QWORD *__fastcall dyld3::appendNumber(_QWORD *this, char **a2)
{
  _BYTE *v2; // x8
  _BYTE *v3; // x10
  _BYTE *v4; // x8
  _BYTE *v5; // x10
  _BYTE *v6; // x8
  _BYTE *v7; // x10
  _BYTE *v8; // x8
  _BYTE *v9; // x10
  _BYTE *v10; // x9

  if ( (unsigned int)a2 >> 4 > 0x270 )
  {
    v3 = (_BYTE *)(*this)++;
    *v3 = (unsigned int)a2 / 0x2710 + 48;
    LODWORD(a2) = (unsigned int)a2 % 0x2710;
    if ( (unsigned int)a2 < 0x3E8 )
    {
      v4 = (_BYTE *)(*this)++;
      *v4 = 48;
      goto LABEL_10;
    }
LABEL_9:
    v5 = (_BYTE *)(*this)++;
    *v5 = (unsigned int)a2 / 0x3E8 + 48;
    LODWORD(a2) = (unsigned int)a2 % 0x3E8;
LABEL_10:
    if ( (unsigned int)a2 < 0x64 )
    {
      v6 = (_BYTE *)(*this)++;
      *v6 = 48;
      goto LABEL_13;
    }
LABEL_12:
    v7 = (_BYTE *)(*this)++;
    *v7 = (unsigned int)a2 / 0x64 + 48;
    LODWORD(a2) = (unsigned int)a2 % 0x64;
LABEL_13:
    if ( (unsigned int)a2 < 0xA )
    {
      v8 = (_BYTE *)(*this)++;
      *v8 = 48;
      if ( !(_DWORD)a2 )
        goto LABEL_6;
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  if ( (unsigned int)a2 >= 0x3E8 )
    goto LABEL_9;
  if ( (unsigned int)a2 > 0x63 )
    goto LABEL_12;
  if ( (unsigned int)a2 >= 0xA )
  {
LABEL_16:
    v9 = (_BYTE *)(*this)++;
    *v9 = (unsigned int)a2 / 0xA + 48;
    LODWORD(a2) = (unsigned int)a2 % 0xA;
    if ( !(_DWORD)a2 )
      goto LABEL_6;
    goto LABEL_17;
  }
  if ( !(_DWORD)a2 )
  {
LABEL_6:
    v2 = (_BYTE *)(*this)++;
    *v2 = 48;
    return this;
  }
LABEL_17:
  v10 = (_BYTE *)(*this)++;
  *v10 = (_BYTE)a2 + 48;
  return this;
}
