__int64 __fastcall dwarf_crc32(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // r13d
  int v6; // eax
  unsigned __int64 v7; // r14
  size_t v8; // r15
  int v9; // eax
  void *ptr; // [rsp+0h] [rbp-58h]
  unsigned int v11; // [rsp+8h] [rbp-50h]
  unsigned int fd; // [rsp+Ch] [rbp-4Ch]
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v13[0] = 0;
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    if ( a2 )
    {
      if ( *(_BYTE *)(a1 + 68) )
      {
        v6 = *(_DWORD *)(a1 + 64);
        fd = v6;
        if ( v6 >= 0 )
        {
          v7 = *(_QWORD *)(a1 + 240);
          if ( !v7 )
          {
            v9 = _dwarf_seekr((unsigned int)v6, 0, 2, v13);
            v7 = v13[0];
            if ( v9 )
            {
              _dwarf_error_string(a1, a3, 418, "DW_DLE_SEEK_ERROR: dwarf_crc32 seek to end fails");
              return 1;
            }
          }
          if ( v7 > 0x1F4 )
          {
            if ( (unsigned int)_dwarf_seekr(fd, 0, 0, 0) )
            {
              _dwarf_error_string(a1, a3, 418, "DW_DLE_SEEK_ERROR: dwarf_crc32 seek to start fails");
            }
            else
            {
              ptr = malloc(0x2710u);
              if ( ptr )
              {
                v11 = 0;
                v8 = 10000;
                while ( 1 )
                {
                  if ( v8 > v7 )
                    v8 = v7;
                  v4 = _dwarf_readr(fd, ptr, v8);
                  if ( v4 )
                    break;
                  v11 = dwarf_basic_crc32(ptr, v8, v11);
                  v7 -= v8;
                  if ( !v7 )
                  {
                    free(ptr);
                    *a2 = v11;
                    return v4;
                  }
                }
                _dwarf_error_string(a1, a3, 419, "DW_DLE_READ_ERROR: dwarf_crc32 read fails ");
                free(ptr);
              }
              else
              {
                _dwarf_error_string(a1, a3, 62, "DW_DLE_ALLOC_FAIL: dwarf_crc32 read buffer alloc fails");
              }
            }
            return 1;
          }
        }
      }
    }
    return (unsigned int)-1;
  }
  _dwarf_error_string(
    0,
    a3,
    81,
    "DW_DLE_DBG_NULL: dbg argument to dwarf_crc32()either null or it containsa stale Dwarf_Debug pointer");
  return 1;
}

