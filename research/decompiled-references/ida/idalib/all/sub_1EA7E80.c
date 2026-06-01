__int64 __fastcall sub_1EA7E80(char **a1)
{
  char *v1; // rsi
  char v2; // r9
  char *v3; // rdx
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r8
  const char *v8; // rdi

  v1 = *a1;
  if ( !*a1 )
  {
LABEL_10:
    v8 = "malformed uleb128, extends past end";
LABEL_11:
    sub_2221C70(v8, 1);
  }
  v2 = *v1;
  v3 = *a1;
  result = 0;
  v5 = 0;
  v6 = *v1 & 0x7F;
  while ( 1 )
  {
    v7 = v6 << v5;
    ++v3;
    v5 += 7;
    result += v7;
    if ( v2 >= 0 )
      break;
    if ( !v3 )
      goto LABEL_10;
    v2 = *v3;
    v6 = *v3 & 0x7F;
    if ( v5 > 0x3E )
    {
      if ( v5 == 63 )
      {
        if ( v6 != (v2 & 1) )
        {
LABEL_8:
          v8 = "uleb128 too big for uint64";
          goto LABEL_11;
        }
      }
      else if ( (*v3 & 0x7F) != 0 )
      {
        goto LABEL_8;
      }
    }
  }
  *a1 = &v1[(_DWORD)v3 - (_DWORD)v1];
  return result;
}
