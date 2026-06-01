__int64 __fastcall dyld4::Loader::appendHexByte(__int64 this, _QWORD *a2, char **a3)
{
  unsigned int v3; // w8
  char v4; // w8
  _BYTE *v5; // x9
  char v6; // w8
  char v7; // w8
  _BYTE *v8; // x9

  v3 = (unsigned int)this >> 4;
  if ( (unsigned int)this > 0x9F )
    v4 = v3 + 55;
  else
    v4 = v3 | 0x30;
  v5 = (_BYTE *)(*a2)++;
  *v5 = v4;
  v6 = this & 0xF;
  if ( ((unsigned __int8)this & 0xFu) > 9 )
    v7 = v6 + 55;
  else
    v7 = v6 | 0x30;
  v8 = (_BYTE *)(*a2)++;
  *v8 = v7;
  return this;
}
