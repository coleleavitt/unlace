/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82A98
// Address: 0x0000000000082A98

//----- (0000000000082A98) ----------------------------------------------------
__int64 __fastcall sub_82A98(__int64 a1)
{
  _BYTE *v2; // x8
  unsigned __int64 v3; // x19
  char *v4; // x20
  unsigned __int8 v5; // w26
  char *v6; // x21
  int v7; // w28
  int v8; // w29
  __int64 i; // x23
  int v10; // w22
  __int64 v11; // x27
  size_t v12; // x0
  unsigned __int8 *v13; // x0
  int v14; // w8
  _BYTE *v15; // x9
  _BYTE *v16; // x8
  char *v18; // [xsp+18h] [xbp-468h]
  _QWORD v19[128]; // [xsp+20h] [xbp-460h]

  v19[127] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 620) != 40 )
  {
    LODWORD(v3) = 0;
LABEL_5:
    v4 = *(char **)(a1 + 8);
    v5 = 0;
LABEL_7:
    while ( 1 )
    {
      v6 = v4;
LABEL_8:
      v7 = (unsigned __int8)*v6;
      if ( !*v6 )
        break;
      LOBYTE(v8) = *v6;
      v18 = v6;
      while ( 1 )
      {
        v4 = v6 + 1;
        if ( v5 )
          break;
        if ( (unsigned __int8)v8 == 34 )
        {
          v5 = v8;
          goto LABEL_7;
        }
        if ( (unsigned __int8)v8 == 39 )
        {
          v5 = v8;
          goto LABEL_7;
        }
        if ( !(_DWORD)v3 )
        {
          v5 = 0;
          goto LABEL_7;
        }
        if ( ((char)v8 < 0 || !isalpha((unsigned __int8)v8)) && (unsigned __int8)v8 != 95 && (unsigned __int8)v8 != 36 )
        {
          v5 = 0;
          goto LABEL_7;
        }
        for ( i = 0; ; ++i )
        {
          v8 = v6[i + 1];
          v10 = (unsigned __int8)v6[i + 1];
          if ( (v8 < 0 || !isalnum(v10)) && v10 != 95 && v10 != 36 )
            break;
        }
        v6[i + 1] = 0;
        if ( (int)v3 < 1 )
        {
LABEL_28:
          v4 = &v6[i + 1];
        }
        else
        {
          v11 = 0;
          while ( strcmp((const char *)v19[v11], v6) )
          {
            if ( ++v11 >= (unsigned __int64)(unsigned int)v3 )
              goto LABEL_28;
          }
          *v6 = v11 ^ 0x80;
          if ( i )
          {
            v12 = strlen(&v6[i + 2]);
            memmove(v6 + 1, &v6[i + 1], v12 + 2);
          }
        }
        v6 = v4;
        *v4 = v8;
        if ( !v8 )
          return (unsigned int)v3;
      }
      if ( v7 == 92 )
      {
        v6 = v18 + 2;
        if ( *v4 )
          goto LABEL_8;
        goto LABEL_55;
      }
      if ( v7 == v5 )
        v5 = 0;
    }
    if ( !v5 )
      return (unsigned int)v3;
LABEL_55:
    LODWORD(v3) = -1;
    return (unsigned int)v3;
  }
  v2 = *(_BYTE **)(a1 + 8);
  if ( *v2 == 41 )
  {
    LODWORD(v3) = 0;
    *(_QWORD *)(a1 + 8) = v2 + 1;
    goto LABEL_5;
  }
  v3 = 0;
  while ( v3 <= 0x7E )
  {
    v13 = sub_829A8(a1);
    v19[v3] = v13;
    if ( !*v13 )
    {
      if ( *(_BYTE *)(a1 + 620) != 46 )
        break;
LABEL_58:
      v16 = *(_BYTE **)(a1 + 8);
      if ( *v16 == 46 && v16[1] == 46 )
      {
        LODWORD(v3) = -2;
        return (unsigned int)v3;
      }
      break;
    }
    v14 = *(unsigned __int8 *)(a1 + 620);
    ++v3;
    if ( ((unsigned int)(v14 - 9) < 5 || v14 == 32)
      && (v15 = *(_BYTE **)(a1 + 8), v14 = (unsigned __int8)*v15, *(_BYTE *)(a1 + 620) = v14, *v15) )
    {
      *v15 = 0;
      v14 = *(unsigned __int8 *)(a1 + 620);
      ++*(_QWORD *)(a1 + 8);
      if ( v14 != 44 )
        goto LABEL_51;
    }
    else if ( v14 != 44 )
    {
LABEL_51:
      if ( v14 == 41 )
        goto LABEL_5;
      if ( v14 != 46 )
        break;
      goto LABEL_58;
    }
  }
  LODWORD(v3) = -1;
  return (unsigned int)v3;
}
