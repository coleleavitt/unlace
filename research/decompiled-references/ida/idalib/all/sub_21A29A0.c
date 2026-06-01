__int64 __fastcall sub_21A29A0(char **a1, char *a2)
{
  char *v2; // r8
  char v3; // r10
  char *v4; // rdx
  unsigned int v5; // ecx
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // r9
  const char *v9; // rdi

  v2 = *a1;
  if ( *a1 == a2 )
  {
LABEL_10:
    v9 = "malformed uleb128, extends past end";
LABEL_11:
    sub_2221C70(v9, 1);
  }
  v3 = *v2;
  v4 = *a1;
  v5 = 0;
  result = 0;
  v7 = *v2 & 0x7F;
  while ( 1 )
  {
    v8 = v7 << v5;
    ++v4;
    v5 += 7;
    result += v8;
    if ( v3 >= 0 )
      break;
    if ( a2 == v4 )
      goto LABEL_10;
    v3 = *v4;
    v7 = *v4 & 0x7F;
    if ( v5 > 0x3E )
    {
      if ( v5 == 63 )
      {
        if ( v7 != (v3 & 1) )
        {
LABEL_8:
          v9 = "uleb128 too big for uint64";
          goto LABEL_11;
        }
      }
      else if ( (*v4 & 0x7F) != 0 )
      {
        goto LABEL_8;
      }
    }
  }
  *a1 = &v2[(_DWORD)v4 - (_DWORD)v2];
  return result;
}
