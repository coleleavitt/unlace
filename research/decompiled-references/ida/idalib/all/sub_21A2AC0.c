__int64 __fastcall sub_21A2AC0(char **a1, char *a2)
{
  char *v2; // r10
  char v3; // r9
  char *v4; // rdx
  unsigned int v5; // ecx
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r11
  const char *v10; // rdi

  v2 = *a1;
  if ( *a1 == a2 )
  {
LABEL_11:
    v10 = "malformed sleb128, extends past end";
LABEL_12:
    sub_2221C70(v10, 1);
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
    v9 = result | v8;
    result |= v8;
    if ( v3 >= 0 )
      break;
    if ( a2 == v4 )
      goto LABEL_11;
    v3 = *v4;
    v7 = *v4 & 0x7F;
    if ( v5 > 0x3E && (v7 != 0 && v7 != 127 && v5 == 63 || v5 != 63 && v7 != ((v9 >> 63) & 0x7F)) )
    {
      v10 = "sleb128 too big for int64";
      goto LABEL_12;
    }
  }
  if ( v5 <= 0x3F && (v3 & 0x40) != 0 )
    result |= -1LL << v5;
  *a1 = &v2[(_DWORD)v4 - (_DWORD)v2];
  return result;
}
