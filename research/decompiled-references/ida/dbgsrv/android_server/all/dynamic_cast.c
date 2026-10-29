/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: dynamic_cast
// Address: 0x00000000000D88EC

//----- (00000000000D88EC) ----------------------------------------------------
void *_dynamic_cast(
        const void *lpsrc,
        const struct __class_type_info *lpstype,
        const struct __class_type_info *lpdtype,
        ptrdiff_t s2d)
{
  const struct __class_type_info *v5; // x0
  __int64 v6; // x10
  char *v7; // x19
  void *result; // x0
  _QWORD v11[4]; // [xsp+8h] [xbp-68h] BYREF
  void *v12; // [xsp+28h] [xbp-48h]
  void *v13; // [xsp+30h] [xbp-40h]
  __int128 v14; // [xsp+38h] [xbp-38h]
  _DWORD v15[4]; // [xsp+48h] [xbp-28h] BYREF
  __int64 v16; // [xsp+58h] [xbp-18h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(*(_QWORD *)lpsrc - 16LL);
  v5 = *(const struct __class_type_info **)(*(_QWORD *)lpsrc - 8LL);
  v11[0] = lpdtype;
  v11[1] = lpsrc;
  v11[2] = lpstype;
  v11[3] = s2d;
  memset(v15, 0, 15);
  v7 = (char *)lpsrc + v6;
  v13 = nullptr;
  v14 = 0u;
  v12 = nullptr;
  if ( v5 == lpdtype )
  {
    v15[2] = 1;
    (*(void (__fastcall **)(const struct __class_type_info *, _QWORD *, char *, char *, __int64, _QWORD))(*(_QWORD *)lpdtype + 40LL))(
      lpdtype,
      v11,
      v7,
      v7,
      1,
      0);
    if ( (_DWORD)v14 == 1 )
      return v7;
    else
      return nullptr;
  }
  else
  {
    (*(void (__fastcall **)(const struct __class_type_info *, _QWORD *, char *, __int64, _QWORD))(*(_QWORD *)v5 + 48LL))(
      v5,
      v11,
      (char *)lpsrc + v6,
      1,
      0);
    if ( HIDWORD(v14) == 1 )
    {
      if ( (_DWORD)v14 == 1 )
        return v12;
      result = nullptr;
      if ( !v15[0] && *(_QWORD *)((char *)&v14 + 4) == 0x100000001LL )
        return v12;
    }
    else if ( HIDWORD(v14) )
    {
      return nullptr;
    }
    else if ( DWORD2(v14) == 1 && DWORD1(v14) == 1 && v15[0] == 1 )
    {
      return v13;
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}
