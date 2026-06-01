__int64 __fastcall dyld3::MachOFile::packedVersionToString(dyld3::MachOFile *this, _BYTE *a2, char *a3)
{
  __int16 v3; // w19
  _BYTE *v4; // x8
  unsigned int v5; // w2
  __int64 result; // x0
  unsigned int v7; // w2
  _BYTE *v8; // x8
  _BYTE *v9; // [xsp+8h] [xbp-18h] BYREF

  v3 = (__int16)this;
  v9 = a2;
  dyld3::appendNumber((dyld3 *)&v9, (char **)((unsigned int)this >> 16), (unsigned int)a3);
  v4 = v9;
  *v9 = 46;
  v9 = v4 + 1;
  result = dyld3::appendNumber((dyld3 *)&v9, (char **)HIBYTE(v3), v5);
  if ( (_BYTE)v3 )
  {
    v8 = v9;
    *v9 = 46;
    v9 = v8 + 1;
    result = dyld3::appendNumber((dyld3 *)&v9, (char **)(unsigned __int8)v3, v7);
  }
  *v9 = 0;
  return result;
}
