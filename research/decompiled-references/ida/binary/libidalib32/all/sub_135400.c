bool __fastcall sub_135400(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rbx
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  __m128i v9; // xmm1
  unsigned int v10; // edx
  int v11; // r12d
  char v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v6 = qalloc_or_throw();
  *(_QWORD *)(v6 + 40) = itext();
  *(_QWORD *)(v6 + 8) = 0x20A840C000004LL;
  v7 = _mm_unpacklo_epi64(
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1), _mm_cvtsi32_si128(a2)),
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  *(_QWORD *)v6 = &stru_235898;
  v8 = (_QWORD *)(v6 + 80);
  *(_OWORD *)(v6 + 16) = -1;
  v9 = _mm_loadl_epi64((const __m128i *)&off_2319B8);
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 48) = 3;
  *(_DWORD *)(v6 + 72) = -1;
  *(__m128i *)(v6 + 56) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&off_2319A0);
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( (_QWORD *)(v6 + 176) != v8 );
  *(_DWORD *)(v6 + 176) = 0;
  v10 = *(_DWORD *)(v6 + 12);
  if ( ((v10 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v6 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    *(_BYTE *)(v6 + 11) = ((v10 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v6 + 12) = v10 & 0xFE07FFFF;
  }
  *(__m128i *)(v6 + 16) = v7;
  *(_QWORD *)v6 = off_231800;
  *(_QWORD *)(v6 + 184) = 0;
  v11 = dword_2440A4;
  *(_DWORD *)(v6 + 72) = 45;
  v16 = 0;
  *(_OWORD *)(v6 + 192) = 0;
  v17 = 0;
  if ( v11 != -1 )
  {
    v12 = byte_2440A8;
    v16 = qvector_reserve();
    v13 = v16 + 8 * v17;
    *(_DWORD *)v13 = v11;
    *(_BYTE *)(v13 + 4) = v12;
    *(_QWORD *)&v17 = v17 + 1;
  }
  v14 = sub_198260(v6, &v16);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v14 == 0;
}

