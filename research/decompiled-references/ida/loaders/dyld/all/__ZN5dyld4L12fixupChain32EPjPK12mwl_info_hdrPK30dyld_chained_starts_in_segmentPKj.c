_DWORD *__fastcall dyld4::fixupChain32(_DWORD *result, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // x9
  int v5; // w10
  unsigned int v6; // w11
  int v7; // w10
  unsigned int v8; // w11
  unsigned int v9; // w11
  __int64 v10; // x9

  while ( 1 )
  {
    v4 = (unsigned int)*result;
    if ( (v4 & 0x80000000) != 0 )
      break;
    v5 = v4 & 0x3FFFFFF;
    v6 = *(_DWORD *)(a3 + 16);
    if ( (v4 & 0x3FFFFFF) <= v6 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      goto LABEL_7;
    }
    v7 = v5 - ((v6 + 0x4000000) >> 1);
LABEL_8:
    v10 = (v4 >> 26) & 0x1F;
    *result = v7;
    result += v10;
    if ( !(_DWORD)v10 )
      return result;
  }
  v8 = *(_DWORD *)(a2 + 12);
  if ( (v4 & 0xFFFFF) < v8 )
  {
    v9 = ((unsigned int)v4 >> 20) & 0x3F;
    v5 = *(_DWORD *)(a4 + 4 * (v4 & 0xFFFFF));
LABEL_7:
    v7 = v5 + v9;
    goto LABEL_8;
  }
  return (_DWORD *)fprintf(__stderrp, "out of range bind ordinal %u (max %u)", v4 & 0xFFFFF, v8);
}
