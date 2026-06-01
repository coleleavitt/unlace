/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A890
// Address: 0x0004A890

//----- (0004A890) --------------------------------------------------------
unsigned int __cdecl sub_4A890(_DWORD *a1, char *s2, int *a3)
{
  char *v3; // ecx
  _DWORD *v4; // edi
  unsigned int v5; // esi
  const char *v6; // eax
  _DWORD *v7; // edi
  const char *v8; // eax
  _DWORD *v9; // edi
  const char *v10; // eax
  char *v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v16; // [esp+14h] [ebp-18h]
  unsigned int v17; // [esp+14h] [ebp-18h]
  unsigned int v18; // [esp+14h] [ebp-18h]
  int v19; // [esp+18h] [ebp-14h]

  v3 = s2;
  v16 = a1[17];
  if ( v16 )
  {
    v4 = (_DWORD *)(a1[16] + 4);
    v5 = 0;
    while ( 1 )
    {
      v6 = byte_EF875;
      if ( *v4 )
        v6 = (const char *)*(v4 - 1);
      if ( !strcmp(v6, v3) )
        break;
      ++v5;
      v4 += 3;
      v3 = s2;
      if ( v5 >= v16 )
        goto LABEL_7;
    }
    v13 = 1;
  }
  else
  {
LABEL_7:
    v17 = a1[20];
    if ( v17 )
    {
      v7 = (_DWORD *)(a1[19] + 4);
      v5 = 0;
      while ( 1 )
      {
        v8 = byte_EF875;
        if ( *v7 )
          v8 = (const char *)*(v7 - 1);
        if ( !strcmp(v8, v3) )
          break;
        ++v5;
        v7 += 3;
        v3 = s2;
        if ( v5 >= v17 )
          goto LABEL_13;
      }
      v13 = 2;
    }
    else
    {
LABEL_13:
      v19 = a1[15];
      v18 = *(_DWORD *)(v19 + 52);
      if ( v18 )
      {
        v9 = (_DWORD *)(*(_DWORD *)(v19 + 48) + 4);
        v5 = 0;
        while ( 1 )
        {
          v10 = byte_EF875;
          if ( *v9 )
            v10 = (const char *)*(v9 - 1);
          if ( !strcmp(v10, v3) )
            break;
          ++v5;
          v9 += 8;
          v3 = s2;
          if ( v5 >= v18 )
            goto LABEL_19;
        }
        v13 = 3;
      }
      else
      {
LABEL_19:
        v11 = v3;
        v12 = sub_53AE0(v19, v3);
        v13 = 5;
        v5 = -1;
        if ( !v12 )
        {
          v14 = sub_54240((_DWORD *)a1[15], v11);
          v13 = 6;
          if ( v14 == 0x7FFFFFFF )
          {
            if ( off_13B634 )
              v13 = 4 * (unsigned __int8)off_13B634((int)s2);
            else
              v13 = 0;
          }
        }
      }
    }
  }
  if ( a3 )
    *a3 = v13;
  return v5;
}
// 13B634: using guessed type int (__cdecl *)(int);
