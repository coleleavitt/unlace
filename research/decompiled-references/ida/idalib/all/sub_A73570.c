__int64 __fastcall sub_A73570(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  char v4; // dl
  __int64 result; // rax

  v2 = *(_QWORD *)(sub_A73320(
                     a1,
                     *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                   | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7)
                 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *(unsigned __int8 *)(v2 + 16);
  v4 = *(_BYTE *)(v2 + 16);
  if ( (*(_BYTE *)(a1[290] + 89LL) & 1) != 0 )
  {
    result = v2 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (unsigned int)(v3 - 2) <= 1 )
      return sub_A72990((__int64)a1, result);
  }
  else
  {
    result = v2 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( (unsigned __int8)(v4 - 2) <= 4u )
    return sub_A72210(a1, result);
  if ( (unsigned int)(v3 - 25) <= 1 )
    return sub_A70010((__int64)a1, result);
  return result;
}
