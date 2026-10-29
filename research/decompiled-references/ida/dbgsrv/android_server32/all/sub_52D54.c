/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52D54
// Address: 0x00052D54

//----- (00052D54) --------------------------------------------------------
int __fastcall sub_52D54(int a1)
{
  _BYTE *v2; // r5
  _BYTE *v3; // r0
  char *v4; // r2
  int v5; // r4
  int v6; // r7
  char *v7; // r5
  int v8; // r0
  int j; // r4
  char *v10; // r5
  int v11; // r6
  int v12; // r0
  unsigned int v13; // r6
  const char **v14; // r7
  int v15; // r0
  unsigned __int8 **v16; // r6
  unsigned __int8 *v17; // r0
  int v18; // r0
  _BYTE *v19; // r1
  int result; // r0
  _BYTE *v21; // r2
  char *v22; // [sp+8h] [bp-224h]
  int v23; // [sp+Ch] [bp-220h]
  int i; // [sp+10h] [bp-21Ch]
  int v25; // [sp+18h] [bp-214h]
  char *v26; // [sp+1Ch] [bp-210h]
  int v27; // [sp+20h] [bp-20Ch]
  char *s2; // [sp+24h] [bp-208h]
  _BYTE v29[508]; // [sp+2Ch] [bp-200h] BYREF

  v2 = (_BYTE *)(a1 + 460);
  v27 = 0;
  if ( *(_BYTE *)(a1 + 460) != 40 )
  {
LABEL_5:
    v4 = *(char **)(a1 + 4);
    v5 = 0;
    for ( i = 0; ; i = v15 )
    {
LABEL_7:
      v6 = (unsigned __int8)*v4;
      if ( !*v4 )
      {
        result = -1;
        if ( !(v5 << 24) )
          return v27;
        return result;
      }
      v22 = v4;
      v23 = (unsigned __int8)*v4;
      while ( 1 )
      {
        v7 = v4 + 1;
        if ( v5 << 24 )
          break;
        if ( (unsigned __int8)v6 == 34 || (unsigned __int8)v6 == 39 )
        {
          ++v4;
          v5 = v6;
          i = v6;
          goto LABEL_7;
        }
        if ( !v27
          || ((s2 = v4, (char)v6 <= -1) || (v8 = isalpha((unsigned __int8)v6), v4 = s2, !v8))
          && (unsigned __int8)v6 != 95
          && (unsigned __int8)v6 != 36 )
        {
          v4 = v7;
          v5 = 0;
          i = 0;
          goto LABEL_7;
        }
        v26 = v7;
        for ( j = 0; ; ++j )
        {
          v10 = &v4[j];
          v11 = (unsigned __int8)v4[j + 1];
          v6 = (char)v11;
          if ( (char)v11 > -1 )
          {
            v12 = isalnum((unsigned __int8)v4[j + 1]);
            v4 = s2;
            if ( v12 )
              continue;
          }
          if ( v11 != 95 && v11 != 36 )
            break;
        }
        v13 = 0;
        v10[1] = 0;
        if ( v27 < 1 )
        {
          v4 = v10 + 1;
          v5 = i;
        }
        else
        {
          v25 = v6;
          v14 = (const char **)v29;
          while ( strcmp(*v14, v4) )
          {
            ++v14;
            ++v13;
            v4 = s2;
            if ( v13 >= v27 )
            {
              v4 = v10 + 1;
              goto LABEL_33;
            }
          }
          *s2 = v13 ^ 0x80;
          if ( j )
            memmove(v26, v10 + 1, strlen(v10 + 2) + 2);
          v4 = v26;
LABEL_33:
          v5 = i;
          v6 = v25;
        }
        *v4 = v6;
        if ( !v6 )
          return v27;
      }
      if ( v23 == 92 )
        break;
      v15 = 0;
      if ( v23 != (unsigned __int8)v5 )
        v15 = v5;
      ++v4;
      v5 = v15;
    }
    v4 = v22 + 2;
    if ( *v7 )
      goto LABEL_7;
    return -1;
  }
  v3 = *(_BYTE **)(a1 + 4);
  if ( *v3 == 41 )
  {
    *(_DWORD *)(a1 + 4) = v3 + 1;
    v27 = 0;
    goto LABEL_5;
  }
  v27 = 0;
  v16 = (unsigned __int8 **)v29;
  do
  {
    if ( (unsigned int)v27 > 0x7E )
      return -1;
    v17 = sub_52CB0(a1);
    *v16 = v17;
    if ( !*v17 )
    {
      if ( *v2 == 46 )
        goto LABEL_57;
      return -1;
    }
    ++v27;
    v18 = (unsigned __int8)*v2;
    if ( (unsigned int)(v18 - 9) < 5 || v18 == 32 )
    {
      v19 = *(_BYTE **)(a1 + 4);
      v18 = (unsigned __int8)*v19;
      *v2 = v18;
      if ( *v19 )
      {
        *v19 = 0;
        ++*(_DWORD *)(a1 + 4);
        v18 = (unsigned __int8)*v2;
      }
    }
    ++v16;
  }
  while ( v18 == 44 );
  if ( v18 == 41 )
    goto LABEL_5;
  if ( v18 != 46 )
    return -1;
LABEL_57:
  v21 = *(_BYTE **)(a1 + 4);
  if ( *v21 != 46 )
    return -1;
  result = -2;
  if ( v21[1] != 46 )
    return -1;
  return result;
}
