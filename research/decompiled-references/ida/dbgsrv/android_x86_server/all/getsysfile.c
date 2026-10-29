/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: getsysfile
// Address: 0x000AA040

//----- (000AA040) --------------------------------------------------------
char *__cdecl getsysfile(char *a1, int a2, int a3, char *s1)
{
  int v4; // eax
  int v5; // esi
  const char *v6; // eax
  char *v7; // esi
  unsigned int v8; // ecx
  int i; // edi
  void *v10; // eax
  char *v12; // [esp+1Ch] [ebp-30h]
  unsigned int v13; // [esp+20h] [ebp-2Ch]
  int v14; // [esp+24h] [ebp-28h]
  unsigned int v15; // [esp+24h] [ebp-28h]
  int v16; // [esp+28h] [ebp-24h] BYREF
  unsigned int v17; // [esp+2Ch] [ebp-20h]
  int v18; // [esp+30h] [ebp-1Ch]
  unsigned int v19; // [esp+38h] [ebp-14h]

  v19 = __readgsdword(0x14u);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  get_ida_subdirs(&v16, s1, 0);
  if ( v17 )
  {
    v4 = 0;
    v5 = 4;
    while ( 1 )
    {
      v14 = v4;
      v6 = byte_EF875;
      if ( *(_DWORD *)(v16 + v5) )
        v6 = *(const char **)(v16 + v5 - 4);
      v12 = qmakepath(a1, a2, v6, a3);
      if ( qfileexist(v12) )
        break;
      v4 = v14 + 1;
      v5 += 12;
      if ( v14 + 1 >= v17 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v12 = nullptr;
  }
  v7 = (char *)v16;
  if ( v16 )
  {
    v13 = v17;
    if ( v17 )
    {
      v8 = 1;
      for ( i = 0; ; i += 12 )
      {
        v10 = *(void **)&v7[i];
        if ( v10 )
        {
          v15 = v8;
          *(_DWORD *)&v7[i + 4] = 0;
          qfree(v10);
          *(_DWORD *)&v7[i] = 0;
          *(_DWORD *)&v7[i + 8] = 0;
          v8 = v15;
        }
        if ( v8 >= v13 )
          break;
        v7 = (char *)v16;
        ++v8;
      }
      v7 = (char *)v16;
    }
    v17 = 0;
    qfree(v7);
    v16 = 0;
    v18 = 0;
  }
  return v12;
}
