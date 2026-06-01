/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_plugin_options
// Address: 0x0009F9E0

//----- (0009F9E0) --------------------------------------------------------
char __cdecl parse_plugin_options(int a1, char *s)
{
  const char *v2; // eax
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int v7; // esi
  char *v8; // eax
  char *v9; // ecx
  const char *v10; // eax
  size_t v11; // eax
  size_t v12; // edx
  void **v13; // eax
  void *v14; // eax
  size_t v15; // eax
  size_t v16; // edx
  void *v17; // eax
  const char *v18; // ecx
  size_t v19; // esi
  size_t v21; // [esp+0h] [ebp-3Ch]
  void **v22; // [esp+0h] [ebp-3Ch]
  const char *v23; // [esp+4h] [ebp-38h]
  void *v24; // [esp+4h] [ebp-38h]
  const char *v25; // [esp+8h] [ebp-34h]
  void **v26; // [esp+Ch] [ebp-30h]
  size_t v27; // [esp+Ch] [ebp-30h]
  size_t v28; // [esp+10h] [ebp-2Ch]
  size_t v29; // [esp+10h] [ebp-2Ch]
  int v30[3]; // [esp+18h] [ebp-24h] BYREF
  int v31[6]; // [esp+24h] [ebp-18h] BYREF

  v31[1] = __readgsdword(0x14u);
  if ( !s || !*s )
    return 0;
  sub_1B530((int)v30, s);
  v2 = qstrtok((char *)v30[0], ":", (const char **)v31);
  v3 = a1;
  while ( v2 )
  {
    v25 = v2;
    v4 = *(_DWORD *)(v3 + 4);
    if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v4 + 1) )
    {
      v6 = *(_DWORD **)v3;
    }
    else
    {
      v5 = (_DWORD *)v3;
      v6 = qvector_reserve(v3, *(void **)v3, v4 + 1, 0x18u);
      *v5 = v6;
      v4 = v5[1];
      v3 = (int)v5;
    }
    v7 = 3 * v4;
    v6[2 * v7 + 1] = 0;
    v6[2 * v7] = 0;
    v6[2 * v7 + 3] = 0;
    v6[2 * v7 + 2] = 0;
    v6[2 * v7 + 5] = 0;
    v6[2 * v7 + 4] = 0;
    ++*(_DWORD *)(v3 + 4);
    v8 = strchr(v25, 61);
    if ( v8 )
    {
      v9 = v8;
      v10 = v8 + 1;
      *v9 = 0;
      if ( v10 && (v23 = v10, (v11 = strlen(v10)) != 0) )
      {
        v12 = v11;
        v13 = (void **)&v6[2 * v7 + 3];
        v21 = v12;
        v26 = v13;
        v28 = v12 + 1;
        if ( v6[2 * v7 + 5] >= v12 + 1 )
        {
          v14 = *v13;
        }
        else
        {
          v14 = qvector_reserve((int)&v6[2 * v7 + 3], *v13, v12 + 1, 1u);
          *v26 = v14;
          v12 = v21;
        }
        v6[2 * v7 + 4] = v28;
        memmove(v14, v23, v12);
        *((_BYTE *)*v26 + v21) = 0;
      }
      else
      {
        v6[2 * v7 + 4] = 0;
      }
    }
    v15 = strlen(v25);
    if ( v15 )
    {
      v16 = v15;
      v22 = (void **)&v6[2 * v7];
      v24 = *v22;
      v27 = v15 + 1;
      if ( (unsigned int)v22[2] >= v15 + 1 )
      {
        v18 = v25;
      }
      else
      {
        v29 = v15;
        v17 = qvector_reserve((int)v22, v24, v15 + 1, 1u);
        *v22 = v17;
        v18 = v25;
        v16 = v29;
        v24 = v17;
      }
      v6[2 * v7 + 1] = v27;
      v19 = v16;
      memmove(v24, v18, v16);
      *((_BYTE *)*v22 + v19) = 0;
    }
    else
    {
      v6[2 * v7 + 1] = 0;
    }
    v2 = qstrtok(nullptr, ":", (const char **)v31);
    v3 = a1;
  }
  if ( v30[0] )
  {
    v30[1] = 0;
    qfree((void *)v30[0]);
    v30[0] = 0;
    v30[2] = 0;
  }
  return 1;
}
