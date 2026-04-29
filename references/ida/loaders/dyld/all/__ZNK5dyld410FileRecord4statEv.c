__int64 __fastcall dyld4::FileRecord::stat(__int64 this)
{
  __int64 v1; // x19
  int v2; // w0
  const char *Path; // x0
  __darwin_time_t tv_sec; // x9
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  bool v8; // zf
  __int64 v9; // x1
  stat v10; // [xsp+0h] [xbp-A0h] BYREF

  if ( *(_DWORD *)(this + 68) == 1 )
  {
    v1 = this;
    v2 = *(_DWORD *)(this + 64);
    if ( v2 == -1 )
    {
      Path = (const char *)dyld4::FileRecord::getPath((dyld4::FileRecord *)v1);
      this = stat(Path, &v10);
    }
    else
    {
      this = fstat(v2, &v10);
    }
    *(_DWORD *)(v1 + 68) = this;
    if ( !(_DWORD)this )
    {
      tv_sec = v10.st_mtimespec.tv_sec;
      *(_QWORD *)(v1 + 48) = v10.st_size;
      *(_QWORD *)(v1 + 56) = tv_sec;
      *(_WORD *)(v1 + 72) = v10.st_mode;
      if ( !*(_QWORD *)(v1 + 8) )
      {
        v5 = 0;
        v6 = v1 + 24;
        do
        {
          v7 = *(unsigned __int8 *)(v6 + v5);
          if ( *(_BYTE *)(v6 + v5) )
            v8 = 1;
          else
            v8 = v5 == 15;
          ++v5;
        }
        while ( !v8 );
        if ( !v7 )
        {
          *(_QWORD *)(v1 + 8) = v10.st_ino;
          this = dyld4::FileManager::uuidForFileSystem(*(dyld4::FileManager **)v1, v10.st_dev);
          *(_QWORD *)(v1 + 24) = this;
          *(_QWORD *)(v1 + 32) = v9;
        }
      }
    }
  }
  return this;
}
