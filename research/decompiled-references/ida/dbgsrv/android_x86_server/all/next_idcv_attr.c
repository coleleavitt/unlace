/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: next_idcv_attr
// Address: 0x0005C000

//----- (0005C000) --------------------------------------------------------
char *__cdecl next_idcv_attr(int a1, char *s)
{
  int v2; // esi
  int v3; // edi
  int v4; // esi
  int v5; // edi
  char *v6; // eax
  const char *v7; // eax
  int v8; // eax
  void *v9; // eax
  int v11; // [esp+8h] [ebp-34h]
  int v12; // [esp+Ch] [ebp-30h]
  const char *v13; // [esp+10h] [ebp-2Ch]
  int v14; // [esp+18h] [ebp-24h] BYREF
  int v15; // [esp+1Ch] [ebp-20h]
  int v16; // [esp+20h] [ebp-1Ch]
  unsigned int v17; // [esp+28h] [ebp-14h]

  v17 = __readgsdword(0x14u);
  v2 = 0;
  if ( a1 && *(_BYTE *)a1 == 5 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    sub_1B530((int)&v14, s);
    v4 = *(_DWORD *)(v3 + 4);
    v5 = v3 + 4;
    v12 = v5;
    if ( v4 )
    {
      v6 = (char *)v14;
      v11 = v14;
      if ( !v15 )
        v6 = byte_EF875;
      v13 = v6;
      do
      {
        v7 = byte_EF875;
        if ( *(_DWORD *)(v4 + 20) )
          v7 = *(const char **)(v4 + 16);
        v8 = strcmp(v13, v7);
        if ( v8 < 0 )
          v5 = v4;
        v4 = *(_DWORD *)(v4 + 4 * (v8 >= 0));
      }
      while ( v4 );
      v9 = (void *)v11;
    }
    else
    {
      v9 = (void *)v14;
    }
    v2 = 0;
    if ( v9 )
    {
      v15 = 0;
      qfree(v9);
      v14 = 0;
      v16 = 0;
    }
    if ( v5 != v12 )
    {
      if ( *(_DWORD *)(v5 + 20) )
        return *(char **)(v5 + 16);
      else
        return byte_EF875;
    }
  }
  return (char *)v2;
}
