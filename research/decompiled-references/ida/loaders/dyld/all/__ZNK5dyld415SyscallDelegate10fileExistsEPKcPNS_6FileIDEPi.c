__int64 __fastcall dyld4::SyscallDelegate::fileExists(int a1, dyld3 *this, __int64 a3, int *a4)
{
  int *v6; // x8
  __int64 result; // x0
  int v8; // w8
  __int64 v9; // x9
  __int64 v10; // x10
  int v11; // [xsp+0h] [xbp-A0h] BYREF
  __int16 v12; // [xsp+4h] [xbp-9Ch]
  __int64 v13; // [xsp+8h] [xbp-98h]
  __int64 v14; // [xsp+30h] [xbp-70h]

  if ( (unsigned int)dyld3::stat(this, (const char *)&v11, (stat *)a3) )
  {
    if ( a4 )
    {
      v6 = __error();
      result = 0;
      v8 = *v6;
LABEL_9:
      *a4 = v8;
      return result;
    }
    return 0;
  }
  if ( (v12 & 0xF000) != 0x8000 )
  {
    if ( a4 )
    {
      result = 0;
      v8 = 666;
      goto LABEL_9;
    }
    return 0;
  }
  result = 1;
  if ( a3 )
  {
    v9 = v14;
    v10 = v11;
    *(_QWORD *)a3 = v13;
    *(_QWORD *)(a3 + 8) = v10;
    *(_QWORD *)(a3 + 16) = v9;
    *(_BYTE *)(a3 + 24) = 1;
  }
  return result;
}
