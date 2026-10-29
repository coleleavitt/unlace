/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8070CC0
// Address: 0x08070CC0

//----- (08070CC0) --------------------------------------------------------
unsigned int __cdecl sub_8070CC0(int a1, unsigned int a2, int a3)
{
  _DWORD *v3; // ecx
  __m128i v4; // xmm1
  unsigned int v5; // edx
  char v6; // al
  __int64 v7; // xmm2_8
  __int16 v8; // dx
  __int64 v9; // xmm0_8
  __int64 v10; // xmm0_8
  unsigned int v11; // eax
  int v12; // esi
  unsigned int v13; // edx
  const void *v14; // eax
  void *v15; // eax
  unsigned int v16; // edx
  void *v18; // eax
  void *v19; // eax
  __m128i v20; // [esp-4Ch] [ebp-4Ch] BYREF
  unsigned int v21; // [esp-34h] [ebp-34h]
  const void *v22; // [esp-30h] [ebp-30h]
  size_t v23; // [esp-28h] [ebp-28h]
  int v24; // [esp-24h] [ebp-24h]
  unsigned int v25; // [esp-20h] [ebp-20h]
  _DWORD *v26; // [esp+4h] [ebp+4h]
  _DWORD *v27; // [esp+4h] [ebp+4h]
  _DWORD *v28; // [esp+4h] [ebp+4h]

  v3 = (_DWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) < a2 )
  {
    v19 = sub_80CF920(a1, *(void **)a1, a2, 0x44u);
    v3 = (_DWORD *)a1;
    *(_DWORD *)a1 = v19;
  }
  v25 = v3[1];
  if ( v25 < a2 )
  {
    v4 = 0;
    v24 = a3 + 12;
    do
    {
      v12 = *v3 + 68 * v25;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      *(_DWORD *)(v12 + 12) = 0;
      *(_DWORD *)(v12 + 16) = 0;
      *(_DWORD *)(v12 + 20) = 0;
      *(_DWORD *)(v12 + 24) = 0;
      *(_DWORD *)(v12 + 28) = 0;
      *(__m128i *)(v12 + 32) = v4;
      if ( a3 != v12 )
      {
        v13 = *(_DWORD *)(a3 + 4);
        if ( v13 )
        {
          v23 = v13 - 1;
          if ( v13 != 1 )
          {
            v14 = *(const void **)a3;
            v26 = v3;
            v20 = v4;
            v22 = v14;
            v21 = v13;
            v15 = sub_80CF920(v12, nullptr, v13, 1u);
            v16 = v21;
            *(_DWORD *)v12 = v15;
            *(_DWORD *)(v12 + 4) = v16;
            memmove(v15, v22, v23);
            v4 = _mm_load_si128(&v20);
            v3 = v26;
            *(_BYTE *)(*(_DWORD *)v12 + v21 - 1) = 0;
          }
        }
      }
      if ( v12 + 12 != v24 )
      {
        v5 = *(_DWORD *)(a3 + 16);
        if ( v5 && (v23 = v5 - 1, v5 != 1) )
        {
          v22 = *(const void **)(a3 + 12);
          v18 = *(void **)(v12 + 12);
          if ( *(_DWORD *)(v12 + 20) < v5 )
          {
            v28 = v3;
            v20 = v4;
            v21 = v5;
            v18 = sub_80CF920(v12 + 12, v18, v5, 1u);
            v4 = _mm_load_si128(&v20);
            v3 = v28;
            *(_DWORD *)(v12 + 12) = v18;
            v5 = v21;
          }
          v27 = v3;
          *(_DWORD *)(v12 + 16) = v5;
          v21 = v5;
          v20 = v4;
          memmove(v18, v22, v23);
          v3 = v27;
          v4 = _mm_load_si128(&v20);
          *(_BYTE *)(*(_DWORD *)(v12 + 12) + v21 - 1) = 0;
        }
        else
        {
          *(_DWORD *)(v12 + 16) = 0;
        }
      }
      v6 = *(_BYTE *)(a3 + 66);
      v7 = *(_QWORD *)(a3 + 56);
      v8 = *(_WORD *)(a3 + 64);
      *(__m128i *)(v12 + 24) = _mm_loadu_si128((const __m128i *)(a3 + 24));
      v9 = *(_QWORD *)(a3 + 40);
      ++v25;
      *(_QWORD *)(v12 + 40) = v9;
      v10 = *(_QWORD *)(a3 + 48);
      *(_BYTE *)(v12 + 66) = v6;
      v11 = v25;
      *(_WORD *)(v12 + 64) = v8;
      *(_QWORD *)(v12 + 48) = v10;
      *(_QWORD *)(v12 + 56) = v7;
    }
    while ( a2 != v11 );
  }
  v3[1] = a2;
  return a2;
}
