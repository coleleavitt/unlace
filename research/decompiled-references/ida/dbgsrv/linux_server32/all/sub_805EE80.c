/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805EE80
// Address: 0x0805EE80

//----- (0805EE80) --------------------------------------------------------
unsigned int __cdecl sub_805EE80(int a1, _DWORD *a2)
{
  int *v2; // esi
  char v3; // al
  void *v4; // edx
  const char *v5; // ebx
  const char *v6; // eax
  int v7; // eax
  unsigned int result; // eax
  __m128i v9; // xmm3
  void *v10; // eax
  __int64 v11; // xmm0_8
  int v12; // eax
  unsigned int v13; // edx
  _DWORD *v14; // ecx
  _DWORD *v15; // edx
  unsigned int v16; // ecx
  void *v17; // eax
  void *v18; // ecx
  size_t v19; // ebx
  _DWORD *v20; // eax
  int v21; // ebx
  _DWORD *v22; // edx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // xmm2_8
  unsigned int v27; // [esp+0h] [ebp-4Ch]
  _DWORD *v28; // [esp+0h] [ebp-4Ch]
  _DWORD *v29; // [esp+4h] [ebp-48h]
  unsigned int v30; // [esp+4h] [ebp-48h]
  void *src; // [esp+Ch] [ebp-40h]
  void *srca; // [esp+Ch] [ebp-40h]
  void *srcc; // [esp+Ch] [ebp-40h]
  void *srcb; // [esp+Ch] [ebp-40h]
  _DWORD *srcd; // [esp+Ch] [ebp-40h]
  void *n; // [esp+10h] [ebp-3Ch]
  size_t na; // [esp+10h] [ebp-3Ch]
  size_t nb; // [esp+10h] [ebp-3Ch]
  void *ptr; // [esp+24h] [ebp-28h] BYREF
  __int64 v40; // [esp+28h] [ebp-24h]
  unsigned int v41; // [esp+30h] [ebp-1Ch]

  v2 = *(int **)(a1 + 668);
  v41 = __readgsdword(0x14u);
  while ( v2 != (int *)(a1 + 660) )
  {
    ptr = nullptr;
    v40 = 0;
    v3 = sub_805ED40(a1, (char **)&ptr, v2[5]);
    v4 = ptr;
    if ( !v3 )
      goto LABEL_6;
    if ( v2[14] )
    {
      v5 = (const char *)v2[13];
      v6 = (const char *)&dword_80DDFD8;
      if ( !(_DWORD)v40 )
        goto LABEL_5;
    }
    else
    {
      if ( !(_DWORD)v40 )
        goto LABEL_6;
      v5 = (const char *)&dword_80DDFD8;
    }
    v6 = (const char *)ptr;
LABEL_5:
    n = ptr;
    src = (void *)v40;
    v7 = strcmp(v6, v5);
    v4 = n;
    if ( v7 )
    {
      v9 = _mm_cvtsi32_si128(HIDWORD(v40));
      v10 = (void *)v2[13];
      v2[13] = (int)n;
      v11 = *((_QWORD *)v2 + 7);
      ptr = v10;
      *((_QWORD *)v2 + 7) = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)src), v9).m128i_u64[0];
      v12 = a2[1];
      v13 = a2[2];
      v40 = v11;
      if ( v13 < v12 + 1 )
      {
        srcc = (void *)v13;
        v18 = sub_80CF920((int)a2, nullptr, v12 + 1, 0x10u);
        v19 = a2[2];
        a2[2] = srcc;
        nb = v19;
        v20 = (_DWORD *)*a2;
        v21 = a2[1] - 1;
        if ( v21 >= 0 )
        {
          srcb = v18;
          v22 = v18;
          do
          {
            v23 = *v20;
            v22 += 4;
            v20 += 4;
            *(v22 - 4) = v23;
            v24 = *(v20 - 3);
            v25 = *((_QWORD *)v20 - 1);
            *(v20 - 3) = 0;
            *(v22 - 3) = v24;
            *((_QWORD *)v22 - 1) = v25;
            *(v20 - 1) = 0;
          }
          while ( v21-- != 0 );
          v18 = srcb;
          v20 = (_DWORD *)*a2;
        }
        srcd = v18;
        sub_80CF780(v20);
        v14 = srcd;
        *a2 = srcd;
        a2[2] = nb;
        v12 = a2[1];
      }
      else
      {
        v14 = (_DWORD *)*a2;
      }
      v15 = &v14[4 * v12];
      v15[1] = 0;
      v15[2] = 0;
      v15[3] = 0;
      ++a2[1];
      *v15 = v2[5];
      if ( v15 + 1 != v2 + 13 )
      {
        v16 = v2[14];
        if ( v16 )
        {
          na = v16 - 1;
          if ( v16 != 1 )
          {
            srca = (void *)v2[13];
            v17 = (void *)v15[1];
            if ( v15[3] < v16 )
            {
              v28 = v15;
              v30 = v2[14];
              v17 = sub_80CF920((int)(v15 + 1), v17, v16, 1u);
              v15 = v28;
              v16 = v30;
              v28[1] = v17;
            }
            v15[2] = v16;
            v27 = v16;
            v29 = v15;
            memmove(v17, srca, na);
            *(_BYTE *)(v29[1] + v27 - 1) = 0;
            v4 = ptr;
            goto LABEL_6;
          }
        }
        v15[2] = 0;
      }
      v4 = ptr;
    }
LABEL_6:
    if ( v4 )
    {
      LODWORD(v40) = 0;
      sub_80CF780(v4);
    }
    v2 = (int *)std::_Rb_tree_increment(v2);
  }
  result = v41 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
