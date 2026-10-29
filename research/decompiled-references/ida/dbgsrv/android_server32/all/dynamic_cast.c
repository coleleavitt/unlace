/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: dynamic_cast
// Address: 0x00091814

//----- (00091814) --------------------------------------------------------
void *_dynamic_cast(
        const void *lpsrc,
        const struct __class_type_info *lpstype,
        const struct __class_type_info *lpdtype,
        ptrdiff_t s2d)
{
  __int64 v6; // kr00_8
  char *v7; // r5
  void *v8; // r4
  bool v9; // zf
  _DWORD v11[15]; // [sp+8h] [bp-58h] BYREF

  v6 = *(_QWORD *)(*(_DWORD *)lpsrc - 8);
  v11[0] = lpdtype;
  v11[1] = lpsrc;
  v11[2] = lpstype;
  v11[3] = s2d;
  memset(&v11[4], 0, 0x27u);
  v7 = (char *)lpsrc + v6;
  if ( (const struct __class_type_info *)HIDWORD(v6) == lpdtype )
  {
    v11[12] = 1;
    (*(void (__fastcall **)(const struct __class_type_info *, _DWORD *, char *, char *, int, _DWORD))(*(_DWORD *)lpdtype + 20))(
      lpdtype,
      v11,
      v7,
      v7,
      1,
      0);
    if ( v11[6] != 1 )
      return nullptr;
    return v7;
  }
  else
  {
    v8 = nullptr;
    (*(void (__fastcall **)(_DWORD, _DWORD *, char *, int, _DWORD))(*(_DWORD *)HIDWORD(v6) + 24))(
      HIDWORD(v6),
      v11,
      v7,
      1,
      0);
    if ( v11[9] == 1 )
    {
      if ( v11[6] == 1 )
        return (void *)v11[4];
      v8 = nullptr;
      if ( !v11[10] )
      {
        v9 = v11[7] == 1;
        if ( v11[7] == 1 )
          v9 = v11[8] == 1;
        if ( v9 )
          return (void *)v11[4];
      }
    }
    else if ( !v11[9] )
    {
      v8 = (void *)v11[5];
      if ( v11[7] ^ 1 | v11[10] ^ 1 | v11[8] ^ 1 )
        return nullptr;
    }
  }
  return v8;
}
