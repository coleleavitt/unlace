/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CEBF0
// Address: 0x080CEBF0

//----- (080CEBF0) --------------------------------------------------------
int __cdecl sub_80CEBF0(int a1, int a2)
{
  int v2; // ecx
  int v4; // edi
  __int64 v5; // xmm0_8
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm3
  int v9; // edx
  __m128i v10; // xmm4
  int v11; // eax
  int v12; // edx
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  int v15; // edi
  int v16; // edi
  __int64 v17; // rax
  int v18; // kr00_4
  int v19; // edi
  __int64 v20; // [esp+0h] [ebp-80h] BYREF
  unsigned int v21; // [esp+10h] [ebp-70h]
  unsigned int v22; // [esp+14h] [ebp-6Ch]
  unsigned int v23; // [esp+18h] [ebp-68h]
  int v24; // [esp+1Ch] [ebp-64h]
  __int64 v25; // [esp+20h] [ebp-60h]
  __int64 v26; // [esp+2Ch] [ebp-54h]
  unsigned int v27; // [esp+34h] [ebp-4Ch]
  unsigned int v28; // [esp+38h] [ebp-48h]
  int v29; // [esp+40h] [ebp-40h]
  int v30; // [esp+44h] [ebp-3Ch]
  int v31; // [esp+48h] [ebp-38h]
  int v32; // [esp+4Ch] [ebp-34h]
  int v33; // [esp+50h] [ebp-30h]
  int v34; // [esp+54h] [ebp-2Ch]
  unsigned int v35; // [esp+58h] [ebp-28h]
  unsigned int v36; // [esp+60h] [ebp-20h]

  v36 = __readgsdword(0x14u);
  v2 = __xstat64(3, a1, &v20);
  if ( !v2 && a2 )
  {
    v4 = v29;
    v5 = v20;
    v6 = _mm_cvtsi32_si128(v22);
    v7 = _mm_cvtsi32_si128(v23);
    v8 = _mm_cvtsi32_si128(v21);
    *(_DWORD *)(a2 + 24) = v24;
    v9 = (unsigned __int64)(274877907LL * v30) >> 32;
    *(_QWORD *)a2 = v5;
    v10 = _mm_cvtsi32_si128(v28);
    v11 = v9;
    v12 = v30;
    *(__m128i *)(a2 + 8) = _mm_unpacklo_epi64(
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), v8),
                             _mm_unpacklo_epi32(v6, v7));
    *(_QWORD *)(a2 + 28) = v25;
    v13 = v26;
    v14 = (v11 >> 6) - (v12 >> 31);
    v15 = HIDWORD(v14) | v4;
    HIDWORD(v14) = (unsigned __int64)(274877907LL * v32) >> 32;
    *(_DWORD *)(a2 + 52) = v14;
    *(_DWORD *)(a2 + 56) = v15;
    v16 = v31;
    *(_QWORD *)(a2 + 36) = v13;
    LODWORD(v14) = HIDWORD(v14);
    HIDWORD(v14) = v32 >> 31;
    *(_QWORD *)(a2 + 44) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), v10).m128i_u64[0];
    v17 = ((int)v14 >> 6) - HIDWORD(v14);
    v18 = v34;
    *(_DWORD *)(a2 + 60) = v17;
    *(_DWORD *)(a2 + 64) = HIDWORD(v17) | v16;
    v19 = ((v18 / 1000) >> 31) | v33;
    *(_DWORD *)(a2 + 68) = v18 / 1000;
    *(_DWORD *)(a2 + 72) = v19;
  }
  if ( v36 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v2;
}
// 804BC70: using guessed type int __cdecl __xstat64(_DWORD, _DWORD, _DWORD);
