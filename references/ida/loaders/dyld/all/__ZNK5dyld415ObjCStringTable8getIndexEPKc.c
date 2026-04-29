__int64 __fastcall dyld4::ObjCStringTable::getIndex(dyld4::ObjCStringTable *this, char *__s)
{
  const unsigned __int8 *v4; // x0
  char v5; // w20
  unsigned __int64 v6; // x0
  int v7; // w8
  int v8; // w8
  unsigned int v9; // w8

  v4 = (const unsigned __int8 *)_platform_strlen(__s);
  v5 = (char)v4;
  v6 = objc::lookup8((objc *)__s, v4, *((_QWORD *)this + 3));
  v7 = *((_DWORD *)this + 2);
  if ( v7 == 64 )
    v8 = 0;
  else
    v8 = v6 >> v7;
  v9 = v8 ^ *((_DWORD *)this + *((unsigned __int8 *)this + ((unsigned int)v6 & *((_DWORD *)this + 3)) + 1056) + 8);
  if ( *(_DWORD *)this <= v9 )
    dyld4::ObjCStringTable::getIndex();
  if ( *((unsigned __int8 *)this + *((unsigned int *)this + 4) + v9 + 1056) == (v5 & 0x1F | (unsigned __int8)(32 * *__s)) )
    return v9;
  else
    return 0xFFFFFFFFLL;
}
