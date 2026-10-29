int __fastcall sub_8B7BF0(__int64 a1, __int64 a2, const char *a3, char a4, char a5)
{
  int result; // eax
  const char *v6; // rbp
  unsigned __int8 *v7; // rdx

  result = 0;
  v6 = a3;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 24) = a4;
  *(_WORD *)(a1 + 25) = 0;
  if ( !a5 )
  {
    if ( !a3 )
    {
      v6 = "UTF-8";
      *(_QWORD *)(a1 + 8) = "UTF-8";
      result = strncasecmp("UTF-8", "UTF", 3u);
      if ( result )
        return result;
      goto LABEL_16;
    }
    result = *a3 & 0xDF;
    if ( (*a3 & 0xDF) != 0x55 )
      return result;
LABEL_8:
    result = strncasecmp(a3, "UTF", 3u);
    if ( result )
      return result;
    result = *((unsigned __int8 *)v6 + 3);
    if ( (_BYTE)result != 45 )
    {
      v7 = (unsigned __int8 *)(v6 + 3);
      goto LABEL_11;
    }
LABEL_16:
    result = *((unsigned __int8 *)v6 + 4);
    v7 = (unsigned __int8 *)(v6 + 4);
LABEL_11:
    *(_BYTE *)(a1 + 25) = (_BYTE)result == 56;
    if ( (_BYTE)result != 56 )
    {
      result = *v7 - 49;
      if ( *v7 == 49 )
        result = v7[1] - 54;
      *(_BYTE *)(a1 + 26) = result == 0;
    }
    return result;
  }
  if ( a3 )
  {
    result = *(unsigned __int8 *)a3;
    if ( !(_BYTE)result )
    {
      *(_QWORD *)(a1 + 8) = 0;
      return result;
    }
    result &= ~0x20u;
    if ( (_BYTE)result == 85 )
      goto LABEL_8;
  }
  return result;
}
