unsigned __int64 __fastcall sub_3A8580(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  size_t v9; // r14
  const void *v10; // r15
  __int64 v11; // r13
  size_t v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 *v16; // r12
  __int64 v17; // r13
  __m128i v18; // xmm1
  __int64 v19; // rdi
  __m128i v20; // xmm1
  __int64 v21; // rdi
  __int64 v23; // rax
  __int64 v24; // rsi
  __m128i si128; // xmm0
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-78h] BYREF
  size_t v28; // [rsp+18h] [rbp-60h]
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  __m128i v30; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v5 = *a2;
  if ( a5 != *(_QWORD *)(a1 + 224) )
  {
    v7 = *(_QWORD *)(a1 + 216) + 48 * a5;
    if ( !*(_BYTE *)(v7 + 40) )
    {
      sub_66DF0(*a2, (__int64)"%08llX", *(_QWORD *)(v7 + 16));
      v5 = *a2;
    }
    v8 = *(int *)(v7 + 36);
    v9 = 0;
    v10 = &unk_3F5793;
    if ( (unsigned int)v8 <= 3 )
    {
      v10 = *(&off_4BAEC0 + v8);
      if ( !v10 )
      {
LABEL_10:
        v15 = **(_QWORD **)v7;
        v30 = 0;
        v29 = 0;
        get_ea_name(&v29, v15, 21, 0);
        v16 = *a2;
        v17 = v29;
        v29 = 0;
        v18 = _mm_loadu_si128(&v30);
        v30 = 0;
        v19 = v16[6];
        if ( v19 )
        {
          v16[7] = 0;
          v27 = v18;
          qfree(v19);
          v20 = _mm_load_si128(&v27);
          v21 = v29;
          v16[6] = v17;
          *(__m128i *)(v16 + 7) = v20;
          if ( v21 )
          {
            v30.m128i_i64[0] = 0;
            qfree(v21);
          }
        }
        else
        {
          v16[6] = v17;
          *(__m128i *)(v16 + 7) = v18;
        }
        sub_66DF0(*a2 + 9, (__int64)"%d", *(_DWORD *)(v7 + 24) + 1);
        sub_66DF0(*a2 + 12, (__int64)"%d", *(_DWORD *)(v7 + 28));
        return sub_3A3CF0(*a2 + 15, *(_QWORD *)v7, *(_DWORD *)(v7 + 24));
      }
      v9 = strlen((const char *)*(&off_4BAEC0 + v8));
    }
    v11 = v5[4];
    v12 = v9;
    if ( v11 )
      v12 = --v11 + v9;
    v13 = v5[3];
    v14 = v12 + 1;
    if ( v5[5] < v12 + 1 )
    {
      v28 = v12;
      v27.m128i_i64[0] = v12 + 1;
      v23 = qvector_reserve(v5 + 3, v13, v14, 1);
      v12 = v28;
      v14 = v27.m128i_i64[0];
      v5[3] = v23;
      v13 = v23;
    }
    v5[4] = v14;
    *(_BYTE *)(v13 + v12) = 0;
    memmove((void *)(v11 + v5[3]), v10, v9);
    goto LABEL_10;
  }
  v24 = v5[15];
  if ( (unsigned __int64)v5[17] <= 0x3E )
  {
    v26 = qvector_reserve(v5 + 15, v24, 63, 1);
    v5[15] = v26;
    v24 = v26;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_4003E0);
  v5[16] = 63;
  *(__m128i *)v24 = si128;
  *(__m128i *)(v24 + 16) = _mm_load_si128((const __m128i *)&xmmword_4003F0);
  *(__m128i *)(v24 + 32) = _mm_load_si128((const __m128i *)&xmmword_400400);
  *(__m128i *)(v24 + 46) = _mm_load_si128((const __m128i *)&xmmword_400410);
  *(_BYTE *)(v5[15] + 62) = 0;
  return v31 - __readfsqword(0x28u);
}
