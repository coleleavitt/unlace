/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805F150
// Address: 0x0805F150

//----- (0805F150) --------------------------------------------------------
void __cdecl sub_805F150(int a1, int a2, char a3, _DWORD *a4)
{
  void **v4; // eax
  __m128i v5; // xmm0
  void *v6; // ecx
  void **v7; // edi
  unsigned __int64 v8; // xmm1_8
  void *v9; // eax
  void *v10; // ecx
  __m128i v11; // xmm0
  unsigned __int64 v12; // xmm1_8
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  size_t v16; // [esp-8h] [ebp-34h]
  size_t v17; // [esp-8h] [ebp-34h]
  void *n; // [esp+0h] [ebp-2Ch]
  void *na; // [esp+0h] [ebp-2Ch]
  void *nb; // [esp+0h] [ebp-2Ch]
  void *v21; // [esp+8h] [ebp-24h]

  if ( !a3 )
    goto LABEL_14;
  if ( *(_DWORD *)(a1 + 628) )
    sub_805E840(a1, nullptr);
  v4 = (void **)sub_80A0FB0(a1);
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 564));
  v6 = nullptr;
  v7 = v4;
  v8 = _mm_unpacklo_epi32(v5, v5).m128i_u64[0];
  if ( !_mm_cvtsi128_si32(v5) )
  {
    v9 = *v4;
    if ( !*v7 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v16 = 4 * _mm_cvtsi128_si32(v5);
  na = sub_80CF8B0(v16);
  memcpy(na, *(const void **)(a1 + 560), v16);
  v9 = *v7;
  v6 = na;
  if ( *v7 )
  {
LABEL_6:
    v21 = v6;
    v7[1] = nullptr;
    sub_80CF780(v9);
    v6 = v21;
  }
LABEL_7:
  *v7 = v6;
  v10 = nullptr;
  *(_QWORD *)(v7 + 1) = v8;
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 576));
  v12 = _mm_unpacklo_epi32(v11, v11).m128i_u64[0];
  if ( _mm_cvtsi128_si32(v11) )
  {
    v17 = 4 * _mm_cvtsi128_si32(v11);
    nb = sub_80CF8B0(v17);
    memcpy(nb, *(const void **)(a1 + 572), v17);
    v13 = v7[3];
    v10 = nb;
    if ( !v13 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v13 = v7[3];
  if ( v13 )
  {
LABEL_9:
    n = v10;
    v7[4] = nullptr;
    sub_80CF780(v13);
    v10 = n;
  }
LABEL_10:
  v7[3] = v10;
  *((_QWORD *)v7 + 2) = v12;
  v14 = *(void **)(a1 + 560);
  if ( v14 )
  {
    *(_DWORD *)(a1 + 564) = 0;
    sub_80CF780(v14);
    *(_DWORD *)(a1 + 560) = 0;
    *(_DWORD *)(a1 + 568) = 0;
  }
  v15 = *(void **)(a1 + 572);
  if ( v15 )
  {
    *(_DWORD *)(a1 + 576) = 0;
    sub_80CF780(v15);
    *(_DWORD *)(a1 + 572) = 0;
    *(_DWORD *)(a1 + 580) = 0;
  }
LABEL_14:
  if ( a4 )
    sub_805EE80(a1, a4);
}
