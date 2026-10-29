__int64 *__fastcall sub_145BAB0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 *result; // rax

  v3 = a3[2];
  if ( v3 )
  {
    result = *(__int64 **)(*(_QWORD *)(a3[1] + 8 * v3 - 8) + 16LL);
  }
  else
  {
    if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      BUG();
    result = sub_13F1C60((__int64 *)(*a3 & 0xFFFFFFFFFFFFFFF8LL));
    if ( result )
    {
      result = (__int64 *)result[2];
      if ( (*((_BYTE *)result + 36) & 0x10) != 0 )
        return result;
      goto LABEL_4;
    }
  }
  if ( (*((_BYTE *)result + 36) & 0x10) != 0 )
    return result;
LABEL_4:
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
      *(_BYTE *)(a1 + 17) = 1;
  }
  return result;
}
