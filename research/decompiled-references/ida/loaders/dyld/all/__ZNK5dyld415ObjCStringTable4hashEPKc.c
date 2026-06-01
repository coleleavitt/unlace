__int64 __fastcall dyld4::ObjCStringTable::hash(dyld4::ObjCStringTable *this, char *__s)
{
  const unsigned __int8 *v4; // x0
  unsigned __int64 v5; // x0
  int v6; // w8
  unsigned int v7; // w8

  v4 = (const unsigned __int8 *)_platform_strlen(__s);
  v5 = objc::lookup8((objc *)__s, v4, *((_QWORD *)this + 3));
  v6 = *((_DWORD *)this + 2);
  if ( v6 == 64 )
    v7 = 0;
  else
    v7 = v5 >> v6;
  return v7 ^ *((_DWORD *)this + *((unsigned __int8 *)this + ((unsigned int)v5 & *((_DWORD *)this + 3)) + 1056) + 8);
}
