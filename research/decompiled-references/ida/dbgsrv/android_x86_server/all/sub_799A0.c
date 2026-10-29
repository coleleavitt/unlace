/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_799A0
// Address: 0x000799A0

//----- (000799A0) --------------------------------------------------------
void __cdecl sub_799A0(_DWORD *a1)
{
  _DWORD *v1; // ecx
  char *v2; // edi
  unsigned int v3; // edx
  int i; // esi
  void *v5; // eax
  unsigned int v6; // esi
  int v7; // edi
  void *v8; // eax
  char *v9; // edx
  unsigned int v10; // edi
  int j; // esi
  void *v12; // eax
  char *v13; // edi
  _DWORD *v14; // esi
  unsigned int v15; // [esp+4h] [ebp-18h]
  unsigned int v16; // [esp+4h] [ebp-18h]
  unsigned int v17; // [esp+8h] [ebp-14h]
  unsigned int v18; // [esp+8h] [ebp-14h]

  v1 = a1;
  if ( *a1 )
  {
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*a1 + 4))(*a1);
    v1 = a1;
    *a1 = 0;
  }
  v1[2] = 0;
  v1[1] = 0;
  v1[4] = 0;
  v1[3] = 0;
  v1[6] = 0;
  v1[5] = 0;
  v1[8] = 0;
  v1[7] = 0;
  v1[10] = 0;
  v1[9] = 0;
  v1[12] = 0;
  v1[11] = 0;
  v2 = (char *)v1[13];
  if ( v2 )
  {
    v15 = v1[14];
    if ( v15 )
    {
      v3 = 1;
      for ( i = 12; ; i += 100 )
      {
        v5 = *(void **)&v2[i];
        if ( v5 )
        {
          v17 = v3;
          *(_DWORD *)&v2[i + 4] = 0;
          qfree(v5);
          *(_DWORD *)&v2[i] = 0;
          *(_DWORD *)&v2[i + 8] = 0;
          v1 = a1;
          v3 = v17;
        }
        if ( v3 >= v15 )
          break;
        v2 = (char *)v1[13];
        ++v3;
      }
      v2 = (char *)v1[13];
    }
    v1[14] = 0;
    qfree(v2);
    v1 = a1;
    a1[13] = 0;
    a1[15] = 0;
  }
  if ( v1[34] )
  {
    v6 = 0;
    v7 = 28;
    do
    {
      qfree(*(void **)(v1[33] + v7));
      v1 = a1;
      ++v6;
      v7 += 40;
    }
    while ( v6 < a1[34] );
  }
  v8 = (void *)v1[16];
  if ( v8 )
  {
    v1[17] = 0;
    qfree(v8);
    v1 = a1;
    a1[16] = 0;
    a1[18] = 0;
  }
  v9 = (char *)v1[36];
  if ( v9 )
  {
    v16 = v1[37];
    if ( v16 )
    {
      v10 = 1;
      for ( j = 0; ; j += 12 )
      {
        v12 = *(void **)&v9[j];
        if ( v12 )
        {
          v18 = v10;
          *(_DWORD *)&v9[j + 4] = 0;
          v13 = v9;
          qfree(v12);
          *(_DWORD *)&v13[j] = 0;
          *(_DWORD *)&v13[j + 8] = 0;
          v1 = a1;
          v10 = v18;
        }
        if ( v10 >= v16 )
          break;
        v9 = (char *)v1[36];
        ++v10;
      }
      v9 = (char *)v1[36];
    }
    v1[37] = 0;
    v14 = v1;
    qfree(v9);
    v14[36] = 0;
    v14[38] = 0;
  }
}
