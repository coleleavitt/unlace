/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C350
// Address: 0x0005C350

//----- (0005C350) --------------------------------------------------------
int __cdecl sub_5C350(_DWORD *a1, int a2)
{
  int v3; // edi
  _DWORD *v4; // esi
  const char *v5; // eax
  int v6; // eax
  const char *v7; // eax
  int v8; // eax
  const char *v10; // [esp+Ch] [ebp-20h]
  _DWORD *v11; // [esp+10h] [ebp-1Ch]
  _DWORD *v12; // [esp+18h] [ebp-14h]

  while ( 1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v10 = byte_EF875;
      if ( *(_DWORD *)(a2 + 4) )
        v10 = *(const char **)a2;
      v11 = a1;
      v4 = a1 + 1;
      v12 = a1 + 1;
      do
      {
        v5 = byte_EF875;
        if ( *(_DWORD *)(v3 + 20) )
          v5 = *(const char **)(v3 + 16);
        v6 = strcmp(v5, v10);
        if ( v6 >= 0 )
          v4 = (_DWORD *)v3;
        v3 = *(_DWORD *)(v3 + 4 * ((unsigned int)v6 >> 31));
      }
      while ( v3 );
      a1 = v11;
      if ( v4 != v12 )
      {
        v7 = v4[5] ? (const char *)v4[4] : byte_EF875;
        v8 = strcmp(v10, v7);
        a1 = v11;
        if ( v8 >= 0 )
          break;
      }
    }
    if ( !a1[3] && !a1[4] )
      return -1;
    a1 = (_DWORD *)sub_537A0(a1[3]);
  }
  return v4[7];
}
