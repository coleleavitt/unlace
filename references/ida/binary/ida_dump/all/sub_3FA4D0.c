__int64 __fastcall sub_3FA4D0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // edx
  char *v4; // rdi

  v1 = *a1;
  result = 0;
  if ( (unsigned __int8)(*(_BYTE *)(*a1 + 40LL * *((int *)a1 + 2) + 65) - 2) > 2u )
    return result;
  v3 = *(unsigned __int16 *)(v1 + 48);
  if ( (_WORD)v3 == 92 || (unsigned __int8)(*(_BYTE *)(v1 + 56) - 33) > 1u )
    return result;
  if ( (unsigned __int16)v3 > 0x8Fu )
    return *(_DWORD *)(v1 + 892) >> 31;
  if ( (unsigned __int16)v3 > 0x79u )
  {
    v4 = byte_201011;
    if ( _bittest64((const __int64 *)&v4, (unsigned int)(v3 - 122))
      && ((unsigned __int8)(*(_BYTE *)(v1 + 65) - 2) <= 2u
       || (v3 & 0xFFFB) == 0x7A && (unsigned __int8)(*(_BYTE *)(v1 + 105) - 2) <= 2u) )
    {
      return result;
    }
    return *(_DWORD *)(v1 + 892) >> 31;
  }
  if ( (_WORD)v3 != 6 && (_WORD)v3 != 44 || (unsigned __int8)(*(_BYTE *)(v1 + 65) - 2) > 2u )
    return *(_DWORD *)(v1 + 892) >> 31;
  return result;
}
