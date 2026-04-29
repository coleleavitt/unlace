__int64 __fastcall sub_3A48B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  _BYTE *v8; // rax
  unsigned __int64 v10; // rax
  size_t v11; // rbp
  void *v12; // r12
  __int64 *v13; // rbx
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r11
  __int64 v20; // rsi
  __int64 v21; // rax
  __m128i *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-80h]
  __int64 v24; // [rsp+10h] [rbp-78h]
  __int64 v25; // [rsp+18h] [rbp-70h]
  __int64 v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v7 = *(unsigned int *)(a2 + 40);
  v31 = __readfsqword(0x28u);
  v8 = (_BYTE *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                  1105,
                  v7,
                  &callui,
                  a4,
                  a5,
                  a6);
  if ( v8 )
  {
    if ( *v8 == 36 && (unsigned int)qsscanf(v8, "$%a", &v30) == 1 )
    {
      v10 = a1[5];
      if ( v30 >= v10 && v30 < a1[6] + v10 )
      {
        v11 = *(_QWORD *)(a2 + 16);
        v12 = nullptr;
        v13 = (__int64 *)a1[4];
        v23 = *(_QWORD *)a2;
        if ( v11 )
        {
          v12 = (void *)qalloc_or_throw(v11);
          memcpy(v12, *(const void **)(a2 + 8), v11);
        }
        v14 = *(_QWORD *)(a2 + 32);
        v15 = *(_QWORD *)(a2 + 40);
        v16 = *(_QWORD *)(a2 + 48);
        v17 = *(_QWORD *)(a2 + 56);
        v18 = *(_QWORD *)(a2 + 64);
        v24 = *(_QWORD *)(a2 + 72);
        v19 = *(_QWORD *)(a2 + 88);
        v20 = *v13;
        v25 = *(_QWORD *)(a2 + 80);
        v21 = v13[1];
        if ( v13[2] < (unsigned __int64)(v21 + 1) )
        {
          v29 = *(_QWORD *)(a2 + 48);
          v28 = *(_QWORD *)(a2 + 40);
          v27 = *(_QWORD *)(a2 + 32);
          v26 = *(_QWORD *)(a2 + 88);
          v20 = qvector_reserve(v13, v20, v21 + 1, 96);
          v16 = v29;
          v15 = v28;
          *v13 = v20;
          v14 = v27;
          v21 = v13[1];
          v19 = v26;
        }
        v22 = (__m128i *)(v20 + 96 * v21);
        v22->m128i_i64[0] = v23;
        v22->m128i_i64[1] = (__int64)v12;
        v22[4].m128i_i64[1] = v24;
        v22[2].m128i_i64[0] = v14;
        v22[2].m128i_i64[1] = v15;
        v22[3].m128i_i64[0] = v16;
        v22[3].m128i_i64[1] = v17;
        v22[4].m128i_i64[0] = v18;
        v22[5].m128i_i64[0] = v25;
        v22[5].m128i_i64[1] = v19;
        v22[1] = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
        ++v13[1];
      }
    }
  }
  return 0;
}
