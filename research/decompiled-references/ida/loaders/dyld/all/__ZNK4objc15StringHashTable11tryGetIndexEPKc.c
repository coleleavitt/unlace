__int64 __fastcall objc::StringHashTable::tryGetIndex(objc::StringHashTable *this, char *__s)
{
  const unsigned __int8 *v4; // x0
  char v5; // w21
  unsigned __int64 v6; // x0
  int v7; // w8
  __int64 v8; // x9
  unsigned int v9; // w8
  __int64 v10; // x22
  char *v11; // x8
  __int64 v12; // x8
  int v13; // w9
  __int64 v14; // x10

  v4 = (const unsigned __int8 *)_platform_strlen(__s);
  v5 = (char)v4;
  v6 = objc::lookup8((objc *)__s, v4, *((_QWORD *)this + 3));
  v7 = *((_DWORD *)this + 3);
  v8 = *((unsigned int *)this + 4);
  if ( v7 == 64 )
    v9 = 0;
  else
    v9 = v6 >> v7;
  v10 = v9 ^ *((_DWORD *)this + *((unsigned __int8 *)this + (v6 & v8) + 1056) + 8);
  v11 = (char *)this + (unsigned int)(v8 + 1) + 1056;
  if ( (unsigned __int8)v11[(unsigned int)v10] != (v5 & 0x1F | (unsigned __int8)(32 * *__s)) )
  {
LABEL_7:
    LODWORD(v12) = 0;
    goto LABEL_8;
  }
  v12 = *(int *)&v11[4 * v10 + *((unsigned int *)this + 1)];
  if ( (_DWORD)v12 )
  {
    if ( !_platform_strcmp(__s, (const char *)this + v12) )
    {
      v13 = v10 & 0xFFFFFF00;
      LODWORD(v12) = (unsigned __int8)v10;
      v14 = 0x100000000LL;
      return v14 | v13 | (unsigned int)v12;
    }
    goto LABEL_7;
  }
LABEL_8:
  v13 = 0;
  v14 = 0;
  return v14 | v13 | (unsigned int)v12;
}
