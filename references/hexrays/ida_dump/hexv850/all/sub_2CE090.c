__m128i *__fastcall sub_2CE090(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 a4)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // bl
  __m128i *v6; // rax
  __m128i *v7; // r12
  int v8; // ebp
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  __int32 v11; // r13d
  int v12; // eax
  __int64 v13; // rbx
  __m128i *v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r8
  __m128i v20; // xmm0
  unsigned __int64 v22; // r13
  int v23; // eax
  _BYTE *v24; // rax
  char v25; // dl
  __int64 v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // rdx
  _QWORD *exception; // rdi
  __int64 v31; // [rsp+8h] [rbp-88h]
  int v32; // [rsp+10h] [rbp-80h]
  bool v33; // [rsp+16h] [rbp-7Ah]
  char v34; // [rsp+17h] [rbp-79h]
  const __m128i *v35; // [rsp+20h] [rbp-70h] BYREF
  __m128i v36; // [rsp+28h] [rbp-68h] BYREF
  __m128i v37; // [rsp+38h] [rbp-58h] BYREF
  __int64 v38; // [rsp+48h] [rbp-48h]
  unsigned __int64 v39; // [rsp+50h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v4 = (unsigned __int8 *)*a3;
  v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a3, (__m128i)a4);
  if ( (unsigned __int64)v4 >= a4 )
  {
    v5 = 0;
  }
  else
  {
    v5 = *v4;
    v36.m128i_i64[0] = (__int64)(v4 + 1);
    if ( v5 > 2u )
      return nullptr;
  }
  v6 = (__m128i *)qalloc(16);
  v7 = v6;
  if ( !v6 )
    sub_4E402();
  v6->m128i_i64[0] = 0;
  v6->m128i_i64[1] = 0;
  v33 = v5 == 1;
  v8 = 0;
  v32 = unpack_dd(&v36);
  if ( v32 <= 0 )
    goto LABEL_21;
LABEL_11:
  while ( 2 )
  {
    v13 = sub_32C840(&v36, *(_QWORD *)(a1 + 8));
    if ( v36.m128i_i64[0] < (unsigned __int64)v36.m128i_i64[1] )
    {
      v9 = v36.m128i_i64[0] + 1;
      v10 = *(_BYTE *)v36.m128i_i64[0]++;
      if ( v10 > 0x54u )
        goto LABEL_22;
      if ( v10 <= 0x44u || (v11 = (char)(v10 + 1), !v33) )
        v11 = v10;
      v12 = unpack_dd(&v36);
      if ( !v12 )
        goto LABEL_10;
    }
    else
    {
      v11 = 0;
      v12 = unpack_dd(&v36);
      if ( !v12 )
        goto LABEL_10;
    }
    v37.m128i_i64[0] = v13;
    v14 = &v37;
    v37.m128i_i32[2] = v11;
    LODWORD(v38) = v12;
    v15 = v7->m128i_i64[0];
    v35 = &v37;
    if ( v15 )
    {
      if ( !v7->m128i_i64[1] )
        goto LABEL_15;
      v22 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v22 & 2) != 0 )
      {
        v25 = 1;
LABEL_33:
        sub_2CDA00(v7, (unsigned __int64 *)v15, v25, &v35);
        goto LABEL_10;
      }
      v34 = 1;
      while ( 1 )
      {
        v31 = (__int64)v14;
        v23 = sub_2528B0((__int64)v14, v22 + 24);
        v14 = (__m128i *)v31;
        if ( v23 >= 0 )
        {
          if ( (int)sub_2528B0(v22 + 24, v31) >= 0 )
          {
            if ( !v22 )
            {
LABEL_30:
              v25 = v34;
              v15 = v22;
              goto LABEL_33;
            }
LABEL_10:
            if ( v32 == ++v8 )
              goto LABEL_21;
            goto LABEL_11;
          }
          v24 = *(_BYTE **)(v22 + 16);
          v14 = (__m128i *)v31;
          v34 = 0;
        }
        else
        {
          v34 = 1;
          v24 = *(_BYTE **)(v22 + 8);
        }
        if ( (*v24 & 2) != 0 )
          goto LABEL_30;
        v22 = (unsigned __int64)v24;
      }
    }
    v26 = qalloc(48);
    v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
    if ( !v26 )
      goto LABEL_44;
    *(_OWORD *)(v26 + 16) = 0;
    *(_OWORD *)(v26 + 32) = 0;
    *(__m128i *)(v26 + 8) = v27;
    *(_QWORD *)v26 = v26 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v7->m128i_i64[0] = v26;
    *(_QWORD *)v26 = v26 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v26 & 3LL;
    *(__m128i *)(v7->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v7->m128i_u64[0], (__m128i)v7->m128i_u64[0]);
    *(_QWORD *)v7->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v7->m128i_i64[0] |= 2uLL;
    v15 = v7->m128i_i64[0];
LABEL_15:
    v16 = qalloc(48);
    if ( !v16 )
    {
LABEL_44:
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v16 + 16) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(_OWORD *)v16 = 0;
    *(__m128i *)(v16 + 24) = _mm_load_si128(&v37);
    *(_QWORD *)(v16 + 40) = v38;
    *(_QWORD *)v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    v20 = _mm_loadl_epi64(v7);
    *(_QWORD *)v16 = v15 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v20, v20);
    if ( v15 == v7->m128i_i64[0] )
    {
      *(_QWORD *)v15 = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
      *(_QWORD *)(v7->m128i_i64[0] + 8) = v16;
      *(_QWORD *)(v7->m128i_i64[0] + 16) = v16;
      v28 = *(_QWORD *)v16 & 2LL;
      *(_QWORD *)v16 &= ~1uLL;
      *(_QWORD *)v16 = v28 | v7->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    }
    else
    {
      *(_QWORD *)(v15 + 8) = v16;
      if ( v15 == *(_QWORD *)(v7->m128i_i64[0] + 8) )
        *(_QWORD *)(v7->m128i_i64[0] + 8) = v16;
      sub_2581C0(v7, (__int64 *)v16, v17, v18, v19);
    }
    ++v7->m128i_i64[1];
    if ( v32 != ++v8 )
      continue;
    break;
  }
LABEL_21:
  v9 = v36.m128i_i64[0];
LABEL_22:
  *a3 = v9;
  return v7;
}
