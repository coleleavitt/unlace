__int64 __fastcall lldb_image_notifier(__int64 a1, int a2, __int64 *a3)
{
  __int64 v6; // x1
  __int64 v7; // x8
  char *v8; // x2
  __int64 v9; // x8
  _QWORD *v10; // x9
  __int64 v11; // t1
  __int64 v13; // [xsp+0h] [xbp-A0h] BYREF
  int v14; // [xsp+8h] [xbp-98h] BYREF
  __int128 v15; // [xsp+10h] [xbp-90h]
  __int128 v16; // [xsp+20h] [xbp-80h]
  __int128 v17; // [xsp+30h] [xbp-70h]
  __int128 v18; // [xsp+40h] [xbp-60h]
  __int128 v19; // [xsp+50h] [xbp-50h]
  __int128 v20; // [xsp+60h] [xbp-40h]
  __int64 v21; // [xsp+70h] [xbp-30h]

  v14 = 520552492;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  v21 = 0;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v14);
  __chkstk_darwin();
  v8 = (char *)&v13 - ((v7 + 15) & 0xFFFFFFFF0LL);
  if ( a2 )
  {
    v9 = v6;
    v10 = v8;
    do
    {
      v11 = *a3;
      a3 += 3;
      *v10++ = v11;
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned int)a1 <= 3 && (_DWORD)a1 != 2 )
    _dyld_debugger_notification(a1);
  return dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v14);
}
