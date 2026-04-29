__int64 __fastcall sub_3361E0(_DWORD *a1, __int64 a2, __int64 a3)
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
  unsigned int v16; // eax
  __int64 errdesc; // rbp
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int16 v24; // [rsp+4h] [rbp-ACh]
  __int64 v25; // [rsp+8h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+10h] [rbp-A0h]
  char v27; // [rsp+50h] [rbp-60h]
  __m128i v28; // [rsp+58h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 8);
  v29 = __readfsqword(0x28u);
  v26 = 0;
  v25 = 0;
  if ( !v4 )
  {
    v6 = _mm_loadu_si128((const __m128i *)(a3 + 48));
    v7 = 0;
    v8 = nullptr;
    v9 = *(_WORD *)(a3 + 24);
    v10 = *(_QWORD *)(a3 + 32);
    v11 = 1;
    v27 = *(_BYTE *)(a3 + 40);
    v28 = v6;
LABEL_3:
    v24 = v9;
    v25 = qvector_reserve(&v25, v7, v11, 64);
    v7 = v25;
    v9 = v24;
    v12 = v26;
    goto LABEL_4;
  }
  v8 = (void *)qalloc_or_throw(v4);
  memcpy(v8, *(const void **)a3, v4);
  v12 = v26;
  v9 = *(_WORD *)(a3 + 24);
  v10 = *(_QWORD *)(a3 + 32);
  v27 = *(_BYTE *)(a3 + 40);
  v7 = v25;
  v11 = v26 + 1;
  v28 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
    goto LABEL_3;
LABEL_4:
  v13 = (v12 << 6) + v7;
  v14 = v27;
  *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  v15 = _mm_load_si128(&v28);
  *(_QWORD *)v13 = v8;
  *(_WORD *)(v13 + 24) = v9;
  *(_QWORD *)(v13 + 32) = v10;
  *(_BYTE *)(v13 + 40) = v14;
  *(__m128i *)(v13 + 48) = v15;
  *(_QWORD *)&v26 = v26 + 1;
  v16 = parse_json(a1, a2, &v25);
  if ( v16 )
    errdesc = get_errdesc("hexrays", v16);
  else
    errdesc = 2LL * (*a1 != 4);
  v18 = v25;
  if ( v25 )
  {
    v19 = v26;
    if ( (_QWORD)v26 )
    {
      v20 = 0;
      do
      {
        v21 = (__int64 *)(v18 + (v20 << 6));
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          qfree(v22);
          v18 = v25;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v18);
  }
  return errdesc;
}
