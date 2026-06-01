/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A6A40
// Address: 0x080A6A40

//----- (080A6A40) --------------------------------------------------------
unsigned int __cdecl sub_80A6A40(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  unsigned int result; // eax
  __m128i v4; // xmm1
  char *v5; // ecx
  unsigned int v6; // edx
  int v7; // ebp
  int i; // edi
  char *v9; // edx
  void *v10; // eax
  int v11; // edi
  int v12; // ebp
  const char *v13; // edi
  int v14; // edi
  char *v15; // ebp
  _DWORD *v16; // ecx
  int v17; // edx
  int v18; // edx
  size_t v19; // esi
  void *v20; // eax
  unsigned int v21; // [esp+0h] [ebp-30h]
  unsigned int v22; // [esp+0h] [ebp-30h]
  unsigned int v23; // [esp+0h] [ebp-30h]
  int v24; // [esp+0h] [ebp-30h]
  char *v25; // [esp+4h] [ebp-2Ch]
  char *s2; // [esp+8h] [ebp-28h]
  unsigned __int64 v27; // [esp+Ch] [ebp-24h]
  _DWORD *v28; // [esp+38h] [ebp+8h]

  v2 = a1;
  result = a2[1];
  v4 = _mm_cvtsi32_si128(result);
  v21 = result;
  v27 = _mm_unpacklo_epi32(v4, v4).m128i_u64[0];
  if ( !result )
  {
    v5 = (char *)a1[36];
    if ( !v5 )
    {
      a1[37] = 0;
      a1[38] = 0;
      return result;
    }
    v25 = nullptr;
    v6 = 0;
LABEL_4:
    v7 = v2[37];
    if ( v7 )
    {
      v22 = v6;
      for ( i = 0; i != v7; ++i )
      {
        v9 = &v5[12 * i];
        v10 = *(void **)v9;
        if ( *(_DWORD *)v9 )
        {
          *((_DWORD *)v9 + 1) = 0;
          sub_80CF780(v10);
          v5 = (char *)v2[36];
        }
      }
      v6 = v22;
    }
    v23 = v6;
    v2[37] = 0;
    sub_80CF780(v5);
    result = (unsigned int)v25;
    v6 = v23;
    v2[36] = v25;
    *(_QWORD *)(v2 + 37) = v27;
    if ( !v23 )
      return result;
    goto LABEL_11;
  }
  v14 = 0;
  v25 = (char *)sub_80CF8B0(12 * result);
  v15 = v25;
  v16 = a2;
  do
  {
    while ( 1 )
    {
      v17 = *v16;
      *(_DWORD *)v15 = 0;
      *((_DWORD *)v15 + 1) = 0;
      v18 = v17 + 12 * v14;
      *((_DWORD *)v15 + 2) = 0;
      v19 = *(_DWORD *)(v18 + 4);
      if ( v19 )
        break;
      ++v14;
      v15 += 12;
      if ( v21 == v14 )
        goto LABEL_30;
    }
    v28 = v16;
    ++v14;
    v15 += 12;
    s2 = (char *)v18;
    v20 = sub_80CF8B0(v19);
    *((_DWORD *)v15 - 1) = v19;
    *((_DWORD *)v15 - 3) = v20;
    memcpy(v20, *(const void **)s2, v19);
    *((_DWORD *)v15 - 2) = v19;
    v16 = v28;
  }
  while ( v21 != v14 );
LABEL_30:
  v2 = a1;
  v6 = v21;
  v5 = (char *)a1[36];
  if ( v5 )
    goto LABEL_4;
  a1[36] = v25;
  *(_QWORD *)(a1 + 37) = v27;
LABEL_11:
  result = (unsigned int)v25;
  while ( *(_DWORD *)(*(_DWORD *)result + 8) )
  {
    result += 12;
    if ( &v25[12 * v6] == (char *)result )
      return result;
  }
  if ( result )
  {
    if ( *(_DWORD *)(*(_DWORD *)result + 16) )
    {
      v11 = v2[14];
      if ( v11 > 0 )
      {
        v12 = v2[13];
        v24 = 100 * v11 + v12;
        do
        {
          result = *(_DWORD *)(v12 + 16);
          if ( result )
          {
            v13 = *(const char **)(v12 + 12);
            result = strcmp(v13, ".debug_info");
            if ( result )
            {
              result = strcmp(v13, ".debug_types");
              if ( !result )
                *(_QWORD *)(v2 + 21) = *(_QWORD *)(v12 + 32);
            }
            else
            {
              *(_QWORD *)(v2 + 19) = *(_QWORD *)(v12 + 32);
            }
          }
          v12 += 100;
        }
        while ( v24 != v12 );
      }
    }
  }
  return result;
}
