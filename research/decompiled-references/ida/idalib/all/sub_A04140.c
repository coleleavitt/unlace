_QWORD *__fastcall sub_A04140(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rcx
  _QWORD *result; // rax

  v2 = a1;
  v3 = (a2 - (__int64)a1) >> 5;
  v4 = (a2 - (__int64)a1) >> 3;
  if ( v3 <= 0 )
  {
    result = a1;
LABEL_14:
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
      {
        if ( v4 != 1 )
          return (_QWORD *)a2;
        goto LABEL_27;
      }
      if ( (*(_BYTE *)(*result + 905LL) & 0x40) != 0 )
        return result;
      ++result;
    }
    if ( (*(_BYTE *)(*result + 905LL) & 0x40) != 0 )
      return result;
    ++result;
LABEL_27:
    if ( (*(_BYTE *)(*result + 905LL) & 0x40) != 0 )
      return result;
    return (_QWORD *)a2;
  }
  if ( (*(_BYTE *)(*a1 + 905LL) & 0x40) != 0 )
    return a1;
  if ( (*(_BYTE *)(a1[1] + 905LL) & 0x40) != 0 )
    return a1 + 1;
  if ( (*(_BYTE *)(a1[2] + 905LL) & 0x40) != 0 )
    return a1 + 2;
  v5 = &a1[4 * v3];
  if ( (*(_BYTE *)(a1[3] + 905LL) & 0x40) != 0 )
    return a1 + 3;
  while ( 1 )
  {
    result = v2 + 4;
    if ( v2 + 4 == v5 )
    {
      v4 = (a2 - (__int64)v5) >> 3;
      goto LABEL_14;
    }
    if ( (*(_BYTE *)(v2[4] + 905LL) & 0x40) != 0 )
      return result;
    if ( (*(_BYTE *)(v2[5] + 905LL) & 0x40) != 0 )
      return v2 + 5;
    if ( (*(_BYTE *)(v2[6] + 905LL) & 0x40) != 0 )
      return v2 + 6;
    if ( (*(_BYTE *)(v2[7] + 905LL) & 0x40) != 0 )
      return v2 + 7;
    v2 += 4;
  }
}
