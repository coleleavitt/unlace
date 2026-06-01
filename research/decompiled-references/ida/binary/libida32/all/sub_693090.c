__int64 __fastcall sub_693090(char **a1, __int64 *a2)
{
  char *v3; // rax
  int v4; // edx
  char v5; // cl
  char *v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned __int8 v10; // cl
  unsigned __int8 v12; // dl
  int v13; // eax

  if ( !a1 )
    return 0;
  v3 = *a1;
  v4 = **a1;
  v5 = **a1;
  if ( !v5 )
    return 0;
  v6 = v3 + 1;
  if ( v4 >= 0 )
  {
    *a1 = v6;
    v7 = v4 - 1;
    goto LABEL_5;
  }
  v12 = v3[1];
  if ( !v12 )
  {
LABEL_12:
    *a1 = v6;
    return 0;
  }
  v6 = v3 + 2;
  *a1 = v3 + 2;
  v13 = v5 & 0x7F | (v12 << 7);
  v7 = v13 - 1;
  if ( v13 == 1025 )
  {
    *a2 = -1;
    return 1;
  }
  if ( v13 == 513 )
  {
    *a2 = 0xFFFFFFFFLL;
    return 1;
  }
LABEL_5:
  v8 = 0;
  v9 = 0;
  do
  {
    if ( _bittest((const int *)&v7, v8) )
    {
      v10 = *v6;
      if ( !*v6 )
        goto LABEL_12;
      ++v6;
      v9 |= (unsigned __int64)v10 << (8 * (unsigned __int8)v8);
    }
    ++v8;
  }
  while ( v8 != 8 );
  *a2 = v9 ^ -(__int64)((v7 >> 8) & 1);
  *a1 = v6;
  return 1;
}

