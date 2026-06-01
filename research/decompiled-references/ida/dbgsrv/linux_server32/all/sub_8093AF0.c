/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8093AF0
// Address: 0x08093AF0

//----- (08093AF0) --------------------------------------------------------
void __cdecl sub_8093AF0(char **a1)
{
  char *v1; // eax
  int v2; // edx
  char *v3; // edi
  char *v4; // ecx
  int v5; // ebp
  int i; // esi
  char *v7; // edx
  void *v8; // eax
  char *v9; // [esp+0h] [ebp-24h]
  int v10; // [esp+4h] [ebp-20h]
  int v11; // [esp+4h] [ebp-20h]

  v1 = *a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v9 = a1[1];
      v2 = 0;
      do
      {
        v3 = &v1[28 * v2];
        v4 = *(char **)v3;
        if ( *(_DWORD *)v3 )
        {
          v5 = *((_DWORD *)v3 + 1);
          if ( v5 )
          {
            v10 = v2;
            for ( i = 0; i != v5; ++i )
            {
              v7 = &v4[12 * i];
              v8 = *(void **)v7;
              if ( *(_DWORD *)v7 )
              {
                *((_DWORD *)v7 + 1) = 0;
                sub_80CF780(v8);
                v4 = *(char **)v3;
              }
            }
            v2 = v10;
          }
          v11 = v2;
          *((_DWORD *)v3 + 1) = 0;
          sub_80CF780(v4);
          v2 = v11;
          v1 = *a1;
        }
        ++v2;
      }
      while ( v9 != (char *)v2 );
    }
    a1[1] = nullptr;
    sub_80CF780(v1);
  }
}
