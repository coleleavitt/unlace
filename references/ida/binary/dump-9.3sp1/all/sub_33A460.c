__int64 __fastcall sub_33A460(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v4; // r14
  __m128i v6; // xmm0
  __int64 v7; // rsi
  void *v8; // r12
  __int16 v9; // r8
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  char v14; // al
  __m128i v15; // xmm0
  __int64 errdesc; // rbp
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int16 v23; // [rsp+4h] [rbp-ACh]
  __int64 v24; // [rsp+8h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+10h] [rbp-A0h]
  char v26; // [rsp+50h] [rbp-60h]
  __m128i v27; // [rsp+58h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 8);
  v28 = __readfsqword(0x28u);
  v25 = 0;
  v24 = 0;
  if ( !v4 )
  {
    v6 = _mm_loadu_si128((const __m128i *)(a3 + 48));
    v7 = 0;
    v8 = nullptr;
    v9 = *(_WORD *)(a3 + 24);
    v10 = *(_QWORD *)(a3 + 32);
    v11 = 1;
    v26 = *(_BYTE *)(a3 + 40);
    v27 = v6;
LABEL_3:
    v23 = v9;
    v24 = qvector_reserve((__int64)&v24, v7, v11, 64);
    v7 = v24;
    v9 = v23;
    v12 = v25;
    goto LABEL_4;
  }
  v8 = (void *)qalloc_or_throw(v4, a2, a3, a4);
  memcpy(v8, *(const void **)a3, v4);
  v12 = v25;
  v9 = *(_WORD *)(a3 + 24);
  v10 = *(_QWORD *)(a3 + 32);
  v26 = *(_BYTE *)(a3 + 40);
  v7 = v24;
  v11 = v25 + 1;
  v27 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  if ( *((_QWORD *)&v25 + 1) < (unsigned __int64)(v25 + 1) )
    goto LABEL_3;
LABEL_4:
  v13 = (v12 << 6) + v7;
  v14 = v26;
  *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  v15 = _mm_load_si128(&v27);
  *(_QWORD *)v13 = v8;
  *(_WORD *)(v13 + 24) = v9;
  *(_QWORD *)(v13 + 32) = v10;
  *(_BYTE *)(v13 + 40) = v14;
  *(__m128i *)(v13 + 48) = v15;
  *(_QWORD *)&v25 = v25 + 1;
  if ( (unsigned int)parse_json() )
    errdesc = get_errdesc();
  else
    errdesc = 2LL * (*a1 != 4);
  v17 = v24;
  if ( v24 )
  {
    v18 = v25;
    if ( (_QWORD)v25 )
    {
      v19 = 0;
      do
      {
        v20 = (__int64 *)(v17 + (v19 << 6));
        v21 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          qfree(v21);
          v17 = v24;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v17);
  }
  return errdesc;
}
