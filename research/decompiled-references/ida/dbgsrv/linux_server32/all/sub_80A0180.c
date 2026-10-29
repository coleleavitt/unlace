/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A0180
// Address: 0x080A0180

//----- (080A0180) --------------------------------------------------------
int __cdecl sub_80A0180(int a1, _DWORD *a2)
{
  unsigned int v2; // eax
  __m128i v3; // xmm1
  char *v4; // eax
  int v5; // esi
  char *v6; // edi
  void *v7; // edx
  void *v8; // edx
  _DWORD *v10; // esi
  int v11; // edi
  __int64 v12; // xmm0_8
  void *v13; // eax
  void *v14; // eax
  size_t v15; // [esp-34h] [ebp-34h]
  size_t v16; // [esp-34h] [ebp-34h]
  _DWORD *v17; // [esp-30h] [ebp-30h]
  unsigned int v18; // [esp-2Ch] [ebp-2Ch]
  unsigned __int64 v19; // [esp-2Ch] [ebp-2Ch]
  int v20; // [esp-20h] [ebp-20h]
  int v21; // [esp-20h] [ebp-20h]

  v17 = nullptr;
  v2 = a2[1];
  v18 = v2;
  if ( v2 )
  {
    v21 = 0;
    v17 = sub_80CF8B0(40 * v2);
    v10 = v17;
    do
    {
      v11 = *a2 + 40 * v21;
      v12 = *(_QWORD *)v11;
      v10[2] = 0;
      v10[3] = 0;
      v10[4] = 0;
      *(_QWORD *)v10 = v12;
      if ( *(_DWORD *)(v11 + 12) )
      {
        v16 = *(_DWORD *)(v11 + 12);
        v14 = sub_80CF8B0(v16);
        v10[2] = v14;
        v10[4] = v16;
        memcpy(v14, *(const void **)(v11 + 8), v16);
        v10[3] = v16;
      }
      v10[5] = 0;
      v10[6] = 0;
      v10[7] = 0;
      if ( *(_DWORD *)(v11 + 24) )
      {
        v15 = *(_DWORD *)(v11 + 24);
        v13 = sub_80CF8B0(v15);
        v10[5] = v13;
        v10[7] = v15;
        memcpy(v13, *(const void **)(v11 + 20), v15);
        v10[6] = v15;
      }
      ++v21;
      v10 += 10;
      *(v10 - 2) = *(_DWORD *)(v11 + 32);
      *((_WORD *)v10 - 2) = *(_WORD *)(v11 + 36);
    }
    while ( v18 != v21 );
  }
  v3 = _mm_cvtsi32_si128(v18);
  v4 = *(char **)((char *)&off_811D0E0 + a1 - 135385076);
  v19 = _mm_unpacklo_epi32(v3, v3).m128i_u64[0];
  if ( v4 )
  {
    if ( *(_DWORD *)(a1 + 240) )
    {
      v20 = *(_DWORD *)(a1 + 240);
      v5 = 0;
      do
      {
        v6 = &v4[40 * v5];
        v7 = *((void **)v6 + 5);
        if ( v7 )
        {
          *((_DWORD *)v6 + 6) = 0;
          sub_80CF780(v7);
        }
        v8 = *((void **)v6 + 2);
        if ( v8 )
        {
          *((_DWORD *)v6 + 3) = 0;
          sub_80CF780(v8);
        }
        ++v5;
        v4 = *(char **)((char *)&off_811D0E0 + a1 - 135385076);
      }
      while ( v20 != v5 );
    }
    *(_DWORD *)(a1 + 240) = 0;
    sub_80CF780(v4);
  }
  *(_UNKNOWN **)((char *)&off_811D0E0 + a1 - 135385076) = v17;
  *(_QWORD *)((char *)&off_811D0E4 + a1 - 135385076) = v19;
  return a1;
}
// 811D0E0: using guessed type _UNKNOWN *off_811D0E0;
// 811D0E4: using guessed type _UNKNOWN *off_811D0E4;
