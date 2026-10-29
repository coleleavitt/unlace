/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_708E0
// Address: 0x000708E0

//----- (000708E0) --------------------------------------------------------
int __cdecl sub_708E0(int a1)
{
  unsigned int v1; // edi
  _BYTE *v2; // eax
  _BYTE *v3; // esi
  char v4; // cl
  char *v5; // esi
  unsigned __int8 v6; // al
  int v7; // eax
  bool v8; // zf
  char *v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // eax
  size_t v13; // eax
  _BYTE *v14; // eax
  int result; // eax
  char *v16; // eax
  char v17; // al
  char *v18; // ecx
  _BYTE *v19; // ecx
  unsigned __int8 v20; // [esp+12h] [ebp-22Ah]
  unsigned __int8 v21; // [esp+12h] [ebp-22Ah]
  unsigned __int8 v22; // [esp+12h] [ebp-22Ah]
  char v23; // [esp+13h] [ebp-229h]
  unsigned __int8 v24; // [esp+14h] [ebp-228h]
  int v25; // [esp+18h] [ebp-224h]
  char *v26; // [esp+1Ch] [ebp-220h]
  char *v27; // [esp+20h] [ebp-21Ch]
  int v28; // [esp+24h] [ebp-218h]
  _BYTE *v29; // [esp+28h] [ebp-214h]
  _DWORD v30[132]; // [esp+2Ch] [ebp-210h]

  v30[127] = __readgsdword(0x14u);
  v1 = 0;
  if ( *(_BYTE *)(a1 + 244) == 40 )
  {
    v2 = *(_BYTE **)(a1 + 4);
    if ( *v2 != 41 )
    {
      v1 = 0;
      while ( 1 )
      {
        result = -1;
        if ( v1 > 0x7E )
          return result;
        v16 = sub_707F0(a1);
        v30[v1] = v16;
        if ( !*v16 )
          break;
        v17 = *(_BYTE *)(a1 + 244);
        if ( (unsigned __int8)(v17 - 9) < 5u || v17 == 32 )
        {
          v18 = *(char **)(a1 + 4);
          v17 = *v18;
          *(_BYTE *)(a1 + 244) = *v18;
          if ( *v18 )
          {
            *v18 = 0;
            ++*(_DWORD *)(a1 + 4);
            v17 = *(_BYTE *)(a1 + 244);
          }
        }
        ++v1;
        if ( v17 != 44 )
        {
          if ( v17 == 41 )
            goto LABEL_4;
          if ( v17 != 46 )
            return -1;
          goto LABEL_58;
        }
      }
      if ( *(_BYTE *)(a1 + 244) != 46 )
        return -1;
LABEL_58:
      v19 = *(_BYTE **)(a1 + 4);
      if ( *v19 == 46 )
      {
        result = -2;
        if ( v19[1] == 46 )
          return result;
      }
      return -1;
    }
    *(_DWORD *)(a1 + 4) = v2 + 1;
  }
LABEL_4:
  v3 = *(_BYTE **)(a1 + 4);
  v24 = 0;
  v25 = v1;
  while ( 1 )
  {
LABEL_42:
    v14 = v3;
LABEL_8:
    v4 = *v14;
    if ( !*v14 )
    {
      result = -1;
      if ( !v24 )
        return v1;
      return result;
    }
    v29 = v14;
    v5 = v14;
    v6 = *v14;
    v23 = v4;
    while ( 1 )
    {
      v27 = v5;
      v3 = v5 + 1;
      if ( v24 )
        break;
      if ( v6 == 34 || v6 == 39 )
      {
        v24 = v6;
        goto LABEL_42;
      }
      if ( !v1 )
      {
        v24 = 0;
        goto LABEL_42;
      }
      if ( (v6 & 0x80u) != 0 || (v20 = v6, v7 = isalpha(v6), v4 = v23, v8 = v7 == 0, v6 = v20, v8) )
      {
        if ( v6 != 95 && v6 != 36 )
        {
          v24 = 0;
          goto LABEL_42;
        }
      }
      v9 = v3;
      v10 = 0;
      v26 = v9;
      while ( 1 )
      {
        v6 = *v9;
        if ( *v9 < 0 || (v21 = *v9, v11 = isalnum(v6), v4 = v23, v8 = v11 == 0, v6 = v21, v8) )
        {
          if ( v6 != 95 && v6 != 36 )
            break;
        }
        ++v9;
        --v10;
      }
      *v9 = 0;
      if ( v25 <= 0 )
      {
        v5 = v9;
        v1 = v25;
      }
      else
      {
        v22 = v6;
        v12 = 0;
        while ( 1 )
        {
          v28 = v12;
          if ( !strcmp((const char *)v30[v12], v27) )
            break;
          v12 = v28 + 1;
          if ( v28 + 1 >= (unsigned int)v25 )
          {
            v5 = v9;
LABEL_32:
            v1 = v25;
            goto LABEL_33;
          }
        }
        *v27 = v28 + 0x80;
        if ( v10 )
        {
          v13 = strlen(v9 + 1);
          v5 = v26;
          memmove(v26, v9, v13 + 2);
          goto LABEL_32;
        }
        v1 = v25;
        v5 = v26;
LABEL_33:
        v4 = v23;
        v6 = v22;
      }
      *v5 = v6;
      if ( !v6 )
        return v1;
    }
    if ( v4 == 92 )
      break;
    if ( v4 == v24 )
      v24 = 0;
  }
  v14 = v29 + 2;
  if ( *v3 )
    goto LABEL_8;
  return -1;
}
