/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: dynamic_cast
// Address: 0x00000000000D18A0

//----- (00000000000D18A0) ----------------------------------------------------
void *_dynamic_cast(
        const void *lpsrc,
        const struct __class_type_info *lpstype,
        const struct __class_type_info *lpdtype,
        ptrdiff_t s2d)
{
  char *v5; // rbx
  const struct __class_type_info *v6; // rdi
  void *v7; // r14
  _QWORD v9[4]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v10; // [rsp+20h] [rbp-48h]
  _DWORD v11[8]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  v5 = (char *)lpsrc + *(_QWORD *)(*(_QWORD *)lpsrc - 16LL);
  v6 = *(const struct __class_type_info **)(*(_QWORD *)lpsrc - 8LL);
  v9[0] = lpdtype;
  v9[1] = lpsrc;
  v9[2] = lpstype;
  v9[3] = s2d;
  memset(v11, 0, 31);
  v10 = 0;
  if ( v6 == lpdtype )
  {
    v11[6] = 1;
    v7 = nullptr;
    (*(void (__fastcall **)(const struct __class_type_info *, _QWORD *, char *, char *, __int64, _QWORD))(*(_QWORD *)lpdtype + 40LL))(
      lpdtype,
      v9,
      v5,
      v5,
      1,
      0);
    if ( v11[0] == 1 )
      return v5;
  }
  else
  {
    v7 = nullptr;
    (*(void (__fastcall **)(const struct __class_type_info *, _QWORD *, char *, __int64, _QWORD))(*(_QWORD *)v6 + 48LL))(
      v6,
      v9,
      v5,
      1,
      0);
    if ( v11[3] == 1 )
    {
      if ( v11[0] == 1 )
        return (void *)v10;
      v7 = nullptr;
      if ( !v11[4] && v11[1] == 1 && v11[2] == 1 )
        return (void *)v10;
    }
    else if ( !v11[3] )
    {
      if ( v11[4] ^ 1 | v11[1] ^ 1 | v11[2] ^ 1 )
        return nullptr;
      else
        return *((void **)&v10 + 1);
    }
  }
  return v7;
}
