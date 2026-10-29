/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: dynamic_cast
// Address: 0x000BFCA0

//----- (000BFCA0) --------------------------------------------------------
void *_dynamic_cast(
        const void *lpsrc,
        const struct __class_type_info *lpstype,
        const struct __class_type_info *lpdtype,
        ptrdiff_t s2d)
{
  char *v4; // edi
  const struct __class_type_info *v5; // ecx
  void *result; // eax
  _DWORD v7[4]; // [esp+0h] [ebp-4Ch] BYREF
  void *v8; // [esp+10h] [ebp-3Ch]
  void *v9; // [esp+14h] [ebp-38h]
  int v10; // [esp+18h] [ebp-34h]
  int v11; // [esp+1Ch] [ebp-30h]
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  int v14; // [esp+28h] [ebp-24h]
  _DWORD v15[8]; // [esp+2Ch] [ebp-20h] BYREF

  v4 = (char *)lpsrc + *(_DWORD *)(*(_DWORD *)lpsrc - 8);
  v5 = *(const struct __class_type_info **)(*(_DWORD *)lpsrc - 4);
  v7[0] = lpdtype;
  v7[1] = lpsrc;
  v7[2] = lpstype;
  v7[3] = s2d;
  v9 = nullptr;
  v8 = nullptr;
  v11 = 0;
  v10 = 0;
  v13 = 0;
  v12 = 0;
  memset(v15, 0, 11);
  v14 = 0;
  if ( v5 == lpdtype )
  {
    v15[1] = 1;
    (*(void (__cdecl **)(const struct __class_type_info *, _DWORD *, char *, char *, int, _DWORD))(*(_DWORD *)lpdtype
                                                                                                 + 20))(
      lpdtype,
      v7,
      v4,
      v4,
      1,
      0);
    result = nullptr;
    if ( v10 == 1 )
      return v4;
  }
  else
  {
    (*(void (__cdecl **)(const struct __class_type_info *, _DWORD *, char *, int, _DWORD))(*(_DWORD *)v5 + 24))(
      v5,
      v7,
      v4,
      1,
      0);
    result = nullptr;
    if ( v13 == 1 )
    {
      if ( v10 == 1 || !v14 && v11 == 1 && v12 == 1 )
        return v8;
    }
    else if ( !v13 )
    {
      result = nullptr;
      if ( !(v14 ^ 1 | v11 ^ 1 | v12 ^ 1) )
        return v9;
    }
  }
  return result;
}
