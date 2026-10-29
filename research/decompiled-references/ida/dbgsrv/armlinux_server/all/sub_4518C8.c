/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4518C8
// Address: 0x00000000004518C8

//----- (00000000004518C8) ----------------------------------------------------
__int64 __fastcall sub_4518C8(__int64 a1)
{
  __int64 v1; // x22
  __int64 v2; // x23
  __int64 v3; // x28
  unsigned int v5; // w21
  char *v6; // x20
  int v7; // w27
  int v8; // w19
  unsigned __int8 *v9; // x0
  __int64 i; // x20
  char *v12; // x0
  int v13; // w1
  bool v14; // zf
  int v15; // w1
  _BYTE *v16; // x0
  _BYTE *v18; // x0
  char *v19; // x23
  bool v21; // zf
  bool v22; // zf
  char *v23; // x22
  __int64 v25; // x28
  int v26; // t1
  unsigned __int8 *v27; // x1
  size_t v28; // x0
  __int64 v29; // [xsp+18h] [xbp-448h]
  __int64 v30; // [xsp+20h] [xbp-440h]
  __int64 v31; // [xsp+48h] [xbp-418h]
  _QWORD v32[127]; // [xsp+60h] [xbp-400h]

  v5 = 0;
  v6 = *(char **)(a1 + 8);
  v7 = (unsigned __int8)*v6;
  if ( *(_BYTE *)(a1 + 692) != 40 )
    goto LABEL_2;
  if ( v7 == 41 )
  {
    *(_QWORD *)(a1 + 8) = v6 + 1;
    v7 = (unsigned __int8)*++v6;
LABEL_2:
    v8 = 0;
LABEL_3:
    while ( 2 )
    {
      v9 = (unsigned __int8 *)(v6 + 1);
      if ( v7 )
      {
        while ( 1 )
        {
          if ( !v8 )
          {
            v29 = v1;
            v30 = v2;
            goto LABEL_36;
          }
          if ( v7 == 92 )
          {
            if ( !v6[1] )
              return (unsigned int)-1;
            v7 = (unsigned __int8)v6[2];
            v6 += 2;
            goto LABEL_3;
          }
          v14 = v8 == v7;
          v7 = (unsigned __int8)v6[1];
          if ( v14 )
            break;
          v6 = (char *)v9++;
          if ( !v7 )
            goto LABEL_11;
        }
        v27 = (unsigned __int8 *)(v6 + 2);
        if ( !v6[1] )
          return v5;
        v6 = (char *)v9;
        v29 = v1;
        v30 = v2;
        v9 = v27;
LABEL_36:
        v19 = v6;
        v8 = v7;
        v6 = (char *)v9;
LABEL_37:
        v7 = (unsigned __int8)*v6;
        if ( v8 == 34 || v8 == 39 )
        {
LABEL_54:
          v1 = v29;
          v2 = v30;
          continue;
        }
        while ( v5 )
        {
          if ( (v8 & 0xFFFFFF80) == 0 && isalpha(v8) || (v8 != 95 ? (v21 = v8 == 36) : (v21 = 1), v21) )
          {
            v23 = v6;
            v8 = v7;
            v31 = v3;
            while ( (v8 & 0xFFFFFF80) == 0 && isalnum(v8) || v8 == 95 || v8 == 36 )
            {
              v26 = (unsigned __int8)*++v23;
              v8 = v26;
            }
            *v23 = 0;
            v25 = 0;
            while ( strcmp((const char *)v32[v25], v19) )
            {
              if ( (int)v5 <= (int)++v25 )
                goto LABEL_65;
            }
            if ( (int)v5 <= (int)v25 )
            {
LABEL_65:
              v19 = v23;
              goto LABEL_66;
            }
            *v19 = v25 + 0x80;
            v19 = v23;
            if ( v23 != v6 )
            {
              v28 = strlen(v23 + 1);
              v19 = v6;
              memmove(v6, v23, v28 + 2);
            }
LABEL_66:
            *v19 = v8;
            v6 = v19 + 1;
            if ( v8 )
            {
              v3 = v31;
              goto LABEL_37;
            }
            return v5;
          }
          v8 = v7;
          if ( !v7 )
            return v5;
          v19 = v6++;
          v22 = v7 == 34 || v7 == 39;
          v7 = (unsigned __int8)*v6;
          if ( v22 )
            goto LABEL_54;
        }
        v9 = (unsigned __int8 *)(v6 + 1);
        if ( v7 )
          goto LABEL_36;
      }
      else
      {
LABEL_11:
        if ( v8 )
          return (unsigned int)-1;
      }
      return v5;
    }
  }
  for ( i = 0; ; ++i )
  {
    v12 = sub_4517B0(a1);
    v32[i] = v12;
    if ( !*v12 )
      break;
    v13 = *(unsigned __int8 *)(a1 + 692);
    v5 = i + 1;
    v14 = v13 == 32 || v13 == 9;
    if ( v14 || sub_450428(*(_BYTE *)(a1 + 692)) )
    {
      v16 = *(_BYTE **)(a1 + 8);
      v15 = (unsigned __int8)*v16;
      *(_BYTE *)(a1 + 692) = v15;
      if ( *v16 )
      {
        *v16 = 0;
        v15 = *(unsigned __int8 *)(a1 + 692);
        ++*(_QWORD *)(a1 + 8);
      }
    }
    if ( v15 == 41 )
    {
      v6 = *(char **)(a1 + 8);
      v7 = (unsigned __int8)*v6;
      goto LABEL_2;
    }
    if ( v15 == 46 )
    {
      v18 = *(_BYTE **)(a1 + 8);
      if ( *v18 != 46 )
        return (unsigned int)-1;
      goto LABEL_33;
    }
    if ( v15 != 44 || v5 == 127 )
      return (unsigned int)-1;
  }
  if ( *(_BYTE *)(a1 + 692) != 46 )
    return (unsigned int)-1;
  v18 = *(_BYTE **)(a1 + 8);
  if ( *v18 != 46 )
    return (unsigned int)-1;
LABEL_33:
  if ( v18[1] != 46 )
    return (unsigned int)-1;
  return (unsigned int)-2;
}
// 4518C8: could not find valid save-restore pair for x22
// 4518C8: could not find valid save-restore pair for x23
// 4518C8: could not find valid save-restore pair for x28
// 451A24: variable 'v15' is possibly undefined
// 451A70: variable 'v1' is possibly undefined
// 451A70: variable 'v2' is possibly undefined
// 451AF0: variable 'v3' is possibly undefined
