void __fastcall __noreturn dyld4::halt(dyld4 *this, const char *a2)
{
  const char *v3; // x1
  _QWORD *v4; // x8
  __int64 v5; // x9
  int v7; // w9
  __int64 v8; // x20
  const char *v9; // x1
  const char *v10; // x1
  const char *v11; // x1
  __int64 v12; // x1
  char __dst[1024]; // [xsp+10h] [xbp-C20h] BYREF
  _DWORD v14[2]; // [xsp+410h] [xbp-820h] BYREF
  __int64 v15; // [xsp+418h] [xbp-818h]
  int v16; // [xsp+420h] [xbp-810h]
  char v17[2028]; // [xsp+424h] [xbp-80Ch] BYREF

  strlcpy(dyld4::error_string, (const char *)this, 0x400u);
  qword_9C1C0 = (__int64)dyld4::error_string;
  dyld4::console((dyld4 *)"%s\n", v3, this);
  v4 = gProcessInfo;
  v5 = *((_QWORD *)gProcessInfo + 15);
  if ( v5 == 1 || v5 == 4 )
  {
    v7 = 1;
    *((_QWORD *)gProcessInfo + 8) = 1;
  }
  else
  {
    v7 = *((_DWORD *)gProcessInfo + 16);
  }
  v4[7] = dyld4::error_string;
  v14[0] = 1;
  v14[1] = v7;
  v15 = 0;
  v16 = 0;
  v8 = 20;
  v9 = (const char *)v4[17];
  if ( v9 )
  {
    LODWORD(v15) = 20;
    v8 = (unsigned int)strlcpy(v17, v9, 0x7ECu) + 21;
    v4 = gProcessInfo;
  }
  v10 = (const char *)v4[16];
  if ( v10 )
  {
    HIDWORD(v15) = v8;
    v8 = (unsigned int)v8 + (unsigned int)strlcpy((char *)v14 + (int)v8, v10, 2048LL - (int)v8) + 1;
    v4 = gProcessInfo;
  }
  v11 = (const char *)v4[18];
  if ( v11 )
  {
    v16 = v8;
    v8 = (unsigned int)v8 + (unsigned int)strlcpy((char *)v14 + (int)v8, v11, 2048LL - (int)v8) + 1;
  }
  strlcpy(__dst, (const char *)this, 0x400u);
  if ( *((_QWORD *)gProcessInfo + 15) )
    v12 = *((_QWORD *)gProcessInfo + 15);
  else
    v12 = 9;
  abort_with_payload(6, v12, v14, v8, __dst, 0);
}
