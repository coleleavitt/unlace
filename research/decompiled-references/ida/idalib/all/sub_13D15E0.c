unsigned __int8 *__fastcall sub_13D15E0(unsigned __int8 *a1)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v2; // rsi
  int v3; // ecx
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // r9
  unsigned __int8 v7; // r8
  unsigned int v8; // ecx

  for ( result = a1; ; result = &v2[v6] )
  {
    v2 = result + 1;
    if ( *result == 92 )
      goto LABEL_7;
    if ( *result != 63 || result[1] != 63 || result[2] != 47 )
      break;
    v2 = result + 3;
LABEL_7:
    v3 = 0;
    v4 = *v2;
    if ( (byte_2411740[2 * v4] & 7) == 0 )
      return result;
    while ( 1 )
    {
      v5 = v3 + 1;
      if ( (_BYTE)v4 == 10 || (_BYTE)v4 == 13 )
        break;
      ++v3;
      v4 = v2[v5];
      if ( (byte_2411740[2 * v4] & 7) == 0 )
        return result;
    }
    v6 = v5;
    v7 = v2[v5];
    if ( v7 != 10 && v7 != 13 || (_BYTE)v4 == v7 )
    {
      if ( v3 == -1 )
        return result;
    }
    else
    {
      v8 = v3 + 2;
      if ( !v8 )
        return result;
      v6 = v8;
    }
  }
  return result;
}
