unsigned __int64 __fastcall sub_6DAFF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // esi
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(sub_6DABD0(a1, *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7) & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *(unsigned __int8 *)(v2 + 16);
  result = v2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_BYTE *)(a1[270] + 89LL) & 1) != 0 && (unsigned int)(v3 - 2) <= 1 )
    return sub_6C48D0((__int64)a1, result);
  if ( (unsigned __int8)(v3 - 2) <= 4u )
    return sub_6DA450(a1, result);
  if ( (unsigned int)(v3 - 25) <= 1 )
    return sub_6C4160((__int64)a1, result);
  return result;
}

