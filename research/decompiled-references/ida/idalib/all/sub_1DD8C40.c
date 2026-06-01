__m128i *__fastcall sub_1DD8C40(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  __m128i v14; // xmm0
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm2
  unsigned int v22; // edx
  __int64 v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // r14
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // xmm3_8^8
  __int32 v30; // esi
  int v31; // ecx
  __int64 v32; // r15
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // r12d
  int v37; // [rsp+Ch] [rbp-5Ch]
  __m128i v38; // [rsp+10h] [rbp-58h] BYREF
  __int64 v39; // [rsp+20h] [rbp-48h]

  v9 = a3->m128i_i64[0];
  if ( !a3->m128i_i64[0] )
    goto LABEL_14;
  v12 = a3->m128i_i64[0] & 7;
  v13 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (_DWORD)v12 == 7 )
  {
    v16 = 3;
    if ( *(_DWORD *)v13 <= 3u )
      v16 = *(_DWORD *)v13;
    v17 = (unsigned int)(v16 + 8);
    if ( ((1LL << v17) & 0xE47) != 0 )
      goto LABEL_4;
    if ( ((1LL << v17) & 0x100) != 0 )
    {
      v18 = 0;
      if ( (_DWORD)v17 == 8 )
        v18 = *(_QWORD *)(v13 + 16);
      v19 = sub_1DD8310(a2, a3->m128i_u32[2], v18, v17, a7, a8, a4, a5);
      if ( v19 )
      {
        v39 = a3[1].m128i_i64[0];
        v20 = *(_QWORD *)a2;
        v38 = _mm_loadu_si128(a3);
        v38.m128i_i64[0] = sub_B87960(*(_QWORD *)(v20 + 248) + 17536LL, v19);
        v21 = _mm_load_si128(&v38);
        a1[1].m128i_i64[0] = v39;
        *a1 = v21;
        return a1;
      }
      goto LABEL_14;
    }
    v22 = 4;
LABEL_21:
    v30 = a3->m128i_i32[2];
    v31 = *(_DWORD *)(a2 + 40);
    v32 = *(_QWORD *)(a2 + 48);
    if ( v30 )
    {
      *(_DWORD *)(a2 + 40) = v30;
      *(_QWORD *)(a2 + 48) = v9;
    }
    v33 = 0;
    if ( v22 <= 2 )
      v33 = *(_QWORD *)(v13 + 8);
    v37 = v31;
    v34 = (unsigned __int64)sub_1DD1AB0(a2, v33, a4, a5);
    if ( (v34 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      a1->m128i_i32[2] = 0;
      a1->m128i_i64[0] = 0;
      a1[1].m128i_i64[0] = 0;
      *(_DWORD *)(a2 + 40) = v37;
      *(_QWORD *)(a2 + 48) = v32;
      return a1;
    }
    v35 = *(_QWORD *)&byte_8[v34 & 0xFFFFFFFFFFFFFFF0LL];
    *(_DWORD *)(a2 + 40) = v37;
    *(_QWORD *)(a2 + 48) = v32;
    v26 = v35 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v35 | (unsigned __int8)v34) & 7;
    v27 = *(_QWORD *)(*(_QWORD *)a2 + 248LL) + 17536LL;
    if ( (_DWORD)v12 == 7 )
    {
      v36 = 3;
      if ( *(_DWORD *)v13 <= 3u )
        v36 = *(_DWORD *)v13;
      LODWORD(v12) = v36 + 8;
    }
    v25 = nullptr;
    goto LABEL_19;
  }
  if ( ((1LL << v12) & 0xE47) == 0 )
  {
    v22 = v12 - 3;
    if ( (unsigned int)(v12 - 3) <= 2 )
    {
      v23 = a3[1].m128i_i64[0];
      if ( v23 )
      {
        v24 = sub_1DD1930(a2, v23, a4, a5);
        v25 = v24;
        if ( v24 )
        {
          v26 = *(_QWORD *)&byte_8[*v24 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[*v24 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v24) & 7;
          v27 = *(_QWORD *)(*(_QWORD *)a2 + 248LL) + 17536LL;
LABEL_19:
          v28 = sub_B87D00(v27, v12, v26);
          v29 = _mm_loadu_si128(a3).m128i_i64[1];
          a1[1].m128i_i64[0] = (__int64)v25;
          v38.m128i_i64[1] = v29;
          v38.m128i_i64[0] = v28;
          *a1 = _mm_load_si128(&v38);
          return a1;
        }
LABEL_14:
        a1->m128i_i32[2] = 0;
        a1->m128i_i64[0] = 0;
        a1[1].m128i_i64[0] = 0;
        return a1;
      }
    }
    goto LABEL_21;
  }
LABEL_4:
  v14 = _mm_loadu_si128(a3);
  a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
  *a1 = v14;
  return a1;
}
