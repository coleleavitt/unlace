/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1EF60
// Address: 0x0001EF60

//----- (0001EF60) --------------------------------------------------------
int __fastcall sub_1EF60(_DWORD *a1)
{
  int *v2; // r6
  _DWORD *v3; // r7
  void *v4; // r0
  FILE *v5; // r0
  size_t v6; // r2
  size_t v7; // r0
  size_t v8; // r2
  int v9; // r7
  size_t v10; // r0
  char *v11; // r5
  int v13; // [sp+10h] [bp-4Ch]
  _DWORD v14[2]; // [sp+18h] [bp-44h] BYREF
  unsigned int v15; // [sp+20h] [bp-3Ch] BYREF
  unsigned int v16; // [sp+24h] [bp-38h]
  char v17[20]; // [sp+38h] [bp-24h] BYREF
  char *haystack; // [sp+4Ch] [bp-10h]
  int v19; // [sp+50h] [bp-Ch]
  int v20; // [sp+54h] [bp-8h]
  int v21; // [sp+58h] [bp-4h]

  v2 = *(int **)(loc_1F0C8 + 126828);
  v21 = *v2;
  v3 = a1 + 245;
  v4 = (void *)a1[245];
  if ( v4 )
  {
    a1[246] = 0;
    qfree(v4);
    *v3 = 0;
    a1[247] = 0;
  }
  a1[248] = 0;
  v5 = (FILE *)a1[253];
  if ( v5 )
  {
    v13 = (int)v3;
    rewind(v5);
    v19 = 0;
    haystack = nullptr;
    v20 = 0;
    while ( sub_1F0E8((int)a1, &v15) )
    {
      if ( v15 < v16 && strchr(v17, 120) )
      {
        v6 = _strlen_chk(loc_1F0CC + 126908, 5);
        if ( !v6 )
          goto LABEL_21;
        v7 = v19 - 1;
        if ( !v19 )
          v7 = 0;
        if ( v7 >= v6 && !strncmp(&haystack[v7 - v6], ".oat", v6) )
          goto LABEL_21;
        v8 = _strlen_chk(loc_1F0D0 + 126914, 6);
        if ( !v8 )
          goto LABEL_21;
        v9 = v19;
        v10 = v19 - 1;
        if ( !v19 )
          v10 = 0;
        v11 = haystack;
        if ( v10 >= v8 && !strncmp(&haystack[v10 - v8], ".odex", v8) )
          goto LABEL_21;
        if ( !v9 )
          v11 = &byte_B3CBE;
        if ( strstr(v11, "jit-cache") )
        {
LABEL_21:
          v14[0] = v15;
          v14[1] = v16;
          rangeset_t_add(v13, (int)v14);
        }
      }
    }
    sub_1BC48((int)a1, "ART: refreshed code ranges: %d regions\n", a1[246]);
    if ( haystack )
    {
      v19 = 0;
      qfree(haystack);
      v20 = 0;
      haystack = nullptr;
    }
  }
  return *v2 - v21;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
