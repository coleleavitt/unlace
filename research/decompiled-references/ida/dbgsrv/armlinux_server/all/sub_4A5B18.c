/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5B18
// Address: 0x00000000004A5B18

//----- (00000000004A5B18) ----------------------------------------------------
_DWORD *__fastcall sub_4A5B18(__int64 a1, __int64 a2)
{
  __int64 v3; // x19
  unsigned int v4; // w0
  _DWORD *result; // x0

  if ( !a2 )
    return nullptr;
  v3 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)v3;
        if ( *(_DWORD *)v3 == 44 )
          return nullptr;
        if ( v4 <= 0x2C )
          break;
        if ( v4 > 0x41 )
        {
          if ( v4 >= 0x45 && (v4 <= 0x47 || v4 - 74 <= 1) )
            return nullptr;
          goto LABEL_14;
        }
        if ( v4 >= 0x40 || v4 == 49 )
          return nullptr;
        if ( v4 != 50 )
          goto LABEL_14;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v3 )
          return nullptr;
      }
      if ( v4 != 7 )
        break;
LABEL_15:
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v3 )
        return nullptr;
    }
    if ( v4 <= 7 )
      break;
    if ( v4 == 24 || v4 == 39 )
      return nullptr;
    if ( v4 != 8 )
      goto LABEL_14;
    v3 = *(_QWORD *)(v3 + 16);
    if ( !v3 )
      return nullptr;
  }
  if ( v4 != 5 )
  {
    if ( v4 > 5 || !v4 )
      return nullptr;
LABEL_14:
    result = (_DWORD *)sub_4A5B18(a1, *(_QWORD *)(v3 + 8));
    if ( result )
      return result;
    goto LABEL_15;
  }
  result = (_DWORD *)sub_4A5AE8(a1, (__int64 *)(v3 + 8));
  if ( !result || *result != 47 )
    return nullptr;
  return result;
}
