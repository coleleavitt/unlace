unsigned __int64 __fastcall sub_3D7840(const char *a1, __int64 a2, char a3)
{
  size_t v3; // r14
  char v5; // al
  __int64 v6; // r15
  __int64 v7; // rdx
  void *v8; // r12
  __m128i v9; // xmm0
  __int16 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  char v14; // al
  __m128i v15; // xmm0
  __int64 *v16; // r12
  const char *v17; // rsi
  const char *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  __m128i v25; // xmm0
  __int16 v26; // [rsp+4h] [rbp-CCh]
  __int64 v27; // [rsp+8h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+10h] [rbp-C0h]
  const char *v29; // [rsp+28h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+30h] [rbp-A0h]
  char v31; // [rsp+70h] [rbp-60h]
  __m128i v32; // [rsp+78h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+90h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v33 = __readfsqword(0x28u);
  v28 = 0;
  v27 = 0;
  if ( !v3 )
  {
    v5 = *(_BYTE *)(a2 + 40);
    v6 = *(_QWORD *)(a2 + 32);
    v7 = 1;
    v8 = nullptr;
    v9 = _mm_loadu_si128((const __m128i *)(a2 + 48));
    v10 = *(_WORD *)(a2 + 24);
    v11 = 0;
    v31 = v5;
    v32 = v9;
LABEL_3:
    v26 = v10;
    v27 = qvector_reserve(&v27, v11, v7, 64);
    v11 = v27;
    v10 = v26;
    v12 = v28;
    goto LABEL_4;
  }
  v8 = (void *)qalloc_or_throw(v3);
  memcpy(v8, *(const void **)a2, v3);
  v25 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  v12 = v28;
  v10 = *(_WORD *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 32);
  v31 = *(_BYTE *)(a2 + 40);
  v11 = v27;
  v7 = v28 + 1;
  v32 = v25;
  if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)(v28 + 1) )
    goto LABEL_3;
LABEL_4:
  v13 = (v12 << 6) + v11;
  v14 = v31;
  *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  v15 = _mm_load_si128(&v32);
  *(_QWORD *)v13 = v8;
  *(_WORD *)(v13 + 24) = v10;
  *(_QWORD *)&v28 = v28 + 1;
  *(_QWORD *)(v13 + 32) = v6;
  *(_BYTE *)(v13 + 40) = v14;
  *(__m128i *)(v13 + 48) = v15;
  if ( a3 )
    v16 = &qword_8CD760;
  else
    v16 = &qword_8CD750;
  v17 = a1;
  if ( (unsigned int)parse_json(v16, a1, &v27) || *(_DWORD *)v16 != 4 )
  {
    v18 = "TOOLBARS_LAYOUT";
    v29 = nullptr;
    if ( a3 )
      v18 = "MENUS_LAYOUT";
    v15.m128i_i64[0] = 0;
    v30 = 0;
    sub_169A50((__int64 *)&v29, (__int64)"Invalid %s directive", v18);
    v17 = &s1;
    if ( (_QWORD)v30 )
      v17 = v29;
    sub_4B0C20(a1, v17, 1);
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      *(double *)v15.m128i_i64 = qfree(v29, v17);
    }
  }
  v19 = v27;
  if ( v27 )
  {
    v20 = v28;
    if ( (_QWORD)v28 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v19 + (v21 << 6));
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          *(double *)v15.m128i_i64 = qfree(v23, v17, *(double *)v15.m128i_i64);
          v19 = v27;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v19, v17, *(double *)v15.m128i_i64);
  }
  return v33 - __readfsqword(0x28u);
}
