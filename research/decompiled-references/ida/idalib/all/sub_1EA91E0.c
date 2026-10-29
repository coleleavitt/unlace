__int64 __fastcall sub_1EA91E0(char **a1)
{
  char *v1; // rsi
  char v2; // r9
  char *v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r8
  const char *v8; // rdi
  __int64 v9; // rdx
  bool v10; // zf
  char *v11; // rdx
  char v12; // r10
  char *v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9

  v1 = *a1;
  if ( !*a1 )
    goto LABEL_9;
  v2 = *v1;
  v3 = *a1;
  v4 = 0;
  v5 = 0;
  v6 = *v1 & 0x7F;
  while ( 1 )
  {
    v7 = v6 << v5;
    ++v3;
    v5 += 7;
    v4 += v7;
    if ( v2 >= 0 )
      break;
    if ( !v3 )
      goto LABEL_9;
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
          goto LABEL_10;
        }
      }
      else if ( (*v3 & 0x7F) != 0 )
      {
        goto LABEL_8;
      }
    }
  }
  v9 = (unsigned int)((_DWORD)v3 - (_DWORD)v1);
  v10 = &v1[v9] == nullptr;
  v11 = &v1[v9];
  *a1 = v11;
  if ( v10 )
  {
LABEL_9:
    v8 = "malformed uleb128, extends past end";
LABEL_10:
    sub_2221C70(v8, 1);
  }
  v12 = *v11;
  v13 = v11;
  v14 = 0;
  v15 = 0;
  v16 = *v11 & 0x7F;
  while ( 1 )
  {
    v17 = v16 << v14;
    ++v13;
    v14 += 7;
    v15 += v17;
    if ( v12 >= 0 )
      break;
    if ( !v13 )
      goto LABEL_9;
    v12 = *v13;
    v16 = *v13 & 0x7F;
    if ( v14 > 0x3E )
    {
      if ( v14 == 63 )
      {
        if ( v16 != (v12 & 1) )
          goto LABEL_8;
      }
      else if ( (*v13 & 0x7F) != 0 )
      {
        goto LABEL_8;
      }
    }
  }
  *a1 = &v11[(_DWORD)v13 - (_DWORD)v11];
  return (v15 << 32) | v4;
}
