/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EB10
// Address: 0x0004EB10

//----- (0004EB10) --------------------------------------------------------
unsigned int __cdecl sub_4EB10(void **a1, unsigned int a2, char *a3)
{
  unsigned int v3; // esi
  void **v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // edi
  char *v7; // eax
  unsigned int v8; // ecx
  void **v9; // ecx
  unsigned int v10; // eax
  int v11; // esi
  int v12; // edi
  _BYTE *v13; // eax
  unsigned int v15; // edx
  int v16; // edi
  int v17; // edi
  unsigned int v18; // esi
  _BYTE *v19; // eax
  unsigned int v20; // [esp+1Ch] [ebp-30h]
  unsigned int v21; // [esp+1Ch] [ebp-30h]
  char v22[4]; // [esp+20h] [ebp-2Ch] BYREF
  int v23; // [esp+24h] [ebp-28h]
  int v24; // [esp+28h] [ebp-24h]
  int v25; // [esp+2Ch] [ebp-20h]
  int v26; // [esp+30h] [ebp-1Ch]
  unsigned int v27; // [esp+38h] [ebp-14h]

  v3 = a2;
  v4 = a1;
  v27 = __readgsdword(0x14u);
  v5 = (unsigned int)a1[1];
  if ( v5 > a2 )
  {
    v6 = 20 * a2;
    v20 = (unsigned int)a1[1];
    do
    {
      free_idcv((char *)*v4 + v6);
      ++v3;
      v6 += 20;
      v4 = a1;
    }
    while ( v3 < v20 );
    goto LABEL_4;
  }
  if ( v5 >= a2 )
    return __readgsdword(0x14u);
  v7 = (char *)*a1;
  v8 = (unsigned int)a1[2];
  if ( *a1 > a3 || &v7[20 * v8] <= a3 )
  {
    if ( v8 >= a2 )
    {
      v15 = (unsigned int)a1[1];
      v4 = a1;
      if ( v15 < a2 )
        goto LABEL_19;
    }
    else
    {
      v7 = (char *)qvector_reserve((int)a1, v7, a2, 0x14u);
      v4 = a1;
      *a1 = v7;
      v15 = (unsigned int)a1[1];
      if ( v15 < a2 )
      {
LABEL_19:
        v16 = 5 * v15;
        v7[4 * v16] = 2;
        *(_DWORD *)&v7[4 * v16 + 8] = 0;
        *(_DWORD *)&v7[4 * v16 + 4] = 0;
        *(_DWORD *)&v7[4 * v16 + 16] = 0;
        *(_DWORD *)&v7[4 * v16 + 12] = 0;
        v21 = v15;
        copy_idcv(&v7[20 * v15], a3);
        v4 = a1;
        if ( v21 + 1 != a2 )
        {
          v17 = 4 * v16 + 20;
          v18 = a2 - 1 - v21;
          do
          {
            v19 = *v4;
            v19[v17] = 2;
            *(_DWORD *)&v19[v17 + 8] = 0;
            *(_DWORD *)&v19[v17 + 4] = 0;
            *(_DWORD *)&v19[v17 + 16] = 0;
            *(_DWORD *)&v19[v17 + 12] = 0;
            copy_idcv(&v19[v17], a3);
            v4 = a1;
            v17 += 20;
            --v18;
          }
          while ( v18 );
        }
      }
    }
LABEL_4:
    v4[1] = (void *)a2;
    return __readgsdword(0x14u);
  }
  v22[0] = 2;
  v24 = 0;
  v23 = 0;
  v26 = 0;
  v25 = 0;
  copy_idcv(v22, a3);
  v9 = a1;
  if ( (unsigned int)a1[2] < a2 )
  {
    *a1 = qvector_reserve((int)a1, *a1, a2, 0x14u);
    v9 = a1;
  }
  v10 = (unsigned int)v9[1];
  if ( v10 < a2 )
  {
    v11 = a2 - v10;
    v12 = 20 * v10;
    do
    {
      v13 = *v9;
      v13[v12] = 2;
      *(_DWORD *)&v13[v12 + 8] = 0;
      *(_DWORD *)&v13[v12 + 4] = 0;
      *(_DWORD *)&v13[v12 + 16] = 0;
      *(_DWORD *)&v13[v12 + 12] = 0;
      copy_idcv(&v13[v12], v22);
      v12 += 20;
      --v11;
      v9 = a1;
    }
    while ( v11 );
  }
  v9[1] = (void *)a2;
  free_idcv(v22);
  return __readgsdword(0x14u);
}
