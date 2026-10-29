/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A0460
// Address: 0x080A0460

//----- (080A0460) --------------------------------------------------------
int __cdecl sub_80A0460(_DWORD *a1, _DWORD *a2, int *a3, int a4, int a5)
{
  int *v5; // edx
  int v6; // eax
  int v7; // ecx
  int *v8; // esi
  int *v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // edx
  _DWORD *v14; // ecx
  void *v15; // eax
  unsigned int v16; // ebx
  char v17; // cl
  int v18; // ebx
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // ebx
  int v24; // ecx
  __int64 *v25; // ecx
  __m128i v26; // xmm0
  __m128i v27; // xmm3
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  int v30; // eax
  char *v31; // edx
  char *v32; // eax
  void *v33; // eax
  char *v34; // ebx
  int v35; // esi
  char *v36; // ecx
  void *v37; // edx
  unsigned int v38; // [esp+2Ch] [ebp-50h]
  char v39; // [esp+34h] [ebp-48h]
  size_t size; // [esp+34h] [ebp-48h]
  int v41; // [esp+38h] [ebp-44h]
  void *v42; // [esp+3Ch] [ebp-40h]
  int v43; // [esp+40h] [ebp-3Ch]
  _DWORD *v44; // [esp+44h] [ebp-38h]
  int *v45; // [esp+48h] [ebp-34h]
  int *i; // [esp+48h] [ebp-34h]
  int v47; // [esp+48h] [ebp-34h]
  int *v48; // [esp+48h] [ebp-34h]
  int v49; // [esp+54h] [ebp-28h] BYREF
  int v50; // [esp+58h] [ebp-24h] BYREF
  unsigned int v51; // [esp+5Ch] [ebp-20h]
  int v52; // [esp+8Ch] [ebp+10h]

  v5 = a3;
  v6 = a1[20];
  v51 = __readgsdword(0x14u);
  v7 = a4;
  if ( a1[16] == v6 )
  {
    v34 = (char *)a1[72];
    if ( v34 )
    {
      if ( a1[73] )
      {
        v47 = a1[73];
        v35 = 0;
        do
        {
          v36 = &v34[36 * v35];
          v37 = *((void **)v36 + 1);
          if ( v37 )
          {
            *((_DWORD *)v36 + 2) = 0;
            sub_80CF780(v37);
            v34 = (char *)a1[72];
          }
          ++v35;
        }
        while ( v47 != v35 );
        v5 = a3;
        v7 = a4;
      }
      v52 = v7;
      v48 = v5;
      a1[73] = 0;
      sub_80CF780(v34);
      v7 = v52;
      v5 = v48;
      a1[72] = 0;
      a1[74] = 0;
    }
  }
  v43 = 0;
  v8 = &v5[9 * v7];
  if ( v5 != v8 )
  {
    v45 = &v5[9 * v7];
    v9 = v5;
    do
    {
      if ( !*((_BYTE *)v9 + 24) )
      {
        v10 = v9[4];
        v11 = *v9;
        if ( v10 == 4 )
        {
          v24 = a1[64];
          v50 = *v9;
          v49 = v24;
          v25 = *(__int64 **)(*a1 + 272);
          if ( v25 != (__int64 *)((char *)&qword_811CFF4 - 826436) )
          {
            ((void (__cdecl *)(_DWORD *, int *, int *))v25)(a1, &v50, &v49);
            v11 = *v9;
            v10 = v9[4];
          }
        }
        else
        {
          v12 = v9[5];
          v50 = *v9;
          v49 = v12;
        }
        v13 = (_DWORD *)a1[72];
        v14 = &v13[9 * a1[73]];
        if ( v13 != v14 )
        {
          while ( v11 != *v13 || v13[4] != v10 )
          {
            v13 += 9;
            if ( v14 == v13 )
              goto LABEL_14;
          }
          v44 = v13;
          if ( v14 != v13 && v13[8] == v9[8] )
          {
            v33 = (void *)v13[1];
            if ( v33 )
            {
              v13[2] = 0;
              sub_80CF780(v33);
            }
            memmove(v44, v44 + 9, a1[72] + 36 * a1[73]-- - (_DWORD)v44 - 36);
          }
        }
LABEL_14:
        v15 = (*(void *(__cdecl **)(void *))((char *)&off_811D090 + *a1 - 135385076))(a1);
        v16 = (unsigned int)v15 + 2;
        sub_80A03F0((int)a1, "dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n", v9[4], v50, v49, v15);
        v17 = 8;
        if ( v16 <= 4 )
        {
          v18 = dword_80E0038[v16];
          v17 = v18;
          v43 += v18 == 10 || v18 == 0;
        }
        *((_BYTE *)v9 + 24) = v17;
      }
      v9 += 9;
    }
    while ( v45 != v9 );
    v8 = v45;
  }
  for ( i = &v8[9 * a5]; i != v8; v8 += 9 )
  {
    while ( 1 )
    {
      v20 = v8[4];
      *((_BYTE *)v8 + 24) = 0;
      v21 = v20 == 4 ? v8[2] : v8[5];
      v22 = (*(int (__cdecl **)(_DWORD *, int, int, int, int))(*a1 + 160))(a1, v20, *v8, v8[1], v21);
      sub_80A03F0((int)a1, "dbg_del_bpt(type=%d, ea=%a) => %d\n", v8[4], *v8, v22);
      if ( v22 > 0 )
        break;
      *((_BYTE *)v8 + 24) = 8;
      v8 += 9;
      if ( i == v8 )
        goto LABEL_27;
    }
    v19 = v8[4];
    if ( ((v19 - 4) & 0xFFFFFFFB) == 0 )
    {
      v26 = _mm_cvtsi32_si128(v8[2]);
      v42 = nullptr;
      v41 = *v8;
      if ( _mm_cvtsi128_si32(v26) )
      {
        size = _mm_cvtsi128_si32(v26);
        v42 = sub_80CF8B0(size);
        memcpy(v42, (const void *)v8[1], _mm_cvtsi128_si32(_mm_cvtsi32_si128(size)));
        v19 = v8[4];
        v26 = _mm_cvtsi32_si128(size);
      }
      v27 = _mm_cvtsi32_si128(v8[5]);
      v28 = _mm_cvtsi32_si128(v8[7]);
      v29 = _mm_cvtsi32_si128(v8[8]);
      v39 = *((_BYTE *)v8 + 24);
      v30 = a1[73];
      v31 = (char *)a1[72];
      if ( a1[74] < (unsigned int)(v30 + 1) )
      {
        v38 = v19;
        v31 = (char *)sub_80CF920((int)(a1 + 72), v31, v30 + 1, 0x24u);
        v26 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v26));
        a1[72] = v31;
        v29 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v29));
        v30 = a1[73];
        v28 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v28));
        v27 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v27));
        v19 = v38;
      }
      v32 = &v31[36 * v30];
      *((_QWORD *)v32 + 1) = _mm_unpacklo_epi32(v26, v26).m128i_u64[0];
      *(_DWORD *)v32 = v41;
      *((_QWORD *)v32 + 2) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), v27).m128i_u64[0];
      *((_DWORD *)v32 + 1) = v42;
      v32[24] = v39;
      *(_QWORD *)(v32 + 28) = _mm_unpacklo_epi32(v28, v29).m128i_u64[0];
      ++a1[73];
    }
    ++v43;
  }
LABEL_27:
  if ( a2 )
    *a2 = v43;
  if ( v51 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 1;
}
// 80E0038: using guessed type int dword_80E0038[4];
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D090: using guessed type _UNKNOWN *off_811D090;
