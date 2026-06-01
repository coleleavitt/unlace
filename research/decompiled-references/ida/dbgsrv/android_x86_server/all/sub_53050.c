/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53050
// Address: 0x00053050

//----- (00053050) --------------------------------------------------------
void __cdecl sub_53050(_DWORD *a1)
{
  _DWORD *v1; // ecx
  void *v2; // eax
  char *v3; // edi
  unsigned int v4; // edx
  int i; // esi
  void *v6; // eax
  void *v7; // eax
  char *v8; // eax
  unsigned int v9; // edi
  int j; // esi
  unsigned int v11; // [esp+4h] [ebp-18h]
  unsigned int v12; // [esp+4h] [ebp-18h]
  unsigned int v13; // [esp+8h] [ebp-14h]

  v1 = a1;
  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
    v1 = a1;
    a1[4] = 0;
    a1[6] = 0;
  }
  v3 = (char *)v1[11];
  if ( v3 )
  {
    v13 = v1[12];
    if ( v13 )
    {
      v4 = 1;
      for ( i = 4; ; i += 16 )
      {
        v6 = *(void **)&v3[i];
        if ( v6 )
        {
          v11 = v4;
          *(_DWORD *)&v3[i + 4] = 0;
          qfree(v6);
          *(_DWORD *)&v3[i] = 0;
          *(_DWORD *)&v3[i + 8] = 0;
          v1 = a1;
          v4 = v11;
        }
        if ( v4 >= v13 )
          break;
        v3 = (char *)v1[11];
        ++v4;
      }
      v3 = (char *)v1[11];
    }
    v1[12] = 0;
    qfree(v3);
    v1 = a1;
    a1[11] = 0;
    a1[13] = 0;
  }
  v7 = (void *)v1[14];
  if ( v7 )
  {
    v1[15] = 0;
    qfree(v7);
    v1 = a1;
    a1[14] = 0;
    a1[16] = 0;
  }
  v8 = (char *)v1[8];
  if ( v8 )
  {
    v12 = v1[9];
    if ( v12 )
    {
      v9 = 1;
      for ( j = 0; ; j += 20 )
      {
        free_idcv(&v8[j]);
        v1 = a1;
        if ( v9 >= v12 )
          break;
        v8 = (char *)a1[8];
        ++v9;
      }
      v8 = (char *)a1[8];
    }
    v1[9] = 0;
    qfree(v8);
    v1 = a1;
    a1[8] = 0;
    a1[10] = 0;
  }
  v1[3] = 0;
}
