/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BD20
// Address: 0x0004BD20

//----- (0004BD20) --------------------------------------------------------
int __fastcall sub_4BD20(int a1)
{
  int v1; // r6
  int v2; // r1
  char *v3; // r5
  int v4; // r7
  int i; // r4
  unsigned __int8 *v6; // r3
  unsigned __int8 *v8; // r2
  char *v9; // r10
  bool v10; // zf
  bool v11; // zf
  char *v12; // r9
  bool v13; // zf
  int v14; // r7
  const char **v15; // r11
  const char *v16; // t1
  int v17; // t1
  unsigned __int8 **v19; // r5
  unsigned __int8 *v20; // r0
  int v21; // r3
  int v22; // r3
  bool v23; // zf
  int v24; // r3
  _BYTE *v25; // r2
  _BOOL4 v26; // r3
  _BYTE *v27; // r3
  size_t v28; // r0
  _BYTE v29[508]; // [sp+0h] [bp-204h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 608);
  v3 = *(char **)(a1 + 4);
  if ( v2 != 40 )
    v1 = 0;
  v4 = (unsigned __int8)*v3;
  if ( v2 != 40 )
    goto LABEL_4;
  if ( v4 == 41 )
  {
    v1 = 0;
    *(_DWORD *)(a1 + 4) = v3 + 1;
    v4 = (unsigned __int8)*++v3;
LABEL_4:
    i = 0;
LABEL_5:
    while ( 2 )
    {
      v6 = (unsigned __int8 *)(v3 + 1);
      if ( v4 )
      {
        while ( 1 )
        {
          if ( !i )
            goto LABEL_15;
          if ( v4 != 92 )
            break;
          if ( !v3[1] )
            return -1;
          v4 = (unsigned __int8)v3[2];
          v3 += 2;
          v6 = (unsigned __int8 *)(v3 + 1);
          if ( !v4 )
            goto LABEL_66;
        }
        v10 = i == v4;
        v4 = (unsigned __int8)v3[1];
        if ( !v10 )
        {
          v3 = (char *)v6;
          continue;
        }
        v8 = (unsigned __int8 *)(v3 + 2);
        if ( v3[1] )
        {
          v3 = (char *)v6;
          v6 = v8;
LABEL_15:
          v9 = v3;
          i = v4;
          v3 = (char *)v6;
          while ( 1 )
          {
            v10 = i == 39;
            if ( i != 39 )
              v10 = i == 34;
            v4 = (unsigned __int8)*v3;
            if ( v10 )
              goto LABEL_5;
            if ( !v1 )
            {
              v6 = (unsigned __int8 *)(v3 + 1);
              if ( *v3 )
                goto LABEL_15;
              return v1;
            }
            if ( (i & 0xFFFFFF80) == 0 && isalpha(i) )
              goto LABEL_27;
            v11 = i == 36;
            if ( i != 36 )
              v11 = i == 95;
            if ( v11 )
            {
LABEL_27:
              v12 = v3;
              for ( i = v4; ; i = v17 )
              {
                if ( (i & 0xFFFFFF80) != 0 || !isalnum(i) )
                {
                  v13 = i == 36;
                  if ( i != 36 )
                    v13 = i == 95;
                  v14 = v13;
                  if ( !v13 )
                    break;
                }
                v17 = (unsigned __int8)*++v12;
              }
              v15 = (const char **)v29;
              *v12 = v14;
              while ( 1 )
              {
                v16 = *v15++;
                if ( !strcmp(v16, v9) )
                  break;
                if ( v1 == ++v14 )
                  goto LABEL_39;
              }
              if ( v1 <= v14 || (*v9 = v14 + 0x80, v12 == v3) )
              {
LABEL_39:
                v9 = v12;
                goto LABEL_40;
              }
              v9 = v3;
              v28 = strlen(v12 + 1);
              memmove(v3, v12, v28 + 2);
LABEL_40:
              *v9 = i;
              v3 = v9 + 1;
              if ( !i )
                return v1;
            }
            else
            {
              i = v4;
              if ( !v4 )
                return v1;
              v9 = v3++;
            }
          }
        }
      }
      else
      {
LABEL_66:
        if ( i )
          return -1;
      }
      return v1;
    }
  }
  v1 = 0;
  v19 = (unsigned __int8 **)v29;
  while ( 1 )
  {
    v20 = sub_4BC90(a1);
    v21 = *v20;
    *v19++ = v20;
    if ( !v21 )
      break;
    v22 = *(unsigned __int8 *)(a1 + 608);
    ++v1;
    v23 = v22 == 32;
    if ( v22 != 32 )
      v23 = v22 == 9;
    if ( v23 || sub_4B030(*(unsigned __int8 *)(a1 + 608)) )
    {
      v25 = *(_BYTE **)(a1 + 4);
      v24 = (unsigned __int8)*v25;
      *(_BYTE *)(a1 + 608) = v24;
      if ( *v25 )
      {
        *v25 = 0;
        v24 = *(unsigned __int8 *)(a1 + 608);
        ++*(_DWORD *)(a1 + 4);
      }
    }
    switch ( v24 )
    {
      case ')':
        v3 = *(char **)(a1 + 4);
        v4 = (unsigned __int8)*v3;
        goto LABEL_4;
      case '.':
        v27 = *(_BYTE **)(a1 + 4);
        if ( *v27 != 46 )
          return -1;
        goto LABEL_62;
      case ',':
        v26 = v1 == 127;
        break;
      default:
        v26 = 1;
        break;
    }
    if ( v26 )
      return -1;
  }
  if ( *(_BYTE *)(a1 + 608) != 46 )
    return -1;
  v27 = *(_BYTE **)(a1 + 4);
  if ( *v27 != 46 )
    return -1;
LABEL_62:
  if ( v27[1] != 46 )
    return -1;
  return -2;
}
// 4BD66: variable 'v1' is possibly undefined
// 4BE68: variable 'v24' is possibly undefined
