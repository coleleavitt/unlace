/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080740
// Address: 0x08080740

//----- (08080740) --------------------------------------------------------
int __cdecl sub_8080740(int *a1, char *s)
{
  _DWORD *v2; // esi
  void *v3; // eax
  char *v4; // ecx
  int v5; // ebp
  int i; // edi
  char *v7; // eax
  void *v8; // edx
  void *v9; // eax
  void *v10; // eax
  int v11; // ebp
  int j; // edi
  int v13; // edx
  _DWORD *v15; // eax
  size_t v16; // eax
  int v17; // edx
  void *v18; // eax
  void *v19; // eax
  int v20; // [esp+0h] [ebp-24h]
  size_t v21; // [esp+0h] [ebp-24h]
  size_t n; // [esp+4h] [ebp-20h]

  v20 = sub_80806D0(a1, s);
  if ( v20 == -1 )
  {
    v15 = (_DWORD *)operator new(0x48u);
    *v15 = 0;
    v2 = v15;
    v15[1] = 0;
    v15[2] = 0;
    v15[4] = 0;
    v15[5] = 0;
    v15[6] = 0;
    v15[8] = 0;
    v15[9] = 0;
    v15[10] = 0;
    v15[11] = 0;
    v15[12] = 0;
    v15[13] = 0;
    v15[14] = 0;
    v15[15] = 0;
    v15[16] = 0;
    if ( s )
    {
      v16 = strlen(s);
      if ( v16 )
      {
        n = v16;
        v21 = v16 + 1;
        v19 = sub_80CF920((int)v2, nullptr, v16 + 1, 1u);
        *v2 = v19;
        v2[1] = v21;
        memmove(v19, s, n);
        *(_BYTE *)(*v2 + n) = 0;
      }
    }
    v17 = a1[1];
    v18 = (void *)*a1;
    v20 = v17;
    if ( a1[2] < (unsigned int)(v17 + 1) )
    {
      v18 = sub_80CF920((int)a1, v18, v17 + 1, 4u);
      v17 = a1[1];
      *a1 = (int)v18;
    }
    *((_DWORD *)v18 + v17) = v2;
    ++a1[1];
  }
  else
  {
    v2 = *(_DWORD **)(*a1 + 4 * v20);
    if ( v2[17] )
      return -1;
    v3 = (void *)v2[4];
    if ( v3 )
    {
      v2[5] = 0;
      sub_80CF780(v3);
      v2[4] = 0;
      v2[6] = 0;
    }
    v4 = (char *)v2[11];
    if ( v4 )
    {
      v5 = v2[12];
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = &v4[16 * i];
          v8 = *((void **)v7 + 1);
          if ( v8 )
          {
            *((_DWORD *)v7 + 2) = 0;
            sub_80CF780(v8);
            v4 = (char *)v2[11];
          }
        }
      }
      v2[12] = 0;
      sub_80CF780(v4);
      v2[11] = 0;
      v2[13] = 0;
    }
    v9 = (void *)v2[14];
    if ( v9 )
    {
      v2[15] = 0;
      sub_80CF780(v9);
      v2[14] = 0;
      v2[16] = 0;
    }
    v10 = (void *)v2[8];
    if ( v10 )
    {
      v11 = v2[9];
      if ( v11 )
      {
        for ( j = 0; j != v11; ++j )
        {
          v13 = 5 * j;
          sub_8089430((int)v10 + 4 * v13);
          v10 = (void *)v2[8];
        }
      }
      v2[9] = 0;
      sub_80CF780(v10);
      v2[8] = 0;
      v2[10] = 0;
    }
    v2[3] = 0;
  }
  v2[17] = -1;
  v2[3] = 0;
  return v20;
}
