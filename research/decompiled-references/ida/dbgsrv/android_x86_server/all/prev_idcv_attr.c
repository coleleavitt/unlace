/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_idcv_attr
// Address: 0x0005C120

//----- (0005C120) --------------------------------------------------------
char *__cdecl prev_idcv_attr(int a1, char *s2)
{
  char *v2; // esi
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // esi
  char *v6; // eax
  const char *v7; // eax
  int v8; // eax
  void *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  const char *v12; // eax
  int v13; // eax
  int v15; // [esp+8h] [ebp-34h]
  int v16; // [esp+Ch] [ebp-30h]
  _DWORD *v17; // [esp+10h] [ebp-2Ch]
  const char *v18; // [esp+14h] [ebp-28h]
  int v19; // [esp+18h] [ebp-24h] BYREF
  int v20; // [esp+1Ch] [ebp-20h]
  int v21; // [esp+20h] [ebp-1Ch]
  unsigned int v22; // [esp+28h] [ebp-14h]

  v22 = __readgsdword(0x14u);
  v2 = nullptr;
  if ( a1 && *(_BYTE *)a1 == 5 )
  {
    v3 = *(_DWORD **)(a1 + 4);
    sub_1B530((int)&v19, s2);
    v4 = v3 + 1;
    v17 = v3;
    v5 = v3[1];
    if ( v5 )
    {
      v6 = (char *)v19;
      v16 = v19;
      if ( !v20 )
        v6 = byte_EF875;
      v18 = v6;
      do
      {
        v7 = byte_EF875;
        if ( *(_DWORD *)(v5 + 20) )
          v7 = *(const char **)(v5 + 16);
        v8 = strcmp(v7, v18);
        if ( v8 >= 0 )
          v4 = (_DWORD *)v5;
        v5 = *(_DWORD *)(v5 + 4 * ((unsigned int)v8 >> 31));
      }
      while ( v5 );
      v9 = (void *)v16;
    }
    else
    {
      v9 = (void *)v19;
    }
    v2 = nullptr;
    if ( v9 )
    {
      v20 = 0;
      qfree(v9);
      v19 = 0;
      v21 = 0;
    }
    if ( v4 != (_DWORD *)*v17 )
    {
      v10 = (_DWORD *)*v4;
      if ( *v4 )
      {
        do
        {
          v4 = v10;
          v10 = (_DWORD *)v10[1];
        }
        while ( v10 );
      }
      else
      {
        do
        {
          v11 = v4;
          v4 = (_DWORD *)v4[2];
        }
        while ( (_DWORD *)*v4 == v11 );
      }
      v12 = byte_EF875;
      v15 = v4[5];
      v2 = byte_EF875;
      if ( v15 )
        v12 = (const char *)v4[4];
      v13 = strcmp(v12, s2);
      if ( v13 >= 0 )
        v2 = nullptr;
      if ( v15 && v13 < 0 )
        return (char *)v4[4];
    }
  }
  return v2;
}
