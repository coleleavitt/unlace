/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B8D20
// Address: 0x080B8D20

//----- (080B8D20) --------------------------------------------------------
_DWORD *__cdecl sub_80B8D20(int a1, unsigned int *a2)
{
  _DWORD *result; // eax
  unsigned int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // edx
  void **v7; // edi
  const char *v8; // ebp
  unsigned int v9; // eax
  const char *v10; // ebp
  unsigned int v11; // eax
  size_t v12; // eax
  size_t v13; // edx
  unsigned int v14; // ecx
  void *v15; // eax
  size_t v16; // eax
  size_t v17; // edx
  unsigned int v18; // ecx
  void *v19; // eax
  int v20; // [esp+0h] [ebp-2Ch]
  size_t v21; // [esp+4h] [ebp-28h]
  size_t v22; // [esp+4h] [ebp-28h]
  unsigned int v23; // [esp+4h] [ebp-28h]
  unsigned int v24; // [esp+4h] [ebp-28h]
  _DWORD *v25; // [esp+8h] [ebp-24h]
  size_t v26; // [esp+Ch] [ebp-20h]
  size_t v27; // [esp+Ch] [ebp-20h]

  result = nullptr;
  if ( a1 > 0 )
  {
    if ( (unsigned int)a1 > 0x7FFFFFF )
    {
      v4 = sub_80CF8B0(0x7FFFFFFFu);
    }
    else
    {
      v3 = 32 * a1 + 4;
      if ( (unsigned int)a1 >= 0x4000000 )
        v3 = -1;
      v4 = (_DWORD *)(operator new[](v3) + 4);
      *(v4 - 1) = a1;
      v5 = a1 - 2;
      v6 = v4;
      do
      {
        --v5;
        *v6 = 0;
        v6 += 8;
        *(v6 - 7) = 0;
        *(v6 - 6) = 0;
        *(v6 - 5) = 0;
        *(v6 - 4) = 0;
        *(v6 - 3) = 0;
        *(v6 - 2) = 0;
        *(v6 - 1) = 0;
      }
      while ( v5 != -2 );
    }
    v20 = 0;
    v7 = (void **)(v4 + 2);
    v25 = v4;
    do
    {
      *(v7 - 2) = (void *)sub_80CDEC0(a2, a2[1]);
      *(v7 - 1) = (void *)sub_80CDEC0(a2, a2[1]);
      v8 = (const char *)*a2;
      v9 = *a2;
      do
      {
        if ( v9 >= a2[1] )
          goto LABEL_11;
        ++v9;
      }
      while ( *(_BYTE *)(v9 - 1) );
      *a2 = v9;
      if ( !v8 || (v12 = strlen(v8), (v13 = v12) == 0) )
      {
LABEL_11:
        v7[1] = nullptr;
        goto LABEL_12;
      }
      v14 = v12 + 1;
      v15 = *v7;
      if ( (unsigned int)v7[2] < v14 )
      {
        v26 = v13;
        v23 = v14;
        v15 = sub_80CF920((int)v7, v15, v14, 1u);
        v13 = v26;
        v14 = v23;
        *v7 = v15;
      }
      v7[1] = (void *)v14;
      v21 = v13;
      memmove(v15, v8, v13);
      *((_BYTE *)*v7 + v21) = 0;
LABEL_12:
      v10 = (const char *)*a2;
      v11 = *a2;
      do
      {
        if ( v11 >= a2[1] )
          goto LABEL_15;
        ++v11;
      }
      while ( *(_BYTE *)(v11 - 1) );
      *a2 = v11;
      if ( !v10 || (v16 = strlen(v10), (v17 = v16) == 0) )
      {
LABEL_15:
        v7[4] = nullptr;
        goto LABEL_16;
      }
      v18 = v16 + 1;
      v19 = v7[3];
      if ( (unsigned int)v7[5] < v18 )
      {
        v27 = v17;
        v24 = v18;
        v19 = sub_80CF920((int)(v7 + 3), v19, v18, 1u);
        v17 = v27;
        v18 = v24;
        v7[3] = v19;
      }
      v7[4] = (void *)v18;
      v22 = v17;
      memmove(v19, v10, v17);
      *((_BYTE *)v7[3] + v22) = 0;
LABEL_16:
      ++v20;
      v7 += 8;
    }
    while ( a1 != v20 );
    return v25;
  }
  return result;
}
