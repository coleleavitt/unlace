/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C460
// Address: 0x0001C460

//----- (0001C460) --------------------------------------------------------
void __cdecl sub_1C460(_DWORD *a1)
{
  _DWORD *v1; // ecx
  int v2; // eax
  void *v3; // eax
  char *v4; // edi
  unsigned int v5; // edx
  int i; // esi
  void *v7; // eax
  void *v8; // eax
  char *v9; // edi
  _DWORD *v10; // ebx
  unsigned int v11; // ecx
  int j; // esi
  void *v13; // eax
  unsigned int v14; // [esp+14h] [ebp-18h]
  unsigned int v15; // [esp+14h] [ebp-18h]
  unsigned int v16; // [esp+18h] [ebp-14h]
  unsigned int v17; // [esp+18h] [ebp-14h]

  v1 = a1;
  v2 = a1[69];
  if ( v2 )
  {
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v2 + 4))(a1[69]);
    v1 = a1;
    v3 = (void *)a1[70];
    if ( v3 )
    {
      a1[71] = 0;
      qfree(v3);
      v1 = a1;
      a1[70] = 0;
      a1[72] = 0;
    }
    v4 = (char *)v1[73];
    if ( v4 )
    {
      v14 = v1[74];
      if ( v14 )
      {
        v5 = 1;
        for ( i = 0; ; i += 12 )
        {
          v7 = *(void **)&v4[i];
          if ( v7 )
          {
            v16 = v5;
            *(_DWORD *)&v4[i + 4] = 0;
            qfree(v7);
            *(_DWORD *)&v4[i] = 0;
            *(_DWORD *)&v4[i + 8] = 0;
            v1 = a1;
            v5 = v16;
          }
          if ( v5 >= v14 )
            break;
          v4 = (char *)v1[73];
          ++v5;
        }
        v4 = (char *)v1[73];
      }
      v1[74] = 0;
      qfree(v4);
      v1 = a1;
      a1[73] = 0;
      a1[75] = 0;
    }
    v8 = (void *)v1[76];
    if ( v8 )
    {
      v1[77] = 0;
      qfree(v8);
      v1 = a1;
      a1[76] = 0;
      a1[78] = 0;
    }
    v9 = (char *)v1[79];
    if ( v9 )
    {
      v15 = v1[80];
      if ( v15 )
      {
        v10 = v1;
        v11 = 1;
        for ( j = 0; ; j += 12 )
        {
          v13 = *(void **)&v9[j];
          if ( v13 )
          {
            v17 = v11;
            *(_DWORD *)&v9[j + 4] = 0;
            qfree(v13);
            *(_DWORD *)&v9[j] = 0;
            *(_DWORD *)&v9[j + 8] = 0;
            v10 = a1;
            v11 = v17;
          }
          if ( v11 >= v15 )
            break;
          v9 = (char *)v10[79];
          ++v11;
        }
        v1 = v10;
        v9 = (char *)v10[79];
      }
      v1[80] = 0;
      qfree(v9);
      v1 = a1;
      a1[79] = 0;
      a1[81] = 0;
    }
  }
  v1[69] = 0;
}
